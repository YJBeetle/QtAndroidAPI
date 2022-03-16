#include "../../JByteArray.hpp"
#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JObjectArray.hpp"
#include "../../JArray.hpp"
#include "./Int64Ref.hpp"
#include "./StructStat.hpp"
#include "./StructStatVfs.hpp"
#include "./StructUtsname.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../JString.hpp"
#include "../../java/net/InetAddress.hpp"
#include "../../java/net/InetSocketAddress.hpp"
#include "../../java/net/SocketAddress.hpp"
#include "../../java/nio/ByteBuffer.hpp"
#include "./Os.hpp"

namespace android::system
{
	// Fields
	
	// Constructors
	
	// Methods
	java::io::FileDescriptor Os::accept(java::io::FileDescriptor arg0, java::net::InetSocketAddress arg1)
	{
		return callStaticObjectMethod(
			"android.system.Os",
			"accept",
			"(Ljava/io/FileDescriptor;Ljava/net/InetSocketAddress;)Ljava/io/FileDescriptor;",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean Os::access(JString arg0, jint arg1)
	{
		return callStaticMethod<jboolean>(
			"android.system.Os",
			"access",
			"(Ljava/lang/String;I)Z",
			arg0.object<jstring>(),
			arg1
		);
	}
	void Os::bind(java::io::FileDescriptor arg0, java::net::InetAddress arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.system.Os",
			"bind",
			"(Ljava/io/FileDescriptor;Ljava/net/InetAddress;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void Os::chmod(JString arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.system.Os",
			"chmod",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	void Os::chown(JString arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.system.Os",
			"chown",
			"(Ljava/lang/String;II)V",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	void Os::close(java::io::FileDescriptor arg0)
	{
		callStaticMethod<void>(
			"android.system.Os",
			"close",
			"(Ljava/io/FileDescriptor;)V",
			arg0.object()
		);
	}
	void Os::connect(java::io::FileDescriptor arg0, java::net::InetAddress arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.system.Os",
			"connect",
			"(Ljava/io/FileDescriptor;Ljava/net/InetAddress;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	java::io::FileDescriptor Os::dup(java::io::FileDescriptor arg0)
	{
		return callStaticObjectMethod(
			"android.system.Os",
			"dup",
			"(Ljava/io/FileDescriptor;)Ljava/io/FileDescriptor;",
			arg0.object()
		);
	}
	java::io::FileDescriptor Os::dup2(java::io::FileDescriptor arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.system.Os",
			"dup2",
			"(Ljava/io/FileDescriptor;I)Ljava/io/FileDescriptor;",
			arg0.object(),
			arg1
		);
	}
	JArray Os::environ()
	{
		return callStaticObjectMethod(
			"android.system.Os",
			"environ",
			"()[Ljava/lang/String;"
		);
	}
	void Os::execv(JString arg0, JArray arg1)
	{
		callStaticMethod<void>(
			"android.system.Os",
			"execv",
			"(Ljava/lang/String;[Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jarray>()
		);
	}
	void Os::execve(JString arg0, JArray arg1, JArray arg2)
	{
		callStaticMethod<void>(
			"android.system.Os",
			"execve",
			"(Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jarray>(),
			arg2.object<jarray>()
		);
	}
	void Os::fchmod(java::io::FileDescriptor arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.system.Os",
			"fchmod",
			"(Ljava/io/FileDescriptor;I)V",
			arg0.object(),
			arg1
		);
	}
	void Os::fchown(java::io::FileDescriptor arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.system.Os",
			"fchown",
			"(Ljava/io/FileDescriptor;II)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void Os::fdatasync(java::io::FileDescriptor arg0)
	{
		callStaticMethod<void>(
			"android.system.Os",
			"fdatasync",
			"(Ljava/io/FileDescriptor;)V",
			arg0.object()
		);
	}
	android::system::StructStat Os::fstat(java::io::FileDescriptor arg0)
	{
		return callStaticObjectMethod(
			"android.system.Os",
			"fstat",
			"(Ljava/io/FileDescriptor;)Landroid/system/StructStat;",
			arg0.object()
		);
	}
	android::system::StructStatVfs Os::fstatvfs(java::io::FileDescriptor arg0)
	{
		return callStaticObjectMethod(
			"android.system.Os",
			"fstatvfs",
			"(Ljava/io/FileDescriptor;)Landroid/system/StructStatVfs;",
			arg0.object()
		);
	}
	void Os::fsync(java::io::FileDescriptor arg0)
	{
		callStaticMethod<void>(
			"android.system.Os",
			"fsync",
			"(Ljava/io/FileDescriptor;)V",
			arg0.object()
		);
	}
	void Os::ftruncate(java::io::FileDescriptor arg0, jlong arg1)
	{
		callStaticMethod<void>(
			"android.system.Os",
			"ftruncate",
			"(Ljava/io/FileDescriptor;J)V",
			arg0.object(),
			arg1
		);
	}
	JString Os::gai_strerror(jint arg0)
	{
		return callStaticObjectMethod(
			"android.system.Os",
			"gai_strerror",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	jint Os::getegid()
	{
		return callStaticMethod<jint>(
			"android.system.Os",
			"getegid",
			"()I"
		);
	}
	JString Os::getenv(JString arg0)
	{
		return callStaticObjectMethod(
			"android.system.Os",
			"getenv",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	jint Os::geteuid()
	{
		return callStaticMethod<jint>(
			"android.system.Os",
			"geteuid",
			"()I"
		);
	}
	jint Os::getgid()
	{
		return callStaticMethod<jint>(
			"android.system.Os",
			"getgid",
			"()I"
		);
	}
	java::net::SocketAddress Os::getpeername(java::io::FileDescriptor arg0)
	{
		return callStaticObjectMethod(
			"android.system.Os",
			"getpeername",
			"(Ljava/io/FileDescriptor;)Ljava/net/SocketAddress;",
			arg0.object()
		);
	}
	jint Os::getpid()
	{
		return callStaticMethod<jint>(
			"android.system.Os",
			"getpid",
			"()I"
		);
	}
	jint Os::getppid()
	{
		return callStaticMethod<jint>(
			"android.system.Os",
			"getppid",
			"()I"
		);
	}
	java::net::SocketAddress Os::getsockname(java::io::FileDescriptor arg0)
	{
		return callStaticObjectMethod(
			"android.system.Os",
			"getsockname",
			"(Ljava/io/FileDescriptor;)Ljava/net/SocketAddress;",
			arg0.object()
		);
	}
	jint Os::gettid()
	{
		return callStaticMethod<jint>(
			"android.system.Os",
			"gettid",
			"()I"
		);
	}
	jint Os::getuid()
	{
		return callStaticMethod<jint>(
			"android.system.Os",
			"getuid",
			"()I"
		);
	}
	JByteArray Os::getxattr(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.system.Os",
			"getxattr",
			"(Ljava/lang/String;Ljava/lang/String;)[B",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	JString Os::if_indextoname(jint arg0)
	{
		return callStaticObjectMethod(
			"android.system.Os",
			"if_indextoname",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	jint Os::if_nametoindex(JString arg0)
	{
		return callStaticMethod<jint>(
			"android.system.Os",
			"if_nametoindex",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	java::net::InetAddress Os::inet_pton(jint arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.system.Os",
			"inet_pton",
			"(ILjava/lang/String;)Ljava/net/InetAddress;",
			arg0,
			arg1.object<jstring>()
		);
	}
	jboolean Os::isatty(java::io::FileDescriptor arg0)
	{
		return callStaticMethod<jboolean>(
			"android.system.Os",
			"isatty",
			"(Ljava/io/FileDescriptor;)Z",
			arg0.object()
		);
	}
	void Os::kill(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.system.Os",
			"kill",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Os::lchown(JString arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.system.Os",
			"lchown",
			"(Ljava/lang/String;II)V",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	void Os::link(JString arg0, JString arg1)
	{
		callStaticMethod<void>(
			"android.system.Os",
			"link",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	void Os::listen(java::io::FileDescriptor arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.system.Os",
			"listen",
			"(Ljava/io/FileDescriptor;I)V",
			arg0.object(),
			arg1
		);
	}
	JArray Os::listxattr(JString arg0)
	{
		return callStaticObjectMethod(
			"android.system.Os",
			"listxattr",
			"(Ljava/lang/String;)[Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	jlong Os::lseek(java::io::FileDescriptor arg0, jlong arg1, jint arg2)
	{
		return callStaticMethod<jlong>(
			"android.system.Os",
			"lseek",
			"(Ljava/io/FileDescriptor;JI)J",
			arg0.object(),
			arg1,
			arg2
		);
	}
	android::system::StructStat Os::lstat(JString arg0)
	{
		return callStaticObjectMethod(
			"android.system.Os",
			"lstat",
			"(Ljava/lang/String;)Landroid/system/StructStat;",
			arg0.object<jstring>()
		);
	}
	void Os::mincore(jlong arg0, jlong arg1, JByteArray arg2)
	{
		callStaticMethod<void>(
			"android.system.Os",
			"mincore",
			"(JJ[B)V",
			arg0,
			arg1,
			arg2.object<jbyteArray>()
		);
	}
	void Os::mkdir(JString arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.system.Os",
			"mkdir",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	void Os::mkfifo(JString arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.system.Os",
			"mkfifo",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	void Os::mlock(jlong arg0, jlong arg1)
	{
		callStaticMethod<void>(
			"android.system.Os",
			"mlock",
			"(JJ)V",
			arg0,
			arg1
		);
	}
	jlong Os::mmap(jlong arg0, jlong arg1, jint arg2, jint arg3, java::io::FileDescriptor arg4, jlong arg5)
	{
		return callStaticMethod<jlong>(
			"android.system.Os",
			"mmap",
			"(JJIILjava/io/FileDescriptor;J)J",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object(),
			arg5
		);
	}
	void Os::msync(jlong arg0, jlong arg1, jint arg2)
	{
		callStaticMethod<void>(
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
		callStaticMethod<void>(
			"android.system.Os",
			"munlock",
			"(JJ)V",
			arg0,
			arg1
		);
	}
	void Os::munmap(jlong arg0, jlong arg1)
	{
		callStaticMethod<void>(
			"android.system.Os",
			"munmap",
			"(JJ)V",
			arg0,
			arg1
		);
	}
	java::io::FileDescriptor Os::open(JString arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"android.system.Os",
			"open",
			"(Ljava/lang/String;II)Ljava/io/FileDescriptor;",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	JArray Os::pipe()
	{
		return callStaticObjectMethod(
			"android.system.Os",
			"pipe",
			"()[Ljava/io/FileDescriptor;"
		);
	}
	jint Os::poll(JArray arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"android.system.Os",
			"poll",
			"([Landroid/system/StructPollfd;I)I",
			arg0.object<jarray>(),
			arg1
		);
	}
	void Os::posix_fallocate(java::io::FileDescriptor arg0, jlong arg1, jlong arg2)
	{
		callStaticMethod<void>(
			"android.system.Os",
			"posix_fallocate",
			"(Ljava/io/FileDescriptor;JJ)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	jint Os::prctl(jint arg0, jlong arg1, jlong arg2, jlong arg3, jlong arg4)
	{
		return callStaticMethod<jint>(
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
	jint Os::pread(java::io::FileDescriptor arg0, java::nio::ByteBuffer arg1, jlong arg2)
	{
		return callStaticMethod<jint>(
			"android.system.Os",
			"pread",
			"(Ljava/io/FileDescriptor;Ljava/nio/ByteBuffer;J)I",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	jint Os::pread(java::io::FileDescriptor arg0, JByteArray arg1, jint arg2, jint arg3, jlong arg4)
	{
		return callStaticMethod<jint>(
			"android.system.Os",
			"pread",
			"(Ljava/io/FileDescriptor;[BIIJ)I",
			arg0.object(),
			arg1.object<jbyteArray>(),
			arg2,
			arg3,
			arg4
		);
	}
	jint Os::pwrite(java::io::FileDescriptor arg0, java::nio::ByteBuffer arg1, jlong arg2)
	{
		return callStaticMethod<jint>(
			"android.system.Os",
			"pwrite",
			"(Ljava/io/FileDescriptor;Ljava/nio/ByteBuffer;J)I",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	jint Os::pwrite(java::io::FileDescriptor arg0, JByteArray arg1, jint arg2, jint arg3, jlong arg4)
	{
		return callStaticMethod<jint>(
			"android.system.Os",
			"pwrite",
			"(Ljava/io/FileDescriptor;[BIIJ)I",
			arg0.object(),
			arg1.object<jbyteArray>(),
			arg2,
			arg3,
			arg4
		);
	}
	jint Os::read(java::io::FileDescriptor arg0, java::nio::ByteBuffer arg1)
	{
		return callStaticMethod<jint>(
			"android.system.Os",
			"read",
			"(Ljava/io/FileDescriptor;Ljava/nio/ByteBuffer;)I",
			arg0.object(),
			arg1.object()
		);
	}
	jint Os::read(java::io::FileDescriptor arg0, JByteArray arg1, jint arg2, jint arg3)
	{
		return callStaticMethod<jint>(
			"android.system.Os",
			"read",
			"(Ljava/io/FileDescriptor;[BII)I",
			arg0.object(),
			arg1.object<jbyteArray>(),
			arg2,
			arg3
		);
	}
	JString Os::readlink(JString arg0)
	{
		return callStaticObjectMethod(
			"android.system.Os",
			"readlink",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	jint Os::readv(java::io::FileDescriptor arg0, JObjectArray arg1, JIntArray arg2, JIntArray arg3)
	{
		return callStaticMethod<jint>(
			"android.system.Os",
			"readv",
			"(Ljava/io/FileDescriptor;[Ljava/lang/Object;[I[I)I",
			arg0.object(),
			arg1.object<jobjectArray>(),
			arg2.object<jintArray>(),
			arg3.object<jintArray>()
		);
	}
	jint Os::recvfrom(java::io::FileDescriptor arg0, java::nio::ByteBuffer arg1, jint arg2, java::net::InetSocketAddress arg3)
	{
		return callStaticMethod<jint>(
			"android.system.Os",
			"recvfrom",
			"(Ljava/io/FileDescriptor;Ljava/nio/ByteBuffer;ILjava/net/InetSocketAddress;)I",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	jint Os::recvfrom(java::io::FileDescriptor arg0, JByteArray arg1, jint arg2, jint arg3, jint arg4, java::net::InetSocketAddress arg5)
	{
		return callStaticMethod<jint>(
			"android.system.Os",
			"recvfrom",
			"(Ljava/io/FileDescriptor;[BIIILjava/net/InetSocketAddress;)I",
			arg0.object(),
			arg1.object<jbyteArray>(),
			arg2,
			arg3,
			arg4,
			arg5.object()
		);
	}
	void Os::remove(JString arg0)
	{
		callStaticMethod<void>(
			"android.system.Os",
			"remove",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void Os::removexattr(JString arg0, JString arg1)
	{
		callStaticMethod<void>(
			"android.system.Os",
			"removexattr",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	void Os::rename(JString arg0, JString arg1)
	{
		callStaticMethod<void>(
			"android.system.Os",
			"rename",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	jlong Os::sendfile(java::io::FileDescriptor arg0, java::io::FileDescriptor arg1, android::system::Int64Ref arg2, jlong arg3)
	{
		return callStaticMethod<jlong>(
			"android.system.Os",
			"sendfile",
			"(Ljava/io/FileDescriptor;Ljava/io/FileDescriptor;Landroid/system/Int64Ref;J)J",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3
		);
	}
	jint Os::sendto(java::io::FileDescriptor arg0, java::nio::ByteBuffer arg1, jint arg2, java::net::InetAddress arg3, jint arg4)
	{
		return callStaticMethod<jint>(
			"android.system.Os",
			"sendto",
			"(Ljava/io/FileDescriptor;Ljava/nio/ByteBuffer;ILjava/net/InetAddress;I)I",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object(),
			arg4
		);
	}
	jint Os::sendto(java::io::FileDescriptor arg0, JByteArray arg1, jint arg2, jint arg3, jint arg4, java::net::InetAddress arg5, jint arg6)
	{
		return callStaticMethod<jint>(
			"android.system.Os",
			"sendto",
			"(Ljava/io/FileDescriptor;[BIIILjava/net/InetAddress;I)I",
			arg0.object(),
			arg1.object<jbyteArray>(),
			arg2,
			arg3,
			arg4,
			arg5.object(),
			arg6
		);
	}
	void Os::setegid(jint arg0)
	{
		callStaticMethod<void>(
			"android.system.Os",
			"setegid",
			"(I)V",
			arg0
		);
	}
	void Os::setenv(JString arg0, JString arg1, jboolean arg2)
	{
		callStaticMethod<void>(
			"android.system.Os",
			"setenv",
			"(Ljava/lang/String;Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2
		);
	}
	void Os::seteuid(jint arg0)
	{
		callStaticMethod<void>(
			"android.system.Os",
			"seteuid",
			"(I)V",
			arg0
		);
	}
	void Os::setgid(jint arg0)
	{
		callStaticMethod<void>(
			"android.system.Os",
			"setgid",
			"(I)V",
			arg0
		);
	}
	jint Os::setsid()
	{
		return callStaticMethod<jint>(
			"android.system.Os",
			"setsid",
			"()I"
		);
	}
	void Os::setsockoptInt(java::io::FileDescriptor arg0, jint arg1, jint arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.system.Os",
			"setsockoptInt",
			"(Ljava/io/FileDescriptor;III)V",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	void Os::setuid(jint arg0)
	{
		callStaticMethod<void>(
			"android.system.Os",
			"setuid",
			"(I)V",
			arg0
		);
	}
	void Os::setxattr(JString arg0, JString arg1, JByteArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.system.Os",
			"setxattr",
			"(Ljava/lang/String;Ljava/lang/String;[BI)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jbyteArray>(),
			arg3
		);
	}
	void Os::shutdown(java::io::FileDescriptor arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.system.Os",
			"shutdown",
			"(Ljava/io/FileDescriptor;I)V",
			arg0.object(),
			arg1
		);
	}
	java::io::FileDescriptor Os::socket(jint arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"android.system.Os",
			"socket",
			"(III)Ljava/io/FileDescriptor;",
			arg0,
			arg1,
			arg2
		);
	}
	void Os::socketpair(jint arg0, jint arg1, jint arg2, java::io::FileDescriptor arg3, java::io::FileDescriptor arg4)
	{
		callStaticMethod<void>(
			"android.system.Os",
			"socketpair",
			"(IIILjava/io/FileDescriptor;Ljava/io/FileDescriptor;)V",
			arg0,
			arg1,
			arg2,
			arg3.object(),
			arg4.object()
		);
	}
	android::system::StructStat Os::stat(JString arg0)
	{
		return callStaticObjectMethod(
			"android.system.Os",
			"stat",
			"(Ljava/lang/String;)Landroid/system/StructStat;",
			arg0.object<jstring>()
		);
	}
	android::system::StructStatVfs Os::statvfs(JString arg0)
	{
		return callStaticObjectMethod(
			"android.system.Os",
			"statvfs",
			"(Ljava/lang/String;)Landroid/system/StructStatVfs;",
			arg0.object<jstring>()
		);
	}
	JString Os::strerror(jint arg0)
	{
		return callStaticObjectMethod(
			"android.system.Os",
			"strerror",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JString Os::strsignal(jint arg0)
	{
		return callStaticObjectMethod(
			"android.system.Os",
			"strsignal",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	void Os::symlink(JString arg0, JString arg1)
	{
		callStaticMethod<void>(
			"android.system.Os",
			"symlink",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	jlong Os::sysconf(jint arg0)
	{
		return callStaticMethod<jlong>(
			"android.system.Os",
			"sysconf",
			"(I)J",
			arg0
		);
	}
	void Os::tcdrain(java::io::FileDescriptor arg0)
	{
		callStaticMethod<void>(
			"android.system.Os",
			"tcdrain",
			"(Ljava/io/FileDescriptor;)V",
			arg0.object()
		);
	}
	void Os::tcsendbreak(java::io::FileDescriptor arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.system.Os",
			"tcsendbreak",
			"(Ljava/io/FileDescriptor;I)V",
			arg0.object(),
			arg1
		);
	}
	jint Os::umask(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.system.Os",
			"umask",
			"(I)I",
			arg0
		);
	}
	android::system::StructUtsname Os::uname()
	{
		return callStaticObjectMethod(
			"android.system.Os",
			"uname",
			"()Landroid/system/StructUtsname;"
		);
	}
	void Os::unsetenv(JString arg0)
	{
		callStaticMethod<void>(
			"android.system.Os",
			"unsetenv",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	jint Os::write(java::io::FileDescriptor arg0, java::nio::ByteBuffer arg1)
	{
		return callStaticMethod<jint>(
			"android.system.Os",
			"write",
			"(Ljava/io/FileDescriptor;Ljava/nio/ByteBuffer;)I",
			arg0.object(),
			arg1.object()
		);
	}
	jint Os::write(java::io::FileDescriptor arg0, JByteArray arg1, jint arg2, jint arg3)
	{
		return callStaticMethod<jint>(
			"android.system.Os",
			"write",
			"(Ljava/io/FileDescriptor;[BII)I",
			arg0.object(),
			arg1.object<jbyteArray>(),
			arg2,
			arg3
		);
	}
	jint Os::writev(java::io::FileDescriptor arg0, JObjectArray arg1, JIntArray arg2, JIntArray arg3)
	{
		return callStaticMethod<jint>(
			"android.system.Os",
			"writev",
			"(Ljava/io/FileDescriptor;[Ljava/lang/Object;[I[I)I",
			arg0.object(),
			arg1.object<jobjectArray>(),
			arg2.object<jintArray>(),
			arg3.object<jintArray>()
		);
	}
} // namespace android::system

