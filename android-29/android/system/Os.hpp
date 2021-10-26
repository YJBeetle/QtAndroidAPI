#pragma once

#ifndef ANDROID_SYSTEM_OS
#define ANDROID_SYSTEM_OS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class FileDescriptor;
}
namespace __jni_impl::java::nio
{
	class ByteBuffer;
}
namespace __jni_impl::java::net
{
	class SocketAddress;
}
namespace __jni_impl::java::net
{
	class InetAddress;
}
namespace __jni_impl::java::net
{
	class InetSocketAddress;
}
namespace __jni_impl::android::system
{
	class StructUtsname;
}
namespace __jni_impl::android::system
{
	class StructStat;
}
namespace __jni_impl::android::system
{
	class StructStatVfs;
}
namespace __jni_impl::android::system
{
	class StructTimeval;
}
namespace __jni_impl::android::system
{
	class Int64Ref;
}

namespace __jni_impl::android::system
{
	class Os : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static void remove(jstring arg0);
		static void remove(const QString &arg0);
		static void shutdown(__jni_impl::java::io::FileDescriptor arg0, jint arg1);
		static jint write(__jni_impl::java::io::FileDescriptor arg0, jbyteArray arg1, jint arg2, jint arg3);
		static jint write(__jni_impl::java::io::FileDescriptor arg0, __jni_impl::java::nio::ByteBuffer arg1);
		static jstring getenv(jstring arg0);
		static jstring getenv(const QString &arg0);
		static jint read(__jni_impl::java::io::FileDescriptor arg0, __jni_impl::java::nio::ByteBuffer arg1);
		static jint read(__jni_impl::java::io::FileDescriptor arg0, jbyteArray arg1, jint arg2, jint arg3);
		static void connect(__jni_impl::java::io::FileDescriptor arg0, __jni_impl::java::net::SocketAddress arg1);
		static void connect(__jni_impl::java::io::FileDescriptor arg0, __jni_impl::java::net::InetAddress arg1, jint arg2);
		static void listen(__jni_impl::java::io::FileDescriptor arg0, jint arg1);
		static QAndroidJniObject accept(__jni_impl::java::io::FileDescriptor arg0, __jni_impl::java::net::InetSocketAddress arg1);
		static jboolean access(jstring arg0, jint arg1);
		static jboolean access(const QString &arg0, jint arg1);
		static jint poll(jarray arg0, jint arg1);
		static void close(__jni_impl::java::io::FileDescriptor arg0);
		static QAndroidJniObject open(jstring arg0, jint arg1, jint arg2);
		static QAndroidJniObject open(const QString &arg0, jint arg1, jint arg2);
		static jint getuid();
		static jint geteuid();
		static jint getgid();
		static jint getegid();
		static QAndroidJniObject uname();
		static QAndroidJniObject dup(__jni_impl::java::io::FileDescriptor arg0);
		static void symlink(jstring arg0, jstring arg1);
		static void symlink(const QString &arg0, const QString &arg1);
		static void link(jstring arg0, jstring arg1);
		static void link(const QString &arg0, const QString &arg1);
		static jstring readlink(jstring arg0);
		static jstring readlink(const QString &arg0);
		static QAndroidJniObject stat(jstring arg0);
		static QAndroidJniObject stat(const QString &arg0);
		static QAndroidJniObject lstat(jstring arg0);
		static QAndroidJniObject lstat(const QString &arg0);
		static QAndroidJniObject fstat(__jni_impl::java::io::FileDescriptor arg0);
		static void chown(jstring arg0, jint arg1, jint arg2);
		static void chown(const QString &arg0, jint arg1, jint arg2);
		static void lchown(jstring arg0, jint arg1, jint arg2);
		static void lchown(const QString &arg0, jint arg1, jint arg2);
		static void fchown(__jni_impl::java::io::FileDescriptor arg0, jint arg1, jint arg2);
		static void chmod(jstring arg0, jint arg1);
		static void chmod(const QString &arg0, jint arg1);
		static void fchmod(__jni_impl::java::io::FileDescriptor arg0, jint arg1);
		static QAndroidJniObject statvfs(jstring arg0);
		static QAndroidJniObject statvfs(const QString &arg0);
		static jstring strerror(jint arg0);
		static void mkdir(jstring arg0, jint arg1);
		static void mkdir(const QString &arg0, jint arg1);
		static void rename(jstring arg0, jstring arg1);
		static void rename(const QString &arg0, const QString &arg1);
		static void bind(__jni_impl::java::io::FileDescriptor arg0, __jni_impl::java::net::InetAddress arg1, jint arg2);
		static void bind(__jni_impl::java::io::FileDescriptor arg0, __jni_impl::java::net::SocketAddress arg1);
		static void kill(jint arg0, jint arg1);
		static QAndroidJniObject socket(jint arg0, jint arg1, jint arg2);
		static QAndroidJniObject dup2(__jni_impl::java::io::FileDescriptor arg0, jint arg1);
		static jarray environ();
		static void execv(jstring arg0, jarray arg1);
		static void execv(const QString &arg0, jarray arg1);
		static void execve(jstring arg0, jarray arg1, jarray arg2);
		static void execve(const QString &arg0, jarray arg1, jarray arg2);
		static void fdatasync(__jni_impl::java::io::FileDescriptor arg0);
		static QAndroidJniObject fstatvfs(__jni_impl::java::io::FileDescriptor arg0);
		static void fsync(__jni_impl::java::io::FileDescriptor arg0);
		static void ftruncate(__jni_impl::java::io::FileDescriptor arg0, jlong arg1);
		static jstring gai_strerror(jint arg0);
		static QAndroidJniObject getpeername(__jni_impl::java::io::FileDescriptor arg0);
		static jint getpid();
		static jint getppid();
		static QAndroidJniObject getsockname(__jni_impl::java::io::FileDescriptor arg0);
		static QAndroidJniObject getsockoptTimeval(__jni_impl::java::io::FileDescriptor arg0, jint arg1, jint arg2);
		static jint gettid();
		static jbyteArray getxattr(jstring arg0, jstring arg1);
		static jbyteArray getxattr(const QString &arg0, const QString &arg1);
		static jstring if_indextoname(jint arg0);
		static jint if_nametoindex(jstring arg0);
		static jint if_nametoindex(const QString &arg0);
		static QAndroidJniObject inet_pton(jint arg0, jstring arg1);
		static QAndroidJniObject inet_pton(jint arg0, const QString &arg1);
		static jboolean isatty(__jni_impl::java::io::FileDescriptor arg0);
		static jarray listxattr(jstring arg0);
		static jarray listxattr(const QString &arg0);
		static jlong lseek(__jni_impl::java::io::FileDescriptor arg0, jlong arg1, jint arg2);
		static void mincore(jlong arg0, jlong arg1, jbyteArray arg2);
		static void mkfifo(jstring arg0, jint arg1);
		static void mkfifo(const QString &arg0, jint arg1);
		static void mlock(jlong arg0, jlong arg1);
		static jlong mmap(jlong arg0, jlong arg1, jint arg2, jint arg3, __jni_impl::java::io::FileDescriptor arg4, jlong arg5);
		static void msync(jlong arg0, jlong arg1, jint arg2);
		static void munlock(jlong arg0, jlong arg1);
		static void munmap(jlong arg0, jlong arg1);
		static jarray pipe();
		static void posix_fallocate(__jni_impl::java::io::FileDescriptor arg0, jlong arg1, jlong arg2);
		static jint prctl(jint arg0, jlong arg1, jlong arg2, jlong arg3, jlong arg4);
		static jint pread(__jni_impl::java::io::FileDescriptor arg0, jbyteArray arg1, jint arg2, jint arg3, jlong arg4);
		static jint pread(__jni_impl::java::io::FileDescriptor arg0, __jni_impl::java::nio::ByteBuffer arg1, jlong arg2);
		static jint pwrite(__jni_impl::java::io::FileDescriptor arg0, __jni_impl::java::nio::ByteBuffer arg1, jlong arg2);
		static jint pwrite(__jni_impl::java::io::FileDescriptor arg0, jbyteArray arg1, jint arg2, jint arg3, jlong arg4);
		static jint readv(__jni_impl::java::io::FileDescriptor arg0, jobjectArray arg1, jintArray arg2, jintArray arg3);
		static jint recvfrom(__jni_impl::java::io::FileDescriptor arg0, __jni_impl::java::nio::ByteBuffer arg1, jint arg2, __jni_impl::java::net::InetSocketAddress arg3);
		static jint recvfrom(__jni_impl::java::io::FileDescriptor arg0, jbyteArray arg1, jint arg2, jint arg3, jint arg4, __jni_impl::java::net::InetSocketAddress arg5);
		static void removexattr(jstring arg0, jstring arg1);
		static void removexattr(const QString &arg0, const QString &arg1);
		static jlong sendfile(__jni_impl::java::io::FileDescriptor arg0, __jni_impl::java::io::FileDescriptor arg1, __jni_impl::android::system::Int64Ref arg2, jlong arg3);
		static jint sendto(__jni_impl::java::io::FileDescriptor arg0, jbyteArray arg1, jint arg2, jint arg3, jint arg4, __jni_impl::java::net::InetAddress arg5, jint arg6);
		static jint sendto(__jni_impl::java::io::FileDescriptor arg0, __jni_impl::java::nio::ByteBuffer arg1, jint arg2, __jni_impl::java::net::InetAddress arg3, jint arg4);
		static jint sendto(__jni_impl::java::io::FileDescriptor arg0, jbyteArray arg1, jint arg2, jint arg3, jint arg4, __jni_impl::java::net::SocketAddress arg5);
		static void setegid(jint arg0);
		static void setenv(jstring arg0, jstring arg1, jboolean arg2);
		static void setenv(const QString &arg0, const QString &arg1, jboolean arg2);
		static void seteuid(jint arg0);
		static void setgid(jint arg0);
		static jint setsid();
		static void setsockoptInt(__jni_impl::java::io::FileDescriptor arg0, jint arg1, jint arg2, jint arg3);
		static void setsockoptTimeval(__jni_impl::java::io::FileDescriptor arg0, jint arg1, jint arg2, __jni_impl::android::system::StructTimeval arg3);
		static void setuid(jint arg0);
		static void setxattr(jstring arg0, jstring arg1, jbyteArray arg2, jint arg3);
		static void setxattr(const QString &arg0, const QString &arg1, jbyteArray arg2, jint arg3);
		static void socketpair(jint arg0, jint arg1, jint arg2, __jni_impl::java::io::FileDescriptor arg3, __jni_impl::java::io::FileDescriptor arg4);
		static jstring strsignal(jint arg0);
		static jlong sysconf(jint arg0);
		static void tcdrain(__jni_impl::java::io::FileDescriptor arg0);
		static void tcsendbreak(__jni_impl::java::io::FileDescriptor arg0, jint arg1);
		static jint umask(jint arg0);
		static void unsetenv(jstring arg0);
		static void unsetenv(const QString &arg0);
		static jint writev(__jni_impl::java::io::FileDescriptor arg0, jobjectArray arg1, jintArray arg2, jintArray arg3);
	};
} // namespace __jni_impl::android::system

#include "../../java/io/FileDescriptor.hpp"
#include "../../java/nio/ByteBuffer.hpp"
#include "../../java/net/SocketAddress.hpp"
#include "../../java/net/InetAddress.hpp"
#include "../../java/net/InetSocketAddress.hpp"
#include "StructUtsname.hpp"
#include "StructStat.hpp"
#include "StructStatVfs.hpp"
#include "StructTimeval.hpp"
#include "Int64Ref.hpp"

namespace __jni_impl::android::system
{
	// Fields
	
	// Constructors
	void Os::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.system.Os",
			"(V)V");
	}
	
	// Methods
	void Os::remove(jstring arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"remove",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Os::remove(const QString &arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"remove",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Os::shutdown(__jni_impl::java::io::FileDescriptor arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"shutdown",
			"(Ljava/io/FileDescriptor;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint Os::write(__jni_impl::java::io::FileDescriptor arg0, jbyteArray arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.system.Os",
			"write",
			"(Ljava/io/FileDescriptor;[BII)I",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	jint Os::write(__jni_impl::java::io::FileDescriptor arg0, __jni_impl::java::nio::ByteBuffer arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.system.Os",
			"write",
			"(Ljava/io/FileDescriptor;Ljava/nio/ByteBuffer;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jstring Os::getenv(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.system.Os",
			"getenv",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Os::getenv(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.system.Os",
			"getenv",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jint Os::read(__jni_impl::java::io::FileDescriptor arg0, __jni_impl::java::nio::ByteBuffer arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.system.Os",
			"read",
			"(Ljava/io/FileDescriptor;Ljava/nio/ByteBuffer;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jint Os::read(__jni_impl::java::io::FileDescriptor arg0, jbyteArray arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.system.Os",
			"read",
			"(Ljava/io/FileDescriptor;[BII)I",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	void Os::connect(__jni_impl::java::io::FileDescriptor arg0, __jni_impl::java::net::SocketAddress arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"connect",
			"(Ljava/io/FileDescriptor;Ljava/net/SocketAddress;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Os::connect(__jni_impl::java::io::FileDescriptor arg0, __jni_impl::java::net::InetAddress arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"connect",
			"(Ljava/io/FileDescriptor;Ljava/net/InetAddress;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void Os::listen(__jni_impl::java::io::FileDescriptor arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"listen",
			"(Ljava/io/FileDescriptor;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Os::accept(__jni_impl::java::io::FileDescriptor arg0, __jni_impl::java::net::InetSocketAddress arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.system.Os",
			"accept",
			"(Ljava/io/FileDescriptor;Ljava/net/InetSocketAddress;)Ljava/io/FileDescriptor;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean Os::access(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.system.Os",
			"access",
			"(Ljava/lang/String;I)Z",
			arg0,
			arg1
		);
	}
	jboolean Os::access(const QString &arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.system.Os",
			"access",
			"(Ljava/lang/String;I)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jint Os::poll(jarray arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.system.Os",
			"poll",
			"([Landroid/system/StructPollfd;I)I",
			arg0,
			arg1
		);
	}
	void Os::close(__jni_impl::java::io::FileDescriptor arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"close",
			"(Ljava/io/FileDescriptor;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Os::open(jstring arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.system.Os",
			"open",
			"(Ljava/lang/String;II)Ljava/io/FileDescriptor;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject Os::open(const QString &arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.system.Os",
			"open",
			"(Ljava/lang/String;II)Ljava/io/FileDescriptor;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2
		);
	}
	jint Os::getuid()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.system.Os",
			"getuid",
			"()I"
		);
	}
	jint Os::geteuid()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.system.Os",
			"geteuid",
			"()I"
		);
	}
	jint Os::getgid()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.system.Os",
			"getgid",
			"()I"
		);
	}
	jint Os::getegid()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.system.Os",
			"getegid",
			"()I"
		);
	}
	QAndroidJniObject Os::uname()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.system.Os",
			"uname",
			"()Landroid/system/StructUtsname;"
		);
	}
	QAndroidJniObject Os::dup(__jni_impl::java::io::FileDescriptor arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.system.Os",
			"dup",
			"(Ljava/io/FileDescriptor;)Ljava/io/FileDescriptor;",
			arg0.__jniObject().object()
		);
	}
	void Os::symlink(jstring arg0, jstring arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"symlink",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void Os::symlink(const QString &arg0, const QString &arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"symlink",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void Os::link(jstring arg0, jstring arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"link",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void Os::link(const QString &arg0, const QString &arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"link",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jstring Os::readlink(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.system.Os",
			"readlink",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Os::readlink(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.system.Os",
			"readlink",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	QAndroidJniObject Os::stat(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.system.Os",
			"stat",
			"(Ljava/lang/String;)Landroid/system/StructStat;",
			arg0
		);
	}
	QAndroidJniObject Os::stat(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.system.Os",
			"stat",
			"(Ljava/lang/String;)Landroid/system/StructStat;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Os::lstat(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.system.Os",
			"lstat",
			"(Ljava/lang/String;)Landroid/system/StructStat;",
			arg0
		);
	}
	QAndroidJniObject Os::lstat(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.system.Os",
			"lstat",
			"(Ljava/lang/String;)Landroid/system/StructStat;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Os::fstat(__jni_impl::java::io::FileDescriptor arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.system.Os",
			"fstat",
			"(Ljava/io/FileDescriptor;)Landroid/system/StructStat;",
			arg0.__jniObject().object()
		);
	}
	void Os::chown(jstring arg0, jint arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"chown",
			"(Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Os::chown(const QString &arg0, jint arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"chown",
			"(Ljava/lang/String;II)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2
		);
	}
	void Os::lchown(jstring arg0, jint arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"lchown",
			"(Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Os::lchown(const QString &arg0, jint arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"lchown",
			"(Ljava/lang/String;II)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2
		);
	}
	void Os::fchown(__jni_impl::java::io::FileDescriptor arg0, jint arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"fchown",
			"(Ljava/io/FileDescriptor;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void Os::chmod(jstring arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"chmod",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void Os::chmod(const QString &arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"chmod",
			"(Ljava/lang/String;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void Os::fchmod(__jni_impl::java::io::FileDescriptor arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"fchmod",
			"(Ljava/io/FileDescriptor;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Os::statvfs(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.system.Os",
			"statvfs",
			"(Ljava/lang/String;)Landroid/system/StructStatVfs;",
			arg0
		);
	}
	QAndroidJniObject Os::statvfs(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.system.Os",
			"statvfs",
			"(Ljava/lang/String;)Landroid/system/StructStatVfs;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring Os::strerror(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.system.Os",
			"strerror",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	void Os::mkdir(jstring arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"mkdir",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void Os::mkdir(const QString &arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"mkdir",
			"(Ljava/lang/String;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void Os::rename(jstring arg0, jstring arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"rename",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void Os::rename(const QString &arg0, const QString &arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"rename",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void Os::bind(__jni_impl::java::io::FileDescriptor arg0, __jni_impl::java::net::InetAddress arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"bind",
			"(Ljava/io/FileDescriptor;Ljava/net/InetAddress;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void Os::bind(__jni_impl::java::io::FileDescriptor arg0, __jni_impl::java::net::SocketAddress arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"bind",
			"(Ljava/io/FileDescriptor;Ljava/net/SocketAddress;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Os::kill(jint arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"kill",
			"(II)V",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Os::socket(jint arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.system.Os",
			"socket",
			"(III)Ljava/io/FileDescriptor;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject Os::dup2(__jni_impl::java::io::FileDescriptor arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.system.Os",
			"dup2",
			"(Ljava/io/FileDescriptor;I)Ljava/io/FileDescriptor;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jarray Os::environ()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.system.Os",
			"environ",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	void Os::execv(jstring arg0, jarray arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"execv",
			"(Ljava/lang/String;[Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void Os::execv(const QString &arg0, jarray arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"execv",
			"(Ljava/lang/String;[Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void Os::execve(jstring arg0, jarray arg1, jarray arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"execve",
			"(Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Os::execve(const QString &arg0, jarray arg1, jarray arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"execve",
			"(Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2
		);
	}
	void Os::fdatasync(__jni_impl::java::io::FileDescriptor arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"fdatasync",
			"(Ljava/io/FileDescriptor;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Os::fstatvfs(__jni_impl::java::io::FileDescriptor arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.system.Os",
			"fstatvfs",
			"(Ljava/io/FileDescriptor;)Landroid/system/StructStatVfs;",
			arg0.__jniObject().object()
		);
	}
	void Os::fsync(__jni_impl::java::io::FileDescriptor arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"fsync",
			"(Ljava/io/FileDescriptor;)V",
			arg0.__jniObject().object()
		);
	}
	void Os::ftruncate(__jni_impl::java::io::FileDescriptor arg0, jlong arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"ftruncate",
			"(Ljava/io/FileDescriptor;J)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jstring Os::gai_strerror(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.system.Os",
			"gai_strerror",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject Os::getpeername(__jni_impl::java::io::FileDescriptor arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.system.Os",
			"getpeername",
			"(Ljava/io/FileDescriptor;)Ljava/net/SocketAddress;",
			arg0.__jniObject().object()
		);
	}
	jint Os::getpid()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.system.Os",
			"getpid",
			"()I"
		);
	}
	jint Os::getppid()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.system.Os",
			"getppid",
			"()I"
		);
	}
	QAndroidJniObject Os::getsockname(__jni_impl::java::io::FileDescriptor arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.system.Os",
			"getsockname",
			"(Ljava/io/FileDescriptor;)Ljava/net/SocketAddress;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Os::getsockoptTimeval(__jni_impl::java::io::FileDescriptor arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.system.Os",
			"getsockoptTimeval",
			"(Ljava/io/FileDescriptor;II)Landroid/system/StructTimeval;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jint Os::gettid()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.system.Os",
			"gettid",
			"()I"
		);
	}
	jbyteArray Os::getxattr(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.system.Os",
			"getxattr",
			"(Ljava/lang/String;Ljava/lang/String;)[B",
			arg0,
			arg1
		).object<jbyteArray>();
	}
	jbyteArray Os::getxattr(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.system.Os",
			"getxattr",
			"(Ljava/lang/String;Ljava/lang/String;)[B",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jbyteArray>();
	}
	jstring Os::if_indextoname(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.system.Os",
			"if_indextoname",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint Os::if_nametoindex(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.system.Os",
			"if_nametoindex",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint Os::if_nametoindex(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.system.Os",
			"if_nametoindex",
			"(Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Os::inet_pton(jint arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.system.Os",
			"inet_pton",
			"(ILjava/lang/String;)Ljava/net/InetAddress;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Os::inet_pton(jint arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.system.Os",
			"inet_pton",
			"(ILjava/lang/String;)Ljava/net/InetAddress;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jboolean Os::isatty(__jni_impl::java::io::FileDescriptor arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.system.Os",
			"isatty",
			"(Ljava/io/FileDescriptor;)Z",
			arg0.__jniObject().object()
		);
	}
	jarray Os::listxattr(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.system.Os",
			"listxattr",
			"(Ljava/lang/String;)[Ljava/lang/String;",
			arg0
		).object<jarray>();
	}
	jarray Os::listxattr(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.system.Os",
			"listxattr",
			"(Ljava/lang/String;)[Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jarray>();
	}
	jlong Os::lseek(__jni_impl::java::io::FileDescriptor arg0, jlong arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.system.Os",
			"lseek",
			"(Ljava/io/FileDescriptor;JI)J",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void Os::mincore(jlong arg0, jlong arg1, jbyteArray arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"mincore",
			"(JJ[B)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Os::mkfifo(jstring arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"mkfifo",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void Os::mkfifo(const QString &arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"mkfifo",
			"(Ljava/lang/String;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void Os::mlock(jlong arg0, jlong arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"mlock",
			"(JJ)V",
			arg0,
			arg1
		);
	}
	jlong Os::mmap(jlong arg0, jlong arg1, jint arg2, jint arg3, __jni_impl::java::io::FileDescriptor arg4, jlong arg5)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.system.Os",
			"mmap",
			"(JJIILjava/io/FileDescriptor;J)J",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object(),
			arg5
		);
	}
	void Os::msync(jlong arg0, jlong arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"msync",
			"(JJI)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Os::munlock(jlong arg0, jlong arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"munlock",
			"(JJ)V",
			arg0,
			arg1
		);
	}
	void Os::munmap(jlong arg0, jlong arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"munmap",
			"(JJ)V",
			arg0,
			arg1
		);
	}
	jarray Os::pipe()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.system.Os",
			"pipe",
			"()[Ljava/io/FileDescriptor;"
		).object<jarray>();
	}
	void Os::posix_fallocate(__jni_impl::java::io::FileDescriptor arg0, jlong arg1, jlong arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"posix_fallocate",
			"(Ljava/io/FileDescriptor;JJ)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jint Os::prctl(jint arg0, jlong arg1, jlong arg2, jlong arg3, jlong arg4)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.system.Os",
			"prctl",
			"(IJJJJ)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	jint Os::pread(__jni_impl::java::io::FileDescriptor arg0, jbyteArray arg1, jint arg2, jint arg3, jlong arg4)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.system.Os",
			"pread",
			"(Ljava/io/FileDescriptor;[BIIJ)I",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	jint Os::pread(__jni_impl::java::io::FileDescriptor arg0, __jni_impl::java::nio::ByteBuffer arg1, jlong arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.system.Os",
			"pread",
			"(Ljava/io/FileDescriptor;Ljava/nio/ByteBuffer;J)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	jint Os::pwrite(__jni_impl::java::io::FileDescriptor arg0, __jni_impl::java::nio::ByteBuffer arg1, jlong arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.system.Os",
			"pwrite",
			"(Ljava/io/FileDescriptor;Ljava/nio/ByteBuffer;J)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	jint Os::pwrite(__jni_impl::java::io::FileDescriptor arg0, jbyteArray arg1, jint arg2, jint arg3, jlong arg4)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.system.Os",
			"pwrite",
			"(Ljava/io/FileDescriptor;[BIIJ)I",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	jint Os::readv(__jni_impl::java::io::FileDescriptor arg0, jobjectArray arg1, jintArray arg2, jintArray arg3)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.system.Os",
			"readv",
			"(Ljava/io/FileDescriptor;[Ljava/lang/Object;[I[I)I",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	jint Os::recvfrom(__jni_impl::java::io::FileDescriptor arg0, __jni_impl::java::nio::ByteBuffer arg1, jint arg2, __jni_impl::java::net::InetSocketAddress arg3)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.system.Os",
			"recvfrom",
			"(Ljava/io/FileDescriptor;Ljava/nio/ByteBuffer;ILjava/net/InetSocketAddress;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	jint Os::recvfrom(__jni_impl::java::io::FileDescriptor arg0, jbyteArray arg1, jint arg2, jint arg3, jint arg4, __jni_impl::java::net::InetSocketAddress arg5)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.system.Os",
			"recvfrom",
			"(Ljava/io/FileDescriptor;[BIIILjava/net/InetSocketAddress;)I",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object()
		);
	}
	void Os::removexattr(jstring arg0, jstring arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"removexattr",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void Os::removexattr(const QString &arg0, const QString &arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"removexattr",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jlong Os::sendfile(__jni_impl::java::io::FileDescriptor arg0, __jni_impl::java::io::FileDescriptor arg1, __jni_impl::android::system::Int64Ref arg2, jlong arg3)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.system.Os",
			"sendfile",
			"(Ljava/io/FileDescriptor;Ljava/io/FileDescriptor;Landroid/system/Int64Ref;J)J",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	jint Os::sendto(__jni_impl::java::io::FileDescriptor arg0, jbyteArray arg1, jint arg2, jint arg3, jint arg4, __jni_impl::java::net::InetAddress arg5, jint arg6)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.system.Os",
			"sendto",
			"(Ljava/io/FileDescriptor;[BIIILjava/net/InetAddress;I)I",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object(),
			arg6
		);
	}
	jint Os::sendto(__jni_impl::java::io::FileDescriptor arg0, __jni_impl::java::nio::ByteBuffer arg1, jint arg2, __jni_impl::java::net::InetAddress arg3, jint arg4)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.system.Os",
			"sendto",
			"(Ljava/io/FileDescriptor;Ljava/nio/ByteBuffer;ILjava/net/InetAddress;I)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4
		);
	}
	jint Os::sendto(__jni_impl::java::io::FileDescriptor arg0, jbyteArray arg1, jint arg2, jint arg3, jint arg4, __jni_impl::java::net::SocketAddress arg5)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.system.Os",
			"sendto",
			"(Ljava/io/FileDescriptor;[BIIILjava/net/SocketAddress;)I",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object()
		);
	}
	void Os::setegid(jint arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"setegid",
			"(I)V",
			arg0
		);
	}
	void Os::setenv(jstring arg0, jstring arg1, jboolean arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"setenv",
			"(Ljava/lang/String;Ljava/lang/String;Z)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Os::setenv(const QString &arg0, const QString &arg1, jboolean arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"setenv",
			"(Ljava/lang/String;Ljava/lang/String;Z)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	void Os::seteuid(jint arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"seteuid",
			"(I)V",
			arg0
		);
	}
	void Os::setgid(jint arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"setgid",
			"(I)V",
			arg0
		);
	}
	jint Os::setsid()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.system.Os",
			"setsid",
			"()I"
		);
	}
	void Os::setsockoptInt(__jni_impl::java::io::FileDescriptor arg0, jint arg1, jint arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"setsockoptInt",
			"(Ljava/io/FileDescriptor;III)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	void Os::setsockoptTimeval(__jni_impl::java::io::FileDescriptor arg0, jint arg1, jint arg2, __jni_impl::android::system::StructTimeval arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"setsockoptTimeval",
			"(Ljava/io/FileDescriptor;IILandroid/system/StructTimeval;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void Os::setuid(jint arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"setuid",
			"(I)V",
			arg0
		);
	}
	void Os::setxattr(jstring arg0, jstring arg1, jbyteArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"setxattr",
			"(Ljava/lang/String;Ljava/lang/String;[BI)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void Os::setxattr(const QString &arg0, const QString &arg1, jbyteArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"setxattr",
			"(Ljava/lang/String;Ljava/lang/String;[BI)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3
		);
	}
	void Os::socketpair(jint arg0, jint arg1, jint arg2, __jni_impl::java::io::FileDescriptor arg3, __jni_impl::java::io::FileDescriptor arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"socketpair",
			"(IIILjava/io/FileDescriptor;Ljava/io/FileDescriptor;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		);
	}
	jstring Os::strsignal(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.system.Os",
			"strsignal",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jlong Os::sysconf(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.system.Os",
			"sysconf",
			"(I)J",
			arg0
		);
	}
	void Os::tcdrain(__jni_impl::java::io::FileDescriptor arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"tcdrain",
			"(Ljava/io/FileDescriptor;)V",
			arg0.__jniObject().object()
		);
	}
	void Os::tcsendbreak(__jni_impl::java::io::FileDescriptor arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"tcsendbreak",
			"(Ljava/io/FileDescriptor;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint Os::umask(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.system.Os",
			"umask",
			"(I)I",
			arg0
		);
	}
	void Os::unsetenv(jstring arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"unsetenv",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Os::unsetenv(const QString &arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.system.Os",
			"unsetenv",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint Os::writev(__jni_impl::java::io::FileDescriptor arg0, jobjectArray arg1, jintArray arg2, jintArray arg3)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.system.Os",
			"writev",
			"(Ljava/io/FileDescriptor;[Ljava/lang/Object;[I[I)I",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
} // namespace __jni_impl::android::system

namespace android::system
{
	class Os : public __jni_impl::android::system::Os
	{
	public:
		Os(QAndroidJniObject obj) { __thiz = obj; }
		Os()
		{
			__constructor();
		}
	};
} // namespace android::system

#endif // ANDROID_SYSTEM_OS

