/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebersol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 15:35:37 by eebersol          #+#    #+#             */
/*   Updated: 2018/08/17 15:35:38 by eebersol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/strace.h"

int         status;
struct      user_regs_struct regs;
pid_t       child;

void    add_block_signal(void) {
    sigset_t    sig_blocker;

    sigaddset(&sig_blocker, SIGQUIT);
    sigaddset(&sig_blocker, SIGHUP);
    sigaddset(&sig_blocker, SIGINT);
    sigaddset(&sig_blocker, SIGPIPE);
    sigaddset(&sig_blocker, SIGTERM);
    sigprocmask(SIG_BLOCK, &sig_blocker, NULL);
    return;
}

void    add_empty_signal(void) {
    sigset_t    empty;

    sigemptyset(&empty);
    sigprocmask(SIG_SETMASK, &empty, NULL);
    return;
}


void    set_sigs(void) {
    ptrace(PTRACE_SYSCALL, child, 0, 0);
    ptrace(PTRACE_SEIZE, child, 0, 0);
    add_empty_signal();
    waitpid(child, &status, 0);
    add_block_signal();
    ptrace(PTRACE_SETOPTIONS, child, 0, PTRACE_O_TRACESYSGOOD);
    return;
}


int     wait_for_syscall() {
    while (1) {
        set_sigs();
        if (WIFEXITED(status))
            return 1; 
        else if (WIFSTOPPED(status) && WSTOPSIG(status) & 0x80)
            return 0;
        else if (WIFSTOPPED(status)){
            if (WSTOPSIG(status) != SIGTRAP)
                {
                    printf("--- %s---\n", get_signal_name(WSTOPSIG(status)));
                    if (WSTOPSIG(status) == SIGSEGV)
                        return 1;
            }
        }
        else if ((WIFSIGNALED(status) || WTERMSIG(status)) && WEXITSTATUS(status) == SIGINT) {
                printf("./ft_strace : Process detached : %d\n", child);
                exit(0);
        }
        else
            return 0;
    }
}

int     do_trace(pid_t child) {
    int     flag;

    flag    = 0;
    set_sigs();
    while (42) {
        if (wait_for_syscall() != 0) {
            print_syscall_return(regs);
            printf("+++ exited with %d +++\n", WEXITSTATUS(status));
            break;
        }
        ptrace(PTRACE_GETREGS, child, NULL, &regs);
        if (flag == 0) {
            flag = 1;
            print_syscall(syscalls_table[regs.orig_rax]);
        }
        else if (regs.rax != SYS_exit_group && flag == 1){
            flag = 0;
            print_syscall_return(regs);
        }
    }
    return 0;
}

char *is_valid_file(char *file, char **env) {
    char    **path_line;
    char    **path_bin;

    path_line   = NULL;
    path_bin    = NULL;
    if (file[0] && file[1] && (file[0] != '.' || file[1] != '/')) {
        for(int i = 0; env[i]; i++) {   
            path_line = ft_strsplit(env[i], '=');
            if (strcmp(path_line[0], "PATH") == 0) {
                path_bin = ft_strsplit(path_line[1], ':');
                for (int j = 0; path_bin[j]; j++) {
                    path_bin[j] = ft_strjoin(ft_strjoin(path_bin[j], "/"), file);
                    if (access(path_bin[j], F_OK) == 0)
                        return path_bin[j];
                }
            }
        }
        if (open(file, O_RDONLY) == -1) {
            printf("ft_strace: Can't stat '%s': No such file or directory\n", file);
            exit(-1);
        }
       return file;
    }
    return file;
}

int main(int argc, char **argv, char **env) {
    char *cmd;

    cmd     = NULL;
    if (argc < 2) {
        fprintf(stderr, "Usage : %s prog args\n", argv[0]);
        exit(1);
    }
    cmd     = is_valid_file(argv[1], env);
    child   = fork();

    if (child == -1)
        strerror(errno);
    else if (child == 0) {
        kill(getpid(), SIGSTOP);
        execve(cmd, &argv[1], env);
        fprintf(stderr, "exec fail");
    }
    else 
        do_trace(child);
}
