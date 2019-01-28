#include <sys/types.h>
#include <sys/ptrace.h>
#include <sys/user.h>
#include <sys/wait.h>
#include <sys/reg.h>
#include <sys/syscall.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>

# define ORIG_EAX 11
# define EAX 6


int    get_syscall_name(int key);
int     get_errno_name(int key);

char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strfjoin(char *s1, char *s2);