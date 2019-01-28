/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   syscall.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebersol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 15:35:37 by eebersol          #+#    #+#             */
/*   Updated: 2018/08/17 15:35:38 by eebersol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/strace.h"

int get_syscall_name(int key)
{
	switch (key) {
		case (SYS_restart_syscall): 
		{ 
			printf("restart_syscall");
			return (0);
		}
		case (SYS_exit): 
		{ 
			printf("exit");
			return (1);
		}
		case (SYS_fork): 
		{ 
			printf("fork");
			return (0);
		}
		case (SYS_read): 
		{ 
			printf("read");
			return (3);
		}
		case (SYS_write): 
		{ 
			printf("write");
			return (3);
		}
		case (SYS_open): 
		{ 
			printf("open");
			return (3);
		}
		case (SYS_close): 
		{ 
			printf("close");
			return (1);
		}
		case (SYS_wait4): 
		{ 
			printf("wait4");
			return (4);
		}
		case (SYS_creat): 
		{ 
			printf("creat");
			return (2);
		}
		case (SYS_link): 
		{ 
			printf("link");
			return (2);
		}
		case (SYS_unlink): 
		{ 
			printf("unlink");
			return (1);
		}

		case (SYS_chdir): 
		{ 
			printf("chdir");
			return (1);
		}
		case (SYS_arch_prctl): {
			printf("arch_prctl");
			return (2);
		}
		case (SYS_mknod): 
		{ 
			printf("mknod");
			return (3);
		}
		case (SYS_chmod): 
		{ 
			printf("chmod");
			return (2);
		}
		case (SYS_brk): 
		{ 
			printf("brk");
			return (1);
		}
		case (SYS_lseek): 
		{ 
			printf("lseek");
			return (3);
		}
		case (SYS_getpid): 
		{ 
			printf("getpid");
			return (0);
		}
		case (SYS_capget): 
		{ 
			printf("capget");
			return (2);
		}
		case (SYS_capset): 
		{ 
			printf("capset");
			return (2);
		}
		case (SYS_time): 
		{ 
			printf("time");
			return (1);
		}
		case (SYS_ptrace): 
		{ 
			printf("ptrace");
			return (5);
		}
		case (SYS_alarm): 
		{ 
			printf("alarm");
			return (1);
		}
		case (SYS_sigaltstack): 
		{ 
			printf("sigaltstack");
			return (2);
		}
		case (SYS_pause): 
		{ 
			printf("pause");
			return (0);
		}
		case (SYS_utime): 
		{ 
			printf("utime");
			return (2);
		}
		case (SYS_fchown): 
		{ 
			printf("fchown32");
			return (3);
		}
		case (SYS_access): 
		{ 
			printf("access");
			return (2);
		}
		case (SYS_chown): 
		{ 
			printf("chown32");
			return (3);
		}
		case (SYS_sync): 
		{ 
			printf("sync");
			return (0);
		}
		case (SYS_sendfile): 
		{ 
			printf("sendfile");
			return (4);
		}
		case (SYS_dup): 
		{ 
			printf("dup");
			return (2);
		}
		case (SYS_pipe): 
		{ 
			printf("pipe");
			return (0);
		}
		case (SYS_times): 
		{ 
			printf("times");
			return (1);
		}
		case (SYS_acct): 
		{ 
			printf("acct");
			return (1);
		}
		case (SYS_getgid): 
		{ 
			printf("getgid32");
			return (0);
		}
		case (SYS_ioctl): 
		{ 
			printf("ioctl");
			return (3);
		}
		case (SYS_reboot): 
		{ 
			printf("reboot");
			return (4);
		}
		case (SYS_mmap): 
		{ 
			printf("mmap");
			return (6);
		}
		case (SYS_symlink): 
		{ 
			printf("symlink");
			return (2);
		}
		case (SYS_readlink): 
		{ 
			printf("readlink");
			return (3);
		}
		case (SYS_execve): 
		{ 
			printf("execve");
			return (3);
		}
		case (SYS_umask): 
		{ 
			printf("umask");
			return (1);
		}
		case (SYS_chroot): 
		{ 
			printf("chroot");
			return (1);
		}
		case (SYS_fstat): 
		{ 
			printf("fstat");
			return (2);
		}
		case (SYS_msync): 
		{ 
			printf("msync");
			return (3);
		}
		case (SYS_vfork): 
		{ 
			printf("vfork");
			return (0);
		}
		case (SYS_geteuid): 
		{ 
			printf("geteuid32");
			return (0);
		}
		case (SYS_getegid): 
		{ 
			printf("getegid32");
			return (0);
		}
		case (SYS_setreuid): 
		{ 
			printf("setreuid32");
			return (2);
		}
		case (SYS_munmap): 
		{ 
			printf("munmap");
			return (2);
		}
		case (SYS_mprotect): 
		{ 
			printf("mprotect");
			return (3);
		}
		case (SYS_madvise): 
		{ 
			printf("madvise");
			return (3);
		}
		case (SYS_vhangup): 
		{ 
			printf("vhangup");
			return (0);
		}
		case (SYS_mincore): 
		{ 
			printf("mincore");
			return (3);
		}
		case (SYS_getpgrp): 
		{ 
			printf("getpgrp");
			return (0);
		}
		case (SYS_setgroups): 
		{ 
			printf("setgroups32");
			return (2);
		}
		case (SYS_setitimer): 
		{ 
			printf("setitimer");
			return (3);
		}
		case (SYS_swapon): 
		{ 
			printf("swapon");
			return (2);
		}
		case (SYS_getitimer): 
		{ 
			printf("getitimer");
			return (2);
		}
		case (SYS_setuid): 
		{ 
			printf("setuid32");
			return (1);
		}
		case (SYS_sethostname): 
		{ 
			printf("sethostname");
			return (2);
		}
		case (SYS_setgid): 
		{ 
			printf("setgid32");
			return (1);
		}
		case (SYS_dup2): 
		{ 
			printf("dup2");
			return (2);
		}
		case (SYS_setfsuid): 
		{ 
			printf("setfsuid32");
			return (1);
		}
		case (SYS_fcntl): 
		{ 
			printf("fcntl");
			return (3);
		}
		case (SYS_setfsgid): 
		{ 
			printf("setfsgid32");
			return (1);
		}
		case (SYS_fsync): 
		{ 
			printf("fsync");
			return (1);
		}
		case (SYS_setpriority): 
		{ 
			printf("setpriority");
			return (3);
		}
		case (SYS_socket): 
		{ 
			printf("socket");
			return (3);
		}
		case (SYS_connect): 
		{ 
			printf("connect");
			return (3);
		}
		case (SYS_accept): 
		{ 
			printf("accept");
			return (3);
		}
		case (SYS_getpriority): 
		{ 
			printf("getpriority");
			return (2);
		}
		case (SYS_rt_sigreturn): 
		{ 
			printf("rt_sigreturn");
			return (0);
		}
		case (SYS_rt_sigaction): 
		{ 
			printf("rt_sigaction");
			return (5);
		}
		case (SYS_rt_sigprocmask): 
		{ 
			printf("rt_sigprocmask");
			return (4);
		}
		case (SYS_rt_sigpending): 
		{ 
			printf("rt_sigpending");
			return (2);
		}
		case (SYS_rt_sigtimedwait): 
		{ 
			printf("rt_sigtimedwait");
			return (4);
		}
		case (SYS_rt_sigqueueinfo): 
		{ 
			printf("rt_sigqueueinfo");
			return (3);
		}
		case (SYS_rt_sigsuspend): 
		{ 
			printf("rt_sigsuspend");
			return (2);
		}
		case (SYS_setresuid): 
		{ 
			printf("setresuid32");
			return (3);
		}
		case (SYS_recvmsg): 
		{ 
			printf("recvmsg");
			return (3);
		}
		case (SYS_getgroups): 
		{ 
			printf("getgroups32");
			return (2);
		}
		case (SYS_gettimeofday): 
		{ 
			printf("gettimeofday");
			return (2);
		}
		case (SYS_getrusage): 
		{ 
			printf("getrusage");
			return (2);
		}
		case (SYS_getsockopt): 
		{ 
			printf("getsockopt");
			return (5);
		}
		case (SYS_getcwd): 
		{ 
			printf("getcwd");
			return (2);
		}
		case (SYS_readv): 
		{ 
			printf("readv");
			return (3);
		}
		case (SYS_writev): 
		{ 
			printf("writev");
			return (3);
		}
		case (SYS_settimeofday): 
		{ 
			printf("settimeofday");
			return (2);
		}
		case (SYS_fchmod): 
		{ 
			printf("fchmod");
			return (2);
		}
		case (SYS_recvfrom): 
		{ 
			printf("recvfrom");
			return (6);
		}
		case (SYS_rename): 
		{ 
			printf("rename");
			return (2);
		}
		case (SYS_truncate): 
		{ 
			printf("truncate");
			return (2);
		}
		case (SYS_ftruncate): 
		{ 
			printf("ftruncate");
			return (2);
		}
		case (SYS_flock): 
		{ 
			printf("flock");
			return (2);
		}
		case (SYS_sendto): 
		{ 
			printf("sendto");
			return (6);
		}
		case (SYS_shutdown): 
		{ 
			printf("shutdown");
			return (2);
		}
		case (SYS_socketpair): 
		{ 
			printf("socketpair");
			return (4);
		}
		case (SYS_mkdir): 
		{ 
			printf("mkdir");
			return (2);
		}
		case (SYS_rmdir): 
		{ 
			printf("rmdir");
			return (1);
		}
		case (SYS_utimes): 
		{ 
			printf("utimes");
			return (2);
		}
		case (SYS_getpeername): 
		{ 
			printf("getpeername");
			return (3);
		}
		case (SYS_futex): 
		{ 
			printf("futex");
			return (6);
		}
		case (SYS_gettid): 
		{ 
			printf("gettid");
			return (0);
		}
		case (SYS_getrlimit): 
		{ 
			printf("getrlimit");
			return (2);
		}
		case (SYS_setrlimit): 
		{ 
			printf("setrlimit");
			return (2);
		}
		case (SYS_prctl): 
		{ 
			printf("prctl");
			return (5);
		}
		case (SYS_getsockname): 
		{ 
			printf("getsockname");
			return (3);
		}
		case (SYS_poll): 
		{ 
			printf("poll");
			return (3);
		}
		case (SYS_statfs): 
		{ 
			printf("statfs");
			return (2);
		}
		case (SYS_fstatfs): 
		{ 
			printf("fstatfs");
			return (2);
		}
		case (SYS_sched_setaffinity): 
		{ 
			printf("sched_setaffinity");
			return (3);
		}
		case (SYS_setdomainname): 
		{ 
			printf("setdomainname");
			return (2);
		}
		case (SYS_quotactl): 
		{ 
			printf("quotactl");
			return (4);
		}
		case (SYS_set_tid_address): 
		{ 
			printf("set_tid_address");
			return (1);
		}
		case (SYS_mount): 
		{ 
			printf("mount");
			return (5);
		}
		case (SYS_ustat): 
		{ 
			printf("ustat");
			return (2);
		}
		case (SYS_setxattr): 
		{ 
			printf("setxattr");
			return (5);
		}
		case (SYS_fsetxattr): 
		{ 
			printf("fsetxattr");
			return (5);
		}
		case (SYS_getxattr): 
		{ 
			printf("lgetxattr");
			return (4);
		}
		case (SYS_setsid): 
		{ 
			printf("setsid");
			return (0);
		}
		case (SYS_fchdir): 
		{ 
			printf("fchdir");
			return (1);
		}
		case (SYS_fgetxattr): 
		{ 
			printf("fgetxattr");
			return (4);
		}
		case (SYS_listxattr): 
		{ 
			printf("listxattr");
			return (3);
		}
		case (SYS_flistxattr): 
		{ 
			printf("flistxattr");
			return (3);
		}
		case (SYS_removexattr): 
		{ 
			printf("lremovexattr");
			return (2);
		}
		case (SYS_query_module): 
		{ 
			printf("query_module");
			return (5);
		}
		case (SYS_setpgid): 
		{ 
			printf("setpgid");
			return (2);
		}
		case (SYS_fremovexattr): 
		{ 
			printf("fremovexattr");
			return (2);
		}
		case (SYS_kill): 
		{ 
			printf("tkill");
			return (2);
		}
		case (SYS_uname): 
		{ 
			printf("uname");
			return (1);
		}
		case (SYS_init_module): 
		{ 
			printf("init_module");
			return (3);
		}
		case (SYS_personality): 
		{ 
			printf("personality");
			return (1);
		}
		case (SYS_remap_file_pages): 
		{ 
			printf("remap_file_pages");
			return (5);
		}
		case (SYS_epoll_create): 
		{ 
			printf("epoll_create");
			return (1);
		}
		case (SYS_epoll_ctl): 
		{ 
			printf("epoll_ctl");
			return (4);
		}
		case (SYS_epoll_wait): 
		{ 
			printf("epoll_wait");
			return (4);
		}
		case (SYS_getppid): 
		{ 
			printf("getppid");
			return (0);
		}
		case (SYS_lstat): 
		{ 
			printf("lstat");
			return (2);
		}
		case (SYS_uselib): 
		{ 
			printf("uselib");
			return (1);
		}
		case (SYS_readahead): 
		{ 
			printf("readahead");
			return (4);
		}
		case (SYS_syslog): 
		{ 
			printf("syslog");
			return (3);
		}
		case (SYS_lookup_dcookie): 
		{ 
			printf("lookup_dcookie");
			return (4);
		}
		case (SYS_fadvise64): 
		{ 
			printf("fadvise64");
			return (5);
		}
		case (SYS_tgkill): 
		{ 
			printf("tgkill");
			return (3);
		}
		case (SYS_swapoff): 
		{ 
			printf("swapoff");
			return (1);
		}
		case (SYS_sysinfo): 
		{ 
			printf("sysinfo");
			return (1);
		}
		case (SYS_clone): 
		{ 
			printf("clone");
			return (5);
		}
		case (SYS_modify_ldt): 
		{ 
			printf("modify_ldt");
			return (3);
		}
		case (SYS_adjtimex): 
		{ 
			printf("adjtimex");
			return (1);
		}
		case (SYS_create_module): 
		{ 
			printf("create_module");
			return (2);
		}
		case (SYS_delete_module): 
		{ 
			printf("delete_module");
			return (2);
		}
		case (SYS_get_kernel_syms): 
		{ 
			printf("get_kernel_syms");
			return (1);
		}
		case (SYS_getpgid): 
		{ 
			printf("getpgid");
			return (1);
		}
		case (SYS_sysfs): 
		{ 
			printf("sysfs");
			return (3);
		}
		case (SYS_afs_syscall): 
		{ 
			printf("afs_syscall");
			return (5);
		}
		case (SYS_stat): 
		{ 
			printf("stat");
			return (2);
		}
		case (SYS_mlock): 
		{ 
			printf("mlock");
			return (2);
		}
		case (SYS_munlock): 
		{ 
			printf("munlock");
			return (2);
		}
		case (SYS_mlockall): 
		{ 
			printf("mlockall");
			return (1);
		}
		case (SYS_munlockall): 
		{ 
			printf("munlockall");
			return (0);
		}
		case (SYS_sched_setparam): 
		{ 
			printf("sched_setparam");
			return (2);
		}
		case (SYS_sched_getparam): 
		{ 
			printf("sched_getparam");
			return (2);
		}
		case (SYS_sched_setscheduler): 
		{ 
			printf("sched_setscheduler");
			return (3);
		}
		case (SYS_sched_getscheduler): 
		{ 
			printf("sched_getscheduler");
			return (1);
		}
		case (SYS_sched_yield): 
		{ 
			printf("sched_yield");
			return (0);
		}
		case (SYS_sched_get_priority_max):
		{ 
			printf("sched_get_priority_max");
			return (1);
		}
		case (SYS_sched_get_priority_min):
		{ 
			printf("sched_get_priority_min");
			return (1);
		}
		case (SYS_sched_rr_get_interval):
		{ 
			printf("sched_rr_get_interval");
			return (2);
		}
		case (SYS_nanosleep): 
		{ 
			printf("nanosleep");
			return (2);
		}
		case (SYS_mremap): 
		{ 
			printf("mremap");
			return (5);
		}
		case (SYS_getsid): 
		{ 
			printf("getsid");
			return (1);
		}
		case (SYS_fdatasync): 
		{ 
			printf("fdatasync");
			return (1);
		}
		case (SYS_nfsservctl): 
		{ 
			printf("nfsservctl");
			return (3);
		}
		case (SYS_clock_settime): 
		{ 
			printf("clock_settime");
			return (2);
		}
		case (SYS_clock_gettime): 
		{ 
			printf("clock_gettime");
			return (2);
		}
		case (SYS_clock_getres): 
		{ 
			printf("clock_getres");
			return (2);
		}
		case (SYS_clock_nanosleep): 
		{ 
			printf("clock_nanosleep");
			return (4);
		}
		case (SYS_sched_getaffinity): 
		{ 
			printf("sched_getaffinity");
			return (3);
		}
		case (SYS_timer_settime): 
		{ 
			printf("timer_settime");
			return (4);
		}
		case (SYS_timer_gettime): 
		{ 
			printf("timer_gettime");
			return (2);
		}
		case (SYS_timer_getoverrun): 
		{ 
			printf("timer_getoverrun");
			return (1);
		}
		case (SYS_timer_delete): 
		{ 
			printf("timer_delete");
			return (1);
		}
		case (SYS_timer_create): 
		{ 
			printf("timer_create");
			return (3);
		}
		case (SYS_io_setup): 
		{ 
			printf("io_setup");
			return (2);
		}
		case (SYS_io_destroy): 
		{ 
			printf("io_destroy");
			return (1);
		}
		case (SYS_io_submit): 
		{ 
			printf("io_submit");
			return (3);
		}
		case (SYS_io_cancel): 
		{ 
			printf("io_cancel");
			return (3);
		}
		case (SYS_mq_open): 
		{ 
			printf("mq_open");
			return (4);
		}
		case (SYS_mq_unlink): 
		{ 
			printf("mq_unlink");
			return (1);
		}
		case (SYS_mq_timedsend): 
		{ 
			printf("mq_timedsend");
			return (5);
		}
		case (SYS_mq_timedreceive): 
		{ 
			printf("mq_timedreceive");
			return (5);
		}
		case (SYS_mq_notify): 
		{ 
			printf("mq_notify");
			return (2);
		}
		case (SYS_mq_getsetattr): 
		{ 
			printf("mq_getsetattr");
			return (3);
		}
		case (SYS_waitid): 
		{ 
			printf("waitid");
			return (5);
		}
		case (SYS_tee): 
		{ 
			printf("tee");
			return (4);
		}
		case (SYS_add_key): 
		{ 
			printf("add_key");
			return (5);
		}
		case (SYS_request_key): 
		{ 
			printf("request_key");
			return (4);
		}
		case (SYS_keyctl): 
		{ 
			printf("keyctl");
			return (5);
		}
		case (SYS_openat): 
		{ 
			printf("openat");
			return (4);
		}
		case (SYS_mkdirat): 
		{ 
			printf("mkdirat");
			return (3);
		}
		case (SYS_mknodat): 
		{ 
			printf("mknodat");
			return (4);
		}
		case (SYS_fchownat): 
		{ 
			printf("fchownat");
			return (5);
		}
		case (SYS_futimesat): 
		{ 
			printf("futimesat");
			return (3);
		}
		case (SYS_newfstatat): 
		{ 
			printf("fstatat64");
			return (4);
		}
		case (SYS_unlinkat): 
		{ 
			printf("unlinkat");
			return (3);
		}
		case (SYS_renameat): 
		{ 
			printf("renameat");
			return (4);
		}
		case (SYS_linkat): 
		{ 
			printf("linkat");
			return (5);
		}
		case (SYS_symlinkat): 
		{ 
			printf("symlinkat");
			return (3);
		}
		case (SYS_readlinkat): 
		{ 
			printf("readlinkat");
			return (4);
		}
		case (SYS_fchmodat): 
		{ 
			printf("fchmodat");
			return (3);
		}
		case (SYS_faccessat): 
		{ 
			printf("faccessat");
			return (3);
		}
		case (SYS_pselect6): 
		{ 
			printf("pselect6");
			return (6);
		}
		case (SYS_ppoll): 
		{ 
			printf("ppoll");
			return (5);
		}
		case (SYS_unshare): 
		{ 
			printf("unshare");
			return (1);
		}
		case (SYS_set_robust_list): 
		{ 
			printf("set_robust_list");
			return (2);
		}
		case (SYS_get_robust_list): 
		{ 
			printf("get_robust_list");
			return (3);
		}
		case (SYS_migrate_pages): 
		{ 
			printf("migrate_pages");
			return (4);
		}
		case (SYS_mbind): 
		{ 
			printf("mbind");
			return (6);
		}
		case (SYS_get_mempolicy): 
		{ 
			printf("get_mempolicy");
			return (5);
		}
		case (SYS_set_mempolicy): 
		{ 
			printf("set_mempolicy");
			return (3);
		}
		case (SYS_kexec_load): 
		{ 
			printf("kexec_load");
			return (4);
		}
		case (SYS_move_pages): 
		{ 
			printf("move_pages");
			return (6);
		}
		case (SYS_getcpu): 
		{ 
			printf("getcpu");
			return (3);
		}
		case (SYS_epoll_pwait): 
		{ 
			printf("epoll_pwait");
			return (6);
		}
		case (SYS_utimensat): 
		{ 
			printf("utimensat");
			return (4);
		}
		case (SYS_signalfd): 
		{ 
			printf("signalfd");
			return (3);
		}
		case (SYS_timerfd_create): 
		{ 
			printf("timerfd_create");
			return (2);
		}
		case (SYS_eventfd): 
		{ 
			printf("eventfd");
			return (1);
		}
		case (SYS_fallocate): 
		{ 
			printf("fallocate");
			return (6);
		}
		case (SYS_timerfd_settime): 
		{ 
			printf("timerfd_settime");
			return (4);
		}
		case (SYS_timerfd_gettime): 
		{ 
			printf("timerfd_gettime");
			return (2);
		}
		case (SYS_signalfd4): 
		{ 
			printf("signalfd4");
			return (4);
		}
		case (SYS_eventfd2): 
		{ 
			printf("eventfd2");
			return (2);
		}
		case (SYS_epoll_create1): 
		{ 
			printf("epoll_create1");
			return (1);
		}
		case (SYS_dup3): 
		{ 
			printf("dup3");
			return (3);
		}
		case (SYS_pipe2): 
		{ 
			printf("pipe2");
			return (2);
		}
		case (SYS_inotify_init1): 
		{ 
			printf("inotify_init1");
			return (1);
		}
		case (SYS_accept4): 
		{ 
			printf("accept4");
			return (4);
		}
		case (SYS_preadv): 
		{ 
			printf("preadv");
			return (5);
		}
		case (SYS_rt_tgsigqueueinfo): 
		{ 
			printf("rt_tgsigqueueinfo");
			return (4);
		}
		case (SYS_perf_event_open): 
		{ 
			printf("perf_event_open");
			return (5);
		}
		case (SYS_recvmmsg): 
		{ 
			printf("recvmmsg");
			return (5);
		}
		case (SYS_fanotify_init): 
		{ 
			printf("fanotify_init");
			return (2);
		}
		case (SYS_fanotify_mark): 
		{ 
			printf("fanotify_mark");
			return (6);
		}
		case (SYS_prlimit64): 
		{ 
			printf("prlimit64");
			return (4);
		}
		case (SYS_name_to_handle_at): 
		{ 
			printf("name_to_handle_at");
			return (5);
		}
		case (SYS_open_by_handle_at): 
		{ 
			printf("open_by_handle_at");
			return (3);
		}
		case (SYS_clock_adjtime): 
		{ 
			printf("clock_adjtime");
			return (2);
		}
		case (SYS_syncfs): 
		{ 
			printf("syncfs");
			return (1);
		}
		case (SYS_sendmmsg): 
		{ 
			printf("sendmmsg");
			return (4);
		}
		case (SYS_setns): 
		{ 
			printf("setns");
			return (2);
		}
		case (SYS_process_vm_readv): 
		{ 
			printf("process_vm_readv");
			return (6);
		}
		case (SYS_process_vm_writev): 
		{ 
			printf("process_vm_writev");
			return (6);
		}
		case (SYS_kcmp): 
		{ 
			printf("kcmp");
			return (5);
		}
		case (SYS_finit_module): 
		{ 
			printf("finit_module");
			return (3);
		}
		case (SYS_sched_setattr): 
		{ 
			printf("sched_setattr");
			return (3);
		}
		case (SYS_sched_getattr): 
		{ 
			printf("sched_getattr");
			return (4);
		}
		case (SYS_renameat2): 
		{ 
			printf("renameat2");
			return (5);
		}
		case (SYS_seccomp): 
		{ 
			printf("seccomp");
			return (3);
		}
		case (SYS_getrandom): 
		{ 
			printf("getrandom");
			return (3);
		}
		case (SYS_memfd_create): 
		{ 
			printf("memfd_create");
			return (2);
		}
		case (SYS_bpf): 
		{ 
			printf("bpf");
			return (3);
		}
		case (SYS_execveat): 
		{ 
			printf("execveat");
			return (5);
		}
		default:
			printf("Syscall Not found");
			return 0;

	}

}
