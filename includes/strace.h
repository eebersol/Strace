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

int     get_errno_name(int key);
int     print_syscall(pid_t child, struct  user_regs_struct regs, t_syscall const syscall, int status);
void    print_syscall_return(struct  user_regs_struct regs);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strfjoin(char *s1, char *s2);
char    *get_signal_name(int key);