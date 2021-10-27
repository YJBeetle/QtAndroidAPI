#pragma once

#ifndef JAVA_IO_FILEINPUTSTREAM
#define JAVA_IO_FILEINPUTSTREAM

#include "../../__JniBaseClass.hpp"
#include "InputStream.hpp"

namespace __jni_impl::java::io
{
	class File;
}
namespace __jni_impl::java::io
{
	class FileDescriptor;
}
namespace __jni_impl::java::nio::channels
{
	class FileChannel;
}

namespace __jni_impl::java::io
{
	class FileInputStream : public __jni_impl::java::io::InputStream
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::io::File arg0);
		void __constructor(__jni_impl::java::io::FileDescriptor arg0);
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
		jint available();
		void close();
		QAndroidJniObject getChannel();
		QAndroidJniObject getFD();
		jint read();
		jint read(jbyteArray arg0);
		jint read(jbyteArray arg0, jint arg1, jint arg2);
		jlong skip(jlong arg0);
	};
} // namespace __jni_impl::java::io

#include "File.hpp"
#include "FileDescriptor.hpp"
#include "../nio/channels/FileChannel.hpp"

namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void FileInputStream::__constructor(__jni_impl::java::io::File arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.FileInputStream",
			"(Ljava/io/File;)V",
			arg0.__jniObject().object()
		);
	}
	void FileInputStream::__constructor(__jni_impl::java::io::FileDescriptor arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.FileInputStream",
			"(Ljava/io/FileDescriptor;)V",
			arg0.__jniObject().object()
		);
	}
	void FileInputStream::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.FileInputStream",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void FileInputStream::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.FileInputStream",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
} // namespace __jni_impl::java::io

namespace java::io
{
	class FileInputStream : public __jni_impl::java::io::FileInputStream
	{
	public:
		FileInputStream(QAndroidJniObject obj) { __thiz = obj; }
		FileInputStream(__jni_impl::java::io::File arg0)
		{
			__constructor(
				arg0);
		}
		FileInputStream(__jni_impl::java::io::FileDescriptor arg0)
		{
			__constructor(
				arg0);
		}
		FileInputStream(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::io

#endif // JAVA_IO_FILEINPUTSTREAM

