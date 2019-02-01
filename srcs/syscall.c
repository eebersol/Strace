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


pid_t 	child;
struct  user_regs_struct regs;
int 	status;

static int	is_print(char c) { return (isprint(c) || c == '\n' ? 1 : 0); }
static int	is_printable(char *str) {
	int i = -1;

	while (str && str[++i]) {
		if  (!is_print(str[i]))
			return (0);
	}
	if (i == 0)
		return (0);
	return (1);
}

static unsigned long long int select_register(int i) {
	switch(i) {
		case 0: 	return regs.rdi;
		case 1: 	return regs.rsi;
		case 2: 	return regs.rdx;
		case 3: 	return regs.r10;
		case 4: 	return regs.r8;
		case 5: 	return regs.r9;
		default: 	return 0;
	}
}
static int get_data(long reg) {
	long 	res;
	char 	message[10000];
	char 	*temp;
	int 	i = -1;

	temp 	= message;
	res 	= 100;
	while (++i < 8) {
		res = ptrace(PTRACE_PEEKDATA, child, reg + (i * 8), NULL);
		memcpy(temp, &res, 8);
		temp += 8;
	}
	if (!errno) {
		if (is_printable(message))
			printf("\"%s\"", (message));
		else
			printf("%p", message);
	}
	else
		printf("%lld ", reg);
	return (1);
			
}

void 	get_array_data(unsigned long addr, t_syscall const syscall) {
	int		len;
	char	*ret;
	char	**tmp;

	len = 0;
	tmp = (char **)addr;
	if (tmp) {
		while (tmp[len])
			len++;
	}
	if (len > syscall.sys_argc)
		printf("[*/ %d vars */]", len);
	else {
		printf("[");
		get_data(regs.rdi);
		printf("]");
	}
}


int  print_syscall(pid_t child_tmp, struct  user_regs_struct regs_tmp, t_syscall const syscall, int status_tmp) {

	child 	= child_tmp;
	regs 	= regs_tmp;
	status = status_tmp;
	printf("%s(", syscall.sys_name);
	for (int i = 0; i < syscall.sys_argc; i++) {

		if (regs.rdi == 0 && i == 0)
			regs.orig_rax == SYS_exit_group ? printf("0") : printf("NULL");
		else
		{
			if (syscall.sys_argv[i] == E_NONE)
				break;
			else if (syscall.sys_argv[i] == E_INT)
				printf("%ld", select_register(i));
			else if (syscall.sys_argv[i] == E_UINT)
				printf("%u", select_register(i));
			else if (syscall.sys_argv[i] == E_STR)
				get_data(select_register(i));
			else if (syscall.sys_argv[i] == E_SPE)
				get_array_data(select_register(i), syscall);
			else if (syscall.sys_argv[i] == E_PTR)
				get_data(select_register(i));
			else if (syscall.sys_argv[i] == E_STRUCT)
				select_register(i) ? printf("{ 0x%lx }", select_register(i)) : printf("NULL");
			else
				printf("ERROR");
		}
			if (i + 1 < syscall.sys_argc)
				printf(", ");
			else
				printf(")");
	}
	return (0);
}

int print_syscall_return(struct  user_regs_struct regs) {
	if ( (long)regs.rax == -1)
		printf(" = ?\n", (long)regs.rax);
	else if ( (long)regs.rax < -1) {
		printf(" = -1 ");
		get_errno_name((long)regs.rax);
	}
	else if ((long)regs.rax > 1000 || (long)regs.rax < -1000)
		printf(" = %p\n", regs.rax);
	else
		printf(" = %ld\n", regs.rax);
	return (1);
}