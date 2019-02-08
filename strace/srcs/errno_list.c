/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errno_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebersol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 15:35:12 by eebersol          #+#    #+#             */
/*   Updated: 2018/08/17 15:35:15 by eebersol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/strace.h"

int get_errno_name(int key)
{
	key = 0 - key;
	switch (key) {
		case ENOENT:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ENOENT (", strerror(ENOENT)), ")"));
		case EPERM:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EPERM (" , strerror(EPERM)), ")"));
		case ESRCH:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ESRCH (" , strerror(ESRCH)), ")"));
		case EINTR:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EINTR (" , strerror(EINTR)), ")"));
		case EIO:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EIO: (" , strerror(EIO)), ")"));
		case ENXIO:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ENXIO (" , strerror(ENXIO)), ")"));
		case E2BIG:
			return printf("%s\n", ft_strfjoin(ft_strjoin("E2BIG (" , strerror(E2BIG)), ")"));
		case ENOEXEC:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ENOEXEC (" , strerror(ENOEXEC)), ")"));
		case EBADF:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EBADF (" , strerror(EBADF)), ")"));
		case ECHILD:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ECHILD (" , strerror(ECHILD)), ")"));
		case EDEADLK:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EDEADLK (" , strerror(EDEADLK)), ")"));
		case ENOMEM:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ENOMEM (" , strerror(ENOMEM)), ")"));
		case EACCES:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EACCES (" , strerror(EACCES)), ")"));
		case EFAULT:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EFAULT (" , strerror(EFAULT)), ")"));
		case ENOTBLK:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ENOTBLK (" , strerror(ENOTBLK)), ")"));
		case EBUSY:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EBUSY (" , strerror(EBUSY)), ")"));
		case EEXIST:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EEXIST (" , strerror(EEXIST)), ")"));
		case EXDEV:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EXDEV (" , strerror(EXDEV)), ")"));
		case ENODEV:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ENODEV (" , strerror(ENODEV)), ")"));
		case ENOTDIR:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ENOTDIR (" , strerror(ENOTDIR)), ")"));
		case EISDIR:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EISDIR (" , strerror(EISDIR)), ")"));
		case EINVAL:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EINVAL (" , strerror(EINVAL)), ")"));
		case EMFILE:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EMFILE (" , strerror(EMFILE)), ")"));
		case ENFILE:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ENFILE (" , strerror(ENFILE)), ")"));
		case ENOTTY:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ENOTTY (" , strerror(ENOTTY)), ")"));
		case ETXTBSY:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ETXTBSY (" , strerror(ETXTBSY)), ")"));
		case EFBIG:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EFBIG (" , strerror(EFBIG)), ")"));
		case ENOSPC:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ENOSPC (" , strerror(ENOSPC)), ")"));
		case ESPIPE:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ESPIPE (" , strerror(ESPIPE)), ")"));
		case EROFS:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EROFS (" , strerror(EROFS)), ")"));
		case EMLINK:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EMLINK (" , strerror(EMLINK)), ")"));
		case EPIPE:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EPIPE (" , strerror(EPIPE)), ")"));
		case EDOM:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EDOM: (" , strerror(EDOM)), ")"));
		case ERANGE:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ERANGE (" , strerror(ERANGE)), ")"));
		case EAGAIN:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EAGAIN (" , strerror(EAGAIN)), ")"));
		case EINPROGRESS:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EINPROGRESS (" , strerror(EINPROGRESS)), ")"));
		case EALREADY:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EALREADY (" , strerror(EALREADY)), ")"));
		case ENOTSOCK:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ENOTSOCK (" , strerror(ENOTSOCK)), ")"));
		case EMSGSIZE:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EMSGSIZE (" , strerror(EMSGSIZE)), ")"));
		case EPROTOTYPE:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EPROTOTYPE (" , strerror(EPROTOTYPE)), ")"));
		case ENOPROTOOPT:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ENOPROTOOPT (" , strerror(ENOPROTOOPT)), ")"));
		case EPROTONOSUPPORT:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EPROTONOSUPPORT (" , strerror(EPROTONOSUPPORT)), ")"));
		case ESOCKTNOSUPPORT:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ESOCKTNOSUPPORT (" , strerror(ESOCKTNOSUPPORT)), ")"));
		case EOPNOTSUPP:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EOPNOTSUPP (" , strerror(EOPNOTSUPP)), ")"));
		case EPFNOSUPPORT:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EPFNOSUPPORT (" , strerror(EPFNOSUPPORT)), ")"));
		case EAFNOSUPPORT:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EAFNOSUPPORT (" , strerror(EAFNOSUPPORT)), ")"));
		case EADDRINUSE:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EADDRINUSE (" , strerror(EADDRINUSE)), ")"));
		case EADDRNOTAVAIL:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EADDRNOTAVAIL (" , strerror(EADDRNOTAVAIL)), ")"));
		case ENETDOWN:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ENETDOWN (" , strerror(ENETDOWN)), ")"));
		case ENETUNREACH:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ENETUNREACH (" , strerror(ENETUNREACH)), ")"));
		case ENETRESET:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ENETRESET (" , strerror(ENETRESET)), ")"));
		case ECONNABORTED:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ECONNABORTED (" , strerror(ECONNABORTED)), ")"));
		case ECONNRESET:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ECONNRESET (" , strerror(ECONNRESET)), ")"));
		case ENOBUFS:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ENOBUFS (" , strerror(ENOBUFS)), ")"));
		case EISCONN:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EISCONN (" , strerror(EISCONN)), ")"));
		case ENOTCONN:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ENOTCONN (" , strerror(ENOTCONN)), ")"));
		case EDESTADDRREQ:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EDESTADDRREQ (" , strerror(EDESTADDRREQ)), ")"));
		case ESHUTDOWN:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ESHUTDOWN (" , strerror(ESHUTDOWN)), ")"));
		case ETOOMANYREFS:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ETOOMANYREFS (" , strerror(ETOOMANYREFS)), ")"));
		case ETIMEDOUT:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ETIMEDOUT (" , strerror(ETIMEDOUT)), ")"));
		case ECONNREFUSED:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ECONNREFUSED (" , strerror(ECONNREFUSED)), ")"));
		case ELOOP:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ELOOP (" , strerror(ELOOP)), ")"));
		case ENAMETOOLONG:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ENAMETOOLONG (" , strerror(ENAMETOOLONG)), ")"));
		case EHOSTDOWN:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EHOSTDOWN (" , strerror(EHOSTDOWN)), ")"));
		case EHOSTUNREACH:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EHOSTUNREACH (" , strerror(EHOSTUNREACH)), ")"));
		case ENOTEMPTY:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ENOTEMPTY (" , strerror(ENOTEMPTY)), ")"));
		case EUSERS:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EUSERS (" , strerror(EUSERS)), ")"));
		case EDQUOT:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EDQUOT (" , strerror(EDQUOT)), ")"));
		case ESTALE:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ESTALE (" , strerror(ESTALE)), ")"));
		case EREMOTE:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EREMOTE (" , strerror(EREMOTE)), ")"));
		case ENOLCK:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ENOLCK (" , strerror(ENOLCK)), ")"));
		case ENOSYS:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ENOSYS (" , strerror(ENOSYS)), ")"));
		case EILSEQ:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EILSEQ (" , strerror(EILSEQ)), ")"));
		case EBADMSG:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EBADMSG (" , strerror(EBADMSG)), ")"));
		case EIDRM:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EIDRM (" , strerror(EIDRM)), ")"));
		case EMULTIHOP:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EMULTIHOP (" , strerror(EMULTIHOP)), ")"));
		case ENODATA:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ENODATA (" , strerror(ENODATA)), ")"));
		case ENOLINK:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ENOLINK (" , strerror(ENOLINK)), ")"));
		case ENOMSG:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ENOMSG (" , strerror(ENOMSG)), ")"));
		case ENOSR:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ENOSR (" , strerror(ENOSR)), ")"));
		case ENOSTR:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ENOSTR (" , strerror(ENOSTR)), ")"));
		case EOVERFLOW:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EOVERFLOW (" , strerror(EOVERFLOW)), ")"));
		case EPROTO:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EPROTO (" , strerror(EPROTO)), ")"));
		case ETIME:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ETIME (" , strerror(ETIME)), ")"));
		case ECANCELED:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ECANCELED (" , strerror(ECANCELED)), ")"));
		case EOWNERDEAD:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EOWNERDEAD (" , strerror(EOWNERDEAD)), ")"));
		case ENOTRECOVERABLE:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ENOTRECOVERABLE (" , strerror(ENOTRECOVERABLE)), ")"));
		case ERESTART:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ERESTART (" , strerror(ERESTART)), ")"));
		case ECHRNG:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ECHRNG (" , strerror(ECHRNG)), ")"));
		case EL2NSYNC:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EL2NSYNC (" , strerror(EL2NSYNC)), ")"));
		case EL3HLT:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EL3HLT (" , strerror(EL3HLT)), ")"));
		case EL3RST:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EL3RST (" , strerror(EL3RST)), ")"));
		case ELNRNG:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ELNRNG (" , strerror(ELNRNG)), ")"));
		case EUNATCH:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EUNATCH (" , strerror(EUNATCH)), ")"));
		case ENOCSI:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ENOCSI (" , strerror(ENOCSI)), ")"));
		case EL2HLT:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EL2HLT (" , strerror(EL2HLT)), ")"));
		case EBADE:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EBADE (" , strerror(EBADE)), ")"));
		case EBADR:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EBADR (" , strerror(EBADR)), ")"));
		case EXFULL:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EXFULL (" , strerror(EXFULL)), ")"));
		case ENOANO:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ENOANO (" , strerror(ENOANO)), ")"));
		case EBADRQC:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EBADRQC (" , strerror(EBADRQC)), ")"));
		case EBADSLT:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EBADSLT (" , strerror(EBADSLT)), ")"));
		case EBFONT:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EBFONT (" , strerror(EBFONT)), ")"));
		case ENONET:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ENONET (" , strerror(ENONET)), ")"));
		case ENOPKG:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ENOPKG (" , strerror(ENOPKG)), ")"));
		case EADV:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EADV (" , strerror(EADV)), ")"));
		case ESRMNT:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ESRMNT (" , strerror(ESRMNT)), ")"));
		case ECOMM:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ECOMM (" , strerror(ECOMM)), ")"));
		case EDOTDOT:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EDOTDOT (" , strerror(EDOTDOT)), ")"));
		case ENOTUNIQ:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ENOTUNIQ (" , strerror(ENOTUNIQ)), ")"));
		case EBADFD:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EBADFD (" , strerror(EBADFD)), ")"));
		case EREMCHG:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EREMCHG (" , strerror(EREMCHG)), ")"));
		case ELIBACC:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ELIBACC (" , strerror(ELIBACC)), ")"));
		case ELIBBAD:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ELIBBAD (" , strerror(ELIBBAD)), ")"));
		case ELIBSCN:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ELIBSCN (" , strerror(ELIBSCN)), ")"));
		case ELIBMAX:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ELIBMAX (" , strerror(ELIBMAX)), ")"));
		case ELIBEXEC:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ELIBEXEC (" , strerror(ELIBEXEC)), ")"));
		case ESTRPIPE:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ESTRPIPE (" , strerror(ESTRPIPE)), ")"));
		case EUCLEAN:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EUCLEAN (" , strerror(EUCLEAN)), ")"));
		case ENOTNAM:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ENOTNAM (" , strerror(ENOTNAM)), ")"));
		case ENAVAIL:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ENAVAIL (" , strerror(ENAVAIL)), ")"));
		case EISNAM:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EISNAM (" , strerror(EISNAM)), ")"));
		case EREMOTEIO:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EREMOTEIO (" , strerror(EREMOTEIO)), ")"));
		case ENOMEDIUM:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ENOMEDIUM (" , strerror(ENOMEDIUM)), ")"));
		case EMEDIUMTYPE:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EMEDIUMTYPE (" , strerror(EMEDIUMTYPE)), ")"));
		case ENOKEY:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ENOKEY (" , strerror(ENOKEY)), ")"));
		case EKEYEXPIRED:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EKEYEXPIRED (" , strerror(EKEYEXPIRED)), ")"));
		case EKEYREVOKED:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EKEYREVOKED (" , strerror(EKEYREVOKED)), ")"));
		case EKEYREJECTED:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EKEYREJECTED (" , strerror(EKEYREJECTED)), ")"));
		case ERFKILL:
			return printf("%s\n", ft_strfjoin(ft_strjoin("ERFKILL (" , strerror(ERFKILL)), ")"));
		case EHWPOISON:
			return printf("%s\n", ft_strfjoin(ft_strjoin("EHWPOISON (" , strerror(EHWPOISON)), ")"));
		default:
			return printf("errno not found");
	}
}
