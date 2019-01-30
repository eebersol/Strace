#ifndef SYSCALLS_TABLE_H
# define SYSCALLS_TABLE_H
# define SYSCALL_NUMBER 333

enum e_param {
	E_NONE   = 0,
	E_INT    = 1,
	E_UINT   = 2,
	E_PTR    = 3,
	E_STR    = 4,
	E_STRUCT = 5,
    E_SPE    = 6
};

typedef struct		s_syscall {
	char const *const			sys_name;
	int const					sys_argc;
	enum e_param const          sys_argv[7];
}					t_syscall;

extern t_syscall const syscalls_table[SYSCALL_NUMBER];

#endif 
