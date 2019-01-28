#include "../includes/strace.h"


pid_t   child;
int     status;
long    reg_tab[6];

int wait_for_syscall(pid_t child) {
    int status;
    while (1) {
        ptrace(PTRACE_SYSCALL, child, 0, 0);
        waitpid(child, &status, 0);
        if (WIFSTOPPED(status) && WSTOPSIG(status) & 0x80)
            return (0);
        if (WIFEXITED(status))
            return (1);
    }
}
int do_child(int argc, char **argv) {
    char *args [argc+1];
    
    memcpy(args, argv, argc * sizeof(char*));
    args[argc] = NULL;
    kill(getpid(), SIGSTOP);
    return execvp(args[0], args);
}

int	is_print(char c)
{
	if (isprint(c) || c == '\n')
		return (1);
	return (0);
}



int	is_printable(char *str)
{
	int i = -1;

	while (str && str[++i])
	{
		if  (!is_print(str[i]))
			return (0);
	}
	if (i == 0)
		return (0);
	return (1);
}

// void 	get_data(long reg, int flag)
// {
// 	long res;
// 	char message[10000];
// 	char *temp;
// 	int i = -1;
//     int test =
// 	temp = message;
// 	res = 100;

// 	while (++i < 8)
// 	{
// 		res = ptrace(PTRACE_PEEKDATA, child, reg + i * 8, NULL);
// 		memcpy(temp, &res, 8);
// 		temp += 8;
// 	}
// 	if (!errno) {
// 		if (is_printable(message))
// 			printf("\"%s\"", (message));
// 		else
// 			printf("%p", message);
//     }
// 	else 
// 		printf("%ld", strerror(errno), reg);
// }

void 	get_data(struct user_regs_struct regs)
{
	char message[1000];
    char* temp_char2 = message;
    int j = 0;
    long temp_long;

    printf("Rdx : %lld Rsi : %lld", regs.rdx, regs.rsi);
    while( j < (regs.orig_rax/8) ) //regs.rdx stores the size of the input buffer
    {
        printf("1");
        temp_long = ptrace(PTRACE_PEEKDATA, child, regs.rsi + (j*8) , NULL);
        memcpy(temp_char2, &temp_long, 8);
        temp_char2 += sizeof(long);
        ++j;
    }
    // message[regs.rdx] = '\0';
    printf("Message-%s-\n\n", message);
}
void    set_register_array(struct  user_regs_struct regs) {
    reg_tab[0] = regs.rdi;
    reg_tab[1] = regs.rsi;
    reg_tab[2] = regs.rdx;
    reg_tab[3] = regs.r10;
    reg_tab[4] = regs.r8;
    reg_tab[5] = regs.r9;
}
int do_trace(pid_t child) {
    struct  user_regs_struct regs;
    int     old;
    int      flag;
    long    ret;
    int     nbr_arg;

    old = 0;
    flag = 0;
    nbr_arg = 0;
    waitpid(child, &status, 0);
    ptrace(PTRACE_SETOPTIONS, child, 0, PTRACE_O_TRACESYSGOOD);
    while (42) {
        if (wait_for_syscall(child) != 0)
            break;
        ptrace(PTRACE_GETREGS, child, NULL, &regs);
        set_register_array(regs);
        if (old != regs.orig_rax) {
            flag = 1;
            nbr_arg = get_syscall_name(regs.orig_rax);
            printf("(", nbr_arg);
            // for (int i = 0; i < nbr_arg && nbr_arg <= 6; i++) {

            //     // if (!reg_tab[0] && i == 0) {
                //     printf("NULL");
                //     if (nbr_arg == 1)
                //         break;
                //     else
                //         printf(", ");
                // }
                // else if (reg_tab[i])
                    get_data(regs);
                // else
                // {
                //     if (i != 1)
                //         printf("0");
                //     nbr_arg++;
                // }
            //     if (i + 1 < nbr_arg && reg_tab[i])
            //             printf(", ");
            // }
            old = regs.orig_rax;
        }
        else if (regs.rax != SYS_exit_group && flag == 1)
        {
            flag = 0;
            if ( (long)regs.rax == -1)
                printf(") = ?\n", (long)regs.rax);
            else if ( (long)regs.rax < -1) {
                printf(") = -1 ");
                get_errno_name(regs.rax);
            }
            else if ((long)regs.rax > 1000 || (long)regs.rax < -1000)
                printf(") = %p\n", regs.rax);
            else
                printf(") = %ld\n", regs.rax);
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
