#pragma once

#ifndef ANDROID_SYSTEM_OSCONSTANTS
#define ANDROID_SYSTEM_OSCONSTANTS

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::system
{
	class OsConstants : public __JniBaseClass
	{
	public:
		// Fields
		static jint AF_INET();
		static jint AF_INET6();
		static jint AF_NETLINK();
		static jint AF_PACKET();
		static jint AF_UNIX();
		static jint AF_UNSPEC();
		static jint AI_ADDRCONFIG();
		static jint AI_ALL();
		static jint AI_CANONNAME();
		static jint AI_NUMERICHOST();
		static jint AI_NUMERICSERV();
		static jint AI_PASSIVE();
		static jint AI_V4MAPPED();
		static jint ARPHRD_ETHER();
		static jint CAP_AUDIT_CONTROL();
		static jint CAP_AUDIT_WRITE();
		static jint CAP_BLOCK_SUSPEND();
		static jint CAP_CHOWN();
		static jint CAP_DAC_OVERRIDE();
		static jint CAP_DAC_READ_SEARCH();
		static jint CAP_FOWNER();
		static jint CAP_FSETID();
		static jint CAP_IPC_LOCK();
		static jint CAP_IPC_OWNER();
		static jint CAP_KILL();
		static jint CAP_LAST_CAP();
		static jint CAP_LEASE();
		static jint CAP_LINUX_IMMUTABLE();
		static jint CAP_MAC_ADMIN();
		static jint CAP_MAC_OVERRIDE();
		static jint CAP_MKNOD();
		static jint CAP_NET_ADMIN();
		static jint CAP_NET_BIND_SERVICE();
		static jint CAP_NET_BROADCAST();
		static jint CAP_NET_RAW();
		static jint CAP_SETFCAP();
		static jint CAP_SETGID();
		static jint CAP_SETPCAP();
		static jint CAP_SETUID();
		static jint CAP_SYSLOG();
		static jint CAP_SYS_ADMIN();
		static jint CAP_SYS_BOOT();
		static jint CAP_SYS_CHROOT();
		static jint CAP_SYS_MODULE();
		static jint CAP_SYS_NICE();
		static jint CAP_SYS_PACCT();
		static jint CAP_SYS_PTRACE();
		static jint CAP_SYS_RAWIO();
		static jint CAP_SYS_RESOURCE();
		static jint CAP_SYS_TIME();
		static jint CAP_SYS_TTY_CONFIG();
		static jint CAP_WAKE_ALARM();
		static jint E2BIG();
		static jint EACCES();
		static jint EADDRINUSE();
		static jint EADDRNOTAVAIL();
		static jint EAFNOSUPPORT();
		static jint EAGAIN();
		static jint EAI_AGAIN();
		static jint EAI_BADFLAGS();
		static jint EAI_FAIL();
		static jint EAI_FAMILY();
		static jint EAI_MEMORY();
		static jint EAI_NODATA();
		static jint EAI_NONAME();
		static jint EAI_OVERFLOW();
		static jint EAI_SERVICE();
		static jint EAI_SOCKTYPE();
		static jint EAI_SYSTEM();
		static jint EALREADY();
		static jint EBADF();
		static jint EBADMSG();
		static jint EBUSY();
		static jint ECANCELED();
		static jint ECHILD();
		static jint ECONNABORTED();
		static jint ECONNREFUSED();
		static jint ECONNRESET();
		static jint EDEADLK();
		static jint EDESTADDRREQ();
		static jint EDOM();
		static jint EDQUOT();
		static jint EEXIST();
		static jint EFAULT();
		static jint EFBIG();
		static jint EHOSTUNREACH();
		static jint EIDRM();
		static jint EILSEQ();
		static jint EINPROGRESS();
		static jint EINTR();
		static jint EINVAL();
		static jint EIO();
		static jint EISCONN();
		static jint EISDIR();
		static jint ELOOP();
		static jint EMFILE();
		static jint EMLINK();
		static jint EMSGSIZE();
		static jint EMULTIHOP();
		static jint ENAMETOOLONG();
		static jint ENETDOWN();
		static jint ENETRESET();
		static jint ENETUNREACH();
		static jint ENFILE();
		static jint ENOBUFS();
		static jint ENODATA();
		static jint ENODEV();
		static jint ENOENT();
		static jint ENOEXEC();
		static jint ENOLCK();
		static jint ENOLINK();
		static jint ENOMEM();
		static jint ENOMSG();
		static jint ENOPROTOOPT();
		static jint ENOSPC();
		static jint ENOSR();
		static jint ENOSTR();
		static jint ENOSYS();
		static jint ENOTCONN();
		static jint ENOTDIR();
		static jint ENOTEMPTY();
		static jint ENOTSOCK();
		static jint ENOTSUP();
		static jint ENOTTY();
		static jint ENXIO();
		static jint EOPNOTSUPP();
		static jint EOVERFLOW();
		static jint EPERM();
		static jint EPIPE();
		static jint EPROTO();
		static jint EPROTONOSUPPORT();
		static jint EPROTOTYPE();
		static jint ERANGE();
		static jint EROFS();
		static jint ESPIPE();
		static jint ESRCH();
		static jint ESTALE();
		static jint ETH_P_ALL();
		static jint ETH_P_ARP();
		static jint ETH_P_IP();
		static jint ETH_P_IPV6();
		static jint ETIME();
		static jint ETIMEDOUT();
		static jint ETXTBSY();
		static jint EXDEV();
		static jint EXIT_FAILURE();
		static jint EXIT_SUCCESS();
		static jint FD_CLOEXEC();
		static jint FIONREAD();
		static jint F_DUPFD();
		static jint F_DUPFD_CLOEXEC();
		static jint F_GETFD();
		static jint F_GETFL();
		static jint F_GETLK();
		static jint F_GETLK64();
		static jint F_GETOWN();
		static jint F_OK();
		static jint F_RDLCK();
		static jint F_SETFD();
		static jint F_SETFL();
		static jint F_SETLK();
		static jint F_SETLK64();
		static jint F_SETLKW();
		static jint F_SETLKW64();
		static jint F_SETOWN();
		static jint F_UNLCK();
		static jint F_WRLCK();
		static jint ICMP6_ECHO_REPLY();
		static jint ICMP6_ECHO_REQUEST();
		static jint ICMP_ECHO();
		static jint ICMP_ECHOREPLY();
		static jint IFA_F_DADFAILED();
		static jint IFA_F_DEPRECATED();
		static jint IFA_F_HOMEADDRESS();
		static jint IFA_F_NODAD();
		static jint IFA_F_OPTIMISTIC();
		static jint IFA_F_PERMANENT();
		static jint IFA_F_SECONDARY();
		static jint IFA_F_TEMPORARY();
		static jint IFA_F_TENTATIVE();
		static jint IFF_ALLMULTI();
		static jint IFF_AUTOMEDIA();
		static jint IFF_BROADCAST();
		static jint IFF_DEBUG();
		static jint IFF_DYNAMIC();
		static jint IFF_LOOPBACK();
		static jint IFF_MASTER();
		static jint IFF_MULTICAST();
		static jint IFF_NOARP();
		static jint IFF_NOTRAILERS();
		static jint IFF_POINTOPOINT();
		static jint IFF_PORTSEL();
		static jint IFF_PROMISC();
		static jint IFF_RUNNING();
		static jint IFF_SLAVE();
		static jint IFF_UP();
		static jint IPPROTO_ICMP();
		static jint IPPROTO_ICMPV6();
		static jint IPPROTO_IP();
		static jint IPPROTO_IPV6();
		static jint IPPROTO_RAW();
		static jint IPPROTO_TCP();
		static jint IPPROTO_UDP();
		static jint IPV6_CHECKSUM();
		static jint IPV6_MULTICAST_HOPS();
		static jint IPV6_MULTICAST_IF();
		static jint IPV6_MULTICAST_LOOP();
		static jint IPV6_RECVDSTOPTS();
		static jint IPV6_RECVHOPLIMIT();
		static jint IPV6_RECVHOPOPTS();
		static jint IPV6_RECVPKTINFO();
		static jint IPV6_RECVRTHDR();
		static jint IPV6_RECVTCLASS();
		static jint IPV6_TCLASS();
		static jint IPV6_UNICAST_HOPS();
		static jint IPV6_V6ONLY();
		static jint IP_MULTICAST_IF();
		static jint IP_MULTICAST_LOOP();
		static jint IP_MULTICAST_TTL();
		static jint IP_TOS();
		static jint IP_TTL();
		static jint MAP_FIXED();
		static jint MAP_PRIVATE();
		static jint MAP_SHARED();
		static jint MCAST_BLOCK_SOURCE();
		static jint MCAST_JOIN_GROUP();
		static jint MCAST_JOIN_SOURCE_GROUP();
		static jint MCAST_LEAVE_GROUP();
		static jint MCAST_LEAVE_SOURCE_GROUP();
		static jint MCAST_UNBLOCK_SOURCE();
		static jint MCL_CURRENT();
		static jint MCL_FUTURE();
		static jint MSG_CTRUNC();
		static jint MSG_DONTROUTE();
		static jint MSG_EOR();
		static jint MSG_OOB();
		static jint MSG_PEEK();
		static jint MSG_TRUNC();
		static jint MSG_WAITALL();
		static jint MS_ASYNC();
		static jint MS_INVALIDATE();
		static jint MS_SYNC();
		static jint NETLINK_INET_DIAG();
		static jint NETLINK_ROUTE();
		static jint NI_DGRAM();
		static jint NI_NAMEREQD();
		static jint NI_NOFQDN();
		static jint NI_NUMERICHOST();
		static jint NI_NUMERICSERV();
		static jint O_ACCMODE();
		static jint O_APPEND();
		static jint O_CLOEXEC();
		static jint O_CREAT();
		static jint O_DSYNC();
		static jint O_EXCL();
		static jint O_NOCTTY();
		static jint O_NOFOLLOW();
		static jint O_NONBLOCK();
		static jint O_RDONLY();
		static jint O_RDWR();
		static jint O_SYNC();
		static jint O_TRUNC();
		static jint O_WRONLY();
		static jint POLLERR();
		static jint POLLHUP();
		static jint POLLIN();
		static jint POLLNVAL();
		static jint POLLOUT();
		static jint POLLPRI();
		static jint POLLRDBAND();
		static jint POLLRDNORM();
		static jint POLLWRBAND();
		static jint POLLWRNORM();
		static jint PROT_EXEC();
		static jint PROT_NONE();
		static jint PROT_READ();
		static jint PROT_WRITE();
		static jint PR_GET_DUMPABLE();
		static jint PR_SET_DUMPABLE();
		static jint PR_SET_NO_NEW_PRIVS();
		static jint RTMGRP_NEIGH();
		static jint RT_SCOPE_HOST();
		static jint RT_SCOPE_LINK();
		static jint RT_SCOPE_NOWHERE();
		static jint RT_SCOPE_SITE();
		static jint RT_SCOPE_UNIVERSE();
		static jint R_OK();
		static jint SEEK_CUR();
		static jint SEEK_END();
		static jint SEEK_SET();
		static jint SHUT_RD();
		static jint SHUT_RDWR();
		static jint SHUT_WR();
		static jint SIGABRT();
		static jint SIGALRM();
		static jint SIGBUS();
		static jint SIGCHLD();
		static jint SIGCONT();
		static jint SIGFPE();
		static jint SIGHUP();
		static jint SIGILL();
		static jint SIGINT();
		static jint SIGIO();
		static jint SIGKILL();
		static jint SIGPIPE();
		static jint SIGPROF();
		static jint SIGPWR();
		static jint SIGQUIT();
		static jint SIGRTMAX();
		static jint SIGRTMIN();
		static jint SIGSEGV();
		static jint SIGSTKFLT();
		static jint SIGSTOP();
		static jint SIGSYS();
		static jint SIGTERM();
		static jint SIGTRAP();
		static jint SIGTSTP();
		static jint SIGTTIN();
		static jint SIGTTOU();
		static jint SIGURG();
		static jint SIGUSR1();
		static jint SIGUSR2();
		static jint SIGVTALRM();
		static jint SIGWINCH();
		static jint SIGXCPU();
		static jint SIGXFSZ();
		static jint SIOCGIFADDR();
		static jint SIOCGIFBRDADDR();
		static jint SIOCGIFDSTADDR();
		static jint SIOCGIFNETMASK();
		static jint SOCK_CLOEXEC();
		static jint SOCK_DGRAM();
		static jint SOCK_NONBLOCK();
		static jint SOCK_RAW();
		static jint SOCK_SEQPACKET();
		static jint SOCK_STREAM();
		static jint SOL_SOCKET();
		static jint SO_BINDTODEVICE();
		static jint SO_BROADCAST();
		static jint SO_DEBUG();
		static jint SO_DONTROUTE();
		static jint SO_ERROR();
		static jint SO_KEEPALIVE();
		static jint SO_LINGER();
		static jint SO_OOBINLINE();
		static jint SO_PASSCRED();
		static jint SO_PEERCRED();
		static jint SO_RCVBUF();
		static jint SO_RCVLOWAT();
		static jint SO_RCVTIMEO();
		static jint SO_REUSEADDR();
		static jint SO_SNDBUF();
		static jint SO_SNDLOWAT();
		static jint SO_SNDTIMEO();
		static jint SO_TYPE();
		static jint STDERR_FILENO();
		static jint STDIN_FILENO();
		static jint STDOUT_FILENO();
		static jint ST_MANDLOCK();
		static jint ST_NOATIME();
		static jint ST_NODEV();
		static jint ST_NODIRATIME();
		static jint ST_NOEXEC();
		static jint ST_NOSUID();
		static jint ST_RDONLY();
		static jint ST_RELATIME();
		static jint ST_SYNCHRONOUS();
		static jint S_IFBLK();
		static jint S_IFCHR();
		static jint S_IFDIR();
		static jint S_IFIFO();
		static jint S_IFLNK();
		static jint S_IFMT();
		static jint S_IFREG();
		static jint S_IFSOCK();
		static jint S_IRGRP();
		static jint S_IROTH();
		static jint S_IRUSR();
		static jint S_IRWXG();
		static jint S_IRWXO();
		static jint S_IRWXU();
		static jint S_ISGID();
		static jint S_ISUID();
		static jint S_ISVTX();
		static jint S_IWGRP();
		static jint S_IWOTH();
		static jint S_IWUSR();
		static jint S_IXGRP();
		static jint S_IXOTH();
		static jint S_IXUSR();
		static jint TCP_NODELAY();
		static jint TCP_USER_TIMEOUT();
		static jint WCONTINUED();
		static jint WEXITED();
		static jint WNOHANG();
		static jint WNOWAIT();
		static jint WSTOPPED();
		static jint WUNTRACED();
		static jint W_OK();
		static jint X_OK();
		static jint _SC_2_CHAR_TERM();
		static jint _SC_2_C_BIND();
		static jint _SC_2_C_DEV();
		static jint _SC_2_C_VERSION();
		static jint _SC_2_FORT_DEV();
		static jint _SC_2_FORT_RUN();
		static jint _SC_2_LOCALEDEF();
		static jint _SC_2_SW_DEV();
		static jint _SC_2_UPE();
		static jint _SC_2_VERSION();
		static jint _SC_AIO_LISTIO_MAX();
		static jint _SC_AIO_MAX();
		static jint _SC_AIO_PRIO_DELTA_MAX();
		static jint _SC_ARG_MAX();
		static jint _SC_ASYNCHRONOUS_IO();
		static jint _SC_ATEXIT_MAX();
		static jint _SC_AVPHYS_PAGES();
		static jint _SC_BC_BASE_MAX();
		static jint _SC_BC_DIM_MAX();
		static jint _SC_BC_SCALE_MAX();
		static jint _SC_BC_STRING_MAX();
		static jint _SC_CHILD_MAX();
		static jint _SC_CLK_TCK();
		static jint _SC_COLL_WEIGHTS_MAX();
		static jint _SC_DELAYTIMER_MAX();
		static jint _SC_EXPR_NEST_MAX();
		static jint _SC_FSYNC();
		static jint _SC_GETGR_R_SIZE_MAX();
		static jint _SC_GETPW_R_SIZE_MAX();
		static jint _SC_IOV_MAX();
		static jint _SC_JOB_CONTROL();
		static jint _SC_LINE_MAX();
		static jint _SC_LOGIN_NAME_MAX();
		static jint _SC_MAPPED_FILES();
		static jint _SC_MEMLOCK();
		static jint _SC_MEMLOCK_RANGE();
		static jint _SC_MEMORY_PROTECTION();
		static jint _SC_MESSAGE_PASSING();
		static jint _SC_MQ_OPEN_MAX();
		static jint _SC_MQ_PRIO_MAX();
		static jint _SC_NGROUPS_MAX();
		static jint _SC_NPROCESSORS_CONF();
		static jint _SC_NPROCESSORS_ONLN();
		static jint _SC_OPEN_MAX();
		static jint _SC_PAGESIZE();
		static jint _SC_PAGE_SIZE();
		static jint _SC_PASS_MAX();
		static jint _SC_PHYS_PAGES();
		static jint _SC_PRIORITIZED_IO();
		static jint _SC_PRIORITY_SCHEDULING();
		static jint _SC_REALTIME_SIGNALS();
		static jint _SC_RE_DUP_MAX();
		static jint _SC_RTSIG_MAX();
		static jint _SC_SAVED_IDS();
		static jint _SC_SEMAPHORES();
		static jint _SC_SEM_NSEMS_MAX();
		static jint _SC_SEM_VALUE_MAX();
		static jint _SC_SHARED_MEMORY_OBJECTS();
		static jint _SC_SIGQUEUE_MAX();
		static jint _SC_STREAM_MAX();
		static jint _SC_SYNCHRONIZED_IO();
		static jint _SC_THREADS();
		static jint _SC_THREAD_ATTR_STACKADDR();
		static jint _SC_THREAD_ATTR_STACKSIZE();
		static jint _SC_THREAD_DESTRUCTOR_ITERATIONS();
		static jint _SC_THREAD_KEYS_MAX();
		static jint _SC_THREAD_PRIORITY_SCHEDULING();
		static jint _SC_THREAD_PRIO_INHERIT();
		static jint _SC_THREAD_PRIO_PROTECT();
		static jint _SC_THREAD_SAFE_FUNCTIONS();
		static jint _SC_THREAD_STACK_MIN();
		static jint _SC_THREAD_THREADS_MAX();
		static jint _SC_TIMERS();
		static jint _SC_TIMER_MAX();
		static jint _SC_TTY_NAME_MAX();
		static jint _SC_TZNAME_MAX();
		static jint _SC_VERSION();
		static jint _SC_XBS5_ILP32_OFF32();
		static jint _SC_XBS5_ILP32_OFFBIG();
		static jint _SC_XBS5_LP64_OFF64();
		static jint _SC_XBS5_LPBIG_OFFBIG();
		static jint _SC_XOPEN_CRYPT();
		static jint _SC_XOPEN_ENH_I18N();
		static jint _SC_XOPEN_LEGACY();
		static jint _SC_XOPEN_REALTIME();
		static jint _SC_XOPEN_REALTIME_THREADS();
		static jint _SC_XOPEN_SHM();
		static jint _SC_XOPEN_UNIX();
		static jint _SC_XOPEN_VERSION();
		static jint _SC_XOPEN_XCU_VERSION();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jboolean S_ISBLK(jint arg0);
		static jboolean S_ISCHR(jint arg0);
		static jboolean S_ISDIR(jint arg0);
		static jboolean S_ISFIFO(jint arg0);
		static jboolean S_ISREG(jint arg0);
		static jboolean S_ISLNK(jint arg0);
		static jboolean S_ISSOCK(jint arg0);
		static jint WEXITSTATUS(jint arg0);
		static jboolean WCOREDUMP(jint arg0);
		static jint WTERMSIG(jint arg0);
		static jint WSTOPSIG(jint arg0);
		static jboolean WIFEXITED(jint arg0);
		static jboolean WIFSTOPPED(jint arg0);
		static jboolean WIFSIGNALED(jint arg0);
		static QAndroidJniObject gaiName(jint arg0);
		static QAndroidJniObject errnoName(jint arg0);
	};
} // namespace __jni_impl::android::system


namespace __jni_impl::android::system
{
	// Fields
	jint OsConstants::AF_INET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"AF_INET");
	}
	jint OsConstants::AF_INET6()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"AF_INET6");
	}
	jint OsConstants::AF_NETLINK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"AF_NETLINK");
	}
	jint OsConstants::AF_PACKET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"AF_PACKET");
	}
	jint OsConstants::AF_UNIX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"AF_UNIX");
	}
	jint OsConstants::AF_UNSPEC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"AF_UNSPEC");
	}
	jint OsConstants::AI_ADDRCONFIG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"AI_ADDRCONFIG");
	}
	jint OsConstants::AI_ALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"AI_ALL");
	}
	jint OsConstants::AI_CANONNAME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"AI_CANONNAME");
	}
	jint OsConstants::AI_NUMERICHOST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"AI_NUMERICHOST");
	}
	jint OsConstants::AI_NUMERICSERV()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"AI_NUMERICSERV");
	}
	jint OsConstants::AI_PASSIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"AI_PASSIVE");
	}
	jint OsConstants::AI_V4MAPPED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"AI_V4MAPPED");
	}
	jint OsConstants::ARPHRD_ETHER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ARPHRD_ETHER");
	}
	jint OsConstants::CAP_AUDIT_CONTROL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_AUDIT_CONTROL");
	}
	jint OsConstants::CAP_AUDIT_WRITE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_AUDIT_WRITE");
	}
	jint OsConstants::CAP_BLOCK_SUSPEND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_BLOCK_SUSPEND");
	}
	jint OsConstants::CAP_CHOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_CHOWN");
	}
	jint OsConstants::CAP_DAC_OVERRIDE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_DAC_OVERRIDE");
	}
	jint OsConstants::CAP_DAC_READ_SEARCH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_DAC_READ_SEARCH");
	}
	jint OsConstants::CAP_FOWNER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_FOWNER");
	}
	jint OsConstants::CAP_FSETID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_FSETID");
	}
	jint OsConstants::CAP_IPC_LOCK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_IPC_LOCK");
	}
	jint OsConstants::CAP_IPC_OWNER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_IPC_OWNER");
	}
	jint OsConstants::CAP_KILL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_KILL");
	}
	jint OsConstants::CAP_LAST_CAP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_LAST_CAP");
	}
	jint OsConstants::CAP_LEASE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_LEASE");
	}
	jint OsConstants::CAP_LINUX_IMMUTABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_LINUX_IMMUTABLE");
	}
	jint OsConstants::CAP_MAC_ADMIN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_MAC_ADMIN");
	}
	jint OsConstants::CAP_MAC_OVERRIDE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_MAC_OVERRIDE");
	}
	jint OsConstants::CAP_MKNOD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_MKNOD");
	}
	jint OsConstants::CAP_NET_ADMIN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_NET_ADMIN");
	}
	jint OsConstants::CAP_NET_BIND_SERVICE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_NET_BIND_SERVICE");
	}
	jint OsConstants::CAP_NET_BROADCAST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_NET_BROADCAST");
	}
	jint OsConstants::CAP_NET_RAW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_NET_RAW");
	}
	jint OsConstants::CAP_SETFCAP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_SETFCAP");
	}
	jint OsConstants::CAP_SETGID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_SETGID");
	}
	jint OsConstants::CAP_SETPCAP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_SETPCAP");
	}
	jint OsConstants::CAP_SETUID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_SETUID");
	}
	jint OsConstants::CAP_SYSLOG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_SYSLOG");
	}
	jint OsConstants::CAP_SYS_ADMIN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_SYS_ADMIN");
	}
	jint OsConstants::CAP_SYS_BOOT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_SYS_BOOT");
	}
	jint OsConstants::CAP_SYS_CHROOT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_SYS_CHROOT");
	}
	jint OsConstants::CAP_SYS_MODULE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_SYS_MODULE");
	}
	jint OsConstants::CAP_SYS_NICE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_SYS_NICE");
	}
	jint OsConstants::CAP_SYS_PACCT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_SYS_PACCT");
	}
	jint OsConstants::CAP_SYS_PTRACE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_SYS_PTRACE");
	}
	jint OsConstants::CAP_SYS_RAWIO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_SYS_RAWIO");
	}
	jint OsConstants::CAP_SYS_RESOURCE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_SYS_RESOURCE");
	}
	jint OsConstants::CAP_SYS_TIME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_SYS_TIME");
	}
	jint OsConstants::CAP_SYS_TTY_CONFIG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_SYS_TTY_CONFIG");
	}
	jint OsConstants::CAP_WAKE_ALARM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"CAP_WAKE_ALARM");
	}
	jint OsConstants::E2BIG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"E2BIG");
	}
	jint OsConstants::EACCES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"EACCES");
	}
	jint OsConstants::EADDRINUSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"EADDRINUSE");
	}
	jint OsConstants::EADDRNOTAVAIL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"EADDRNOTAVAIL");
	}
	jint OsConstants::EAFNOSUPPORT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"EAFNOSUPPORT");
	}
	jint OsConstants::EAGAIN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"EAGAIN");
	}
	jint OsConstants::EAI_AGAIN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"EAI_AGAIN");
	}
	jint OsConstants::EAI_BADFLAGS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"EAI_BADFLAGS");
	}
	jint OsConstants::EAI_FAIL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"EAI_FAIL");
	}
	jint OsConstants::EAI_FAMILY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"EAI_FAMILY");
	}
	jint OsConstants::EAI_MEMORY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"EAI_MEMORY");
	}
	jint OsConstants::EAI_NODATA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"EAI_NODATA");
	}
	jint OsConstants::EAI_NONAME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"EAI_NONAME");
	}
	jint OsConstants::EAI_OVERFLOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"EAI_OVERFLOW");
	}
	jint OsConstants::EAI_SERVICE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"EAI_SERVICE");
	}
	jint OsConstants::EAI_SOCKTYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"EAI_SOCKTYPE");
	}
	jint OsConstants::EAI_SYSTEM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"EAI_SYSTEM");
	}
	jint OsConstants::EALREADY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"EALREADY");
	}
	jint OsConstants::EBADF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"EBADF");
	}
	jint OsConstants::EBADMSG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"EBADMSG");
	}
	jint OsConstants::EBUSY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"EBUSY");
	}
	jint OsConstants::ECANCELED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ECANCELED");
	}
	jint OsConstants::ECHILD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ECHILD");
	}
	jint OsConstants::ECONNABORTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ECONNABORTED");
	}
	jint OsConstants::ECONNREFUSED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ECONNREFUSED");
	}
	jint OsConstants::ECONNRESET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ECONNRESET");
	}
	jint OsConstants::EDEADLK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"EDEADLK");
	}
	jint OsConstants::EDESTADDRREQ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"EDESTADDRREQ");
	}
	jint OsConstants::EDOM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"EDOM");
	}
	jint OsConstants::EDQUOT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"EDQUOT");
	}
	jint OsConstants::EEXIST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"EEXIST");
	}
	jint OsConstants::EFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"EFAULT");
	}
	jint OsConstants::EFBIG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"EFBIG");
	}
	jint OsConstants::EHOSTUNREACH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"EHOSTUNREACH");
	}
	jint OsConstants::EIDRM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"EIDRM");
	}
	jint OsConstants::EILSEQ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"EILSEQ");
	}
	jint OsConstants::EINPROGRESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"EINPROGRESS");
	}
	jint OsConstants::EINTR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"EINTR");
	}
	jint OsConstants::EINVAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"EINVAL");
	}
	jint OsConstants::EIO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"EIO");
	}
	jint OsConstants::EISCONN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"EISCONN");
	}
	jint OsConstants::EISDIR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"EISDIR");
	}
	jint OsConstants::ELOOP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ELOOP");
	}
	jint OsConstants::EMFILE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"EMFILE");
	}
	jint OsConstants::EMLINK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"EMLINK");
	}
	jint OsConstants::EMSGSIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"EMSGSIZE");
	}
	jint OsConstants::EMULTIHOP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"EMULTIHOP");
	}
	jint OsConstants::ENAMETOOLONG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ENAMETOOLONG");
	}
	jint OsConstants::ENETDOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ENETDOWN");
	}
	jint OsConstants::ENETRESET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ENETRESET");
	}
	jint OsConstants::ENETUNREACH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ENETUNREACH");
	}
	jint OsConstants::ENFILE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ENFILE");
	}
	jint OsConstants::ENOBUFS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ENOBUFS");
	}
	jint OsConstants::ENODATA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ENODATA");
	}
	jint OsConstants::ENODEV()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ENODEV");
	}
	jint OsConstants::ENOENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ENOENT");
	}
	jint OsConstants::ENOEXEC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ENOEXEC");
	}
	jint OsConstants::ENOLCK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ENOLCK");
	}
	jint OsConstants::ENOLINK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ENOLINK");
	}
	jint OsConstants::ENOMEM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ENOMEM");
	}
	jint OsConstants::ENOMSG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ENOMSG");
	}
	jint OsConstants::ENOPROTOOPT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ENOPROTOOPT");
	}
	jint OsConstants::ENOSPC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ENOSPC");
	}
	jint OsConstants::ENOSR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ENOSR");
	}
	jint OsConstants::ENOSTR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ENOSTR");
	}
	jint OsConstants::ENOSYS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ENOSYS");
	}
	jint OsConstants::ENOTCONN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ENOTCONN");
	}
	jint OsConstants::ENOTDIR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ENOTDIR");
	}
	jint OsConstants::ENOTEMPTY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ENOTEMPTY");
	}
	jint OsConstants::ENOTSOCK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ENOTSOCK");
	}
	jint OsConstants::ENOTSUP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ENOTSUP");
	}
	jint OsConstants::ENOTTY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ENOTTY");
	}
	jint OsConstants::ENXIO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ENXIO");
	}
	jint OsConstants::EOPNOTSUPP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"EOPNOTSUPP");
	}
	jint OsConstants::EOVERFLOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"EOVERFLOW");
	}
	jint OsConstants::EPERM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"EPERM");
	}
	jint OsConstants::EPIPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"EPIPE");
	}
	jint OsConstants::EPROTO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"EPROTO");
	}
	jint OsConstants::EPROTONOSUPPORT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"EPROTONOSUPPORT");
	}
	jint OsConstants::EPROTOTYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"EPROTOTYPE");
	}
	jint OsConstants::ERANGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ERANGE");
	}
	jint OsConstants::EROFS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"EROFS");
	}
	jint OsConstants::ESPIPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ESPIPE");
	}
	jint OsConstants::ESRCH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ESRCH");
	}
	jint OsConstants::ESTALE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ESTALE");
	}
	jint OsConstants::ETH_P_ALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ETH_P_ALL");
	}
	jint OsConstants::ETH_P_ARP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ETH_P_ARP");
	}
	jint OsConstants::ETH_P_IP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ETH_P_IP");
	}
	jint OsConstants::ETH_P_IPV6()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ETH_P_IPV6");
	}
	jint OsConstants::ETIME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ETIME");
	}
	jint OsConstants::ETIMEDOUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ETIMEDOUT");
	}
	jint OsConstants::ETXTBSY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ETXTBSY");
	}
	jint OsConstants::EXDEV()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"EXDEV");
	}
	jint OsConstants::EXIT_FAILURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"EXIT_FAILURE");
	}
	jint OsConstants::EXIT_SUCCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"EXIT_SUCCESS");
	}
	jint OsConstants::FD_CLOEXEC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"FD_CLOEXEC");
	}
	jint OsConstants::FIONREAD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"FIONREAD");
	}
	jint OsConstants::F_DUPFD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"F_DUPFD");
	}
	jint OsConstants::F_DUPFD_CLOEXEC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"F_DUPFD_CLOEXEC");
	}
	jint OsConstants::F_GETFD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"F_GETFD");
	}
	jint OsConstants::F_GETFL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"F_GETFL");
	}
	jint OsConstants::F_GETLK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"F_GETLK");
	}
	jint OsConstants::F_GETLK64()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"F_GETLK64");
	}
	jint OsConstants::F_GETOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"F_GETOWN");
	}
	jint OsConstants::F_OK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"F_OK");
	}
	jint OsConstants::F_RDLCK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"F_RDLCK");
	}
	jint OsConstants::F_SETFD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"F_SETFD");
	}
	jint OsConstants::F_SETFL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"F_SETFL");
	}
	jint OsConstants::F_SETLK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"F_SETLK");
	}
	jint OsConstants::F_SETLK64()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"F_SETLK64");
	}
	jint OsConstants::F_SETLKW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"F_SETLKW");
	}
	jint OsConstants::F_SETLKW64()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"F_SETLKW64");
	}
	jint OsConstants::F_SETOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"F_SETOWN");
	}
	jint OsConstants::F_UNLCK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"F_UNLCK");
	}
	jint OsConstants::F_WRLCK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"F_WRLCK");
	}
	jint OsConstants::ICMP6_ECHO_REPLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ICMP6_ECHO_REPLY");
	}
	jint OsConstants::ICMP6_ECHO_REQUEST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ICMP6_ECHO_REQUEST");
	}
	jint OsConstants::ICMP_ECHO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ICMP_ECHO");
	}
	jint OsConstants::ICMP_ECHOREPLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ICMP_ECHOREPLY");
	}
	jint OsConstants::IFA_F_DADFAILED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"IFA_F_DADFAILED");
	}
	jint OsConstants::IFA_F_DEPRECATED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"IFA_F_DEPRECATED");
	}
	jint OsConstants::IFA_F_HOMEADDRESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"IFA_F_HOMEADDRESS");
	}
	jint OsConstants::IFA_F_NODAD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"IFA_F_NODAD");
	}
	jint OsConstants::IFA_F_OPTIMISTIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"IFA_F_OPTIMISTIC");
	}
	jint OsConstants::IFA_F_PERMANENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"IFA_F_PERMANENT");
	}
	jint OsConstants::IFA_F_SECONDARY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"IFA_F_SECONDARY");
	}
	jint OsConstants::IFA_F_TEMPORARY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"IFA_F_TEMPORARY");
	}
	jint OsConstants::IFA_F_TENTATIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"IFA_F_TENTATIVE");
	}
	jint OsConstants::IFF_ALLMULTI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"IFF_ALLMULTI");
	}
	jint OsConstants::IFF_AUTOMEDIA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"IFF_AUTOMEDIA");
	}
	jint OsConstants::IFF_BROADCAST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"IFF_BROADCAST");
	}
	jint OsConstants::IFF_DEBUG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"IFF_DEBUG");
	}
	jint OsConstants::IFF_DYNAMIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"IFF_DYNAMIC");
	}
	jint OsConstants::IFF_LOOPBACK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"IFF_LOOPBACK");
	}
	jint OsConstants::IFF_MASTER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"IFF_MASTER");
	}
	jint OsConstants::IFF_MULTICAST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"IFF_MULTICAST");
	}
	jint OsConstants::IFF_NOARP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"IFF_NOARP");
	}
	jint OsConstants::IFF_NOTRAILERS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"IFF_NOTRAILERS");
	}
	jint OsConstants::IFF_POINTOPOINT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"IFF_POINTOPOINT");
	}
	jint OsConstants::IFF_PORTSEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"IFF_PORTSEL");
	}
	jint OsConstants::IFF_PROMISC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"IFF_PROMISC");
	}
	jint OsConstants::IFF_RUNNING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"IFF_RUNNING");
	}
	jint OsConstants::IFF_SLAVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"IFF_SLAVE");
	}
	jint OsConstants::IFF_UP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"IFF_UP");
	}
	jint OsConstants::IPPROTO_ICMP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"IPPROTO_ICMP");
	}
	jint OsConstants::IPPROTO_ICMPV6()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"IPPROTO_ICMPV6");
	}
	jint OsConstants::IPPROTO_IP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"IPPROTO_IP");
	}
	jint OsConstants::IPPROTO_IPV6()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"IPPROTO_IPV6");
	}
	jint OsConstants::IPPROTO_RAW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"IPPROTO_RAW");
	}
	jint OsConstants::IPPROTO_TCP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"IPPROTO_TCP");
	}
	jint OsConstants::IPPROTO_UDP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"IPPROTO_UDP");
	}
	jint OsConstants::IPV6_CHECKSUM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"IPV6_CHECKSUM");
	}
	jint OsConstants::IPV6_MULTICAST_HOPS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"IPV6_MULTICAST_HOPS");
	}
	jint OsConstants::IPV6_MULTICAST_IF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"IPV6_MULTICAST_IF");
	}
	jint OsConstants::IPV6_MULTICAST_LOOP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"IPV6_MULTICAST_LOOP");
	}
	jint OsConstants::IPV6_RECVDSTOPTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"IPV6_RECVDSTOPTS");
	}
	jint OsConstants::IPV6_RECVHOPLIMIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"IPV6_RECVHOPLIMIT");
	}
	jint OsConstants::IPV6_RECVHOPOPTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"IPV6_RECVHOPOPTS");
	}
	jint OsConstants::IPV6_RECVPKTINFO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"IPV6_RECVPKTINFO");
	}
	jint OsConstants::IPV6_RECVRTHDR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"IPV6_RECVRTHDR");
	}
	jint OsConstants::IPV6_RECVTCLASS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"IPV6_RECVTCLASS");
	}
	jint OsConstants::IPV6_TCLASS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"IPV6_TCLASS");
	}
	jint OsConstants::IPV6_UNICAST_HOPS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"IPV6_UNICAST_HOPS");
	}
	jint OsConstants::IPV6_V6ONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"IPV6_V6ONLY");
	}
	jint OsConstants::IP_MULTICAST_IF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"IP_MULTICAST_IF");
	}
	jint OsConstants::IP_MULTICAST_LOOP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"IP_MULTICAST_LOOP");
	}
	jint OsConstants::IP_MULTICAST_TTL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"IP_MULTICAST_TTL");
	}
	jint OsConstants::IP_TOS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"IP_TOS");
	}
	jint OsConstants::IP_TTL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"IP_TTL");
	}
	jint OsConstants::MAP_FIXED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"MAP_FIXED");
	}
	jint OsConstants::MAP_PRIVATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"MAP_PRIVATE");
	}
	jint OsConstants::MAP_SHARED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"MAP_SHARED");
	}
	jint OsConstants::MCAST_BLOCK_SOURCE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"MCAST_BLOCK_SOURCE");
	}
	jint OsConstants::MCAST_JOIN_GROUP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"MCAST_JOIN_GROUP");
	}
	jint OsConstants::MCAST_JOIN_SOURCE_GROUP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"MCAST_JOIN_SOURCE_GROUP");
	}
	jint OsConstants::MCAST_LEAVE_GROUP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"MCAST_LEAVE_GROUP");
	}
	jint OsConstants::MCAST_LEAVE_SOURCE_GROUP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"MCAST_LEAVE_SOURCE_GROUP");
	}
	jint OsConstants::MCAST_UNBLOCK_SOURCE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"MCAST_UNBLOCK_SOURCE");
	}
	jint OsConstants::MCL_CURRENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"MCL_CURRENT");
	}
	jint OsConstants::MCL_FUTURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"MCL_FUTURE");
	}
	jint OsConstants::MSG_CTRUNC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"MSG_CTRUNC");
	}
	jint OsConstants::MSG_DONTROUTE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"MSG_DONTROUTE");
	}
	jint OsConstants::MSG_EOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"MSG_EOR");
	}
	jint OsConstants::MSG_OOB()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"MSG_OOB");
	}
	jint OsConstants::MSG_PEEK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"MSG_PEEK");
	}
	jint OsConstants::MSG_TRUNC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"MSG_TRUNC");
	}
	jint OsConstants::MSG_WAITALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"MSG_WAITALL");
	}
	jint OsConstants::MS_ASYNC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"MS_ASYNC");
	}
	jint OsConstants::MS_INVALIDATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"MS_INVALIDATE");
	}
	jint OsConstants::MS_SYNC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"MS_SYNC");
	}
	jint OsConstants::NETLINK_INET_DIAG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"NETLINK_INET_DIAG");
	}
	jint OsConstants::NETLINK_ROUTE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"NETLINK_ROUTE");
	}
	jint OsConstants::NI_DGRAM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"NI_DGRAM");
	}
	jint OsConstants::NI_NAMEREQD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"NI_NAMEREQD");
	}
	jint OsConstants::NI_NOFQDN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"NI_NOFQDN");
	}
	jint OsConstants::NI_NUMERICHOST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"NI_NUMERICHOST");
	}
	jint OsConstants::NI_NUMERICSERV()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"NI_NUMERICSERV");
	}
	jint OsConstants::O_ACCMODE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"O_ACCMODE");
	}
	jint OsConstants::O_APPEND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"O_APPEND");
	}
	jint OsConstants::O_CLOEXEC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"O_CLOEXEC");
	}
	jint OsConstants::O_CREAT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"O_CREAT");
	}
	jint OsConstants::O_DSYNC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"O_DSYNC");
	}
	jint OsConstants::O_EXCL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"O_EXCL");
	}
	jint OsConstants::O_NOCTTY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"O_NOCTTY");
	}
	jint OsConstants::O_NOFOLLOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"O_NOFOLLOW");
	}
	jint OsConstants::O_NONBLOCK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"O_NONBLOCK");
	}
	jint OsConstants::O_RDONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"O_RDONLY");
	}
	jint OsConstants::O_RDWR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"O_RDWR");
	}
	jint OsConstants::O_SYNC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"O_SYNC");
	}
	jint OsConstants::O_TRUNC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"O_TRUNC");
	}
	jint OsConstants::O_WRONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"O_WRONLY");
	}
	jint OsConstants::POLLERR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"POLLERR");
	}
	jint OsConstants::POLLHUP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"POLLHUP");
	}
	jint OsConstants::POLLIN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"POLLIN");
	}
	jint OsConstants::POLLNVAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"POLLNVAL");
	}
	jint OsConstants::POLLOUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"POLLOUT");
	}
	jint OsConstants::POLLPRI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"POLLPRI");
	}
	jint OsConstants::POLLRDBAND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"POLLRDBAND");
	}
	jint OsConstants::POLLRDNORM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"POLLRDNORM");
	}
	jint OsConstants::POLLWRBAND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"POLLWRBAND");
	}
	jint OsConstants::POLLWRNORM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"POLLWRNORM");
	}
	jint OsConstants::PROT_EXEC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"PROT_EXEC");
	}
	jint OsConstants::PROT_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"PROT_NONE");
	}
	jint OsConstants::PROT_READ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"PROT_READ");
	}
	jint OsConstants::PROT_WRITE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"PROT_WRITE");
	}
	jint OsConstants::PR_GET_DUMPABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"PR_GET_DUMPABLE");
	}
	jint OsConstants::PR_SET_DUMPABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"PR_SET_DUMPABLE");
	}
	jint OsConstants::PR_SET_NO_NEW_PRIVS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"PR_SET_NO_NEW_PRIVS");
	}
	jint OsConstants::RTMGRP_NEIGH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"RTMGRP_NEIGH");
	}
	jint OsConstants::RT_SCOPE_HOST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"RT_SCOPE_HOST");
	}
	jint OsConstants::RT_SCOPE_LINK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"RT_SCOPE_LINK");
	}
	jint OsConstants::RT_SCOPE_NOWHERE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"RT_SCOPE_NOWHERE");
	}
	jint OsConstants::RT_SCOPE_SITE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"RT_SCOPE_SITE");
	}
	jint OsConstants::RT_SCOPE_UNIVERSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"RT_SCOPE_UNIVERSE");
	}
	jint OsConstants::R_OK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"R_OK");
	}
	jint OsConstants::SEEK_CUR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SEEK_CUR");
	}
	jint OsConstants::SEEK_END()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SEEK_END");
	}
	jint OsConstants::SEEK_SET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SEEK_SET");
	}
	jint OsConstants::SHUT_RD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SHUT_RD");
	}
	jint OsConstants::SHUT_RDWR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SHUT_RDWR");
	}
	jint OsConstants::SHUT_WR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SHUT_WR");
	}
	jint OsConstants::SIGABRT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SIGABRT");
	}
	jint OsConstants::SIGALRM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SIGALRM");
	}
	jint OsConstants::SIGBUS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SIGBUS");
	}
	jint OsConstants::SIGCHLD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SIGCHLD");
	}
	jint OsConstants::SIGCONT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SIGCONT");
	}
	jint OsConstants::SIGFPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SIGFPE");
	}
	jint OsConstants::SIGHUP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SIGHUP");
	}
	jint OsConstants::SIGILL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SIGILL");
	}
	jint OsConstants::SIGINT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SIGINT");
	}
	jint OsConstants::SIGIO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SIGIO");
	}
	jint OsConstants::SIGKILL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SIGKILL");
	}
	jint OsConstants::SIGPIPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SIGPIPE");
	}
	jint OsConstants::SIGPROF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SIGPROF");
	}
	jint OsConstants::SIGPWR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SIGPWR");
	}
	jint OsConstants::SIGQUIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SIGQUIT");
	}
	jint OsConstants::SIGRTMAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SIGRTMAX");
	}
	jint OsConstants::SIGRTMIN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SIGRTMIN");
	}
	jint OsConstants::SIGSEGV()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SIGSEGV");
	}
	jint OsConstants::SIGSTKFLT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SIGSTKFLT");
	}
	jint OsConstants::SIGSTOP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SIGSTOP");
	}
	jint OsConstants::SIGSYS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SIGSYS");
	}
	jint OsConstants::SIGTERM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SIGTERM");
	}
	jint OsConstants::SIGTRAP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SIGTRAP");
	}
	jint OsConstants::SIGTSTP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SIGTSTP");
	}
	jint OsConstants::SIGTTIN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SIGTTIN");
	}
	jint OsConstants::SIGTTOU()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SIGTTOU");
	}
	jint OsConstants::SIGURG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SIGURG");
	}
	jint OsConstants::SIGUSR1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SIGUSR1");
	}
	jint OsConstants::SIGUSR2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SIGUSR2");
	}
	jint OsConstants::SIGVTALRM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SIGVTALRM");
	}
	jint OsConstants::SIGWINCH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SIGWINCH");
	}
	jint OsConstants::SIGXCPU()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SIGXCPU");
	}
	jint OsConstants::SIGXFSZ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SIGXFSZ");
	}
	jint OsConstants::SIOCGIFADDR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SIOCGIFADDR");
	}
	jint OsConstants::SIOCGIFBRDADDR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SIOCGIFBRDADDR");
	}
	jint OsConstants::SIOCGIFDSTADDR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SIOCGIFDSTADDR");
	}
	jint OsConstants::SIOCGIFNETMASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SIOCGIFNETMASK");
	}
	jint OsConstants::SOCK_CLOEXEC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SOCK_CLOEXEC");
	}
	jint OsConstants::SOCK_DGRAM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SOCK_DGRAM");
	}
	jint OsConstants::SOCK_NONBLOCK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SOCK_NONBLOCK");
	}
	jint OsConstants::SOCK_RAW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SOCK_RAW");
	}
	jint OsConstants::SOCK_SEQPACKET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SOCK_SEQPACKET");
	}
	jint OsConstants::SOCK_STREAM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SOCK_STREAM");
	}
	jint OsConstants::SOL_SOCKET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SOL_SOCKET");
	}
	jint OsConstants::SO_BINDTODEVICE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SO_BINDTODEVICE");
	}
	jint OsConstants::SO_BROADCAST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SO_BROADCAST");
	}
	jint OsConstants::SO_DEBUG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SO_DEBUG");
	}
	jint OsConstants::SO_DONTROUTE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SO_DONTROUTE");
	}
	jint OsConstants::SO_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SO_ERROR");
	}
	jint OsConstants::SO_KEEPALIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SO_KEEPALIVE");
	}
	jint OsConstants::SO_LINGER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SO_LINGER");
	}
	jint OsConstants::SO_OOBINLINE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SO_OOBINLINE");
	}
	jint OsConstants::SO_PASSCRED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SO_PASSCRED");
	}
	jint OsConstants::SO_PEERCRED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SO_PEERCRED");
	}
	jint OsConstants::SO_RCVBUF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SO_RCVBUF");
	}
	jint OsConstants::SO_RCVLOWAT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SO_RCVLOWAT");
	}
	jint OsConstants::SO_RCVTIMEO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SO_RCVTIMEO");
	}
	jint OsConstants::SO_REUSEADDR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SO_REUSEADDR");
	}
	jint OsConstants::SO_SNDBUF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SO_SNDBUF");
	}
	jint OsConstants::SO_SNDLOWAT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SO_SNDLOWAT");
	}
	jint OsConstants::SO_SNDTIMEO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SO_SNDTIMEO");
	}
	jint OsConstants::SO_TYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"SO_TYPE");
	}
	jint OsConstants::STDERR_FILENO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"STDERR_FILENO");
	}
	jint OsConstants::STDIN_FILENO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"STDIN_FILENO");
	}
	jint OsConstants::STDOUT_FILENO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"STDOUT_FILENO");
	}
	jint OsConstants::ST_MANDLOCK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ST_MANDLOCK");
	}
	jint OsConstants::ST_NOATIME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ST_NOATIME");
	}
	jint OsConstants::ST_NODEV()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ST_NODEV");
	}
	jint OsConstants::ST_NODIRATIME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ST_NODIRATIME");
	}
	jint OsConstants::ST_NOEXEC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ST_NOEXEC");
	}
	jint OsConstants::ST_NOSUID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ST_NOSUID");
	}
	jint OsConstants::ST_RDONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ST_RDONLY");
	}
	jint OsConstants::ST_RELATIME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ST_RELATIME");
	}
	jint OsConstants::ST_SYNCHRONOUS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"ST_SYNCHRONOUS");
	}
	jint OsConstants::S_IFBLK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"S_IFBLK");
	}
	jint OsConstants::S_IFCHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"S_IFCHR");
	}
	jint OsConstants::S_IFDIR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"S_IFDIR");
	}
	jint OsConstants::S_IFIFO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"S_IFIFO");
	}
	jint OsConstants::S_IFLNK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"S_IFLNK");
	}
	jint OsConstants::S_IFMT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"S_IFMT");
	}
	jint OsConstants::S_IFREG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"S_IFREG");
	}
	jint OsConstants::S_IFSOCK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"S_IFSOCK");
	}
	jint OsConstants::S_IRGRP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"S_IRGRP");
	}
	jint OsConstants::S_IROTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"S_IROTH");
	}
	jint OsConstants::S_IRUSR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"S_IRUSR");
	}
	jint OsConstants::S_IRWXG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"S_IRWXG");
	}
	jint OsConstants::S_IRWXO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"S_IRWXO");
	}
	jint OsConstants::S_IRWXU()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"S_IRWXU");
	}
	jint OsConstants::S_ISGID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"S_ISGID");
	}
	jint OsConstants::S_ISUID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"S_ISUID");
	}
	jint OsConstants::S_ISVTX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"S_ISVTX");
	}
	jint OsConstants::S_IWGRP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"S_IWGRP");
	}
	jint OsConstants::S_IWOTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"S_IWOTH");
	}
	jint OsConstants::S_IWUSR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"S_IWUSR");
	}
	jint OsConstants::S_IXGRP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"S_IXGRP");
	}
	jint OsConstants::S_IXOTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"S_IXOTH");
	}
	jint OsConstants::S_IXUSR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"S_IXUSR");
	}
	jint OsConstants::TCP_NODELAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"TCP_NODELAY");
	}
	jint OsConstants::TCP_USER_TIMEOUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"TCP_USER_TIMEOUT");
	}
	jint OsConstants::WCONTINUED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"WCONTINUED");
	}
	jint OsConstants::WEXITED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"WEXITED");
	}
	jint OsConstants::WNOHANG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"WNOHANG");
	}
	jint OsConstants::WNOWAIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"WNOWAIT");
	}
	jint OsConstants::WSTOPPED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"WSTOPPED");
	}
	jint OsConstants::WUNTRACED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"WUNTRACED");
	}
	jint OsConstants::W_OK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"W_OK");
	}
	jint OsConstants::X_OK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"X_OK");
	}
	jint OsConstants::_SC_2_CHAR_TERM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_2_CHAR_TERM");
	}
	jint OsConstants::_SC_2_C_BIND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_2_C_BIND");
	}
	jint OsConstants::_SC_2_C_DEV()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_2_C_DEV");
	}
	jint OsConstants::_SC_2_C_VERSION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_2_C_VERSION");
	}
	jint OsConstants::_SC_2_FORT_DEV()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_2_FORT_DEV");
	}
	jint OsConstants::_SC_2_FORT_RUN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_2_FORT_RUN");
	}
	jint OsConstants::_SC_2_LOCALEDEF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_2_LOCALEDEF");
	}
	jint OsConstants::_SC_2_SW_DEV()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_2_SW_DEV");
	}
	jint OsConstants::_SC_2_UPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_2_UPE");
	}
	jint OsConstants::_SC_2_VERSION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_2_VERSION");
	}
	jint OsConstants::_SC_AIO_LISTIO_MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_AIO_LISTIO_MAX");
	}
	jint OsConstants::_SC_AIO_MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_AIO_MAX");
	}
	jint OsConstants::_SC_AIO_PRIO_DELTA_MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_AIO_PRIO_DELTA_MAX");
	}
	jint OsConstants::_SC_ARG_MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_ARG_MAX");
	}
	jint OsConstants::_SC_ASYNCHRONOUS_IO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_ASYNCHRONOUS_IO");
	}
	jint OsConstants::_SC_ATEXIT_MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_ATEXIT_MAX");
	}
	jint OsConstants::_SC_AVPHYS_PAGES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_AVPHYS_PAGES");
	}
	jint OsConstants::_SC_BC_BASE_MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_BC_BASE_MAX");
	}
	jint OsConstants::_SC_BC_DIM_MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_BC_DIM_MAX");
	}
	jint OsConstants::_SC_BC_SCALE_MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_BC_SCALE_MAX");
	}
	jint OsConstants::_SC_BC_STRING_MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_BC_STRING_MAX");
	}
	jint OsConstants::_SC_CHILD_MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_CHILD_MAX");
	}
	jint OsConstants::_SC_CLK_TCK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_CLK_TCK");
	}
	jint OsConstants::_SC_COLL_WEIGHTS_MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_COLL_WEIGHTS_MAX");
	}
	jint OsConstants::_SC_DELAYTIMER_MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_DELAYTIMER_MAX");
	}
	jint OsConstants::_SC_EXPR_NEST_MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_EXPR_NEST_MAX");
	}
	jint OsConstants::_SC_FSYNC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_FSYNC");
	}
	jint OsConstants::_SC_GETGR_R_SIZE_MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_GETGR_R_SIZE_MAX");
	}
	jint OsConstants::_SC_GETPW_R_SIZE_MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_GETPW_R_SIZE_MAX");
	}
	jint OsConstants::_SC_IOV_MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_IOV_MAX");
	}
	jint OsConstants::_SC_JOB_CONTROL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_JOB_CONTROL");
	}
	jint OsConstants::_SC_LINE_MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_LINE_MAX");
	}
	jint OsConstants::_SC_LOGIN_NAME_MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_LOGIN_NAME_MAX");
	}
	jint OsConstants::_SC_MAPPED_FILES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_MAPPED_FILES");
	}
	jint OsConstants::_SC_MEMLOCK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_MEMLOCK");
	}
	jint OsConstants::_SC_MEMLOCK_RANGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_MEMLOCK_RANGE");
	}
	jint OsConstants::_SC_MEMORY_PROTECTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_MEMORY_PROTECTION");
	}
	jint OsConstants::_SC_MESSAGE_PASSING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_MESSAGE_PASSING");
	}
	jint OsConstants::_SC_MQ_OPEN_MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_MQ_OPEN_MAX");
	}
	jint OsConstants::_SC_MQ_PRIO_MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_MQ_PRIO_MAX");
	}
	jint OsConstants::_SC_NGROUPS_MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_NGROUPS_MAX");
	}
	jint OsConstants::_SC_NPROCESSORS_CONF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_NPROCESSORS_CONF");
	}
	jint OsConstants::_SC_NPROCESSORS_ONLN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_NPROCESSORS_ONLN");
	}
	jint OsConstants::_SC_OPEN_MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_OPEN_MAX");
	}
	jint OsConstants::_SC_PAGESIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_PAGESIZE");
	}
	jint OsConstants::_SC_PAGE_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_PAGE_SIZE");
	}
	jint OsConstants::_SC_PASS_MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_PASS_MAX");
	}
	jint OsConstants::_SC_PHYS_PAGES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_PHYS_PAGES");
	}
	jint OsConstants::_SC_PRIORITIZED_IO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_PRIORITIZED_IO");
	}
	jint OsConstants::_SC_PRIORITY_SCHEDULING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_PRIORITY_SCHEDULING");
	}
	jint OsConstants::_SC_REALTIME_SIGNALS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_REALTIME_SIGNALS");
	}
	jint OsConstants::_SC_RE_DUP_MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_RE_DUP_MAX");
	}
	jint OsConstants::_SC_RTSIG_MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_RTSIG_MAX");
	}
	jint OsConstants::_SC_SAVED_IDS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_SAVED_IDS");
	}
	jint OsConstants::_SC_SEMAPHORES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_SEMAPHORES");
	}
	jint OsConstants::_SC_SEM_NSEMS_MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_SEM_NSEMS_MAX");
	}
	jint OsConstants::_SC_SEM_VALUE_MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_SEM_VALUE_MAX");
	}
	jint OsConstants::_SC_SHARED_MEMORY_OBJECTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_SHARED_MEMORY_OBJECTS");
	}
	jint OsConstants::_SC_SIGQUEUE_MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_SIGQUEUE_MAX");
	}
	jint OsConstants::_SC_STREAM_MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_STREAM_MAX");
	}
	jint OsConstants::_SC_SYNCHRONIZED_IO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_SYNCHRONIZED_IO");
	}
	jint OsConstants::_SC_THREADS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_THREADS");
	}
	jint OsConstants::_SC_THREAD_ATTR_STACKADDR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_THREAD_ATTR_STACKADDR");
	}
	jint OsConstants::_SC_THREAD_ATTR_STACKSIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_THREAD_ATTR_STACKSIZE");
	}
	jint OsConstants::_SC_THREAD_DESTRUCTOR_ITERATIONS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_THREAD_DESTRUCTOR_ITERATIONS");
	}
	jint OsConstants::_SC_THREAD_KEYS_MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_THREAD_KEYS_MAX");
	}
	jint OsConstants::_SC_THREAD_PRIORITY_SCHEDULING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_THREAD_PRIORITY_SCHEDULING");
	}
	jint OsConstants::_SC_THREAD_PRIO_INHERIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_THREAD_PRIO_INHERIT");
	}
	jint OsConstants::_SC_THREAD_PRIO_PROTECT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_THREAD_PRIO_PROTECT");
	}
	jint OsConstants::_SC_THREAD_SAFE_FUNCTIONS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_THREAD_SAFE_FUNCTIONS");
	}
	jint OsConstants::_SC_THREAD_STACK_MIN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_THREAD_STACK_MIN");
	}
	jint OsConstants::_SC_THREAD_THREADS_MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_THREAD_THREADS_MAX");
	}
	jint OsConstants::_SC_TIMERS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_TIMERS");
	}
	jint OsConstants::_SC_TIMER_MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_TIMER_MAX");
	}
	jint OsConstants::_SC_TTY_NAME_MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_TTY_NAME_MAX");
	}
	jint OsConstants::_SC_TZNAME_MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_TZNAME_MAX");
	}
	jint OsConstants::_SC_VERSION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_VERSION");
	}
	jint OsConstants::_SC_XBS5_ILP32_OFF32()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_XBS5_ILP32_OFF32");
	}
	jint OsConstants::_SC_XBS5_ILP32_OFFBIG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_XBS5_ILP32_OFFBIG");
	}
	jint OsConstants::_SC_XBS5_LP64_OFF64()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_XBS5_LP64_OFF64");
	}
	jint OsConstants::_SC_XBS5_LPBIG_OFFBIG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_XBS5_LPBIG_OFFBIG");
	}
	jint OsConstants::_SC_XOPEN_CRYPT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_XOPEN_CRYPT");
	}
	jint OsConstants::_SC_XOPEN_ENH_I18N()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_XOPEN_ENH_I18N");
	}
	jint OsConstants::_SC_XOPEN_LEGACY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_XOPEN_LEGACY");
	}
	jint OsConstants::_SC_XOPEN_REALTIME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_XOPEN_REALTIME");
	}
	jint OsConstants::_SC_XOPEN_REALTIME_THREADS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_XOPEN_REALTIME_THREADS");
	}
	jint OsConstants::_SC_XOPEN_SHM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_XOPEN_SHM");
	}
	jint OsConstants::_SC_XOPEN_UNIX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_XOPEN_UNIX");
	}
	jint OsConstants::_SC_XOPEN_VERSION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_XOPEN_VERSION");
	}
	jint OsConstants::_SC_XOPEN_XCU_VERSION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.system.OsConstants",
			"_SC_XOPEN_XCU_VERSION");
	}
	
	// Constructors
	void OsConstants::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.system.OsConstants",
			"(V)V");
	}
	
	// Methods
	jboolean OsConstants::S_ISBLK(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.system.OsConstants",
			"S_ISBLK",
			"(I)Z",
			arg0);
	}
	jboolean OsConstants::S_ISCHR(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.system.OsConstants",
			"S_ISCHR",
			"(I)Z",
			arg0);
	}
	jboolean OsConstants::S_ISDIR(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.system.OsConstants",
			"S_ISDIR",
			"(I)Z",
			arg0);
	}
	jboolean OsConstants::S_ISFIFO(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.system.OsConstants",
			"S_ISFIFO",
			"(I)Z",
			arg0);
	}
	jboolean OsConstants::S_ISREG(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.system.OsConstants",
			"S_ISREG",
			"(I)Z",
			arg0);
	}
	jboolean OsConstants::S_ISLNK(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.system.OsConstants",
			"S_ISLNK",
			"(I)Z",
			arg0);
	}
	jboolean OsConstants::S_ISSOCK(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.system.OsConstants",
			"S_ISSOCK",
			"(I)Z",
			arg0);
	}
	jint OsConstants::WEXITSTATUS(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.system.OsConstants",
			"WEXITSTATUS",
			"(I)I",
			arg0);
	}
	jboolean OsConstants::WCOREDUMP(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.system.OsConstants",
			"WCOREDUMP",
			"(I)Z",
			arg0);
	}
	jint OsConstants::WTERMSIG(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.system.OsConstants",
			"WTERMSIG",
			"(I)I",
			arg0);
	}
	jint OsConstants::WSTOPSIG(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.system.OsConstants",
			"WSTOPSIG",
			"(I)I",
			arg0);
	}
	jboolean OsConstants::WIFEXITED(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.system.OsConstants",
			"WIFEXITED",
			"(I)Z",
			arg0);
	}
	jboolean OsConstants::WIFSTOPPED(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.system.OsConstants",
			"WIFSTOPPED",
			"(I)Z",
			arg0);
	}
	jboolean OsConstants::WIFSIGNALED(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.system.OsConstants",
			"WIFSIGNALED",
			"(I)Z",
			arg0);
	}
	QAndroidJniObject OsConstants::gaiName(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.system.OsConstants",
			"gaiName",
			"(I)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject OsConstants::errnoName(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.system.OsConstants",
			"errnoName",
			"(I)Ljava/lang/String;",
			arg0);
	}
} // namespace __jni_impl::android::system

namespace android::system
{
	class OsConstants : public __jni_impl::android::system::OsConstants
	{
	public:
		OsConstants(QAndroidJniObject obj) { __thiz = obj; }
		OsConstants()
		{
			__constructor();
		}
	};
} // namespace android::system

#endif // ANDROID_SYSTEM_OSCONSTANTS

