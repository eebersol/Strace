#include "../includes/strace.h"
#include "../includes/syscalls_table.h"

pid_t   child;
int     status;
sigset_t sig;
sigset_t sig_blocker;


int wait_for_syscall() {
    while (1) {
        ptrace(PTRACE_SYSCALL, child, 0, 0);
        waitpid(child, &status, 0);
        if (WIFSTOPPED(status) && WSTOPSIG(status) & 0x80)
            return (0);
        if (WIFEXITED(status))
            return (1); 
        if (WIFSIGNALED(status) || WTERMSIG(status)) {
            if (WEXITSTATUS(status) == SIGINT) {
                printf("./ft_strace : Process detached : %d\n", child);
                exit(0);
            }
            else if (WIFEXITED(status))
              return (1);
            else
                return (0);
        }
    }
}

void set_sigs(void) {

    sigemptyset(&sig);
    sigemptyset(&sig_blocker);
    sigprocmask(SIG_SETMASK, &sig, NULL);
    waitpid(child, &status, 0);
    ptrace(PTRACE_SETOPTIONS, child, 0, PTRACE_O_TRACESYSGOOD);
    sigaddset(&sig_blocker, SIGQUIT);
    sigaddset(&sig_blocker, SIGHUP);
    sigaddset(&sig_blocker, SIGINT);
    sigaddset(&sig_blocker, SIGPIPE);
    sigaddset(&sig_blocker, SIGTERM);
    sigprocmask(SIG_BLOCK, &sig_blocker, NULL);
}
int do_trace(pid_t child) {
    struct  user_regs_struct regs;
    int     old;
    int      flag;
    long    ret;

    old = 0;
    flag = 0;
    set_sigs();
    while (42) {
        if (wait_for_syscall() != 0) {
            printf(" = ?\n+++ exited with");
            get_signal_name(WEXITSTATUS(status));
            printf("+++\n");
            break;
        }
        ptrace(PTRACE_GETREGS, child, NULL, &regs);
        if (old != regs.orig_rax) {
            flag = 1;
            print_syscall(child, regs, syscalls_table[regs.orig_rax], status);
            old = regs.orig_rax;
        }
        else if (regs.rax != SYS_exit_group && flag == 1)
        {
            flag = 0;
            print_syscall_return(regs);
        }
        
    }
    return (0);
}

int main(int argc, char **argv, char **env) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s prog args\n", argv[0]);
        exit(1);
    }
    child = fork();
    if (child == 0) {
        execve(argv[1], NULL, env);
    } else {
        ptrace(PTRACE_SEIZE, child, 0, 0);
		ptrace(PTRACE_SYSCALL, child, 0, 0);
		ptrace(PTRACE_INTERRUPT, child, 0, 0);
        do_trace(child);
    }
}
