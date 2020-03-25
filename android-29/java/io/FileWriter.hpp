#pragma once

#ifndef JAVA_IO_FILEWRITER
#define JAVA_IO_FILEWRITER

#include "../../__JniBaseClass.hpp"
#include "Writer.hpp"
#include "OutputStreamWriter.hpp"

namespace __jni_impl::java::io
{
	class FileDescriptor;
}
namespace __jni_impl::java::nio::charset
{
	class Charset;
}
namespace __jni_impl::java::io
{
	class File;
}

namespace __jni_impl::java::io
{
	class FileWriter : public __jni_impl::java::io::OutputStreamWriter
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::io::FileDescriptor arg0);
		void __constructor(jstring arg0, __jni_impl::java::nio::charset::Charset arg1);
		void __constructor(jstring arg0, __jni_impl::java::nio::charset::Charset arg1, jboolean arg2);
		void __constructor(__jni_impl::java::io::File arg0, __jni_impl::java::nio::charset::Charset arg1);
		void __constructor(__jni_impl::java::io::File arg0, __jni_impl::java::nio::charset::Charset arg1, jboolean arg2);
		void __constructor(jstring arg0);
		void __constructor(jstring arg0, jboolean arg1);
		void __constructor(__jni_impl::java::io::File arg0);
		void __constructor(__jni_impl::java::io::File arg0, jboolean arg1);
		
		// Methods
	};
} // namespace __jni_impl::java::io

#include "FileDescriptor.hpp"
#include "../nio/charset/Charset.hpp"
#include "File.hpp"

namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void FileWriter::__constructor(__jni_impl::java::io::FileDescriptor arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.FileWriter",
			"(Ljava/io/FileDescriptor;)V",
			arg0.__jniObject().object());
	}
	void FileWriter::__constructor(jstring arg0, __jni_impl::java::nio::charset::Charset arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.FileWriter",
			"(Ljava/lang/String;Ljava/nio/charset/Charset;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void FileWriter::__constructor(jstring arg0, __jni_impl::java::nio::charset::Charset arg1, jboolean arg2)
	{
		__thiz = QAndroidJniObject(
			"java.io.FileWriter",
			"(Ljava/lang/String;Ljava/nio/charset/Charset;Z)V",
			arg0,
			arg1.__jniObject().object(),
			arg2);
	}
	void FileWriter::__constructor(__jni_impl::java::io::File arg0, __jni_impl::java::nio::charset::Charset arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.FileWriter",
			"(Ljava/io/File;Ljava/nio/charset/Charset;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void FileWriter::__constructor(__jni_impl::java::io::File arg0, __jni_impl::java::nio::charset::Charset arg1, jboolean arg2)
	{
		__thiz = QAndroidJniObject(
			"java.io.FileWriter",
			"(Ljava/io/File;Ljava/nio/charset/Charset;Z)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void FileWriter::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.FileWriter",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void FileWriter::__constructor(jstring arg0, jboolean arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.FileWriter",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1);
	}
	void FileWriter::__constructor(__jni_impl::java::io::File arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.FileWriter",
			"(Ljava/io/File;)V",
			arg0.__jniObject().object());
	}
	void FileWriter::__constructor(__jni_impl::java::io::File arg0, jboolean arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.FileWriter",
			"(Ljava/io/File;Z)V",
			arg0.__jniObject().object(),
			arg1);
	}
	
	// Methods
} // namespace __jni_impl::java::io

namespace java::io
{
	class FileWriter : public __jni_impl::java::io::FileWriter
	{
	public:
		FileWriter(QAndroidJniObject obj) { __thiz = obj; }
		FileWriter(__jni_impl::java::io::FileDescriptor arg0)
		{
			__constructor(
				arg0);
		}
		FileWriter(jstring arg0, __jni_impl::java::nio::charset::Charset arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		FileWriter(jstring arg0, __jni_impl::java::nio::charset::Charset arg1, jboolean arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		FileWriter(__jni_impl::java::io::File arg0, __jni_impl::java::nio::charset::Charset arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		FileWriter(__jni_impl::java::io::File arg0, __jni_impl::java::nio::charset::Charset arg1, jboolean arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		FileWriter(jstring arg0)
		{
			__constructor(
				arg0);
		}
		FileWriter(jstring arg0, jboolean arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		FileWriter(__jni_impl::java::io::File arg0)
		{
			__constructor(
				arg0);
		}
		FileWriter(__jni_impl::java::io::File arg0, jboolean arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::io

#endif // JAVA_IO_FILEWRITER

