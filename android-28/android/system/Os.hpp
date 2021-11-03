#pragma once

#include "../../JObject.hpp"

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
	class Os : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Os(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Os(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::io::FileDescriptor accept(java::io::FileDescriptor arg0, java::net::InetSocketAddress arg1);
		static jboolean access(jstring arg0, jint arg1);
		static void bind(java::io::FileDescriptor arg0, java::net::InetAddress arg1, jint arg2);
		static void chmod(jstring arg0, jint arg1);
		static void chown(jstring arg0, jint arg1, jint arg2);
		static void close(java::io::FileDescriptor arg0);
		static void connect(java::io::FileDescriptor arg0, java::net::InetAddress arg1, jint arg2);
		static java::io::FileDescriptor dup(java::io::FileDescriptor arg0);
		static java::io::FileDescriptor dup2(java::io::FileDescriptor arg0, jint arg1);
		static jarray environ();
		static void execv(jstring arg0, jarray arg1);
		static void execve(jstring arg0, jarray arg1, jarray arg2);
		static void fchmod(java::io::FileDescriptor arg0, jint arg1);
		static void fchown(java::io::FileDescriptor arg0, jint arg1, jint arg2);
		static void fdatasync(java::io::FileDescriptor arg0);
		static android::system::StructStat fstat(java::io::FileDescriptor arg0);
		static android::system::StructStatVfs fstatvfs(java::io::FileDescriptor arg0);
		static void fsync(java::io::FileDescriptor arg0);
		static void ftruncate(java::io::FileDescriptor arg0, jlong arg1);
		static jstring gai_strerror(jint arg0);
		static jint getegid();
		static jstring getenv(jstring arg0);
		static jint geteuid();
		static jint getgid();
		static java::net::SocketAddress getpeername(java::io::FileDescriptor arg0);
		static jint getpid();
		static jint getppid();
		static java::net::SocketAddress getsockname(java::io::FileDescriptor arg0);
		static jint gettid();
		static jint getuid();
		static jbyteArray getxattr(jstring arg0, jstring arg1);
		static jstring if_indextoname(jint arg0);
		static jint if_nametoindex(jstring arg0);
		static java::net::InetAddress inet_pton(jint arg0, jstring arg1);
		static jboolean isatty(java::io::FileDescriptor arg0);
		static void kill(jint arg0, jint arg1);
		static void lchown(jstring arg0, jint arg1, jint arg2);
		static void link(jstring arg0, jstring arg1);
		static void listen(java::io::FileDescriptor arg0, jint arg1);
		static jarray listxattr(jstring arg0);
		static jlong lseek(java::io::FileDescriptor arg0, jlong arg1, jint arg2);
		static android::system::StructStat lstat(jstring arg0);
		static void mincore(jlong arg0, jlong arg1, jbyteArray arg2);
		static void mkdir(jstring arg0, jint arg1);
		static void mkfifo(jstring arg0, jint arg1);
		static void mlock(jlong arg0, jlong arg1);
		static jlong mmap(jlong arg0, jlong arg1, jint arg2, jint arg3, java::io::FileDescriptor arg4, jlong arg5);
		static void msync(jlong arg0, jlong arg1, jint arg2);
		static void munlock(jlong arg0, jlong arg1);
		static void munmap(jlong arg0, jlong arg1);
		static java::io::FileDescriptor open(jstring arg0, jint arg1, jint arg2);
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
		static jint readv(java::io::FileDescriptor arg0, jobjectArray arg1, jintArray arg2, jintArray arg3);
		static jint recvfrom(java::io::FileDescriptor arg0, java::nio::ByteBuffer arg1, jint arg2, java::net::InetSocketAddress arg3);
		static jint recvfrom(java::io::FileDescriptor arg0, jbyteArray arg1, jint arg2, jint arg3, jint arg4, java::net::InetSocketAddress arg5);
		static void remove(jstring arg0);
		static void removexattr(jstring arg0, jstring arg1);
		static void rename(jstring arg0, jstring arg1);
		static jlong sendfile(java::io::FileDescriptor arg0, java::io::FileDescriptor arg1, android::system::Int64Ref arg2, jlong arg3);
		static jint sendto(java::io::FileDescriptor arg0, java::nio::ByteBuffer arg1, jint arg2, java::net::InetAddress arg3, jint arg4);
		static jint sendto(java::io::FileDescriptor arg0, jbyteArray arg1, jint arg2, jint arg3, jint arg4, java::net::InetAddress arg5, jint arg6);
		static void setegid(jint arg0);
		static void setenv(jstring arg0, jstring arg1, jboolean arg2);
		static void seteuid(jint arg0);
		static void setgid(jint arg0);
		static jint setsid();
		static void setsockoptInt(java::io::FileDescriptor arg0, jint arg1, jint arg2, jint arg3);
		static void setuid(jint arg0);
		static void setxattr(jstring arg0, jstring arg1, jbyteArray arg2, jint arg3);
		static void shutdown(java::io::FileDescriptor arg0, jint arg1);
		static java::io::FileDescriptor socket(jint arg0, jint arg1, jint arg2);
		static void socketpair(jint arg0, jint arg1, jint arg2, java::io::FileDescriptor arg3, java::io::FileDescriptor arg4);
		static android::system::StructStat stat(jstring arg0);
		static android::system::StructStatVfs statvfs(jstring arg0);
		static jstring strerror(jint arg0);
		static jstring strsignal(jint arg0);
		static void symlink(jstring arg0, jstring arg1);
		static jlong sysconf(jint arg0);
		static void tcdrain(java::io::FileDescriptor arg0);
		static void tcsendbreak(java::io::FileDescriptor arg0, jint arg1);
		static jint umask(jint arg0);
		static android::system::StructUtsname uname();
		static void unsetenv(jstring arg0);
		static jint write(java::io::FileDescriptor arg0, java::nio::ByteBuffer arg1);
		static jint write(java::io::FileDescriptor arg0, jbyteArray arg1, jint arg2, jint arg3);
		static jint writev(java::io::FileDescriptor arg0, jobjectArray arg1, jintArray arg2, jintArray arg3);
	};
} // namespace android::system

