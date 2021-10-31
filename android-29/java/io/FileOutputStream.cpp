#include "./File.hpp"
#include "./FileDescriptor.hpp"
#include "../nio/channels/FileChannel.hpp"
#include "./FileOutputStream.hpp"

namespace java::io
{
	// Fields
	
	// QAndroidJniObject forward
	FileOutputStream::FileOutputStream(QAndroidJniObject obj) : java::io::OutputStream(obj) {}
	
	// Constructors
	FileOutputStream::FileOutputStream(java::io::File arg0)
		: java::io::OutputStream(
			"java.io.FileOutputStream",
			"(Ljava/io/File;)V",
			arg0.object()
		) {}
	FileOutputStream::FileOutputStream(java::io::FileDescriptor arg0)
		: java::io::OutputStream(
			"java.io.FileOutputStream",
			"(Ljava/io/FileDescriptor;)V",
			arg0.object()
		) {}
	FileOutputStream::FileOutputStream(jstring arg0)
		: java::io::OutputStream(
			"java.io.FileOutputStream",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	FileOutputStream::FileOutputStream(java::io::File arg0, jboolean arg1)
		: java::io::OutputStream(
			"java.io.FileOutputStream",
			"(Ljava/io/File;Z)V",
			arg0.object(),
			arg1
		) {}
	FileOutputStream::FileOutputStream(jstring arg0, jboolean arg1)
		: java::io::OutputStream(
			"java.io.FileOutputStream",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		) {}
	
	// Methods
	void FileOutputStream::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject FileOutputStream::getChannel()
	{
		return callObjectMethod(
			"getChannel",
			"()Ljava/nio/channels/FileChannel;"
		);
	}
	QAndroidJniObject FileOutputStream::getFD()
	{
		return callObjectMethod(
			"getFD",
			"()Ljava/io/FileDescriptor;"
		);
	}
	void FileOutputStream::write(jbyteArray arg0)
	{
		callMethod<void>(
			"write",
			"([B)V",
			arg0
		);
	}
	void FileOutputStream::write(jint arg0)
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void FileOutputStream::write(jbyteArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"write",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace java::io

