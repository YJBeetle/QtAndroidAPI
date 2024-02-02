#pragma once

#include "../../JString.hpp"
#include "./OsConstants.def.hpp"

namespace android::system
{
	// Fields
	inline jint OsConstants::AF_INET()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"AF_INET"
		);
	}
	inline jint OsConstants::AF_INET6()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"AF_INET6"
		);
	}
	inline jint OsConstants::AF_NETLINK()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"AF_NETLINK"
		);
	}
	inline jint OsConstants::AF_PACKET()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"AF_PACKET"
		);
	}
	inline jint OsConstants::AF_UNIX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"AF_UNIX"
		);
	}
	inline jint OsConstants::AF_UNSPEC()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"AF_UNSPEC"
		);
	}
	inline jint OsConstants::AF_VSOCK()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"AF_VSOCK"
		);
	}
	inline jint OsConstants::AI_ADDRCONFIG()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"AI_ADDRCONFIG"
		);
	}
	inline jint OsConstants::AI_ALL()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"AI_ALL"
		);
	}
	inline jint OsConstants::AI_CANONNAME()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"AI_CANONNAME"
		);
	}
	inline jint OsConstants::AI_NUMERICHOST()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"AI_NUMERICHOST"
		);
	}
	inline jint OsConstants::AI_NUMERICSERV()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"AI_NUMERICSERV"
		);
	}
	inline jint OsConstants::AI_PASSIVE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"AI_PASSIVE"
		);
	}
	inline jint OsConstants::AI_V4MAPPED()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"AI_V4MAPPED"
		);
	}
	inline jint OsConstants::ARPHRD_ETHER()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ARPHRD_ETHER"
		);
	}
	inline jint OsConstants::CAP_AUDIT_CONTROL()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_AUDIT_CONTROL"
		);
	}
	inline jint OsConstants::CAP_AUDIT_WRITE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_AUDIT_WRITE"
		);
	}
	inline jint OsConstants::CAP_BLOCK_SUSPEND()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_BLOCK_SUSPEND"
		);
	}
	inline jint OsConstants::CAP_CHOWN()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_CHOWN"
		);
	}
	inline jint OsConstants::CAP_DAC_OVERRIDE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_DAC_OVERRIDE"
		);
	}
	inline jint OsConstants::CAP_DAC_READ_SEARCH()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_DAC_READ_SEARCH"
		);
	}
	inline jint OsConstants::CAP_FOWNER()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_FOWNER"
		);
	}
	inline jint OsConstants::CAP_FSETID()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_FSETID"
		);
	}
	inline jint OsConstants::CAP_IPC_LOCK()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_IPC_LOCK"
		);
	}
	inline jint OsConstants::CAP_IPC_OWNER()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_IPC_OWNER"
		);
	}
	inline jint OsConstants::CAP_KILL()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_KILL"
		);
	}
	inline jint OsConstants::CAP_LAST_CAP()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_LAST_CAP"
		);
	}
	inline jint OsConstants::CAP_LEASE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_LEASE"
		);
	}
	inline jint OsConstants::CAP_LINUX_IMMUTABLE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_LINUX_IMMUTABLE"
		);
	}
	inline jint OsConstants::CAP_MAC_ADMIN()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_MAC_ADMIN"
		);
	}
	inline jint OsConstants::CAP_MAC_OVERRIDE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_MAC_OVERRIDE"
		);
	}
	inline jint OsConstants::CAP_MKNOD()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_MKNOD"
		);
	}
	inline jint OsConstants::CAP_NET_ADMIN()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_NET_ADMIN"
		);
	}
	inline jint OsConstants::CAP_NET_BIND_SERVICE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_NET_BIND_SERVICE"
		);
	}
	inline jint OsConstants::CAP_NET_BROADCAST()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_NET_BROADCAST"
		);
	}
	inline jint OsConstants::CAP_NET_RAW()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_NET_RAW"
		);
	}
	inline jint OsConstants::CAP_SETFCAP()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_SETFCAP"
		);
	}
	inline jint OsConstants::CAP_SETGID()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_SETGID"
		);
	}
	inline jint OsConstants::CAP_SETPCAP()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_SETPCAP"
		);
	}
	inline jint OsConstants::CAP_SETUID()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_SETUID"
		);
	}
	inline jint OsConstants::CAP_SYSLOG()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_SYSLOG"
		);
	}
	inline jint OsConstants::CAP_SYS_ADMIN()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_SYS_ADMIN"
		);
	}
	inline jint OsConstants::CAP_SYS_BOOT()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_SYS_BOOT"
		);
	}
	inline jint OsConstants::CAP_SYS_CHROOT()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_SYS_CHROOT"
		);
	}
	inline jint OsConstants::CAP_SYS_MODULE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_SYS_MODULE"
		);
	}
	inline jint OsConstants::CAP_SYS_NICE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_SYS_NICE"
		);
	}
	inline jint OsConstants::CAP_SYS_PACCT()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_SYS_PACCT"
		);
	}
	inline jint OsConstants::CAP_SYS_PTRACE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_SYS_PTRACE"
		);
	}
	inline jint OsConstants::CAP_SYS_RAWIO()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_SYS_RAWIO"
		);
	}
	inline jint OsConstants::CAP_SYS_RESOURCE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_SYS_RESOURCE"
		);
	}
	inline jint OsConstants::CAP_SYS_TIME()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_SYS_TIME"
		);
	}
	inline jint OsConstants::CAP_SYS_TTY_CONFIG()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_SYS_TTY_CONFIG"
		);
	}
	inline jint OsConstants::CAP_WAKE_ALARM()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_WAKE_ALARM"
		);
	}
	inline jint OsConstants::E2BIG_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"E2BIG"
		);
	}
	inline jint OsConstants::EACCES_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EACCES"
		);
	}
	inline jint OsConstants::EADDRINUSE_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EADDRINUSE"
		);
	}
	inline jint OsConstants::EADDRNOTAVAIL_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EADDRNOTAVAIL"
		);
	}
	inline jint OsConstants::EAFNOSUPPORT_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EAFNOSUPPORT"
		);
	}
	inline jint OsConstants::EAGAIN_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EAGAIN"
		);
	}
	inline jint OsConstants::EAI_AGAIN()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EAI_AGAIN"
		);
	}
	inline jint OsConstants::EAI_BADFLAGS()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EAI_BADFLAGS"
		);
	}
	inline jint OsConstants::EAI_FAIL()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EAI_FAIL"
		);
	}
	inline jint OsConstants::EAI_FAMILY()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EAI_FAMILY"
		);
	}
	inline jint OsConstants::EAI_MEMORY()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EAI_MEMORY"
		);
	}
	inline jint OsConstants::EAI_NODATA()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EAI_NODATA"
		);
	}
	inline jint OsConstants::EAI_NONAME()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EAI_NONAME"
		);
	}
	inline jint OsConstants::EAI_OVERFLOW()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EAI_OVERFLOW"
		);
	}
	inline jint OsConstants::EAI_SERVICE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EAI_SERVICE"
		);
	}
	inline jint OsConstants::EAI_SOCKTYPE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EAI_SOCKTYPE"
		);
	}
	inline jint OsConstants::EAI_SYSTEM()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EAI_SYSTEM"
		);
	}
	inline jint OsConstants::EALREADY_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EALREADY"
		);
	}
	inline jint OsConstants::EBADF_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EBADF"
		);
	}
	inline jint OsConstants::EBADMSG_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EBADMSG"
		);
	}
	inline jint OsConstants::EBUSY_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EBUSY"
		);
	}
	inline jint OsConstants::ECANCELED_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ECANCELED"
		);
	}
	inline jint OsConstants::ECHILD_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ECHILD"
		);
	}
	inline jint OsConstants::ECONNABORTED_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ECONNABORTED"
		);
	}
	inline jint OsConstants::ECONNREFUSED_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ECONNREFUSED"
		);
	}
	inline jint OsConstants::ECONNRESET_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ECONNRESET"
		);
	}
	inline jint OsConstants::EDEADLK_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EDEADLK"
		);
	}
	inline jint OsConstants::EDESTADDRREQ_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EDESTADDRREQ"
		);
	}
	inline jint OsConstants::EDOM_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EDOM"
		);
	}
	inline jint OsConstants::EDQUOT_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EDQUOT"
		);
	}
	inline jint OsConstants::EEXIST_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EEXIST"
		);
	}
	inline jint OsConstants::EFAULT_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EFAULT"
		);
	}
	inline jint OsConstants::EFBIG_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EFBIG"
		);
	}
	inline jint OsConstants::EHOSTUNREACH_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EHOSTUNREACH"
		);
	}
	inline jint OsConstants::EIDRM_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EIDRM"
		);
	}
	inline jint OsConstants::EILSEQ_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EILSEQ"
		);
	}
	inline jint OsConstants::EINPROGRESS_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EINPROGRESS"
		);
	}
	inline jint OsConstants::EINTR_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EINTR"
		);
	}
	inline jint OsConstants::EINVAL_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EINVAL"
		);
	}
	inline jint OsConstants::EIO_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EIO"
		);
	}
	inline jint OsConstants::EISCONN_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EISCONN"
		);
	}
	inline jint OsConstants::EISDIR_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EISDIR"
		);
	}
	inline jint OsConstants::ELOOP_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ELOOP"
		);
	}
	inline jint OsConstants::EMFILE_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EMFILE"
		);
	}
	inline jint OsConstants::EMLINK_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EMLINK"
		);
	}
	inline jint OsConstants::EMSGSIZE_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EMSGSIZE"
		);
	}
	inline jint OsConstants::EMULTIHOP_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EMULTIHOP"
		);
	}
	inline jint OsConstants::ENAMETOOLONG_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENAMETOOLONG"
		);
	}
	inline jint OsConstants::ENETDOWN_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENETDOWN"
		);
	}
	inline jint OsConstants::ENETRESET_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENETRESET"
		);
	}
	inline jint OsConstants::ENETUNREACH_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENETUNREACH"
		);
	}
	inline jint OsConstants::ENFILE_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENFILE"
		);
	}
	inline jint OsConstants::ENOBUFS_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENOBUFS"
		);
	}
	inline jint OsConstants::ENODATA_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENODATA"
		);
	}
	inline jint OsConstants::ENODEV_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENODEV"
		);
	}
	inline jint OsConstants::ENOENT_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENOENT"
		);
	}
	inline jint OsConstants::ENOEXEC_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENOEXEC"
		);
	}
	inline jint OsConstants::ENOLCK_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENOLCK"
		);
	}
	inline jint OsConstants::ENOLINK_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENOLINK"
		);
	}
	inline jint OsConstants::ENOMEM_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENOMEM"
		);
	}
	inline jint OsConstants::ENOMSG_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENOMSG"
		);
	}
	inline jint OsConstants::ENONET_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENONET"
		);
	}
	inline jint OsConstants::ENOPROTOOPT_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENOPROTOOPT"
		);
	}
	inline jint OsConstants::ENOSPC_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENOSPC"
		);
	}
	inline jint OsConstants::ENOSR_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENOSR"
		);
	}
	inline jint OsConstants::ENOSTR_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENOSTR"
		);
	}
	inline jint OsConstants::ENOSYS_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENOSYS"
		);
	}
	inline jint OsConstants::ENOTCONN_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENOTCONN"
		);
	}
	inline jint OsConstants::ENOTDIR_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENOTDIR"
		);
	}
	inline jint OsConstants::ENOTEMPTY_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENOTEMPTY"
		);
	}
	inline jint OsConstants::ENOTSOCK_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENOTSOCK"
		);
	}
	inline jint OsConstants::ENOTSUP_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENOTSUP"
		);
	}
	inline jint OsConstants::ENOTTY_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENOTTY"
		);
	}
	inline jint OsConstants::ENXIO_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ENXIO"
		);
	}
	inline jint OsConstants::EOPNOTSUPP_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EOPNOTSUPP"
		);
	}
	inline jint OsConstants::EOVERFLOW_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EOVERFLOW"
		);
	}
	inline jint OsConstants::EPERM_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EPERM"
		);
	}
	inline jint OsConstants::EPIPE_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EPIPE"
		);
	}
	inline jint OsConstants::EPROTO_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EPROTO"
		);
	}
	inline jint OsConstants::EPROTONOSUPPORT_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EPROTONOSUPPORT"
		);
	}
	inline jint OsConstants::EPROTOTYPE_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EPROTOTYPE"
		);
	}
	inline jint OsConstants::ERANGE_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ERANGE"
		);
	}
	inline jint OsConstants::EROFS_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EROFS"
		);
	}
	inline jint OsConstants::ESPIPE_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ESPIPE"
		);
	}
	inline jint OsConstants::ESRCH_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ESRCH"
		);
	}
	inline jint OsConstants::ESTALE_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ESTALE"
		);
	}
	inline jint OsConstants::ETH_P_ALL()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ETH_P_ALL"
		);
	}
	inline jint OsConstants::ETH_P_ARP()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ETH_P_ARP"
		);
	}
	inline jint OsConstants::ETH_P_IP()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ETH_P_IP"
		);
	}
	inline jint OsConstants::ETH_P_IPV6()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ETH_P_IPV6"
		);
	}
	inline jint OsConstants::ETIME_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ETIME"
		);
	}
	inline jint OsConstants::ETIMEDOUT_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ETIMEDOUT"
		);
	}
	inline jint OsConstants::ETXTBSY_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ETXTBSY"
		);
	}
	inline jint OsConstants::EXDEV_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EXDEV"
		);
	}
	inline jint OsConstants::EXIT_FAILURE_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EXIT_FAILURE"
		);
	}
	inline jint OsConstants::EXIT_SUCCESS_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"EXIT_SUCCESS"
		);
	}
	inline jint OsConstants::FD_CLOEXEC()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"FD_CLOEXEC"
		);
	}
	inline jint OsConstants::FIONREAD()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"FIONREAD"
		);
	}
	inline jint OsConstants::F_DUPFD()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"F_DUPFD"
		);
	}
	inline jint OsConstants::F_DUPFD_CLOEXEC()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"F_DUPFD_CLOEXEC"
		);
	}
	inline jint OsConstants::F_GETFD()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"F_GETFD"
		);
	}
	inline jint OsConstants::F_GETFL()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"F_GETFL"
		);
	}
	inline jint OsConstants::F_GETLK()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"F_GETLK"
		);
	}
	inline jint OsConstants::F_GETLK64()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"F_GETLK64"
		);
	}
	inline jint OsConstants::F_GETOWN()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"F_GETOWN"
		);
	}
	inline jint OsConstants::F_OK()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"F_OK"
		);
	}
	inline jint OsConstants::F_RDLCK()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"F_RDLCK"
		);
	}
	inline jint OsConstants::F_SETFD()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"F_SETFD"
		);
	}
	inline jint OsConstants::F_SETFL()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"F_SETFL"
		);
	}
	inline jint OsConstants::F_SETLK()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"F_SETLK"
		);
	}
	inline jint OsConstants::F_SETLK64()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"F_SETLK64"
		);
	}
	inline jint OsConstants::F_SETLKW()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"F_SETLKW"
		);
	}
	inline jint OsConstants::F_SETLKW64()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"F_SETLKW64"
		);
	}
	inline jint OsConstants::F_SETOWN()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"F_SETOWN"
		);
	}
	inline jint OsConstants::F_UNLCK()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"F_UNLCK"
		);
	}
	inline jint OsConstants::F_WRLCK()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"F_WRLCK"
		);
	}
	inline jint OsConstants::ICMP6_ECHO_REPLY()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ICMP6_ECHO_REPLY"
		);
	}
	inline jint OsConstants::ICMP6_ECHO_REQUEST()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ICMP6_ECHO_REQUEST"
		);
	}
	inline jint OsConstants::ICMP_ECHO()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ICMP_ECHO"
		);
	}
	inline jint OsConstants::ICMP_ECHOREPLY()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ICMP_ECHOREPLY"
		);
	}
	inline jint OsConstants::IFA_F_DADFAILED()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IFA_F_DADFAILED"
		);
	}
	inline jint OsConstants::IFA_F_DEPRECATED()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IFA_F_DEPRECATED"
		);
	}
	inline jint OsConstants::IFA_F_HOMEADDRESS()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IFA_F_HOMEADDRESS"
		);
	}
	inline jint OsConstants::IFA_F_MANAGETEMPADDR()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IFA_F_MANAGETEMPADDR"
		);
	}
	inline jint OsConstants::IFA_F_NODAD()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IFA_F_NODAD"
		);
	}
	inline jint OsConstants::IFA_F_NOPREFIXROUTE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IFA_F_NOPREFIXROUTE"
		);
	}
	inline jint OsConstants::IFA_F_OPTIMISTIC()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IFA_F_OPTIMISTIC"
		);
	}
	inline jint OsConstants::IFA_F_PERMANENT()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IFA_F_PERMANENT"
		);
	}
	inline jint OsConstants::IFA_F_SECONDARY()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IFA_F_SECONDARY"
		);
	}
	inline jint OsConstants::IFA_F_TEMPORARY()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IFA_F_TEMPORARY"
		);
	}
	inline jint OsConstants::IFA_F_TENTATIVE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IFA_F_TENTATIVE"
		);
	}
	inline jint OsConstants::IFF_ALLMULTI()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IFF_ALLMULTI"
		);
	}
	inline jint OsConstants::IFF_AUTOMEDIA()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IFF_AUTOMEDIA"
		);
	}
	inline jint OsConstants::IFF_BROADCAST()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IFF_BROADCAST"
		);
	}
	inline jint OsConstants::IFF_DEBUG()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IFF_DEBUG"
		);
	}
	inline jint OsConstants::IFF_DYNAMIC()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IFF_DYNAMIC"
		);
	}
	inline jint OsConstants::IFF_LOOPBACK()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IFF_LOOPBACK"
		);
	}
	inline jint OsConstants::IFF_MASTER()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IFF_MASTER"
		);
	}
	inline jint OsConstants::IFF_MULTICAST()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IFF_MULTICAST"
		);
	}
	inline jint OsConstants::IFF_NOARP()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IFF_NOARP"
		);
	}
	inline jint OsConstants::IFF_NOTRAILERS()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IFF_NOTRAILERS"
		);
	}
	inline jint OsConstants::IFF_POINTOPOINT()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IFF_POINTOPOINT"
		);
	}
	inline jint OsConstants::IFF_PORTSEL()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IFF_PORTSEL"
		);
	}
	inline jint OsConstants::IFF_PROMISC()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IFF_PROMISC"
		);
	}
	inline jint OsConstants::IFF_RUNNING()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IFF_RUNNING"
		);
	}
	inline jint OsConstants::IFF_SLAVE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IFF_SLAVE"
		);
	}
	inline jint OsConstants::IFF_UP()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IFF_UP"
		);
	}
	inline jint OsConstants::IPPROTO_ICMP()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IPPROTO_ICMP"
		);
	}
	inline jint OsConstants::IPPROTO_ICMPV6()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IPPROTO_ICMPV6"
		);
	}
	inline jint OsConstants::IPPROTO_IP()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IPPROTO_IP"
		);
	}
	inline jint OsConstants::IPPROTO_IPV6()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IPPROTO_IPV6"
		);
	}
	inline jint OsConstants::IPPROTO_RAW()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IPPROTO_RAW"
		);
	}
	inline jint OsConstants::IPPROTO_TCP()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IPPROTO_TCP"
		);
	}
	inline jint OsConstants::IPPROTO_UDP()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IPPROTO_UDP"
		);
	}
	inline jint OsConstants::IPV6_CHECKSUM()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IPV6_CHECKSUM"
		);
	}
	inline jint OsConstants::IPV6_MULTICAST_HOPS()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IPV6_MULTICAST_HOPS"
		);
	}
	inline jint OsConstants::IPV6_MULTICAST_IF()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IPV6_MULTICAST_IF"
		);
	}
	inline jint OsConstants::IPV6_MULTICAST_LOOP()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IPV6_MULTICAST_LOOP"
		);
	}
	inline jint OsConstants::IPV6_RECVDSTOPTS()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IPV6_RECVDSTOPTS"
		);
	}
	inline jint OsConstants::IPV6_RECVHOPLIMIT()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IPV6_RECVHOPLIMIT"
		);
	}
	inline jint OsConstants::IPV6_RECVHOPOPTS()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IPV6_RECVHOPOPTS"
		);
	}
	inline jint OsConstants::IPV6_RECVPKTINFO()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IPV6_RECVPKTINFO"
		);
	}
	inline jint OsConstants::IPV6_RECVRTHDR()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IPV6_RECVRTHDR"
		);
	}
	inline jint OsConstants::IPV6_RECVTCLASS()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IPV6_RECVTCLASS"
		);
	}
	inline jint OsConstants::IPV6_TCLASS()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IPV6_TCLASS"
		);
	}
	inline jint OsConstants::IPV6_UNICAST_HOPS()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IPV6_UNICAST_HOPS"
		);
	}
	inline jint OsConstants::IPV6_V6ONLY()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IPV6_V6ONLY"
		);
	}
	inline jint OsConstants::IP_MULTICAST_IF()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IP_MULTICAST_IF"
		);
	}
	inline jint OsConstants::IP_MULTICAST_LOOP()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IP_MULTICAST_LOOP"
		);
	}
	inline jint OsConstants::IP_MULTICAST_TTL()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IP_MULTICAST_TTL"
		);
	}
	inline jint OsConstants::IP_TOS()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IP_TOS"
		);
	}
	inline jint OsConstants::IP_TTL()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"IP_TTL"
		);
	}
	inline jint OsConstants::MAP_ANONYMOUS()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"MAP_ANONYMOUS"
		);
	}
	inline jint OsConstants::MAP_FIXED()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"MAP_FIXED"
		);
	}
	inline jint OsConstants::MAP_PRIVATE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"MAP_PRIVATE"
		);
	}
	inline jint OsConstants::MAP_SHARED()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"MAP_SHARED"
		);
	}
	inline jint OsConstants::MCAST_BLOCK_SOURCE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"MCAST_BLOCK_SOURCE"
		);
	}
	inline jint OsConstants::MCAST_JOIN_GROUP()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"MCAST_JOIN_GROUP"
		);
	}
	inline jint OsConstants::MCAST_JOIN_SOURCE_GROUP()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"MCAST_JOIN_SOURCE_GROUP"
		);
	}
	inline jint OsConstants::MCAST_LEAVE_GROUP()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"MCAST_LEAVE_GROUP"
		);
	}
	inline jint OsConstants::MCAST_LEAVE_SOURCE_GROUP()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"MCAST_LEAVE_SOURCE_GROUP"
		);
	}
	inline jint OsConstants::MCAST_UNBLOCK_SOURCE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"MCAST_UNBLOCK_SOURCE"
		);
	}
	inline jint OsConstants::MCL_CURRENT()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"MCL_CURRENT"
		);
	}
	inline jint OsConstants::MCL_FUTURE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"MCL_FUTURE"
		);
	}
	inline jint OsConstants::MFD_CLOEXEC()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"MFD_CLOEXEC"
		);
	}
	inline jint OsConstants::MSG_CTRUNC()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"MSG_CTRUNC"
		);
	}
	inline jint OsConstants::MSG_DONTROUTE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"MSG_DONTROUTE"
		);
	}
	inline jint OsConstants::MSG_EOR()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"MSG_EOR"
		);
	}
	inline jint OsConstants::MSG_OOB()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"MSG_OOB"
		);
	}
	inline jint OsConstants::MSG_PEEK()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"MSG_PEEK"
		);
	}
	inline jint OsConstants::MSG_TRUNC()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"MSG_TRUNC"
		);
	}
	inline jint OsConstants::MSG_WAITALL()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"MSG_WAITALL"
		);
	}
	inline jint OsConstants::MS_ASYNC()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"MS_ASYNC"
		);
	}
	inline jint OsConstants::MS_INVALIDATE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"MS_INVALIDATE"
		);
	}
	inline jint OsConstants::MS_SYNC()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"MS_SYNC"
		);
	}
	inline jint OsConstants::NETLINK_INET_DIAG()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"NETLINK_INET_DIAG"
		);
	}
	inline jint OsConstants::NETLINK_NETFILTER()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"NETLINK_NETFILTER"
		);
	}
	inline jint OsConstants::NETLINK_ROUTE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"NETLINK_ROUTE"
		);
	}
	inline jint OsConstants::NI_DGRAM()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"NI_DGRAM"
		);
	}
	inline jint OsConstants::NI_NAMEREQD()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"NI_NAMEREQD"
		);
	}
	inline jint OsConstants::NI_NOFQDN()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"NI_NOFQDN"
		);
	}
	inline jint OsConstants::NI_NUMERICHOST()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"NI_NUMERICHOST"
		);
	}
	inline jint OsConstants::NI_NUMERICSERV()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"NI_NUMERICSERV"
		);
	}
	inline jint OsConstants::O_ACCMODE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"O_ACCMODE"
		);
	}
	inline jint OsConstants::O_APPEND()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"O_APPEND"
		);
	}
	inline jint OsConstants::O_CLOEXEC()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"O_CLOEXEC"
		);
	}
	inline jint OsConstants::O_CREAT()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"O_CREAT"
		);
	}
	inline jint OsConstants::O_DSYNC()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"O_DSYNC"
		);
	}
	inline jint OsConstants::O_EXCL()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"O_EXCL"
		);
	}
	inline jint OsConstants::O_NOCTTY()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"O_NOCTTY"
		);
	}
	inline jint OsConstants::O_NOFOLLOW()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"O_NOFOLLOW"
		);
	}
	inline jint OsConstants::O_NONBLOCK()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"O_NONBLOCK"
		);
	}
	inline jint OsConstants::O_RDONLY()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"O_RDONLY"
		);
	}
	inline jint OsConstants::O_RDWR()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"O_RDWR"
		);
	}
	inline jint OsConstants::O_SYNC()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"O_SYNC"
		);
	}
	inline jint OsConstants::O_TRUNC()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"O_TRUNC"
		);
	}
	inline jint OsConstants::O_WRONLY()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"O_WRONLY"
		);
	}
	inline jint OsConstants::POLLERR()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"POLLERR"
		);
	}
	inline jint OsConstants::POLLHUP()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"POLLHUP"
		);
	}
	inline jint OsConstants::POLLIN()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"POLLIN"
		);
	}
	inline jint OsConstants::POLLNVAL()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"POLLNVAL"
		);
	}
	inline jint OsConstants::POLLOUT()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"POLLOUT"
		);
	}
	inline jint OsConstants::POLLPRI()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"POLLPRI"
		);
	}
	inline jint OsConstants::POLLRDBAND()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"POLLRDBAND"
		);
	}
	inline jint OsConstants::POLLRDNORM()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"POLLRDNORM"
		);
	}
	inline jint OsConstants::POLLWRBAND()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"POLLWRBAND"
		);
	}
	inline jint OsConstants::POLLWRNORM()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"POLLWRNORM"
		);
	}
	inline jint OsConstants::PROT_EXEC()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"PROT_EXEC"
		);
	}
	inline jint OsConstants::PROT_NONE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"PROT_NONE"
		);
	}
	inline jint OsConstants::PROT_READ()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"PROT_READ"
		);
	}
	inline jint OsConstants::PROT_WRITE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"PROT_WRITE"
		);
	}
	inline jint OsConstants::PR_GET_DUMPABLE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"PR_GET_DUMPABLE"
		);
	}
	inline jint OsConstants::PR_SET_DUMPABLE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"PR_SET_DUMPABLE"
		);
	}
	inline jint OsConstants::PR_SET_NO_NEW_PRIVS()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"PR_SET_NO_NEW_PRIVS"
		);
	}
	inline jint OsConstants::RTMGRP_NEIGH()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"RTMGRP_NEIGH"
		);
	}
	inline jint OsConstants::RT_SCOPE_HOST()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"RT_SCOPE_HOST"
		);
	}
	inline jint OsConstants::RT_SCOPE_LINK()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"RT_SCOPE_LINK"
		);
	}
	inline jint OsConstants::RT_SCOPE_NOWHERE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"RT_SCOPE_NOWHERE"
		);
	}
	inline jint OsConstants::RT_SCOPE_SITE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"RT_SCOPE_SITE"
		);
	}
	inline jint OsConstants::RT_SCOPE_UNIVERSE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"RT_SCOPE_UNIVERSE"
		);
	}
	inline jint OsConstants::R_OK()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"R_OK"
		);
	}
	inline jint OsConstants::SEEK_CUR_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SEEK_CUR"
		);
	}
	inline jint OsConstants::SEEK_END_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SEEK_END"
		);
	}
	inline jint OsConstants::SEEK_SET_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SEEK_SET"
		);
	}
	inline jint OsConstants::SHUT_RD()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SHUT_RD"
		);
	}
	inline jint OsConstants::SHUT_RDWR()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SHUT_RDWR"
		);
	}
	inline jint OsConstants::SHUT_WR()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SHUT_WR"
		);
	}
	inline jint OsConstants::SIGABRT_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGABRT"
		);
	}
	inline jint OsConstants::SIGALRM_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGALRM"
		);
	}
	inline jint OsConstants::SIGBUS_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGBUS"
		);
	}
	inline jint OsConstants::SIGCHLD_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGCHLD"
		);
	}
	inline jint OsConstants::SIGCONT_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGCONT"
		);
	}
	inline jint OsConstants::SIGFPE_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGFPE"
		);
	}
	inline jint OsConstants::SIGHUP_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGHUP"
		);
	}
	inline jint OsConstants::SIGILL_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGILL"
		);
	}
	inline jint OsConstants::SIGINT_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGINT"
		);
	}
	inline jint OsConstants::SIGIO_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGIO"
		);
	}
	inline jint OsConstants::SIGKILL_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGKILL"
		);
	}
	inline jint OsConstants::SIGPIPE_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGPIPE"
		);
	}
	inline jint OsConstants::SIGPROF_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGPROF"
		);
	}
	inline jint OsConstants::SIGPWR_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGPWR"
		);
	}
	inline jint OsConstants::SIGQUIT_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGQUIT"
		);
	}
	inline jint OsConstants::SIGRTMAX_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGRTMAX"
		);
	}
	inline jint OsConstants::SIGRTMIN_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGRTMIN"
		);
	}
	inline jint OsConstants::SIGSEGV_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGSEGV"
		);
	}
	inline jint OsConstants::SIGSTKFLT_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGSTKFLT"
		);
	}
	inline jint OsConstants::SIGSTOP_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGSTOP"
		);
	}
	inline jint OsConstants::SIGSYS_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGSYS"
		);
	}
	inline jint OsConstants::SIGTERM_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGTERM"
		);
	}
	inline jint OsConstants::SIGTRAP_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGTRAP"
		);
	}
	inline jint OsConstants::SIGTSTP_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGTSTP"
		);
	}
	inline jint OsConstants::SIGTTIN_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGTTIN"
		);
	}
	inline jint OsConstants::SIGTTOU_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGTTOU"
		);
	}
	inline jint OsConstants::SIGURG_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGURG"
		);
	}
	inline jint OsConstants::SIGUSR1_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGUSR1"
		);
	}
	inline jint OsConstants::SIGUSR2_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGUSR2"
		);
	}
	inline jint OsConstants::SIGVTALRM_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGVTALRM"
		);
	}
	inline jint OsConstants::SIGWINCH_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGWINCH"
		);
	}
	inline jint OsConstants::SIGXCPU_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGXCPU"
		);
	}
	inline jint OsConstants::SIGXFSZ_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIGXFSZ"
		);
	}
	inline jint OsConstants::SIOCGIFADDR()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIOCGIFADDR"
		);
	}
	inline jint OsConstants::SIOCGIFBRDADDR()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIOCGIFBRDADDR"
		);
	}
	inline jint OsConstants::SIOCGIFDSTADDR()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIOCGIFDSTADDR"
		);
	}
	inline jint OsConstants::SIOCGIFNETMASK()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SIOCGIFNETMASK"
		);
	}
	inline jint OsConstants::SOCK_CLOEXEC()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SOCK_CLOEXEC"
		);
	}
	inline jint OsConstants::SOCK_DGRAM()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SOCK_DGRAM"
		);
	}
	inline jint OsConstants::SOCK_NONBLOCK()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SOCK_NONBLOCK"
		);
	}
	inline jint OsConstants::SOCK_RAW()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SOCK_RAW"
		);
	}
	inline jint OsConstants::SOCK_SEQPACKET()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SOCK_SEQPACKET"
		);
	}
	inline jint OsConstants::SOCK_STREAM()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SOCK_STREAM"
		);
	}
	inline jint OsConstants::SOL_SOCKET()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SOL_SOCKET"
		);
	}
	inline jint OsConstants::SOL_UDP()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SOL_UDP"
		);
	}
	inline jint OsConstants::SO_BINDTODEVICE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SO_BINDTODEVICE"
		);
	}
	inline jint OsConstants::SO_BROADCAST()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SO_BROADCAST"
		);
	}
	inline jint OsConstants::SO_DEBUG()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SO_DEBUG"
		);
	}
	inline jint OsConstants::SO_DONTROUTE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SO_DONTROUTE"
		);
	}
	inline jint OsConstants::SO_ERROR()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SO_ERROR"
		);
	}
	inline jint OsConstants::SO_KEEPALIVE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SO_KEEPALIVE"
		);
	}
	inline jint OsConstants::SO_LINGER()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SO_LINGER"
		);
	}
	inline jint OsConstants::SO_OOBINLINE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SO_OOBINLINE"
		);
	}
	inline jint OsConstants::SO_PASSCRED()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SO_PASSCRED"
		);
	}
	inline jint OsConstants::SO_PEERCRED()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SO_PEERCRED"
		);
	}
	inline jint OsConstants::SO_RCVBUF()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SO_RCVBUF"
		);
	}
	inline jint OsConstants::SO_RCVLOWAT()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SO_RCVLOWAT"
		);
	}
	inline jint OsConstants::SO_RCVTIMEO()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SO_RCVTIMEO"
		);
	}
	inline jint OsConstants::SO_REUSEADDR()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SO_REUSEADDR"
		);
	}
	inline jint OsConstants::SO_SNDBUF()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SO_SNDBUF"
		);
	}
	inline jint OsConstants::SO_SNDLOWAT()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SO_SNDLOWAT"
		);
	}
	inline jint OsConstants::SO_SNDTIMEO()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SO_SNDTIMEO"
		);
	}
	inline jint OsConstants::SO_TYPE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"SO_TYPE"
		);
	}
	inline jint OsConstants::STDERR_FILENO()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"STDERR_FILENO"
		);
	}
	inline jint OsConstants::STDIN_FILENO()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"STDIN_FILENO"
		);
	}
	inline jint OsConstants::STDOUT_FILENO()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"STDOUT_FILENO"
		);
	}
	inline jint OsConstants::ST_MANDLOCK()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ST_MANDLOCK"
		);
	}
	inline jint OsConstants::ST_NOATIME()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ST_NOATIME"
		);
	}
	inline jint OsConstants::ST_NODEV()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ST_NODEV"
		);
	}
	inline jint OsConstants::ST_NODIRATIME()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ST_NODIRATIME"
		);
	}
	inline jint OsConstants::ST_NOEXEC()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ST_NOEXEC"
		);
	}
	inline jint OsConstants::ST_NOSUID()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ST_NOSUID"
		);
	}
	inline jint OsConstants::ST_RDONLY()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ST_RDONLY"
		);
	}
	inline jint OsConstants::ST_RELATIME()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ST_RELATIME"
		);
	}
	inline jint OsConstants::ST_SYNCHRONOUS()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"ST_SYNCHRONOUS"
		);
	}
	inline jint OsConstants::S_IFBLK()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"S_IFBLK"
		);
	}
	inline jint OsConstants::S_IFCHR()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"S_IFCHR"
		);
	}
	inline jint OsConstants::S_IFDIR()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"S_IFDIR"
		);
	}
	inline jint OsConstants::S_IFIFO()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"S_IFIFO"
		);
	}
	inline jint OsConstants::S_IFLNK()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"S_IFLNK"
		);
	}
	inline jint OsConstants::S_IFMT()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"S_IFMT"
		);
	}
	inline jint OsConstants::S_IFREG()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"S_IFREG"
		);
	}
	inline jint OsConstants::S_IFSOCK()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"S_IFSOCK"
		);
	}
	inline jint OsConstants::S_IRGRP()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"S_IRGRP"
		);
	}
	inline jint OsConstants::S_IROTH()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"S_IROTH"
		);
	}
	inline jint OsConstants::S_IRUSR()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"S_IRUSR"
		);
	}
	inline jint OsConstants::S_IRWXG()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"S_IRWXG"
		);
	}
	inline jint OsConstants::S_IRWXO()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"S_IRWXO"
		);
	}
	inline jint OsConstants::S_IRWXU()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"S_IRWXU"
		);
	}
	inline jint OsConstants::S_ISGID()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"S_ISGID"
		);
	}
	inline jint OsConstants::S_ISUID()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"S_ISUID"
		);
	}
	inline jint OsConstants::S_ISVTX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"S_ISVTX"
		);
	}
	inline jint OsConstants::S_IWGRP()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"S_IWGRP"
		);
	}
	inline jint OsConstants::S_IWOTH()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"S_IWOTH"
		);
	}
	inline jint OsConstants::S_IWUSR()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"S_IWUSR"
		);
	}
	inline jint OsConstants::S_IXGRP()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"S_IXGRP"
		);
	}
	inline jint OsConstants::S_IXOTH()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"S_IXOTH"
		);
	}
	inline jint OsConstants::S_IXUSR()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"S_IXUSR"
		);
	}
	inline jint OsConstants::TCP_NODELAY()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"TCP_NODELAY"
		);
	}
	inline jint OsConstants::TCP_USER_TIMEOUT()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"TCP_USER_TIMEOUT"
		);
	}
	inline jint OsConstants::UDP_GRO()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"UDP_GRO"
		);
	}
	inline jint OsConstants::UDP_SEGMENT()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"UDP_SEGMENT"
		);
	}
	inline jint OsConstants::VMADDR_CID_ANY()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"VMADDR_CID_ANY"
		);
	}
	inline jint OsConstants::VMADDR_CID_HOST()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"VMADDR_CID_HOST"
		);
	}
	inline jint OsConstants::VMADDR_CID_LOCAL()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"VMADDR_CID_LOCAL"
		);
	}
	inline jint OsConstants::VMADDR_PORT_ANY()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"VMADDR_PORT_ANY"
		);
	}
	inline jint OsConstants::WCONTINUED_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"WCONTINUED"
		);
	}
	inline jint OsConstants::WEXITED_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"WEXITED"
		);
	}
	inline jint OsConstants::WNOHANG_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"WNOHANG"
		);
	}
	inline jint OsConstants::WNOWAIT_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"WNOWAIT"
		);
	}
	inline jint OsConstants::WSTOPPED_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"WSTOPPED"
		);
	}
	inline jint OsConstants::WUNTRACED_()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"WUNTRACED"
		);
	}
	inline jint OsConstants::W_OK()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"W_OK"
		);
	}
	inline jint OsConstants::X_OK()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"X_OK"
		);
	}
	inline jint OsConstants::_SC_2_CHAR_TERM()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_2_CHAR_TERM"
		);
	}
	inline jint OsConstants::_SC_2_C_BIND()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_2_C_BIND"
		);
	}
	inline jint OsConstants::_SC_2_C_DEV()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_2_C_DEV"
		);
	}
	inline jint OsConstants::_SC_2_C_VERSION()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_2_C_VERSION"
		);
	}
	inline jint OsConstants::_SC_2_FORT_DEV()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_2_FORT_DEV"
		);
	}
	inline jint OsConstants::_SC_2_FORT_RUN()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_2_FORT_RUN"
		);
	}
	inline jint OsConstants::_SC_2_LOCALEDEF()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_2_LOCALEDEF"
		);
	}
	inline jint OsConstants::_SC_2_SW_DEV()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_2_SW_DEV"
		);
	}
	inline jint OsConstants::_SC_2_UPE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_2_UPE"
		);
	}
	inline jint OsConstants::_SC_2_VERSION()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_2_VERSION"
		);
	}
	inline jint OsConstants::_SC_AIO_LISTIO_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_AIO_LISTIO_MAX"
		);
	}
	inline jint OsConstants::_SC_AIO_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_AIO_MAX"
		);
	}
	inline jint OsConstants::_SC_AIO_PRIO_DELTA_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_AIO_PRIO_DELTA_MAX"
		);
	}
	inline jint OsConstants::_SC_ARG_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_ARG_MAX"
		);
	}
	inline jint OsConstants::_SC_ASYNCHRONOUS_IO()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_ASYNCHRONOUS_IO"
		);
	}
	inline jint OsConstants::_SC_ATEXIT_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_ATEXIT_MAX"
		);
	}
	inline jint OsConstants::_SC_AVPHYS_PAGES()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_AVPHYS_PAGES"
		);
	}
	inline jint OsConstants::_SC_BC_BASE_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_BC_BASE_MAX"
		);
	}
	inline jint OsConstants::_SC_BC_DIM_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_BC_DIM_MAX"
		);
	}
	inline jint OsConstants::_SC_BC_SCALE_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_BC_SCALE_MAX"
		);
	}
	inline jint OsConstants::_SC_BC_STRING_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_BC_STRING_MAX"
		);
	}
	inline jint OsConstants::_SC_CHILD_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_CHILD_MAX"
		);
	}
	inline jint OsConstants::_SC_CLK_TCK()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_CLK_TCK"
		);
	}
	inline jint OsConstants::_SC_COLL_WEIGHTS_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_COLL_WEIGHTS_MAX"
		);
	}
	inline jint OsConstants::_SC_DELAYTIMER_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_DELAYTIMER_MAX"
		);
	}
	inline jint OsConstants::_SC_EXPR_NEST_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_EXPR_NEST_MAX"
		);
	}
	inline jint OsConstants::_SC_FSYNC()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_FSYNC"
		);
	}
	inline jint OsConstants::_SC_GETGR_R_SIZE_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_GETGR_R_SIZE_MAX"
		);
	}
	inline jint OsConstants::_SC_GETPW_R_SIZE_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_GETPW_R_SIZE_MAX"
		);
	}
	inline jint OsConstants::_SC_IOV_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_IOV_MAX"
		);
	}
	inline jint OsConstants::_SC_JOB_CONTROL()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_JOB_CONTROL"
		);
	}
	inline jint OsConstants::_SC_LINE_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_LINE_MAX"
		);
	}
	inline jint OsConstants::_SC_LOGIN_NAME_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_LOGIN_NAME_MAX"
		);
	}
	inline jint OsConstants::_SC_MAPPED_FILES()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_MAPPED_FILES"
		);
	}
	inline jint OsConstants::_SC_MEMLOCK()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_MEMLOCK"
		);
	}
	inline jint OsConstants::_SC_MEMLOCK_RANGE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_MEMLOCK_RANGE"
		);
	}
	inline jint OsConstants::_SC_MEMORY_PROTECTION()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_MEMORY_PROTECTION"
		);
	}
	inline jint OsConstants::_SC_MESSAGE_PASSING()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_MESSAGE_PASSING"
		);
	}
	inline jint OsConstants::_SC_MQ_OPEN_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_MQ_OPEN_MAX"
		);
	}
	inline jint OsConstants::_SC_MQ_PRIO_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_MQ_PRIO_MAX"
		);
	}
	inline jint OsConstants::_SC_NGROUPS_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_NGROUPS_MAX"
		);
	}
	inline jint OsConstants::_SC_NPROCESSORS_CONF()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_NPROCESSORS_CONF"
		);
	}
	inline jint OsConstants::_SC_NPROCESSORS_ONLN()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_NPROCESSORS_ONLN"
		);
	}
	inline jint OsConstants::_SC_OPEN_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_OPEN_MAX"
		);
	}
	inline jint OsConstants::_SC_PAGESIZE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_PAGESIZE"
		);
	}
	inline jint OsConstants::_SC_PAGE_SIZE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_PAGE_SIZE"
		);
	}
	inline jint OsConstants::_SC_PASS_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_PASS_MAX"
		);
	}
	inline jint OsConstants::_SC_PHYS_PAGES()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_PHYS_PAGES"
		);
	}
	inline jint OsConstants::_SC_PRIORITIZED_IO()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_PRIORITIZED_IO"
		);
	}
	inline jint OsConstants::_SC_PRIORITY_SCHEDULING()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_PRIORITY_SCHEDULING"
		);
	}
	inline jint OsConstants::_SC_REALTIME_SIGNALS()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_REALTIME_SIGNALS"
		);
	}
	inline jint OsConstants::_SC_RE_DUP_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_RE_DUP_MAX"
		);
	}
	inline jint OsConstants::_SC_RTSIG_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_RTSIG_MAX"
		);
	}
	inline jint OsConstants::_SC_SAVED_IDS()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_SAVED_IDS"
		);
	}
	inline jint OsConstants::_SC_SEMAPHORES()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_SEMAPHORES"
		);
	}
	inline jint OsConstants::_SC_SEM_NSEMS_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_SEM_NSEMS_MAX"
		);
	}
	inline jint OsConstants::_SC_SEM_VALUE_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_SEM_VALUE_MAX"
		);
	}
	inline jint OsConstants::_SC_SHARED_MEMORY_OBJECTS()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_SHARED_MEMORY_OBJECTS"
		);
	}
	inline jint OsConstants::_SC_SIGQUEUE_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_SIGQUEUE_MAX"
		);
	}
	inline jint OsConstants::_SC_STREAM_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_STREAM_MAX"
		);
	}
	inline jint OsConstants::_SC_SYNCHRONIZED_IO()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_SYNCHRONIZED_IO"
		);
	}
	inline jint OsConstants::_SC_THREADS()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_THREADS"
		);
	}
	inline jint OsConstants::_SC_THREAD_ATTR_STACKADDR()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_THREAD_ATTR_STACKADDR"
		);
	}
	inline jint OsConstants::_SC_THREAD_ATTR_STACKSIZE()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_THREAD_ATTR_STACKSIZE"
		);
	}
	inline jint OsConstants::_SC_THREAD_DESTRUCTOR_ITERATIONS()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_THREAD_DESTRUCTOR_ITERATIONS"
		);
	}
	inline jint OsConstants::_SC_THREAD_KEYS_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_THREAD_KEYS_MAX"
		);
	}
	inline jint OsConstants::_SC_THREAD_PRIORITY_SCHEDULING()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_THREAD_PRIORITY_SCHEDULING"
		);
	}
	inline jint OsConstants::_SC_THREAD_PRIO_INHERIT()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_THREAD_PRIO_INHERIT"
		);
	}
	inline jint OsConstants::_SC_THREAD_PRIO_PROTECT()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_THREAD_PRIO_PROTECT"
		);
	}
	inline jint OsConstants::_SC_THREAD_SAFE_FUNCTIONS()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_THREAD_SAFE_FUNCTIONS"
		);
	}
	inline jint OsConstants::_SC_THREAD_STACK_MIN()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_THREAD_STACK_MIN"
		);
	}
	inline jint OsConstants::_SC_THREAD_THREADS_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_THREAD_THREADS_MAX"
		);
	}
	inline jint OsConstants::_SC_TIMERS()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_TIMERS"
		);
	}
	inline jint OsConstants::_SC_TIMER_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_TIMER_MAX"
		);
	}
	inline jint OsConstants::_SC_TTY_NAME_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_TTY_NAME_MAX"
		);
	}
	inline jint OsConstants::_SC_TZNAME_MAX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_TZNAME_MAX"
		);
	}
	inline jint OsConstants::_SC_VERSION()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_VERSION"
		);
	}
	inline jint OsConstants::_SC_XBS5_ILP32_OFF32()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_XBS5_ILP32_OFF32"
		);
	}
	inline jint OsConstants::_SC_XBS5_ILP32_OFFBIG()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_XBS5_ILP32_OFFBIG"
		);
	}
	inline jint OsConstants::_SC_XBS5_LP64_OFF64()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_XBS5_LP64_OFF64"
		);
	}
	inline jint OsConstants::_SC_XBS5_LPBIG_OFFBIG()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_XBS5_LPBIG_OFFBIG"
		);
	}
	inline jint OsConstants::_SC_XOPEN_CRYPT()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_XOPEN_CRYPT"
		);
	}
	inline jint OsConstants::_SC_XOPEN_ENH_I18N()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_XOPEN_ENH_I18N"
		);
	}
	inline jint OsConstants::_SC_XOPEN_LEGACY()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_XOPEN_LEGACY"
		);
	}
	inline jint OsConstants::_SC_XOPEN_REALTIME()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_XOPEN_REALTIME"
		);
	}
	inline jint OsConstants::_SC_XOPEN_REALTIME_THREADS()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_XOPEN_REALTIME_THREADS"
		);
	}
	inline jint OsConstants::_SC_XOPEN_SHM()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_XOPEN_SHM"
		);
	}
	inline jint OsConstants::_SC_XOPEN_UNIX()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_XOPEN_UNIX"
		);
	}
	inline jint OsConstants::_SC_XOPEN_VERSION()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_XOPEN_VERSION"
		);
	}
	inline jint OsConstants::_SC_XOPEN_XCU_VERSION()
	{
		return getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_XOPEN_XCU_VERSION"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean OsConstants::S_ISBLK(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.system.OsConstants",
			"S_ISBLK",
			"(I)Z",
			arg0
		);
	}
	inline jboolean OsConstants::S_ISCHR(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.system.OsConstants",
			"S_ISCHR",
			"(I)Z",
			arg0
		);
	}
	inline jboolean OsConstants::S_ISDIR(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.system.OsConstants",
			"S_ISDIR",
			"(I)Z",
			arg0
		);
	}
	inline jboolean OsConstants::S_ISFIFO(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.system.OsConstants",
			"S_ISFIFO",
			"(I)Z",
			arg0
		);
	}
	inline jboolean OsConstants::S_ISLNK(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.system.OsConstants",
			"S_ISLNK",
			"(I)Z",
			arg0
		);
	}
	inline jboolean OsConstants::S_ISREG(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.system.OsConstants",
			"S_ISREG",
			"(I)Z",
			arg0
		);
	}
	inline jboolean OsConstants::S_ISSOCK(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.system.OsConstants",
			"S_ISSOCK",
			"(I)Z",
			arg0
		);
	}
	inline jboolean OsConstants::WCOREDUMP_(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.system.OsConstants",
			"WCOREDUMP",
			"(I)Z",
			arg0
		);
	}
	inline jint OsConstants::WEXITSTATUS_(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.system.OsConstants",
			"WEXITSTATUS",
			"(I)I",
			arg0
		);
	}
	inline jboolean OsConstants::WIFEXITED_(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.system.OsConstants",
			"WIFEXITED",
			"(I)Z",
			arg0
		);
	}
	inline jboolean OsConstants::WIFSIGNALED_(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.system.OsConstants",
			"WIFSIGNALED",
			"(I)Z",
			arg0
		);
	}
	inline jboolean OsConstants::WIFSTOPPED_(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.system.OsConstants",
			"WIFSTOPPED",
			"(I)Z",
			arg0
		);
	}
	inline jint OsConstants::WSTOPSIG_(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.system.OsConstants",
			"WSTOPSIG",
			"(I)I",
			arg0
		);
	}
	inline jint OsConstants::WTERMSIG_(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.system.OsConstants",
			"WTERMSIG",
			"(I)I",
			arg0
		);
	}
	inline JString OsConstants::errnoName(jint arg0)
	{
		return callStaticObjectMethod(
			"android.system.OsConstants",
			"errnoName",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString OsConstants::gaiName(jint arg0)
	{
		return callStaticObjectMethod(
			"android.system.OsConstants",
			"gaiName",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
} // namespace android::system

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::system;
#endif
