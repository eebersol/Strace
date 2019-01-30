/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signal.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebersol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 15:35:20 by eebersol          #+#    #+#             */
/*   Updated: 2018/08/17 15:35:21 by eebersol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/strace.h"

void get_signal_name(int key)
{
	switch (key){
		case (SIGHUP):
			printf("SIGHUP");
		case (SIGINT):
			printf("SIGINT");
		case (SIGQUIT):
			printf("SIGQUIT");
		case (SIGILL):
			printf("SIGILL");
		case (SIGTRAP):
			printf("SIGTRAP");
		case (SIGABRT):
			printf("SIGABRT");
		case (SIGBUS):
			printf("SIGBUS");
		case (SIGFPE):
			printf("SIGFPE");
		case (SIGKILL):
			printf("SIGKILL");
		case (SIGUSR1):
			printf("SIGUSR1");
		case (SIGSEGV):
			printf("SIGSEGV");
		case (SIGUSR2):
			printf("SIGUSR2");
		case (SIGPIPE):
			printf("SIGPIPE");
		case (SIGALRM):
			printf("SIGALRM");
		case (SIGTERM):
			printf("SIGTERM");
		case (SIGCHLD):
			printf("SIGCHLD");
		case (SIGCONT):
			printf("SIGCONT");
		case (SIGSTOP):
			printf("SIGSTOP");
		case (SIGTSTP):
			printf("SIGTSTP");
		case (SIGTTIN):
			printf("SIGTTIN");
		case (SIGTTOU):
			printf("SIGTTOU");
		case (SIGURG):
			printf("SIGURG");
		case (SIGXCPU):
			printf("SIGXCPU");
		case (SIGVTALRM):
			printf("SIGVTALRM");
		case (SIGPROF):
			printf("SIGPROF");
		case (SIGWINCH):
			printf("SIGWINCH");
		case (SIGPOLL):
			printf("SIGPOLL");
		case (SIGPWR):
			printf("SIGPWR");
		case (SIGSYS):
			printf("SIGSYS");
		default:
			printf(" %d", key);
	}
}