#include "../libft/libft.h"
#include <sys/types.h>
#include <sys/ptrace.h>
#include <sys/user.h>
#include <sys/wait.h>
#include <sys/syscall.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include <syscalls_table.h>
#include <linux/unistd.h>
#include <fcntl.h>
#include "../includes/syscalls_table.h"

extern pid_t   child;
extern int     status;
extern struct  user_regs_struct regs;


int     get_errno_name(int key);
int     print_syscall(t_syscall const syscall);
int     print_syscall_return(void);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strfjoin(char *s1, char *s2);
char    *get_signal_name(int key);