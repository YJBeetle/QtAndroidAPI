#include "./File.hpp"
#include "./FileDescriptor.hpp"
#include "../nio/channels/FileChannel.hpp"
#include "./FileInputStream.hpp"

namespace java::io
{
	// Fields
	
	// QAndroidJniObject forward
	FileInputStream::FileInputStream(QAndroidJniObject obj) : java::io::InputStream(obj) {}
	
	// Constructors
	FileInputStream::FileInputStream(java::io::File arg0)
		: java::io::InputStream(
			"java.io.FileInputStream",
			"(Ljava/io/File;)V",
			arg0.object()
		) {}
	FileInputStream::FileInputStream(java::io::FileDescriptor arg0)
		: java::io::InputStream(
			"java.io.FileInputStream",
			"(Ljava/io/FileDescriptor;)V",
			arg0.object()
		) {}
	FileInputStream::FileInputStream(jstring arg0)
		: java::io::InputStream(
			"java.io.FileInputStream",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	jint FileInputStream::available()
	{
		return callMethod<jint>(
			"available",
			"()I"
		);
	}
	void FileInputStream::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject FileInputStream::getChannel()
	{
		return callObjectMethod(
			"getChannel",
			"()Ljava/nio/channels/FileChannel;"
		);
	}
	QAndroidJniObject FileInputStream::getFD()
	{
		return callObjectMethod(
			"getFD",
			"()Ljava/io/FileDescriptor;"
		);
	}
	jint FileInputStream::read()
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint FileInputStream::read(jbyteArray arg0)
	{
		return callMethod<jint>(
			"read",
			"([B)I",
			arg0
		);
	}
	jint FileInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jlong FileInputStream::skip(jlong arg0)
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace java::io

