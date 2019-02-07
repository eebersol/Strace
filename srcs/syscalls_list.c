/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   syscall_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebersol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 15:35:37 by eebersol          #+#    #+#             */
/*   Updated: 2018/08/17 15:35:38 by eebersol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/syscalls_table.h"

t_syscall const		syscalls_table[SYSCALL_NUMBER] = {
	{
        .sys_name = "read",
        .sys_argc = 3, 
        .sys_argv = { 
            E_INT,
            E_PTR,
            E_UINT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "write",
        .sys_argc = 3, 
        .sys_argv = { 
            E_UINT,
            E_PTR,
            E_UINT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "open",
        .sys_argc = 3, 
        .sys_argv = { 
            E_STR,E_INT,
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "close",
        .sys_argc = 1, 
        .sys_argv = { 
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "stat",
        .sys_argc = 2, 
        .sys_argv = { 
            E_STR,E_STRUCT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "fstat",
        .sys_argc = 2, 
        .sys_argv = { 
            E_UINT,
            E_STRUCT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "lstat",
        .sys_argc = 2, 
        .sys_argv = { 
            E_STR,E_STRUCT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "poll",
        .sys_argc = 3, 
        .sys_argv = { 
            E_STRUCT,
            E_UINT,
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "lseek",
        .sys_argc = 3, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "mmap",
        .sys_argc = 6, 
        .sys_argv = { 
            E_PTR,
            E_UINT,
            E_INT,
            E_INT,
            E_INT,
            E_PTR 
        }
    },
	{
        .sys_name = "mprotect",
        .sys_argc = 3, 
        .sys_argv = { 
            E_PTR,
            E_UINT,
            E_UINT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "munmap",
        .sys_argc = 2, 
        .sys_argv = { 
            E_PTR,
            E_UINT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "brk",
        .sys_argc = 1, 
        .sys_argv = { 
            E_PTR,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "rt_sigaction",
        .sys_argc = 4, 
        .sys_argv = { 
            E_INT,
            E_STRUCT,
            E_STRUCT,
            E_INT,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "rt_sigprocmask",
        .sys_argc = 4, 
        .sys_argv = { 
            E_INT,
            E_PTR,
            E_PTR,
            E_INT,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "rt_sigreturn",
        .sys_argc = 1, 
        .sys_argv = { 
            E_UINT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "ioctl",
        .sys_argc = 2, 
        .sys_argv = { 
            E_INT,
            E_UINT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "pread64",
        .sys_argc = 4, 
        .sys_argv = { 
            E_UINT,
            E_PTR,
            E_UINT,
            E_INT,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "pwrite64",
        .sys_argc = 4, 
        .sys_argv = { 
            E_UINT,
            E_PTR,
            E_UINT,
            E_INT,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "readv",
        .sys_argc = 3, 
        .sys_argv = { 
            E_INT,
            E_STRUCT,
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "writev",
        .sys_argc = 3, 
        .sys_argv = { 
            E_INT,
            E_STRUCT,
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "access",
        .sys_argc = 2, 
        .sys_argv = { 
            E_STR,E_INT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "pipe",
        .sys_argc = 1, 
        .sys_argv = { 
            E_PTR,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "select",
        .sys_argc = 5, 
        .sys_argv = { 
            E_INT,
            E_PTR,
            E_PTR,
            E_PTR,
            E_STRUCT,
            E_NONE 
        }
    },
	{
        .sys_name = "sched_yield",
        .sys_argc = 0, 
        .sys_argv = { 
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "mremap",
        .sys_argc = 5, 
        .sys_argv = { 
            E_PTR,
            E_UINT,
            E_UINT,
            E_INT,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "msync",
        .sys_argc = 3, 
        .sys_argv = { 
            E_PTR,
            E_UINT,
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "mincore",
        .sys_argc = 3, 
        .sys_argv = { 
            E_UINT,
            E_UINT,
            E_UINT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "madvise",
        .sys_argc = 3, 
        .sys_argv = { 
            E_UINT,
            E_UINT,
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "shmget",
        .sys_argc = 3, 
        .sys_argv = { 
            E_INT,
            E_UINT,
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "shmat",
        .sys_argc = 3, 
        .sys_argv = { 
            E_INT,
            E_STR,E_INT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "shmctl",
        .sys_argc = 3, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_STRUCT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "dup",
        .sys_argc = 1, 
        .sys_argv = { 
            E_UINT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "dup2",
        .sys_argc = 2, 
        .sys_argv = { 
            E_UINT,
            E_UINT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "pause",
        .sys_argc = 0, 
        .sys_argv = { 
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "nanosleep",
        .sys_argc = 2, 
        .sys_argv = { 
            E_STRUCT,
            E_STRUCT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "getitimer",
        .sys_argc = 2, 
        .sys_argv = { 
            E_INT,
            E_STRUCT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "alarm",
        .sys_argc = 1, 
        .sys_argv = { 
            E_UINT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "setitimer",
        .sys_argc = 3, 
        .sys_argv = { 
            E_INT,
            E_STRUCT,
            E_STRUCT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "getpid",
        .sys_argc = 0, 
        .sys_argv = { 
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "sendfile",
        .sys_argc = 4, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_PTR,
            E_UINT,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "socket",
        .sys_argc = 3, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "connect",
        .sys_argc = 3, 
        .sys_argv = { 
            E_INT,
            E_STRUCT,
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "accept",
        .sys_argc = 3, 
        .sys_argv = { 
            E_INT,
            E_STRUCT,
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "sendto",
        .sys_argc = 6, 
        .sys_argv = { 
            E_INT,
            E_PTR,
            E_UINT,
            E_UINT,
            E_STRUCT,
            E_INT 
        }
    },
	{
        .sys_name = "recvfrom",
        .sys_argc = 6, 
        .sys_argv = { 
            E_INT,
            E_PTR,
            E_UINT,
            E_UINT,
            E_STRUCT,
            E_INT 
        }
    },
	{
        .sys_name = "sendmsg",
        .sys_argc = 3, 
        .sys_argv = { 
            E_INT,
            E_STRUCT,
            E_UINT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "recvmsg",
        .sys_argc = 3, 
        .sys_argv = { 
            E_INT,
            E_STRUCT,
            E_UINT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "shutdown",
        .sys_argc = 2, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "bind",
        .sys_argc = 3, 
        .sys_argv = { 
            E_INT,
            E_STRUCT,
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "listen",
        .sys_argc = 2, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "getsockname",
        .sys_argc = 3, 
        .sys_argv = { 
            E_INT,
            E_STRUCT,
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "getpeername",
        .sys_argc = 3, 
        .sys_argv = { 
            E_INT,
            E_STRUCT,
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "socketpair",
        .sys_argc = 4, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_INT,
            E_INT,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "setsockopt",
        .sys_argc = 5, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_INT,
            E_STR,E_INT,
            E_NONE 
        }
    },
	{
        .sys_name = "getsockopt",
        .sys_argc = 5, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_INT,
            E_STR,E_INT,
            E_NONE 
        }
    },
	{
        .sys_name = "clone",
        .sys_argc = 4, 
        .sys_argv = { 
            E_UINT,
            E_PTR,
            E_INT,
            E_PTR,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "fork",
        .sys_argc = 0, 
        .sys_argv = { 
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "vfork",
        .sys_argc = 0, 
        .sys_argv = { 
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "execve",
        .sys_argc = 3, 
        .sys_argv = { 
            E_STR,
            E_SPE,
            E_SPE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "exit",
        .sys_argc = 1, 
        .sys_argv = { 
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "wait4",
        .sys_argc = 4, 
        .sys_argv = { 
            E_INT,
            E_PTR,
            E_INT,
            E_STRUCT,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "kill",
        .sys_argc = 2, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "uname",
        .sys_argc = 1, 
        .sys_argv = { 
            E_STRUCT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "semget",
        .sys_argc = 3, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "semop",
        .sys_argc = 3, 
        .sys_argv = { 
            E_INT,
            E_STRUCT,
            E_UINT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "semctl",
        .sys_argc = 4, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_INT,
            E_UINT,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "shmdt",
        .sys_argc = 1, 
        .sys_argv = { 
            E_STR,E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "msgget",
        .sys_argc = 2, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "msgsnd",
        .sys_argc = 4, 
        .sys_argv = { 
            E_INT,
            E_STRUCT,
            E_UINT,
            E_INT,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "msgrcv",
        .sys_argc = 5, 
        .sys_argv = { 
            E_INT,
            E_STRUCT,
            E_UINT,
            E_INT,
            E_INT,
            E_NONE 
        }
    },
	{
        .sys_name = "msgctl",
        .sys_argc = 3, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_STRUCT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "fcntl",
        .sys_argc = 3, 
        .sys_argv = { 
            E_UINT,
            E_UINT,
            E_UINT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "flock",
        .sys_argc = 2, 
        .sys_argv = { 
            E_UINT,
            E_UINT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "fsync",
        .sys_argc = 1, 
        .sys_argv = { 
            E_UINT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "fdatasync",
        .sys_argc = 1, 
        .sys_argv = { 
            E_UINT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "truncate",
        .sys_argc = 2, 
        .sys_argv = { 
            E_STR,E_INT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "ftruncate",
        .sys_argc = 2, 
        .sys_argv = { 
            E_UINT,
            E_UINT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "getdents",
        .sys_argc = 3, 
        .sys_argv = { 
            E_UINT,
            E_STRUCT,
            E_UINT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "getcwd",
        .sys_argc = 2, 
        .sys_argv = { 
            E_STR,E_UINT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "chdir",
        .sys_argc = 1, 
        .sys_argv = { 
            E_STR,E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "fchdir",
        .sys_argc = 1, 
        .sys_argv = { 
            E_UINT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "rename",
        .sys_argc = 2, 
        .sys_argv = { 
            E_STR,
            E_STR,E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "mkdir",
        .sys_argc = 2, 
        .sys_argv = { 
            E_STR,E_INT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "rmdir",
        .sys_argc = 1, 
        .sys_argv = { 
            E_STR,E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "creat",
        .sys_argc = 2, 
        .sys_argv = { 
            E_STR,E_INT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "link",
        .sys_argc = 2, 
        .sys_argv = { 
            E_STR,
            E_STR,E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "unlink",
        .sys_argc = 1, 
        .sys_argv = { 
            E_STR,E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "symlink",
        .sys_argc = 2, 
        .sys_argv = { 
            E_STR,
            E_STR,E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "readlink",
        .sys_argc = 3, 
        .sys_argv = { 
            E_PTR,
            E_PTR,
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "chmod",
        .sys_argc = 2, 
        .sys_argv = { 
            E_STR,E_INT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "fchmod",
        .sys_argc = 2, 
        .sys_argv = { 
            E_UINT,
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "chown",
        .sys_argc = 3, 
        .sys_argv = { 
            E_STR,E_INT,
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "fchown",
        .sys_argc = 3, 
        .sys_argv = { 
            E_UINT,
            E_INT,
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "lchown",
        .sys_argc = 3, 
        .sys_argv = { 
            E_STR,E_INT,
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "umask",
        .sys_argc = 1, 
        .sys_argv = { 
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "gettimeofday",
        .sys_argc = 2, 
        .sys_argv = { 
            E_STRUCT,
            E_STRUCT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "getrlimit",
        .sys_argc = 1, 
        .sys_argv = { 
            E_UINT,
            E_STRUCT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "getrusage",
        .sys_argc = 2, 
        .sys_argv = { 
            E_INT,
            E_STRUCT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "sysinfo",
        .sys_argc = 1, 
        .sys_argv = { 
            E_STRUCT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "times",
        .sys_argc = 1, 
        .sys_argv = { 
            E_STRUCT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "ptrace",
        .sys_argc = 4, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_UINT,
            E_UINT,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "getuid",
        .sys_argc = 0, 
        .sys_argv = { 
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "syslog",
        .sys_argc = 3, 
        .sys_argv = { 
            E_INT,
            E_STR,E_INT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "getgid",
        .sys_argc = 0, 
        .sys_argv = { 
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "setuid",
        .sys_argc = 1, 
        .sys_argv = { 
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "setgid",
        .sys_argc = 1, 
        .sys_argv = { 
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "geteuid",
        .sys_argc = 0, 
        .sys_argv = { 
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "getegid",
        .sys_argc = 0, 
        .sys_argv = { 
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "setpgid",
        .sys_argc = 2, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "getppid",
        .sys_argc = 0, 
        .sys_argv = { 
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "getpgrp",
        .sys_argc = 0, 
        .sys_argv = { 
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "setsid",
        .sys_argc = 0, 
        .sys_argv = { 
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "setreuid",
        .sys_argc = 2, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "setregid",
        .sys_argc = 2, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "getgroups",
        .sys_argc = 2, 
        .sys_argv = { 
            E_INT,
            E_PTR,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "setgroups",
        .sys_argc = 2, 
        .sys_argv = { 
            E_INT,
            E_PTR,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "setresuid",
        .sys_argc = 3, 
        .sys_argv = { 
            E_PTR,
            E_PTR,
            E_PTR,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "getresuid",
        .sys_argc = 3, 
        .sys_argv = { 
            E_PTR,
            E_PTR,
            E_PTR,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "setresgid",
        .sys_argc = 3, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "getresgid",
        .sys_argc = 3, 
        .sys_argv = { 
            E_PTR,
            E_PTR,
            E_PTR,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "getpgid",
        .sys_argc = 1, 
        .sys_argv = { 
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "setfsuid",
        .sys_argc = 1, 
        .sys_argv = { 
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "setfsgid",
        .sys_argc = 1, 
        .sys_argv = { 
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "getsid",
        .sys_argc = 1, 
        .sys_argv = { 
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "capget",
        .sys_argc = 2, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "capset",
        .sys_argc = 2, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "rt_sigpending",
        .sys_argc = 2, 
        .sys_argv = { 
            E_PTR,
            E_UINT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "rt_sigtimedwait",
        .sys_argc = 4, 
        .sys_argv = { 
            E_PTR,
            E_PTR,
            E_STRUCT,
            E_UINT,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "rt_sigqueueinfo",
        .sys_argc = 3, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_PTR,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "rt_sigsuspend",
        .sys_argc = 2, 
        .sys_argv = { 
            E_PTR,
            E_UINT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "sigaltstack",
        .sys_argc = 2, 
        .sys_argv = { 
            E_PTR,
            E_PTR,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "utime",
        .sys_argc = 2, 
        .sys_argv = { 
            E_STR,E_STRUCT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "mknod",
        .sys_argc = 3, 
        .sys_argv = { 
            E_STR,E_INT,
            E_UINT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "uselib",
        .sys_argc = 1, 
        .sys_argv = { 
            E_STR,E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "personality",
        .sys_argc = 1, 
        .sys_argv = { 
            E_UINT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "ustat",
        .sys_argc = 2, 
        .sys_argv = { 
            E_UINT,
            E_STRUCT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "statfs",
        .sys_argc = 2, 
        .sys_argv = { 
            E_STR,E_STRUCT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "fstatfs",
        .sys_argc = 2, 
        .sys_argv = { 
            E_UINT,
            E_STRUCT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "sysfs",
        .sys_argc = 3, 
        .sys_argv = { 
            E_INT,
            E_UINT,
            E_UINT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "getpriority",
        .sys_argc = 2, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "setpriority",
        .sys_argc = 3, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "sched_setparam",
        .sys_argc = 2, 
        .sys_argv = { 
            E_INT,
            E_STRUCT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "sched_getparam",
        .sys_argc = 2, 
        .sys_argv = { 
            E_INT,
            E_STRUCT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "sched_setscheduler",
        .sys_argc = 3, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_STRUCT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "sched_getscheduler",
        .sys_argc = 1, 
        .sys_argv = { 
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "sched_get_priority_max",
        .sys_argc = 1, 
        .sys_argv = { 
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "sched_get_priority_min",
        .sys_argc = 1, 
        .sys_argv = { 
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "sched_rr_get_interval",
        .sys_argc = 2, 
        .sys_argv = { 
            E_INT,
            E_STRUCT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "mlock",
        .sys_argc = 2, 
        .sys_argv = { 
            E_UINT,
            E_UINT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "munlock",
        .sys_argc = 2, 
        .sys_argv = { 
            E_UINT,
            E_UINT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "mlockall",
        .sys_argc = 1, 
        .sys_argv = { 
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "munlockall",
        .sys_argc = 0, 
        .sys_argv = { 
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "vhangup",
        .sys_argc = 0, 
        .sys_argv = { 
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "modify_ldt",
        .sys_argc = 3, 
        .sys_argv = { 
            E_INT,
            E_PTR,
            E_UINT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "pivot_root",
        .sys_argc = 2, 
        .sys_argv = { 
            E_STR,
            E_STR,E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "sysctl",
        .sys_argc = 1, 
        .sys_argv = { 
            E_STRUCT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "prctl",
        .sys_argc = 4, 
        .sys_argv = { 
            E_INT,
            E_UINT,
            E_UINT,
            E_UINT,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "arch_prctl",
        .sys_argc = 2, 
        .sys_argv = { 
            E_INT,
            E_PTR,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "adjtimex",
        .sys_argc = 1, 
        .sys_argv = { 
            E_STRUCT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "setrlimit",
        .sys_argc = 2, 
        .sys_argv = { 
            E_UINT,
            E_STRUCT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "chroot",
        .sys_argc = 1, 
        .sys_argv = { 
            E_STR,E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "sync",
        .sys_argc = 0, 
        .sys_argv = { 
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "acct",
        .sys_argc = 1, 
        .sys_argv = { 
            E_STR,E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "settimeofday",
        .sys_argc = 2, 
        .sys_argv = { 
            E_STRUCT,
            E_STRUCT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "mount",
        .sys_argc = 5, 
        .sys_argv = { 
            E_STR,
            E_STR,E_STR,E_UINT,
            E_PTR,
            E_NONE 
        }
    },
	{
        .sys_name = "umount2",
        .sys_argc = 2, 
        .sys_argv = { 
            E_STR,E_INT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "swapon",
        .sys_argc = 2, 
        .sys_argv = { 
            E_STR,E_INT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "swapoff",
        .sys_argc = 1, 
        .sys_argv = { 
            E_STR,E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "reboot",
        .sys_argc = 4, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_UINT,
            E_PTR,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "sethostname",
        .sys_argc = 2, 
        .sys_argv = { 
            E_STR,E_INT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "setdomainname",
        .sys_argc = 2, 
        .sys_argv = { 
            E_STR,E_INT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "iopl",
        .sys_argc = 2, 
        .sys_argv = { 
            E_UINT,
            E_STRUCT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "ioperm",
        .sys_argc = 3, 
        .sys_argv = { 
            E_UINT,
            E_UINT,
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "create_module",
        .sys_argc = 0, 
        .sys_argv = { 
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "init_module",
        .sys_argc = 3, 
        .sys_argv = { 
            E_PTR,
            E_UINT,
            E_STR,E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "delete_module",
        .sys_argc = 2, 
        .sys_argv = { 
            E_STR,E_UINT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "get_kernel_syms",
        .sys_argc = 0, 
        .sys_argv = { 
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "query_module",
        .sys_argc = 0, 
        .sys_argv = { 
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "quotactl",
        .sys_argc = 4, 
        .sys_argv = { 
            E_UINT,
            E_STR,E_INT,
            E_PTR,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "nfsservctl",
        .sys_argc = 0, 
        .sys_argv = { 
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "getpmsg",
        .sys_argc = 0, 
        .sys_argv = { 
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "putpmsg",
        .sys_argc = 0, 
        .sys_argv = { 
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "afs_syscall",
        .sys_argc = 0, 
        .sys_argv = { 
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "tuxcall",
        .sys_argc = 0, 
        .sys_argv = { 
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "security",
        .sys_argc = 0, 
        .sys_argv = { 
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "gettid",
        .sys_argc = 0, 
        .sys_argv = { 
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "readahead",
        .sys_argc = 3, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_UINT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "setxattr",
        .sys_argc = 5, 
        .sys_argv = { 
            E_STR,
            E_STR,
            E_PTR,
            E_UINT,
            E_INT,
            E_NONE 
        }
    },
	{
        .sys_name = "lsetxattr",
        .sys_argc = 5, 
        .sys_argv = { 
            E_STR,
            E_STR,
            E_PTR,
            E_UINT,
            E_INT,
            E_NONE 
        }
    },
	{
        .sys_name = "fsetxattr",
        .sys_argc = 5, 
        .sys_argv = { 
            E_INT,
            E_STR,
            E_PTR,
            E_UINT,
            E_INT,
            E_NONE 
        }
    },
	{
        .sys_name = "getxattr",
        .sys_argc = 4, 
        .sys_argv = { 
            E_STR,
            E_STR,
            E_PTR,
            E_UINT,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "lgetxattr",
        .sys_argc = 4, 
        .sys_argv = { 
            E_STR,
            E_STR,
            E_PTR,
            E_UINT,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "fgetxattr",
        .sys_argc = 4, 
        .sys_argv = { 
            E_INT,
            E_STR,
            E_PTR,
            E_UINT,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "listxattr",
        .sys_argc = 3, 
        .sys_argv = { 
            E_STR,
            E_STR,E_UINT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "llistxattr",
        .sys_argc = 3, 
        .sys_argv = { 
            E_STR,
            E_STR,E_UINT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "flistxattr",
        .sys_argc = 3, 
        .sys_argv = { 
            E_INT,
            E_STR,E_UINT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "removexattr",
        .sys_argc = 2, 
        .sys_argv = { 
            E_STR,
            E_STR,E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "lremovexattr",
        .sys_argc = 2, 
        .sys_argv = { 
            E_STR,
            E_STR,E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "fremovexattr",
        .sys_argc = 2, 
        .sys_argv = { 
            E_INT,
            E_STR,E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "tkill",
        .sys_argc = 2, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "time",
        .sys_argc = 1, 
        .sys_argv = { 
            E_PTR,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "futex",
        .sys_argc = 6, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_INT,
            E_STRUCT,
            E_INT,
            E_INT 
        }
    },
	{
        .sys_name = "sched_setaffinity",
        .sys_argc = 3, 
        .sys_argv = { 
            E_INT,
            E_UINT,
            E_UINT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "sched_getaffinity",
        .sys_argc = 3, 
        .sys_argv = { 
            E_INT,
            E_UINT,
            E_UINT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "set_thread_area",
        .sys_argc = 1, 
        .sys_argv = { 
            E_STRUCT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "io_setup",
        .sys_argc = 2, 
        .sys_argv = { 
            E_UINT,
            E_PTR,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "io_destroy",
        .sys_argc = 1, 
        .sys_argv = { 
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "io_getevents",
        .sys_argc = 4, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_INT,
            E_STRUCT,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "io_submit",
        .sys_argc = 3, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_STRUCT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "io_cancel",
        .sys_argc = 3, 
        .sys_argv = { 
            E_INT,
            E_STRUCT,
            E_STRUCT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "get_thread_area",
        .sys_argc = 1, 
        .sys_argv = { 
            E_STRUCT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "lookup_dcookie",
        .sys_argc = 3, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "epoll_create",
        .sys_argc = 1, 
        .sys_argv = { 
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "epoll_ctl_old",
        .sys_argc = 0, 
        .sys_argv = { 
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "epoll_wait_old",
        .sys_argc = 0, 
        .sys_argv = { 
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "remap_file_pages",
        .sys_argc = 5, 
        .sys_argv = { 
            E_UINT,
            E_UINT,
            E_UINT,
            E_UINT,
            E_UINT,
            E_NONE 
        }
    },
	{
        .sys_name = "getdents64",
        .sys_argc = 3, 
        .sys_argv = { 
            E_UINT,
            E_STRUCT,
            E_UINT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "set_tid_address",
        .sys_argc = 1, 
        .sys_argv = { 
            E_PTR,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "restart_syscall",
        .sys_argc = 0, 
        .sys_argv = { 
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "semtimedop",
        .sys_argc = 4, 
        .sys_argv = { 
            E_INT,
            E_STRUCT,
            E_UINT,
            E_STRUCT,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "fadvise64",
        .sys_argc = 4, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_UINT,
            E_INT,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "timer_create",
        .sys_argc = 3, 
        .sys_argv = { 
            E_INT,
            E_STRUCT,
            E_PTR,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "timer_settime",
        .sys_argc = 4, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_STRUCT,
            E_STRUCT,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "timer_gettime",
        .sys_argc = 2, 
        .sys_argv = { 
            E_INT,
            E_STRUCT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "timer_getoverrun",
        .sys_argc = 1, 
        .sys_argv = { 
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "timer_delete",
        .sys_argc = 1, 
        .sys_argv = { 
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "clock_settime",
        .sys_argc = 2, 
        .sys_argv = { 
            E_INT,
            E_STRUCT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "clock_gettime",
        .sys_argc = 2, 
        .sys_argv = { 
            E_INT,
            E_STRUCT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "clock_getres",
        .sys_argc = 2, 
        .sys_argv = { 
            E_INT,
            E_STRUCT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "clock_nanosleep",
        .sys_argc = 4, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_STRUCT,
            E_STRUCT,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "exit_group",
        .sys_argc = 1, 
        .sys_argv = { 
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "epoll_wait",
        .sys_argc = 4, 
        .sys_argv = { 
            E_INT,
            E_STRUCT,
            E_INT,
            E_INT,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "epoll_ctl",
        .sys_argc = 4, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_INT,
            E_STRUCT,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "tgkill",
        .sys_argc = 3, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "utimes",
        .sys_argc = 2, 
        .sys_argv = { 
            E_STR,E_STRUCT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "vserver",
        .sys_argc = 0, 
        .sys_argv = { 
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "mbind",
        .sys_argc = 6, 
        .sys_argv = { 
            E_UINT,
            E_UINT,
            E_UINT,
            E_UINT,
            E_UINT,
            E_UINT 
        }
    },
	{
        .sys_name = "set_mempolicy",
        .sys_argc = 3, 
        .sys_argv = { 
            E_INT,
            E_UINT,
            E_UINT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "get_mempolicy",
        .sys_argc = 5, 
        .sys_argv = { 
            E_INT,
            E_UINT,
            E_UINT,
            E_UINT,
            E_UINT,
            E_NONE 
        }
    },
	{
        .sys_name = "mq_open",
        .sys_argc = 4, 
        .sys_argv = { 
            E_STR,E_INT,
            E_INT,
            E_STRUCT,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "mq_unlink",
        .sys_argc = 1, 
        .sys_argv = { 
            E_STR,E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "mq_timedsend",
        .sys_argc = 5, 
        .sys_argv = { 
            E_INT,
            E_STR,E_UINT,
            E_UINT,
            E_STRUCT,
            E_NONE 
        }
    },
	{
        .sys_name = "mq_timedreceive",
        .sys_argc = 5, 
        .sys_argv = { 
            E_INT,
            E_STR,E_UINT,
            E_UINT,
            E_STRUCT,
            E_NONE 
        }
    },
	{
        .sys_name = "mq_notify",
        .sys_argc = 2, 
        .sys_argv = { 
            E_INT,
            E_STRUCT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "mq_getsetattr",
        .sys_argc = 2, 
        .sys_argv = { 
            E_STRUCT,
            E_STRUCT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "kexec_load",
        .sys_argc = 4, 
        .sys_argv = { 
            E_UINT,
            E_UINT,
            E_STRUCT,
            E_UINT,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "waitid",
        .sys_argc = 5, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_STRUCT,
            E_INT,
            E_STRUCT,
            E_NONE 
        }
    },
	{
        .sys_name = "add_key",
        .sys_argc = 4, 
        .sys_argv = { 
            E_STR,
            E_STR,
            E_PTR,
            E_UINT,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "request_key",
        .sys_argc = 4, 
        .sys_argv = { 
            E_STR,
            E_STR,E_STR,E_INT,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "keyctl",
        .sys_argc = 5, 
        .sys_argv = { 
            E_INT,
            E_UINT,
            E_UINT,
            E_UINT,
            E_UINT,
            E_NONE 
        }
    },
	{
        .sys_name = "ioprio_set",
        .sys_argc = 3, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "ioprio_get",
        .sys_argc = 2, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "inotify_init",
        .sys_argc = 0, 
        .sys_argv = { 
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "inotify_add_watch",
        .sys_argc = 3, 
        .sys_argv = { 
            E_INT,
            E_STR,E_INT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "inotify_rm_watch",
        .sys_argc = 2, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "migrate_pages",
        .sys_argc = 4, 
        .sys_argv = { 
            E_INT,
            E_UINT,
            E_UINT,
            E_UINT,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "openat",
        .sys_argc = 4, 
        .sys_argv = { 
            E_INT,
            E_STR,E_INT,
            E_INT,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "mkdirat",
        .sys_argc = 3, 
        .sys_argv = { 
            E_INT,
            E_STR,E_INT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "mknodat",
        .sys_argc = 4, 
        .sys_argv = { 
            E_INT,
            E_STR,E_INT,
            E_UINT,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "fchownat",
        .sys_argc = 5, 
        .sys_argv = { 
            E_INT,
            E_STR,E_INT,
            E_INT,
            E_INT,
            E_NONE 
        }
    },
	{
        .sys_name = "futimesat",
        .sys_argc = 3, 
        .sys_argv = { 
            E_INT,
            E_STR,E_STRUCT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "newfstatat",
        .sys_argc = 4, 
        .sys_argv = { 
            E_INT,
            E_STR,E_STRUCT,
            E_INT,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "unlinkat",
        .sys_argc = 3, 
        .sys_argv = { 
            E_INT,
            E_STR,E_INT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "renameat",
        .sys_argc = 4, 
        .sys_argv = { 
            E_INT,
            E_STR,E_INT,
            E_STR,E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "linkat",
        .sys_argc = 5, 
        .sys_argv = { 
            E_INT,
            E_STR,E_INT,
            E_STR,E_INT,
            E_NONE 
        }
    },
	{
        .sys_name = "symlinkat",
        .sys_argc = 3, 
        .sys_argv = { 
            E_STR,E_INT,
            E_STR,E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "readlinkat",
        .sys_argc = 4, 
        .sys_argv = { 
            E_INT,
            E_PTR,
            E_PTR,
            E_INT,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "fchmodat",
        .sys_argc = 3, 
        .sys_argv = { 
            E_INT,
            E_STR,E_INT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "faccessat",
        .sys_argc = 3, 
        .sys_argv = { 
            E_INT,
            E_STR,E_INT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "pselect6",
        .sys_argc = 6, 
        .sys_argv = { 
            E_INT,
            E_PTR,
            E_PTR,
            E_PTR,
            E_STRUCT,
            E_PTR 
        }
    },
	{
        .sys_name = "ppoll",
        .sys_argc = 5, 
        .sys_argv = { 
            E_STRUCT,
            E_UINT,
            E_STRUCT,
            E_PTR,
            E_UINT,
            E_NONE 
        }
    },
	{
        .sys_name = "unshare",
        .sys_argc = 1, 
        .sys_argv = { 
            E_UINT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "set_robust_list",
        .sys_argc = 2, 
        .sys_argv = { 
            E_STRUCT,
            E_UINT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "get_robust_list",
        .sys_argc = 3, 
        .sys_argv = { 
            E_INT,
            E_STRUCT,
            E_UINT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "splice",
        .sys_argc = 6, 
        .sys_argv = { 
            E_INT,
            E_PTR,
            E_INT,
            E_PTR,
            E_UINT,
            E_UINT 
        }
    },
	{
        .sys_name = "tee",
        .sys_argc = 4, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_UINT,
            E_UINT,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "sync_file_range",
        .sys_argc = 4, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_INT,
            E_INT,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "vmsplice",
        .sys_argc = 4, 
        .sys_argv = { 
            E_INT,
            E_STRUCT,
            E_UINT,
            E_UINT,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "move_pages",
        .sys_argc = 6, 
        .sys_argv = { 
            E_INT,
            E_UINT,
            E_PTR,
            E_INT,
            E_INT,
            E_INT 
        }
    },
	{
        .sys_name = "utimensat",
        .sys_argc = 4, 
        .sys_argv = { 
            E_INT,
            E_STR,E_STRUCT,
            E_INT,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "epoll_pwait",
        .sys_argc = 6, 
        .sys_argv = { 
            E_INT,
            E_STRUCT,
            E_INT,
            E_INT,
            E_PTR,
            E_UINT 
        }
    },
	{
        .sys_name = "signalfd",
        .sys_argc = 3, 
        .sys_argv = { 
            E_INT,
            E_PTR,
            E_UINT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "timerfd_create",
        .sys_argc = 2, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "eventfd",
        .sys_argc = 1, 
        .sys_argv = { 
            E_UINT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "fallocate",
        .sys_argc = 4, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_INT,
            E_INT,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "timerfd_settime",
        .sys_argc = 4, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_STRUCT,
            E_STRUCT,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "timerfd_gettime",
        .sys_argc = 2, 
        .sys_argv = { 
            E_INT,
            E_STRUCT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "accept4",
        .sys_argc = 4, 
        .sys_argv = { 
            E_INT,
            E_STRUCT,
            E_INT,
            E_INT,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "signalfd4",
        .sys_argc = 4, 
        .sys_argv = { 
            E_INT,
            E_PTR,
            E_UINT,
            E_INT,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "eventfd2",
        .sys_argc = 2, 
        .sys_argv = { 
            E_UINT,
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "epoll_create1",
        .sys_argc = 1, 
        .sys_argv = { 
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "dup3",
        .sys_argc = 3, 
        .sys_argv = { 
            E_UINT,
            E_UINT,
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "pipe2",
        .sys_argc = 2, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "inotify_init1",
        .sys_argc = 1, 
        .sys_argv = { 
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "preadv",
        .sys_argc = 5, 
        .sys_argv = { 
            E_UINT,
            E_STRUCT,
            E_UINT,
            E_UINT,
            E_UINT,
            E_NONE 
        }
    },
	{
        .sys_name = "pwritev",
        .sys_argc = 5, 
        .sys_argv = { 
            E_UINT,
            E_STRUCT,
            E_UINT,
            E_UINT,
            E_UINT,
            E_NONE 
        }
    },
	{
        .sys_name = "rt_tgsigqueueinfo",
        .sys_argc = 4, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_INT,
            E_PTR,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "perf_event_open",
        .sys_argc = 5, 
        .sys_argv = { 
            E_STRUCT,
            E_INT,
            E_INT,
            E_INT,
            E_UINT,
            E_NONE 
        }
    },
	{
        .sys_name = "recvmmsg",
        .sys_argc = 5, 
        .sys_argv = { 
            E_INT,
            E_STRUCT,
            E_UINT,
            E_UINT,
            E_STRUCT,
            E_NONE 
        }
    },
	{
        .sys_name = "fanotify_init",
        .sys_argc = 2, 
        .sys_argv = { 
            E_UINT,
            E_UINT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "fanotify_mark",
        .sys_argc = 5, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_INT,
            E_INT,
            E_INT,
            E_NONE 
        }
    },
	{
        .sys_name = "prlimit64",
        .sys_argc = 4, 
        .sys_argv = { 
            E_INT,
            E_UINT,
            E_STRUCT,
            E_STRUCT,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "name_to_handle_at",
        .sys_argc = 5, 
        .sys_argv = { 
            E_INT,
            E_STR,E_STRUCT,
            E_INT,
            E_INT,
            E_NONE 
        }
    },
	{
        .sys_name = "open_by_handle_at",
        .sys_argc = 5, 
        .sys_argv = { 
            E_INT,
            E_STR,E_STRUCT,
            E_INT,
            E_INT,
            E_NONE 
        }
    },
	{
        .sys_name = "clock_adjtime",
        .sys_argc = 2, 
        .sys_argv = { 
            E_INT,
            E_STRUCT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "syncfs",
        .sys_argc = 1, 
        .sys_argv = { 
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "sendmmsg",
        .sys_argc = 4, 
        .sys_argv = { 
            E_INT,
            E_STRUCT,
            E_UINT,
            E_UINT,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "setns",
        .sys_argc = 2, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "getcpu",
        .sys_argc = 3, 
        .sys_argv = { 
            E_UINT,
            E_UINT,
            E_STRUCT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "process_vm_readv",
        .sys_argc = 6, 
        .sys_argv = { 
            E_INT,
            E_STRUCT,
            E_UINT,
            E_STRUCT,
            E_UINT,
            E_UINT 
        }
    },
	{
        .sys_name = "process_vm_writev",
        .sys_argc = 6, 
        .sys_argv = { 
            E_INT,
            E_STRUCT,
            E_UINT,
            E_STRUCT,
            E_UINT,
            E_UINT 
        }
    },
	{
        .sys_name = "kcmp",
        .sys_argc = 5, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_INT,
            E_UINT,
            E_UINT,
            E_NONE 
        }
    },
	{
        .sys_name = "finit_module",
        .sys_argc = 3, 
        .sys_argv = { 
            E_INT,
            E_STR,E_INT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "sched_setattr",
        .sys_argc = 3, 
        .sys_argv = { 
            E_INT,
            E_STRUCT,
            E_UINT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "sched_getattr",
        .sys_argc = 4, 
        .sys_argv = { 
            E_INT,
            E_STRUCT,
            E_UINT,
            E_UINT,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "renameat2",
        .sys_argc = 5, 
        .sys_argv = { 
            E_INT,
            E_STR,E_INT,
            E_STR,E_UINT,
            E_NONE 
        }
    },
	{
        .sys_name = "seccomp",
        .sys_argc = 3, 
        .sys_argv = { 
            E_UINT,
            E_UINT,
            E_STR,E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "getrandom",
        .sys_argc = 3, 
        .sys_argv = { 
            E_STR,E_UINT,
            E_UINT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "memfd_create",
        .sys_argc = 2, 
        .sys_argv = { 
            E_STR,E_UINT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "kexec_file_load",
        .sys_argc = 5, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_UINT,
            E_STR,E_UINT,
            E_NONE 
        }
    },
	{
        .sys_name = "bpf",
        .sys_argc = 3, 
        .sys_argv = { 
            E_INT,
            E_PTR,
            E_UINT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "execveat",
        .sys_argc = 5, 
        .sys_argv = { 
            E_INT,
            E_STR,
            E_PTR,
            E_PTR,
            E_INT,
            E_NONE 
        }
    },
	{
        .sys_name = "userfaultfd",
        .sys_argc = 1, 
        .sys_argv = { 
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "membarrier",
        .sys_argc = 2, 
        .sys_argv = { 
            E_INT,
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "mlock2",
        .sys_argc = 3, 
        .sys_argv = { 
            E_UINT,
            E_UINT,
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "copy_file_range",
        .sys_argc = 6, 
        .sys_argv = { 
            E_INT,
            E_PTR,
            E_INT,
            E_PTR,
            E_UINT,
            E_UINT 
        }
    },
	{
        .sys_name = "preadv2",
        .sys_argc = 6, 
        .sys_argv = { 
            E_UINT,
            E_STRUCT,
            E_UINT,
            E_UINT,
            E_UINT,
            E_INT 
        }
    },
	{
        .sys_name = "pwritev2",
        .sys_argc = 6, 
        .sys_argv = { 
            E_UINT,
            E_STRUCT,
            E_UINT,
            E_UINT,
            E_UINT,
            E_INT 
        }
    },
	/* ====================================================================================== */
	{
        .sys_name = "pkey_mprotect",
        .sys_argc = 4, 
        .sys_argv = { 
            E_PTR,
            E_UINT,
            E_INT,
            E_INT,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "pkey_alloc",
        .sys_argc = 2, 
        .sys_argv = { 
            E_UINT,
            E_UINT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "pkey_free",
        .sys_argc = 1, 
        .sys_argv = { 
            E_INT,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE,
            E_NONE 
        }
    },
	{
        .sys_name = "statx",
        .sys_argc = 5, 
        .sys_argv = { E_INT,
        E_STR,E_INT,
        E_UINT,
        E_STRUCT,
        E_NONE } }
};

