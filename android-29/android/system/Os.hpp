#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::system
{
	class Int64Ref;
}
namespace android::system
{
	class StructStat;
}
namespace android::system
{
	class StructStatVfs;
}
namespace android::system
{
	class StructTimeval;
}
namespace android::system
{
	class StructUtsname;
}
namespace java::io
{
	class FileDescriptor;
}
namespace java::net
{
	class InetAddress;
}
namespace java::net
{
	class InetSocketAddress;
}
namespace java::net
{
	class SocketAddress;
}
namespace java::nio
{
	class ByteBuffer;
}

namespace android::system
{
	class Os : public __JniBaseClass
	{
	public:
		// Fields
		
		Os(QAndroidJniObject obj);
		// Constructors
		Os() = default;
		
		// Methods
		static QAndroidJniObject accept(java::io::FileDescriptor arg0, java::net::InetSocketAddress arg1);
		static jboolean access(jstring arg0, jint arg1);
		static jboolean access(const QString &arg0, jint arg1);
		static void bind(java::io::FileDescriptor arg0, java::net::SocketAddress arg1);
		static void bind(java::io::FileDescriptor arg0, java::net::InetAddress arg1, jint arg2);
		static void chmod(jstring arg0, jint arg1);
		static void chmod(const QString &arg0, jint arg1);
		static void chown(jstring arg0, jint arg1, jint arg2);
		static void chown(const QString &arg0, jint arg1, jint arg2);
		static void close(java::io::FileDescriptor arg0);
		static void connect(java::io::FileDescriptor arg0, java::net::SocketAddress arg1);
		static void connect(java::io::FileDescriptor arg0, java::net::InetAddress arg1, jint arg2);
		static QAndroidJniObject dup(java::io::FileDescriptor arg0);
		static QAndroidJniObject dup2(java::io::FileDescriptor arg0, jint arg1);
		static jarray environ();
		static void execv(jstring arg0, jarray arg1);
		static void execv(const QString &arg0, jarray arg1);
		static void execve(jstring arg0, jarray arg1, jarray arg2);
		static void execve(const QString &arg0, jarray arg1, jarray arg2);
		static void fchmod(java::io::FileDescriptor arg0, jint arg1);
		static void fchown(java::io::FileDescriptor arg0, jint arg1, jint arg2);
		static void fdatasync(java::io::FileDescriptor arg0);
		static QAndroidJniObject fstat(java::io::FileDescriptor arg0);
		static QAndroidJniObject fstatvfs(java::io::FileDescriptor arg0);
		static void fsync(java::io::FileDescriptor arg0);
		static void ftruncate(java::io::FileDescriptor arg0, jlong arg1);
		static jstring gai_strerror(jint arg0);
		static jint getegid();
		static jstring getenv(jstring arg0);
		static jstring getenv(const QString &arg0);
		static jint geteuid();
		static jint getgid();
		static QAndroidJniObject getpeername(java::io::FileDescriptor arg0);
		static jint getpid();
		static jint getppid();
		static QAndroidJniObject getsockname(java::io::FileDescriptor arg0);
		static QAndroidJniObject getsockoptTimeval(java::io::FileDescriptor arg0, jint arg1, jint arg2);
		static jint gettid();
		static jint getuid();
		static jbyteArray getxattr(jstring arg0, jstring arg1);
		static jbyteArray getxattr(const QString &arg0, const QString &arg1);
		static jstring if_indextoname(jint arg0);
		static jint if_nametoindex(jstring arg0);
		static jint if_nametoindex(const QString &arg0);
		static QAndroidJniObject inet_pton(jint arg0, jstring arg1);
		static QAndroidJniObject inet_pton(jint arg0, const QString &arg1);
		static jboolean isatty(java::io::FileDescriptor arg0);
		static void kill(jint arg0, jint arg1);
		static void lchown(jstring arg0, jint arg1, jint arg2);
		static void lchown(const QString &arg0, jint arg1, jint arg2);
		static void link(jstring arg0, jstring arg1);
		static void link(const QString &arg0, const QString &arg1);
		static void listen(java::io::FileDescriptor arg0, jint arg1);
		static jarray listxattr(jstring arg0);
		static jarray listxattr(const QString &arg0);
		static jlong lseek(java::io::FileDescriptor arg0, jlong arg1, jint arg2);
		static QAndroidJniObject lstat(jstring arg0);
		static QAndroidJniObject lstat(const QString &arg0);
		static void mincore(jlong arg0, jlong arg1, jbyteArray arg2);
		static void mkdir(jstring arg0, jint arg1);
		static void mkdir(const QString &arg0, jint arg1);
		static void mkfifo(jstring arg0, jint arg1);
		static void mkfifo(const QString &arg0, jint arg1);
		static void mlock(jlong arg0, jlong arg1);
		static jlong mmap(jlong arg0, jlong arg1, jint arg2, jint arg3, java::io::FileDescriptor arg4, jlong arg5);
		static void msync(jlong arg0, jlong arg1, jint arg2);
		static void munlock(jlong arg0, jlong arg1);
		static void munmap(jlong arg0, jlong arg1);
		static QAndroidJniObject open(jstring arg0, jint arg1, jint arg2);
		static QAndroidJniObject open(const QString &arg0, jint arg1, jint arg2);
		static jarray pipe();
		static jint poll(jarray arg0, jint arg1);
		static void posix_fallocate(java::io::FileDescriptor arg0, jlong arg1, jlong arg2);
		static jint prctl(jint arg0, jlong arg1, jlong arg2, jlong arg3, jlong arg4);
		static jint pread(java::io::FileDescriptor arg0, java::nio::ByteBuffer arg1, jlong arg2);
		static jint pread(java::io::FileDescriptor arg0, jbyteArray arg1, jint arg2, jint arg3, jlong arg4);
		static jint pwrite(java::io::FileDescriptor arg0, java::nio::ByteBuffer arg1, jlong arg2);
		static jint pwrite(java::io::FileDescriptor arg0, jbyteArray arg1, jint arg2, jint arg3, jlong arg4);
		static jint read(java::io::FileDescriptor arg0, java::nio::ByteBuffer arg1);
		static jint read(java::io::FileDescriptor arg0, jbyteArray arg1, jint arg2, jint arg3);
		static jstring readlink(jstring arg0);
		static jstring readlink(const QString &arg0);
		static jint readv(java::io::FileDescriptor arg0, jobjectArray arg1, jintArray arg2, jintArray arg3);
		static jint recvfrom(java::io::FileDescriptor arg0, java::nio::ByteBuffer arg1, jint arg2, java::net::InetSocketAddress arg3);
		static jint recvfrom(java::io::FileDescriptor arg0, jbyteArray arg1, jint arg2, jint arg3, jint arg4, java::net::InetSocketAddress arg5);
		static void remove(jstring arg0);
		static void remove(const QString &arg0);
		static void removexattr(jstring arg0, jstring arg1);
		static void removexattr(const QString &arg0, const QString &arg1);
		static void rename(jstring arg0, jstring arg1);
		static void rename(const QString &arg0, const QString &arg1);
		static jlong sendfile(java::io::FileDescriptor arg0, java::io::FileDescriptor arg1, android::system::Int64Ref arg2, jlong arg3);
		static jint sendto(java::io::FileDescriptor arg0, java::nio::ByteBuffer arg1, jint arg2, java::net::InetAddress arg3, jint arg4);
		static jint sendto(java::io::FileDescriptor arg0, jbyteArray arg1, jint arg2, jint arg3, jint arg4, java::net::SocketAddress arg5);
		static jint sendto(java::io::FileDescriptor arg0, jbyteArray arg1, jint arg2, jint arg3, jint arg4, java::net::InetAddress arg5, jint arg6);
		static void setegid(jint arg0);
		static void setenv(jstring arg0, jstring arg1, jboolean arg2);
		static void setenv(const QString &arg0, const QString &arg1, jboolean arg2);
		static void seteuid(jint arg0);
		static void setgid(jint arg0);
		static jint setsid();
		static void setsockoptInt(java::io::FileDescriptor arg0, jint arg1, jint arg2, jint arg3);
		static void setsockoptTimeval(java::io::FileDescriptor arg0, jint arg1, jint arg2, android::system::StructTimeval arg3);
		static void setuid(jint arg0);
		static void setxattr(jstring arg0, jstring arg1, jbyteArray arg2, jint arg3);
		static void setxattr(const QString &arg0, const QString &arg1, jbyteArray arg2, jint arg3);
		static void shutdown(java::io::FileDescriptor arg0, jint arg1);
		static QAndroidJniObject socket(jint arg0, jint arg1, jint arg2);
		static void socketpair(jint arg0, jint arg1, jint arg2, java::io::FileDescriptor arg3, java::io::FileDescriptor arg4);
		static QAndroidJniObject stat(jstring arg0);
		static QAndroidJniObject stat(const QString &arg0);
		static QAndroidJniObject statvfs(jstring arg0);
		static QAndroidJniObject statvfs(const QString &arg0);
		static jstring strerror(jint arg0);
		static jstring strsignal(jint arg0);
		static void symlink(jstring arg0, jstring arg1);
		static void symlink(const QString &arg0, const QString &arg1);
		static jlong sysconf(jint arg0);
		static void tcdrain(java::io::FileDescriptor arg0);
		static void tcsendbreak(java::io::FileDescriptor arg0, jint arg1);
		static jint umask(jint arg0);
		static QAndroidJniObject uname();
		static void unsetenv(jstring arg0);
		static void unsetenv(const QString &arg0);
		static jint write(java::io::FileDescriptor arg0, java::nio::ByteBuffer arg1);
		static jint write(java::io::FileDescriptor arg0, jbyteArray arg1, jint arg2, jint arg3);
		static jint writev(java::io::FileDescriptor arg0, jobjectArray arg1, jintArray arg2, jintArray arg3);
	};
} // namespace android::system

