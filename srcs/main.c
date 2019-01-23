#include "../includes/strace.h"


pid_t child;

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

void 	get_data(long reg, int flag)
{
	long res;
	char message[100000];
	char *temp;
	int i = -1;

	temp = message;
	res = 100;
	while (++i < 8)
	{
		res = ptrace(PTRACE_PEEKDATA, child, reg + i * 8, NULL);
		memcpy(temp, &res, 8);
		temp += 8;
	}
	if (flag)
		printf(", ");
    else
        printf("(");
	if (!errno) {
		if (is_printable(message))
			printf("\"%s\"", (message));
		else
			printf("%p", message);
    }
	else
		printf("%ld", reg);
}

int do_trace(pid_t child) {
    int status;
    int syscall;
    int retval;
    int old;
    long reg[6] = {0};

    old = 0;
    waitpid(child, &status, 0);
    ptrace(PTRACE_SETOPTIONS, child, 0, PTRACE_O_TRACESYSGOOD);
    struct user_regs_struct regs;
    while (42) {
        if (wait_for_syscall(child) != 0)
            break;
        ptrace(PTRACE_GETREGS, child, NULL, &regs);
        if (regs.orig_rax == SYS_clone)
                return 0;
        if (regs.orig_rax == SYS_exit_group)
        {
            if (regs.rdi)
                get_data(regs.rdi, 0);
            else
                printf("0");
        }
        else {
             printf("%s", get_syscall_name(regs.orig_rax));
            if (regs.rdi) get_data(regs.rdi, 0);
            else printf("0");
            if (regs.rsi) get_data(regs.rsi, 1);
            else printf("0");
            if (regs.rdx)
                get_data(regs.rdx, 1);
            if (regs.r10)
                get_data(regs.r10, 1);
            old = regs.orig_rax;
            printf("\n");
        }
        if (wait_for_syscall(child) != 0) 
            break;
        // retval = ptrace(PTRACE_PEEKUSER, child, sizeof(long)*EAX);
        // fprintf(stderr, "%d\n", retval);
    }
    return (0);
}

int main(int argc, char **argv) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s prog args\n", argv[0]);
        exit(1);
    }
    child = fork();
    if (child == 0) {
        return do_child(argc-1, argv+1);
    } else {
        return do_trace(child);
    }
}
