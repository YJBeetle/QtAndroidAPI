#include "../../JString.hpp"
#include "./OsConstants.hpp"

namespace android::system
{
	// Fields
	jint OsConstants::AF_INET()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"AF_INET"
		);
	}
	jint OsConstants::AF_INET6()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"AF_INET6"
		);
	}
	jint OsConstants::AF_NETLINK()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"AF_NETLINK"
		);
	}
	jint OsConstants::AF_PACKET()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"AF_PACKET"
		);
	}
	jint OsConstants::AF_UNIX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"AF_UNIX"
		);
	}
	jint OsConstants::AF_UNSPEC()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"AF_UNSPEC"
		);
	}
	jint OsConstants::AI_ADDRCONFIG()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"AI_ADDRCONFIG"
		);
	}
	jint OsConstants::AI_ALL()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"AI_ALL"
		);
	}
	jint OsConstants::AI_CANONNAME()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"AI_CANONNAME"
		);
	}
	jint OsConstants::AI_NUMERICHOST()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"AI_NUMERICHOST"
		);
	}
	jint OsConstants::AI_NUMERICSERV()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"AI_NUMERICSERV"
		);
	}
	jint OsConstants::AI_PASSIVE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"AI_PASSIVE"
		);
	}
	jint OsConstants::AI_V4MAPPED()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"AI_V4MAPPED"
		);
	}
	jint OsConstants::ARPHRD_ETHER()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ARPHRD_ETHER"
		);
	}
	jint OsConstants::CAP_AUDIT_CONTROL()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_AUDIT_CONTROL"
		);
	}
	jint OsConstants::CAP_AUDIT_WRITE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_AUDIT_WRITE"
		);
	}
	jint OsConstants::CAP_BLOCK_SUSPEND()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_BLOCK_SUSPEND"
		);
	}
	jint OsConstants::CAP_CHOWN()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_CHOWN"
		);
	}
	jint OsConstants::CAP_DAC_OVERRIDE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_DAC_OVERRIDE"
		);
	}
	jint OsConstants::CAP_DAC_READ_SEARCH()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_DAC_READ_SEARCH"
		);
	}
	jint OsConstants::CAP_FOWNER()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_FOWNER"
		);
	}
	jint OsConstants::CAP_FSETID()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_FSETID"
		);
	}
	jint OsConstants::CAP_IPC_LOCK()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_IPC_LOCK"
		);
	}
	jint OsConstants::CAP_IPC_OWNER()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_IPC_OWNER"
		);
	}
	jint OsConstants::CAP_KILL()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_KILL"
		);
	}
	jint OsConstants::CAP_LAST_CAP()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_LAST_CAP"
		);
	}
	jint OsConstants::CAP_LEASE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_LEASE"
		);
	}
	jint OsConstants::CAP_LINUX_IMMUTABLE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_LINUX_IMMUTABLE"
		);
	}
	jint OsConstants::CAP_MAC_ADMIN()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_MAC_ADMIN"
		);
	}
	jint OsConstants::CAP_MAC_OVERRIDE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_MAC_OVERRIDE"
		);
	}
	jint OsConstants::CAP_MKNOD()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_MKNOD"
		);
	}
	jint OsConstants::CAP_NET_ADMIN()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_NET_ADMIN"
		);
	}
	jint OsConstants::CAP_NET_BIND_SERVICE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_NET_BIND_SERVICE"
		);
	}
	jint OsConstants::CAP_NET_BROADCAST()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_NET_BROADCAST"
		);
	}
	jint OsConstants::CAP_NET_RAW()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_NET_RAW"
		);
	}
	jint OsConstants::CAP_SETFCAP()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_SETFCAP"
		);
	}
	jint OsConstants::CAP_SETGID()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_SETGID"
		);
	}
	jint OsConstants::CAP_SETPCAP()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_SETPCAP"
		);
	}
	jint OsConstants::CAP_SETUID()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_SETUID"
		);
	}
	jint OsConstants::CAP_SYSLOG()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_SYSLOG"
		);
	}
	jint OsConstants::CAP_SYS_ADMIN()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_SYS_ADMIN"
		);
	}
	jint OsConstants::CAP_SYS_BOOT()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_SYS_BOOT"
		);
	}
	jint OsConstants::CAP_SYS_CHROOT()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_SYS_CHROOT"
		);
	}
	jint OsConstants::CAP_SYS_MODULE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_SYS_MODULE"
		);
	}
	jint OsConstants::CAP_SYS_NICE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_SYS_NICE"
		);
	}
	jint OsConstants::CAP_SYS_PACCT()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_SYS_PACCT"
		);
	}
	jint OsConstants::CAP_SYS_PTRACE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_SYS_PTRACE"
		);
	}
	jint OsConstants::CAP_SYS_RAWIO()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_SYS_RAWIO"
		);
	}
	jint OsConstants::CAP_SYS_RESOURCE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_SYS_RESOURCE"
		);
	}
	jint OsConstants::CAP_SYS_TIME()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_SYS_TIME"
		);
	}
	jint OsConstants::CAP_SYS_TTY_CONFIG()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_SYS_TTY_CONFIG"
		);
	}
	jint OsConstants::CAP_WAKE_ALARM()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_WAKE_ALARM"
		);
	}
	jint OsConstants::E2BIG_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"E2BIG"
		);
	}
	jint OsConstants::EACCES_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EACCES"
		);
	}
	jint OsConstants::EADDRINUSE_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EADDRINUSE"
		);
	}
	jint OsConstants::EADDRNOTAVAIL_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EADDRNOTAVAIL"
		);
	}
	jint OsConstants::EAFNOSUPPORT_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EAFNOSUPPORT"
		);
	}
	jint OsConstants::EAGAIN_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EAGAIN"
		);
	}
	jint OsConstants::EAI_AGAIN()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EAI_AGAIN"
		);
	}
	jint OsConstants::EAI_BADFLAGS()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EAI_BADFLAGS"
		);
	}
	jint OsConstants::EAI_FAIL()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EAI_FAIL"
		);
	}
	jint OsConstants::EAI_FAMILY()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EAI_FAMILY"
		);
	}
	jint OsConstants::EAI_MEMORY()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EAI_MEMORY"
		);
	}
	jint OsConstants::EAI_NODATA()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EAI_NODATA"
		);
	}
	jint OsConstants::EAI_NONAME()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EAI_NONAME"
		);
	}
	jint OsConstants::EAI_OVERFLOW()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EAI_OVERFLOW"
		);
	}
	jint OsConstants::EAI_SERVICE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EAI_SERVICE"
		);
	}
	jint OsConstants::EAI_SOCKTYPE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EAI_SOCKTYPE"
		);
	}
	jint OsConstants::EAI_SYSTEM()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EAI_SYSTEM"
		);
	}
	jint OsConstants::EALREADY_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EALREADY"
		);
	}
	jint OsConstants::EBADF_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EBADF"
		);
	}
	jint OsConstants::EBADMSG_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EBADMSG"
		);
	}
	jint OsConstants::EBUSY_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EBUSY"
		);
	}
	jint OsConstants::ECANCELED_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ECANCELED"
		);
	}
	jint OsConstants::ECHILD_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ECHILD"
		);
	}
	jint OsConstants::ECONNABORTED_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ECONNABORTED"
		);
	}
	jint OsConstants::ECONNREFUSED_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ECONNREFUSED"
		);
	}
	jint OsConstants::ECONNRESET_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ECONNRESET"
		);
	}
	jint OsConstants::EDEADLK_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EDEADLK"
		);
	}
	jint OsConstants::EDESTADDRREQ_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EDESTADDRREQ"
		);
	}
	jint OsConstants::EDOM_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EDOM"
		);
	}
	jint OsConstants::EDQUOT_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EDQUOT"
		);
	}
	jint OsConstants::EEXIST_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EEXIST"
		);
	}
	jint OsConstants::EFAULT_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EFAULT"
		);
	}
	jint OsConstants::EFBIG_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EFBIG"
		);
	}
	jint OsConstants::EHOSTUNREACH_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EHOSTUNREACH"
		);
	}
	jint OsConstants::EIDRM_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EIDRM"
		);
	}
	jint OsConstants::EILSEQ_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EILSEQ"
		);
	}
	jint OsConstants::EINPROGRESS_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EINPROGRESS"
		);
	}
	jint OsConstants::EINTR_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EINTR"
		);
	}
	jint OsConstants::EINVAL_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EINVAL"
		);
	}
	jint OsConstants::EIO_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EIO"
		);
	}
	jint OsConstants::EISCONN_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EISCONN"
		);
	}
	jint OsConstants::EISDIR_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EISDIR"
		);
	}
	jint OsConstants::ELOOP_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ELOOP"
		);
	}
	jint OsConstants::EMFILE_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EMFILE"
		);
	}
	jint OsConstants::EMLINK_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EMLINK"
		);
	}
	jint OsConstants::EMSGSIZE_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EMSGSIZE"
		);
	}
	jint OsConstants::EMULTIHOP_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EMULTIHOP"
		);
	}
	jint OsConstants::ENAMETOOLONG_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENAMETOOLONG"
		);
	}
	jint OsConstants::ENETDOWN_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENETDOWN"
		);
	}
	jint OsConstants::ENETRESET_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENETRESET"
		);
	}
	jint OsConstants::ENETUNREACH_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENETUNREACH"
		);
	}
	jint OsConstants::ENFILE_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENFILE"
		);
	}
	jint OsConstants::ENOBUFS_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENOBUFS"
		);
	}
	jint OsConstants::ENODATA_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENODATA"
		);
	}
	jint OsConstants::ENODEV_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENODEV"
		);
	}
	jint OsConstants::ENOENT_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENOENT"
		);
	}
	jint OsConstants::ENOEXEC_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENOEXEC"
		);
	}
	jint OsConstants::ENOLCK_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENOLCK"
		);
	}
	jint OsConstants::ENOLINK_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENOLINK"
		);
	}
	jint OsConstants::ENOMEM_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENOMEM"
		);
	}
	jint OsConstants::ENOMSG_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENOMSG"
		);
	}
	jint OsConstants::ENOPROTOOPT_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENOPROTOOPT"
		);
	}
	jint OsConstants::ENOSPC_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENOSPC"
		);
	}
	jint OsConstants::ENOSR_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENOSR"
		);
	}
	jint OsConstants::ENOSTR_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENOSTR"
		);
	}
	jint OsConstants::ENOSYS_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENOSYS"
		);
	}
	jint OsConstants::ENOTCONN_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENOTCONN"
		);
	}
	jint OsConstants::ENOTDIR_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENOTDIR"
		);
	}
	jint OsConstants::ENOTEMPTY_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENOTEMPTY"
		);
	}
	jint OsConstants::ENOTSOCK_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENOTSOCK"
		);
	}
	jint OsConstants::ENOTSUP_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENOTSUP"
		);
	}
	jint OsConstants::ENOTTY_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENOTTY"
		);
	}
	jint OsConstants::ENXIO_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENXIO"
		);
	}
	jint OsConstants::EOPNOTSUPP_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EOPNOTSUPP"
		);
	}
	jint OsConstants::EOVERFLOW_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EOVERFLOW"
		);
	}
	jint OsConstants::EPERM_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EPERM"
		);
	}
	jint OsConstants::EPIPE_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EPIPE"
		);
	}
	jint OsConstants::EPROTO_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EPROTO"
		);
	}
	jint OsConstants::EPROTONOSUPPORT_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EPROTONOSUPPORT"
		);
	}
	jint OsConstants::EPROTOTYPE_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EPROTOTYPE"
		);
	}
	jint OsConstants::ERANGE_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ERANGE"
		);
	}
	jint OsConstants::EROFS_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EROFS"
		);
	}
	jint OsConstants::ESPIPE_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ESPIPE"
		);
	}
	jint OsConstants::ESRCH_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ESRCH"
		);
	}
	jint OsConstants::ESTALE_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ESTALE"
		);
	}
	jint OsConstants::ETH_P_ALL()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ETH_P_ALL"
		);
	}
	jint OsConstants::ETH_P_ARP()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ETH_P_ARP"
		);
	}
	jint OsConstants::ETH_P_IP()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ETH_P_IP"
		);
	}
	jint OsConstants::ETH_P_IPV6()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ETH_P_IPV6"
		);
	}
	jint OsConstants::ETIME_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ETIME"
		);
	}
	jint OsConstants::ETIMEDOUT_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ETIMEDOUT"
		);
	}
	jint OsConstants::ETXTBSY()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ETXTBSY"
		);
	}
	jint OsConstants::EXDEV()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EXDEV"
		);
	}
	jint OsConstants::EXIT_FAILURE_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EXIT_FAILURE"
		);
	}
	jint OsConstants::EXIT_SUCCESS_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EXIT_SUCCESS"
		);
	}
	jint OsConstants::FD_CLOEXEC()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"FD_CLOEXEC"
		);
	}
	jint OsConstants::FIONREAD()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"FIONREAD"
		);
	}
	jint OsConstants::F_DUPFD()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"F_DUPFD"
		);
	}
	jint OsConstants::F_DUPFD_CLOEXEC()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"F_DUPFD_CLOEXEC"
		);
	}
	jint OsConstants::F_GETFD()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"F_GETFD"
		);
	}
	jint OsConstants::F_GETFL()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"F_GETFL"
		);
	}
	jint OsConstants::F_GETLK()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"F_GETLK"
		);
	}
	jint OsConstants::F_GETLK64()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"F_GETLK64"
		);
	}
	jint OsConstants::F_GETOWN()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"F_GETOWN"
		);
	}
	jint OsConstants::F_OK()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"F_OK"
		);
	}
	jint OsConstants::F_RDLCK()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"F_RDLCK"
		);
	}
	jint OsConstants::F_SETFD()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"F_SETFD"
		);
	}
	jint OsConstants::F_SETFL()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"F_SETFL"
		);
	}
	jint OsConstants::F_SETLK()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"F_SETLK"
		);
	}
	jint OsConstants::F_SETLK64()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"F_SETLK64"
		);
	}
	jint OsConstants::F_SETLKW()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"F_SETLKW"
		);
	}
	jint OsConstants::F_SETLKW64()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"F_SETLKW64"
		);
	}
	jint OsConstants::F_SETOWN()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"F_SETOWN"
		);
	}
	jint OsConstants::F_UNLCK()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"F_UNLCK"
		);
	}
	jint OsConstants::F_WRLCK()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"F_WRLCK"
		);
	}
	jint OsConstants::ICMP6_ECHO_REPLY()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ICMP6_ECHO_REPLY"
		);
	}
	jint OsConstants::ICMP6_ECHO_REQUEST()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ICMP6_ECHO_REQUEST"
		);
	}
	jint OsConstants::ICMP_ECHO()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ICMP_ECHO"
		);
	}
	jint OsConstants::ICMP_ECHOREPLY()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ICMP_ECHOREPLY"
		);
	}
	jint OsConstants::IFA_F_DADFAILED()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IFA_F_DADFAILED"
		);
	}
	jint OsConstants::IFA_F_DEPRECATED()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IFA_F_DEPRECATED"
		);
	}
	jint OsConstants::IFA_F_HOMEADDRESS()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IFA_F_HOMEADDRESS"
		);
	}
	jint OsConstants::IFA_F_NODAD()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IFA_F_NODAD"
		);
	}
	jint OsConstants::IFA_F_OPTIMISTIC()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IFA_F_OPTIMISTIC"
		);
	}
	jint OsConstants::IFA_F_PERMANENT()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IFA_F_PERMANENT"
		);
	}
	jint OsConstants::IFA_F_SECONDARY()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IFA_F_SECONDARY"
		);
	}
	jint OsConstants::IFA_F_TEMPORARY()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IFA_F_TEMPORARY"
		);
	}
	jint OsConstants::IFA_F_TENTATIVE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IFA_F_TENTATIVE"
		);
	}
	jint OsConstants::IFF_ALLMULTI()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IFF_ALLMULTI"
		);
	}
	jint OsConstants::IFF_AUTOMEDIA()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IFF_AUTOMEDIA"
		);
	}
	jint OsConstants::IFF_BROADCAST()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IFF_BROADCAST"
		);
	}
	jint OsConstants::IFF_DEBUG()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IFF_DEBUG"
		);
	}
	jint OsConstants::IFF_DYNAMIC()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IFF_DYNAMIC"
		);
	}
	jint OsConstants::IFF_LOOPBACK()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IFF_LOOPBACK"
		);
	}
	jint OsConstants::IFF_MASTER()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IFF_MASTER"
		);
	}
	jint OsConstants::IFF_MULTICAST()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IFF_MULTICAST"
		);
	}
	jint OsConstants::IFF_NOARP()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IFF_NOARP"
		);
	}
	jint OsConstants::IFF_NOTRAILERS()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IFF_NOTRAILERS"
		);
	}
	jint OsConstants::IFF_POINTOPOINT()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IFF_POINTOPOINT"
		);
	}
	jint OsConstants::IFF_PORTSEL()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IFF_PORTSEL"
		);
	}
	jint OsConstants::IFF_PROMISC()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IFF_PROMISC"
		);
	}
	jint OsConstants::IFF_RUNNING()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IFF_RUNNING"
		);
	}
	jint OsConstants::IFF_SLAVE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IFF_SLAVE"
		);
	}
	jint OsConstants::IFF_UP()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IFF_UP"
		);
	}
	jint OsConstants::IPPROTO_ICMP()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IPPROTO_ICMP"
		);
	}
	jint OsConstants::IPPROTO_ICMPV6()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IPPROTO_ICMPV6"
		);
	}
	jint OsConstants::IPPROTO_IP()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IPPROTO_IP"
		);
	}
	jint OsConstants::IPPROTO_IPV6()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IPPROTO_IPV6"
		);
	}
	jint OsConstants::IPPROTO_RAW()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IPPROTO_RAW"
		);
	}
	jint OsConstants::IPPROTO_TCP()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IPPROTO_TCP"
		);
	}
	jint OsConstants::IPPROTO_UDP()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IPPROTO_UDP"
		);
	}
	jint OsConstants::IPV6_CHECKSUM()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IPV6_CHECKSUM"
		);
	}
	jint OsConstants::IPV6_MULTICAST_HOPS()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IPV6_MULTICAST_HOPS"
		);
	}
	jint OsConstants::IPV6_MULTICAST_IF()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IPV6_MULTICAST_IF"
		);
	}
	jint OsConstants::IPV6_MULTICAST_LOOP()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IPV6_MULTICAST_LOOP"
		);
	}
	jint OsConstants::IPV6_RECVDSTOPTS()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IPV6_RECVDSTOPTS"
		);
	}
	jint OsConstants::IPV6_RECVHOPLIMIT()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IPV6_RECVHOPLIMIT"
		);
	}
	jint OsConstants::IPV6_RECVHOPOPTS()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IPV6_RECVHOPOPTS"
		);
	}
	jint OsConstants::IPV6_RECVPKTINFO()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IPV6_RECVPKTINFO"
		);
	}
	jint OsConstants::IPV6_RECVRTHDR()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IPV6_RECVRTHDR"
		);
	}
	jint OsConstants::IPV6_RECVTCLASS()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IPV6_RECVTCLASS"
		);
	}
	jint OsConstants::IPV6_TCLASS()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IPV6_TCLASS"
		);
	}
	jint OsConstants::IPV6_UNICAST_HOPS()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IPV6_UNICAST_HOPS"
		);
	}
	jint OsConstants::IPV6_V6ONLY()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IPV6_V6ONLY"
		);
	}
	jint OsConstants::IP_MULTICAST_IF()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IP_MULTICAST_IF"
		);
	}
	jint OsConstants::IP_MULTICAST_LOOP()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IP_MULTICAST_LOOP"
		);
	}
	jint OsConstants::IP_MULTICAST_TTL()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IP_MULTICAST_TTL"
		);
	}
	jint OsConstants::IP_TOS()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IP_TOS"
		);
	}
	jint OsConstants::IP_TTL()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IP_TTL"
		);
	}
	jint OsConstants::MAP_ANONYMOUS()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"MAP_ANONYMOUS"
		);
	}
	jint OsConstants::MAP_FIXED()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"MAP_FIXED"
		);
	}
	jint OsConstants::MAP_PRIVATE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"MAP_PRIVATE"
		);
	}
	jint OsConstants::MAP_SHARED()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"MAP_SHARED"
		);
	}
	jint OsConstants::MCAST_BLOCK_SOURCE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"MCAST_BLOCK_SOURCE"
		);
	}
	jint OsConstants::MCAST_JOIN_GROUP()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"MCAST_JOIN_GROUP"
		);
	}
	jint OsConstants::MCAST_JOIN_SOURCE_GROUP()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"MCAST_JOIN_SOURCE_GROUP"
		);
	}
	jint OsConstants::MCAST_LEAVE_GROUP()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"MCAST_LEAVE_GROUP"
		);
	}
	jint OsConstants::MCAST_LEAVE_SOURCE_GROUP()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"MCAST_LEAVE_SOURCE_GROUP"
		);
	}
	jint OsConstants::MCAST_UNBLOCK_SOURCE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"MCAST_UNBLOCK_SOURCE"
		);
	}
	jint OsConstants::MCL_CURRENT()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"MCL_CURRENT"
		);
	}
	jint OsConstants::MCL_FUTURE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"MCL_FUTURE"
		);
	}
	jint OsConstants::MFD_CLOEXEC()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"MFD_CLOEXEC"
		);
	}
	jint OsConstants::MSG_CTRUNC()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"MSG_CTRUNC"
		);
	}
	jint OsConstants::MSG_DONTROUTE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"MSG_DONTROUTE"
		);
	}
	jint OsConstants::MSG_EOR()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"MSG_EOR"
		);
	}
	jint OsConstants::MSG_OOB()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"MSG_OOB"
		);
	}
	jint OsConstants::MSG_PEEK()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"MSG_PEEK"
		);
	}
	jint OsConstants::MSG_TRUNC()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"MSG_TRUNC"
		);
	}
	jint OsConstants::MSG_WAITALL()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"MSG_WAITALL"
		);
	}
	jint OsConstants::MS_ASYNC()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"MS_ASYNC"
		);
	}
	jint OsConstants::MS_INVALIDATE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"MS_INVALIDATE"
		);
	}
	jint OsConstants::MS_SYNC()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"MS_SYNC"
		);
	}
	jint OsConstants::NETLINK_INET_DIAG()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"NETLINK_INET_DIAG"
		);
	}
	jint OsConstants::NETLINK_NETFILTER()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"NETLINK_NETFILTER"
		);
	}
	jint OsConstants::NETLINK_ROUTE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"NETLINK_ROUTE"
		);
	}
	jint OsConstants::NI_DGRAM()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"NI_DGRAM"
		);
	}
	jint OsConstants::NI_NAMEREQD()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"NI_NAMEREQD"
		);
	}
	jint OsConstants::NI_NOFQDN()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"NI_NOFQDN"
		);
	}
	jint OsConstants::NI_NUMERICHOST()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"NI_NUMERICHOST"
		);
	}
	jint OsConstants::NI_NUMERICSERV()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"NI_NUMERICSERV"
		);
	}
	jint OsConstants::O_ACCMODE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"O_ACCMODE"
		);
	}
	jint OsConstants::O_APPEND()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"O_APPEND"
		);
	}
	jint OsConstants::O_CLOEXEC()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"O_CLOEXEC"
		);
	}
	jint OsConstants::O_CREAT()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"O_CREAT"
		);
	}
	jint OsConstants::O_DSYNC()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"O_DSYNC"
		);
	}
	jint OsConstants::O_EXCL()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"O_EXCL"
		);
	}
	jint OsConstants::O_NOCTTY()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"O_NOCTTY"
		);
	}
	jint OsConstants::O_NOFOLLOW()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"O_NOFOLLOW"
		);
	}
	jint OsConstants::O_NONBLOCK()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"O_NONBLOCK"
		);
	}
	jint OsConstants::O_RDONLY()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"O_RDONLY"
		);
	}
	jint OsConstants::O_RDWR()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"O_RDWR"
		);
	}
	jint OsConstants::O_SYNC()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"O_SYNC"
		);
	}
	jint OsConstants::O_TRUNC()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"O_TRUNC"
		);
	}
	jint OsConstants::O_WRONLY()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"O_WRONLY"
		);
	}
	jint OsConstants::POLLERR()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"POLLERR"
		);
	}
	jint OsConstants::POLLHUP()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"POLLHUP"
		);
	}
	jint OsConstants::POLLIN()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"POLLIN"
		);
	}
	jint OsConstants::POLLNVAL()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"POLLNVAL"
		);
	}
	jint OsConstants::POLLOUT()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"POLLOUT"
		);
	}
	jint OsConstants::POLLPRI()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"POLLPRI"
		);
	}
	jint OsConstants::POLLRDBAND()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"POLLRDBAND"
		);
	}
	jint OsConstants::POLLRDNORM()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"POLLRDNORM"
		);
	}
	jint OsConstants::POLLWRBAND()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"POLLWRBAND"
		);
	}
	jint OsConstants::POLLWRNORM()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"POLLWRNORM"
		);
	}
	jint OsConstants::PROT_EXEC()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"PROT_EXEC"
		);
	}
	jint OsConstants::PROT_NONE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"PROT_NONE"
		);
	}
	jint OsConstants::PROT_READ()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"PROT_READ"
		);
	}
	jint OsConstants::PROT_WRITE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"PROT_WRITE"
		);
	}
	jint OsConstants::PR_GET_DUMPABLE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"PR_GET_DUMPABLE"
		);
	}
	jint OsConstants::PR_SET_DUMPABLE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"PR_SET_DUMPABLE"
		);
	}
	jint OsConstants::PR_SET_NO_NEW_PRIVS()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"PR_SET_NO_NEW_PRIVS"
		);
	}
	jint OsConstants::RTMGRP_NEIGH()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"RTMGRP_NEIGH"
		);
	}
	jint OsConstants::RT_SCOPE_HOST()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"RT_SCOPE_HOST"
		);
	}
	jint OsConstants::RT_SCOPE_LINK()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"RT_SCOPE_LINK"
		);
	}
	jint OsConstants::RT_SCOPE_NOWHERE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"RT_SCOPE_NOWHERE"
		);
	}
	jint OsConstants::RT_SCOPE_SITE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"RT_SCOPE_SITE"
		);
	}
	jint OsConstants::RT_SCOPE_UNIVERSE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"RT_SCOPE_UNIVERSE"
		);
	}
	jint OsConstants::R_OK()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"R_OK"
		);
	}
	jint OsConstants::SEEK_CUR_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SEEK_CUR"
		);
	}
	jint OsConstants::SEEK_END_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SEEK_END"
		);
	}
	jint OsConstants::SEEK_SET_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SEEK_SET"
		);
	}
	jint OsConstants::SHUT_RD()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SHUT_RD"
		);
	}
	jint OsConstants::SHUT_RDWR()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SHUT_RDWR"
		);
	}
	jint OsConstants::SHUT_WR()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SHUT_WR"
		);
	}
	jint OsConstants::SIGABRT_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGABRT"
		);
	}
	jint OsConstants::SIGALRM_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGALRM"
		);
	}
	jint OsConstants::SIGBUS_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGBUS"
		);
	}
	jint OsConstants::SIGCHLD_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGCHLD"
		);
	}
	jint OsConstants::SIGCONT_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGCONT"
		);
	}
	jint OsConstants::SIGFPE_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGFPE"
		);
	}
	jint OsConstants::SIGHUP_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGHUP"
		);
	}
	jint OsConstants::SIGILL_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGILL"
		);
	}
	jint OsConstants::SIGINT_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGINT"
		);
	}
	jint OsConstants::SIGIO_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGIO"
		);
	}
	jint OsConstants::SIGKILL_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGKILL"
		);
	}
	jint OsConstants::SIGPIPE_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGPIPE"
		);
	}
	jint OsConstants::SIGPROF_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGPROF"
		);
	}
	jint OsConstants::SIGPWR_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGPWR"
		);
	}
	jint OsConstants::SIGQUIT_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGQUIT"
		);
	}
	jint OsConstants::SIGRTMAX_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGRTMAX"
		);
	}
	jint OsConstants::SIGRTMIN_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGRTMIN"
		);
	}
	jint OsConstants::SIGSEGV_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGSEGV"
		);
	}
	jint OsConstants::SIGSTKFLT_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGSTKFLT"
		);
	}
	jint OsConstants::SIGSTOP_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGSTOP"
		);
	}
	jint OsConstants::SIGSYS_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGSYS"
		);
	}
	jint OsConstants::SIGTERM_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGTERM"
		);
	}
	jint OsConstants::SIGTRAP_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGTRAP"
		);
	}
	jint OsConstants::SIGTSTP_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGTSTP"
		);
	}
	jint OsConstants::SIGTTIN_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGTTIN"
		);
	}
	jint OsConstants::SIGTTOU_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGTTOU"
		);
	}
	jint OsConstants::SIGURG_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGURG"
		);
	}
	jint OsConstants::SIGUSR1_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGUSR1"
		);
	}
	jint OsConstants::SIGUSR2_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGUSR2"
		);
	}
	jint OsConstants::SIGVTALRM_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGVTALRM"
		);
	}
	jint OsConstants::SIGWINCH_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGWINCH"
		);
	}
	jint OsConstants::SIGXCPU_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGXCPU"
		);
	}
	jint OsConstants::SIGXFSZ_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGXFSZ"
		);
	}
	jint OsConstants::SIOCGIFADDR()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIOCGIFADDR"
		);
	}
	jint OsConstants::SIOCGIFBRDADDR()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIOCGIFBRDADDR"
		);
	}
	jint OsConstants::SIOCGIFDSTADDR()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIOCGIFDSTADDR"
		);
	}
	jint OsConstants::SIOCGIFNETMASK()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIOCGIFNETMASK"
		);
	}
	jint OsConstants::SOCK_CLOEXEC()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SOCK_CLOEXEC"
		);
	}
	jint OsConstants::SOCK_DGRAM()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SOCK_DGRAM"
		);
	}
	jint OsConstants::SOCK_NONBLOCK()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SOCK_NONBLOCK"
		);
	}
	jint OsConstants::SOCK_RAW()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SOCK_RAW"
		);
	}
	jint OsConstants::SOCK_SEQPACKET()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SOCK_SEQPACKET"
		);
	}
	jint OsConstants::SOCK_STREAM()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SOCK_STREAM"
		);
	}
	jint OsConstants::SOL_SOCKET()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SOL_SOCKET"
		);
	}
	jint OsConstants::SO_BINDTODEVICE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SO_BINDTODEVICE"
		);
	}
	jint OsConstants::SO_BROADCAST()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SO_BROADCAST"
		);
	}
	jint OsConstants::SO_DEBUG()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SO_DEBUG"
		);
	}
	jint OsConstants::SO_DONTROUTE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SO_DONTROUTE"
		);
	}
	jint OsConstants::SO_ERROR()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SO_ERROR"
		);
	}
	jint OsConstants::SO_KEEPALIVE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SO_KEEPALIVE"
		);
	}
	jint OsConstants::SO_LINGER()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SO_LINGER"
		);
	}
	jint OsConstants::SO_OOBINLINE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SO_OOBINLINE"
		);
	}
	jint OsConstants::SO_PASSCRED()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SO_PASSCRED"
		);
	}
	jint OsConstants::SO_PEERCRED()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SO_PEERCRED"
		);
	}
	jint OsConstants::SO_RCVBUF()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SO_RCVBUF"
		);
	}
	jint OsConstants::SO_RCVLOWAT()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SO_RCVLOWAT"
		);
	}
	jint OsConstants::SO_RCVTIMEO()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SO_RCVTIMEO"
		);
	}
	jint OsConstants::SO_REUSEADDR()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SO_REUSEADDR"
		);
	}
	jint OsConstants::SO_SNDBUF()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SO_SNDBUF"
		);
	}
	jint OsConstants::SO_SNDLOWAT()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SO_SNDLOWAT"
		);
	}
	jint OsConstants::SO_SNDTIMEO()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SO_SNDTIMEO"
		);
	}
	jint OsConstants::SO_TYPE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SO_TYPE"
		);
	}
	jint OsConstants::STDERR_FILENO()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"STDERR_FILENO"
		);
	}
	jint OsConstants::STDIN_FILENO()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"STDIN_FILENO"
		);
	}
	jint OsConstants::STDOUT_FILENO()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"STDOUT_FILENO"
		);
	}
	jint OsConstants::ST_MANDLOCK()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ST_MANDLOCK"
		);
	}
	jint OsConstants::ST_NOATIME()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ST_NOATIME"
		);
	}
	jint OsConstants::ST_NODEV()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ST_NODEV"
		);
	}
	jint OsConstants::ST_NODIRATIME()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ST_NODIRATIME"
		);
	}
	jint OsConstants::ST_NOEXEC()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ST_NOEXEC"
		);
	}
	jint OsConstants::ST_NOSUID()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ST_NOSUID"
		);
	}
	jint OsConstants::ST_RDONLY()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ST_RDONLY"
		);
	}
	jint OsConstants::ST_RELATIME()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ST_RELATIME"
		);
	}
	jint OsConstants::ST_SYNCHRONOUS()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ST_SYNCHRONOUS"
		);
	}
	jint OsConstants::S_IFBLK()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"S_IFBLK"
		);
	}
	jint OsConstants::S_IFCHR()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"S_IFCHR"
		);
	}
	jint OsConstants::S_IFDIR()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"S_IFDIR"
		);
	}
	jint OsConstants::S_IFIFO()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"S_IFIFO"
		);
	}
	jint OsConstants::S_IFLNK()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"S_IFLNK"
		);
	}
	jint OsConstants::S_IFMT()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"S_IFMT"
		);
	}
	jint OsConstants::S_IFREG()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"S_IFREG"
		);
	}
	jint OsConstants::S_IFSOCK()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"S_IFSOCK"
		);
	}
	jint OsConstants::S_IRGRP()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"S_IRGRP"
		);
	}
	jint OsConstants::S_IROTH()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"S_IROTH"
		);
	}
	jint OsConstants::S_IRUSR()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"S_IRUSR"
		);
	}
	jint OsConstants::S_IRWXG()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"S_IRWXG"
		);
	}
	jint OsConstants::S_IRWXO()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"S_IRWXO"
		);
	}
	jint OsConstants::S_IRWXU()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"S_IRWXU"
		);
	}
	jint OsConstants::S_ISGID()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"S_ISGID"
		);
	}
	jint OsConstants::S_ISUID()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"S_ISUID"
		);
	}
	jint OsConstants::S_ISVTX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"S_ISVTX"
		);
	}
	jint OsConstants::S_IWGRP()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"S_IWGRP"
		);
	}
	jint OsConstants::S_IWOTH()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"S_IWOTH"
		);
	}
	jint OsConstants::S_IWUSR()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"S_IWUSR"
		);
	}
	jint OsConstants::S_IXGRP()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"S_IXGRP"
		);
	}
	jint OsConstants::S_IXOTH()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"S_IXOTH"
		);
	}
	jint OsConstants::S_IXUSR()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"S_IXUSR"
		);
	}
	jint OsConstants::TCP_NODELAY()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"TCP_NODELAY"
		);
	}
	jint OsConstants::TCP_USER_TIMEOUT()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"TCP_USER_TIMEOUT"
		);
	}
	jint OsConstants::WCONTINUED_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"WCONTINUED"
		);
	}
	jint OsConstants::WEXITED_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"WEXITED"
		);
	}
	jint OsConstants::WNOHANG_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"WNOHANG"
		);
	}
	jint OsConstants::WNOWAIT_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"WNOWAIT"
		);
	}
	jint OsConstants::WSTOPPED_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"WSTOPPED"
		);
	}
	jint OsConstants::WUNTRACED_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"WUNTRACED"
		);
	}
	jint OsConstants::W_OK()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"W_OK"
		);
	}
	jint OsConstants::X_OK()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"X_OK"
		);
	}
	jint OsConstants::_SC_2_CHAR_TERM()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_2_CHAR_TERM"
		);
	}
	jint OsConstants::_SC_2_C_BIND()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_2_C_BIND"
		);
	}
	jint OsConstants::_SC_2_C_DEV()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_2_C_DEV"
		);
	}
	jint OsConstants::_SC_2_C_VERSION()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_2_C_VERSION"
		);
	}
	jint OsConstants::_SC_2_FORT_DEV()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_2_FORT_DEV"
		);
	}
	jint OsConstants::_SC_2_FORT_RUN()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_2_FORT_RUN"
		);
	}
	jint OsConstants::_SC_2_LOCALEDEF()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_2_LOCALEDEF"
		);
	}
	jint OsConstants::_SC_2_SW_DEV()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_2_SW_DEV"
		);
	}
	jint OsConstants::_SC_2_UPE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_2_UPE"
		);
	}
	jint OsConstants::_SC_2_VERSION()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_2_VERSION"
		);
	}
	jint OsConstants::_SC_AIO_LISTIO_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_AIO_LISTIO_MAX"
		);
	}
	jint OsConstants::_SC_AIO_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_AIO_MAX"
		);
	}
	jint OsConstants::_SC_AIO_PRIO_DELTA_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_AIO_PRIO_DELTA_MAX"
		);
	}
	jint OsConstants::_SC_ARG_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_ARG_MAX"
		);
	}
	jint OsConstants::_SC_ASYNCHRONOUS_IO()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_ASYNCHRONOUS_IO"
		);
	}
	jint OsConstants::_SC_ATEXIT_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_ATEXIT_MAX"
		);
	}
	jint OsConstants::_SC_AVPHYS_PAGES()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_AVPHYS_PAGES"
		);
	}
	jint OsConstants::_SC_BC_BASE_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_BC_BASE_MAX"
		);
	}
	jint OsConstants::_SC_BC_DIM_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_BC_DIM_MAX"
		);
	}
	jint OsConstants::_SC_BC_SCALE_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_BC_SCALE_MAX"
		);
	}
	jint OsConstants::_SC_BC_STRING_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_BC_STRING_MAX"
		);
	}
	jint OsConstants::_SC_CHILD_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_CHILD_MAX"
		);
	}
	jint OsConstants::_SC_CLK_TCK()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_CLK_TCK"
		);
	}
	jint OsConstants::_SC_COLL_WEIGHTS_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_COLL_WEIGHTS_MAX"
		);
	}
	jint OsConstants::_SC_DELAYTIMER_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_DELAYTIMER_MAX"
		);
	}
	jint OsConstants::_SC_EXPR_NEST_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_EXPR_NEST_MAX"
		);
	}
	jint OsConstants::_SC_FSYNC()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_FSYNC"
		);
	}
	jint OsConstants::_SC_GETGR_R_SIZE_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_GETGR_R_SIZE_MAX"
		);
	}
	jint OsConstants::_SC_GETPW_R_SIZE_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_GETPW_R_SIZE_MAX"
		);
	}
	jint OsConstants::_SC_IOV_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_IOV_MAX"
		);
	}
	jint OsConstants::_SC_JOB_CONTROL()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_JOB_CONTROL"
		);
	}
	jint OsConstants::_SC_LINE_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_LINE_MAX"
		);
	}
	jint OsConstants::_SC_LOGIN_NAME_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_LOGIN_NAME_MAX"
		);
	}
	jint OsConstants::_SC_MAPPED_FILES()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_MAPPED_FILES"
		);
	}
	jint OsConstants::_SC_MEMLOCK()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_MEMLOCK"
		);
	}
	jint OsConstants::_SC_MEMLOCK_RANGE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_MEMLOCK_RANGE"
		);
	}
	jint OsConstants::_SC_MEMORY_PROTECTION()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_MEMORY_PROTECTION"
		);
	}
	jint OsConstants::_SC_MESSAGE_PASSING()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_MESSAGE_PASSING"
		);
	}
	jint OsConstants::_SC_MQ_OPEN_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_MQ_OPEN_MAX"
		);
	}
	jint OsConstants::_SC_MQ_PRIO_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_MQ_PRIO_MAX"
		);
	}
	jint OsConstants::_SC_NGROUPS_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_NGROUPS_MAX"
		);
	}
	jint OsConstants::_SC_NPROCESSORS_CONF()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_NPROCESSORS_CONF"
		);
	}
	jint OsConstants::_SC_NPROCESSORS_ONLN()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_NPROCESSORS_ONLN"
		);
	}
	jint OsConstants::_SC_OPEN_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_OPEN_MAX"
		);
	}
	jint OsConstants::_SC_PAGESIZE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_PAGESIZE"
		);
	}
	jint OsConstants::_SC_PAGE_SIZE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_PAGE_SIZE"
		);
	}
	jint OsConstants::_SC_PASS_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_PASS_MAX"
		);
	}
	jint OsConstants::_SC_PHYS_PAGES()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_PHYS_PAGES"
		);
	}
	jint OsConstants::_SC_PRIORITIZED_IO()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_PRIORITIZED_IO"
		);
	}
	jint OsConstants::_SC_PRIORITY_SCHEDULING()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_PRIORITY_SCHEDULING"
		);
	}
	jint OsConstants::_SC_REALTIME_SIGNALS()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_REALTIME_SIGNALS"
		);
	}
	jint OsConstants::_SC_RE_DUP_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_RE_DUP_MAX"
		);
	}
	jint OsConstants::_SC_RTSIG_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_RTSIG_MAX"
		);
	}
	jint OsConstants::_SC_SAVED_IDS()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_SAVED_IDS"
		);
	}
	jint OsConstants::_SC_SEMAPHORES()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_SEMAPHORES"
		);
	}
	jint OsConstants::_SC_SEM_NSEMS_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_SEM_NSEMS_MAX"
		);
	}
	jint OsConstants::_SC_SEM_VALUE_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_SEM_VALUE_MAX"
		);
	}
	jint OsConstants::_SC_SHARED_MEMORY_OBJECTS()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_SHARED_MEMORY_OBJECTS"
		);
	}
	jint OsConstants::_SC_SIGQUEUE_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_SIGQUEUE_MAX"
		);
	}
	jint OsConstants::_SC_STREAM_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_STREAM_MAX"
		);
	}
	jint OsConstants::_SC_SYNCHRONIZED_IO()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_SYNCHRONIZED_IO"
		);
	}
	jint OsConstants::_SC_THREADS()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_THREADS"
		);
	}
	jint OsConstants::_SC_THREAD_ATTR_STACKADDR()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_THREAD_ATTR_STACKADDR"
		);
	}
	jint OsConstants::_SC_THREAD_ATTR_STACKSIZE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_THREAD_ATTR_STACKSIZE"
		);
	}
	jint OsConstants::_SC_THREAD_DESTRUCTOR_ITERATIONS()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_THREAD_DESTRUCTOR_ITERATIONS"
		);
	}
	jint OsConstants::_SC_THREAD_KEYS_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_THREAD_KEYS_MAX"
		);
	}
	jint OsConstants::_SC_THREAD_PRIORITY_SCHEDULING()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_THREAD_PRIORITY_SCHEDULING"
		);
	}
	jint OsConstants::_SC_THREAD_PRIO_INHERIT()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_THREAD_PRIO_INHERIT"
		);
	}
	jint OsConstants::_SC_THREAD_PRIO_PROTECT()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_THREAD_PRIO_PROTECT"
		);
	}
	jint OsConstants::_SC_THREAD_SAFE_FUNCTIONS()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_THREAD_SAFE_FUNCTIONS"
		);
	}
	jint OsConstants::_SC_THREAD_STACK_MIN()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_THREAD_STACK_MIN"
		);
	}
	jint OsConstants::_SC_THREAD_THREADS_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_THREAD_THREADS_MAX"
		);
	}
	jint OsConstants::_SC_TIMERS()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_TIMERS"
		);
	}
	jint OsConstants::_SC_TIMER_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_TIMER_MAX"
		);
	}
	jint OsConstants::_SC_TTY_NAME_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_TTY_NAME_MAX"
		);
	}
	jint OsConstants::_SC_TZNAME_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_TZNAME_MAX"
		);
	}
	jint OsConstants::_SC_VERSION()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_VERSION"
		);
	}
	jint OsConstants::_SC_XBS5_ILP32_OFF32()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_XBS5_ILP32_OFF32"
		);
	}
	jint OsConstants::_SC_XBS5_ILP32_OFFBIG()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_XBS5_ILP32_OFFBIG"
		);
	}
	jint OsConstants::_SC_XBS5_LP64_OFF64()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_XBS5_LP64_OFF64"
		);
	}
	jint OsConstants::_SC_XBS5_LPBIG_OFFBIG()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_XBS5_LPBIG_OFFBIG"
		);
	}
	jint OsConstants::_SC_XOPEN_CRYPT()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_XOPEN_CRYPT"
		);
	}
	jint OsConstants::_SC_XOPEN_ENH_I18N()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_XOPEN_ENH_I18N"
		);
	}
	jint OsConstants::_SC_XOPEN_LEGACY()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_XOPEN_LEGACY"
		);
	}
	jint OsConstants::_SC_XOPEN_REALTIME()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_XOPEN_REALTIME"
		);
	}
	jint OsConstants::_SC_XOPEN_REALTIME_THREADS()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_XOPEN_REALTIME_THREADS"
		);
	}
	jint OsConstants::_SC_XOPEN_SHM()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_XOPEN_SHM"
		);
	}
	jint OsConstants::_SC_XOPEN_UNIX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_XOPEN_UNIX"
		);
	}
	jint OsConstants::_SC_XOPEN_VERSION()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_XOPEN_VERSION"
		);
	}
	jint OsConstants::_SC_XOPEN_XCU_VERSION()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_XOPEN_XCU_VERSION"
		);
	}
	
	// QAndroidJniObject forward
	OsConstants::OsConstants(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean OsConstants::S_ISBLK(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.system.OsConstants",
			"S_ISBLK",
			"(I)Z",
			arg0
		);
	}
	jboolean OsConstants::S_ISCHR(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.system.OsConstants",
			"S_ISCHR",
			"(I)Z",
			arg0
		);
	}
	jboolean OsConstants::S_ISDIR(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.system.OsConstants",
			"S_ISDIR",
			"(I)Z",
			arg0
		);
	}
	jboolean OsConstants::S_ISFIFO(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.system.OsConstants",
			"S_ISFIFO",
			"(I)Z",
			arg0
		);
	}
	jboolean OsConstants::S_ISLNK(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.system.OsConstants",
			"S_ISLNK",
			"(I)Z",
			arg0
		);
	}
	jboolean OsConstants::S_ISREG(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.system.OsConstants",
			"S_ISREG",
			"(I)Z",
			arg0
		);
	}
	jboolean OsConstants::S_ISSOCK(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.system.OsConstants",
			"S_ISSOCK",
			"(I)Z",
			arg0
		);
	}
	jboolean OsConstants::WCOREDUMP_(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.system.OsConstants",
			"WCOREDUMP",
			"(I)Z",
			arg0
		);
	}
	jint OsConstants::WEXITSTATUS_(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.system.OsConstants",
			"WEXITSTATUS",
			"(I)I",
			arg0
		);
	}
	jboolean OsConstants::WIFEXITED_(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.system.OsConstants",
			"WIFEXITED",
			"(I)Z",
			arg0
		);
	}
	jboolean OsConstants::WIFSIGNALED_(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.system.OsConstants",
			"WIFSIGNALED",
			"(I)Z",
			arg0
		);
	}
	jboolean OsConstants::WIFSTOPPED_(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.system.OsConstants",
			"WIFSTOPPED",
			"(I)Z",
			arg0
		);
	}
	jint OsConstants::WSTOPSIG_(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.system.OsConstants",
			"WSTOPSIG",
			"(I)I",
			arg0
		);
	}
	jint OsConstants::WTERMSIG_(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.system.OsConstants",
			"WTERMSIG",
			"(I)I",
			arg0
		);
	}
	JString OsConstants::errnoName(jint arg0)
	{
		return callStaticObjectMethod(
			"android.system.OsConstants",
			"errnoName",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JString OsConstants::gaiName(jint arg0)
	{
		return callStaticObjectMethod(
			"android.system.OsConstants",
			"gaiName",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
} // namespace android::system

