#pragma once

#ifndef JAVA_IO_FILEOUTPUTSTREAM
#define JAVA_IO_FILEOUTPUTSTREAM

#include "../../__JniBaseClass.hpp"
#include "OutputStream.hpp"

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
	class File;
}

namespace __jni_impl::java::io
{
	class FileOutputStream : public __jni_impl::java::io::OutputStream
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::io::FileDescriptor arg0);
		void __constructor(__jni_impl::java::io::File arg0, jboolean arg1);
		void __constructor(__jni_impl::java::io::File arg0);
		void __constructor(jstring arg0, jboolean arg1);
		void __constructor(jstring arg0);
		
		// Methods
		void write(jint arg0);
		void write(jbyteArray arg0);
		void write(jbyteArray arg0, jint arg1, jint arg2);
		void close();
		QAndroidJniObject getFD();
		QAndroidJniObject getChannel();
	};
} // namespace __jni_impl::java::io

#include "FileDescriptor.hpp"
#include "../nio/channels/FileChannel.hpp"
#include "File.hpp"

namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void FileOutputStream::__constructor(__jni_impl::java::io::FileDescriptor arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.FileOutputStream",
			"(Ljava/io/FileDescriptor;)V",
			arg0.__jniObject().object());
	}
	void FileOutputStream::__constructor(__jni_impl::java::io::File arg0, jboolean arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.FileOutputStream",
			"(Ljava/io/File;Z)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void FileOutputStream::__constructor(__jni_impl::java::io::File arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.FileOutputStream",
			"(Ljava/io/File;)V",
			arg0.__jniObject().object());
	}
	void FileOutputStream::__constructor(jstring arg0, jboolean arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.FileOutputStream",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1);
	}
	void FileOutputStream::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.FileOutputStream",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
	void FileOutputStream::write(jint arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void FileOutputStream::write(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"([B)V",
			arg0
		);
	}
	void FileOutputStream::write(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void FileOutputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject FileOutputStream::getFD()
	{
		return __thiz.callObjectMethod(
			"getFD",
			"()Ljava/io/FileDescriptor;"
		);
	}
	QAndroidJniObject FileOutputStream::getChannel()
	{
		return __thiz.callObjectMethod(
			"getChannel",
			"()Ljava/nio/channels/FileChannel;"
		);
	}
} // namespace __jni_impl::java::io

namespace java::io
{
	class FileOutputStream : public __jni_impl::java::io::FileOutputStream
	{
	public:
		FileOutputStream(QAndroidJniObject obj) { __thiz = obj; }
		FileOutputStream(__jni_impl::java::io::FileDescriptor arg0)
		{
			__constructor(
				arg0);
		}
		FileOutputStream(__jni_impl::java::io::File arg0, jboolean arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		FileOutputStream(__jni_impl::java::io::File arg0)
		{
			__constructor(
				arg0);
		}
		FileOutputStream(jstring arg0, jboolean arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		FileOutputStream(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::io

#endif // JAVA_IO_FILEOUTPUTSTREAM

