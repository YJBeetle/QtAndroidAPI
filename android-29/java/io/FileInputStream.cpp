#include "./File.hpp"
#include "./FileDescriptor.hpp"
#include "../nio/channels/FileChannel.hpp"
#include "./FileInputStream.hpp"

namespace java::io
{
	// Fields
	
	FileInputStream::FileInputStream(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	FileInputStream::FileInputStream(java::io::File arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.FileInputStream",
			"(Ljava/io/File;)V",
			arg0.__jniObject().object()
		);
	}
	FileInputStream::FileInputStream(java::io::FileDescriptor arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.FileInputStream",
			"(Ljava/io/FileDescriptor;)V",
			arg0.__jniObject().object()
		);
	}
	FileInputStream::FileInputStream(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.FileInputStream",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
	jint FileInputStream::available()
	{
		return __thiz.callMethod<jint>(
			"available",
			"()I"
		);
	}
	void FileInputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject FileInputStream::getChannel()
	{
		return __thiz.callObjectMethod(
			"getChannel",
			"()Ljava/nio/channels/FileChannel;"
		);
	}
	QAndroidJniObject FileInputStream::getFD()
	{
		return __thiz.callObjectMethod(
			"getFD",
			"()Ljava/io/FileDescriptor;"
		);
	}
	jint FileInputStream::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint FileInputStream::read(jbyteArray arg0)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([B)I",
			arg0
		);
	}
	jint FileInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jlong FileInputStream::skip(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace java::io

