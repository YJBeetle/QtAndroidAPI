#pragma once

#ifndef JAVA_IO_FILEREADER
#define JAVA_IO_FILEREADER

#include "../../__JniBaseClass.hpp"
#include "Reader.hpp"
#include "InputStreamReader.hpp"

namespace __jni_impl::java::io
{
	class File;
}
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
	class FileReader : public __jni_impl::java::io::InputStreamReader
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::io::File arg0);
		void __constructor(__jni_impl::java::io::FileDescriptor arg0);
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(__jni_impl::java::io::File arg0, __jni_impl::java::nio::charset::Charset arg1);
		void __constructor(jstring arg0, __jni_impl::java::nio::charset::Charset arg1);
		void __constructor(const QString &arg0, __jni_impl::java::nio::charset::Charset arg1);
		
		// Methods
	};
} // namespace __jni_impl::java::io

#include "File.hpp"
#include "FileDescriptor.hpp"
#include "../nio/charset/Charset.hpp"

namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void FileReader::__constructor(__jni_impl::java::io::File arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.FileReader",
			"(Ljava/io/File;)V",
			arg0.__jniObject().object()
		);
	}
	void FileReader::__constructor(__jni_impl::java::io::FileDescriptor arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.FileReader",
			"(Ljava/io/FileDescriptor;)V",
			arg0.__jniObject().object()
		);
	}
	void FileReader::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.FileReader",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void FileReader::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.FileReader",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void FileReader::__constructor(__jni_impl::java::io::File arg0, __jni_impl::java::nio::charset::Charset arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.FileReader",
			"(Ljava/io/File;Ljava/nio/charset/Charset;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void FileReader::__constructor(jstring arg0, __jni_impl::java::nio::charset::Charset arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.FileReader",
			"(Ljava/lang/String;Ljava/nio/charset/Charset;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void FileReader::__constructor(const QString &arg0, __jni_impl::java::nio::charset::Charset arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.FileReader",
			"(Ljava/lang/String;Ljava/nio/charset/Charset;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
} // namespace __jni_impl::java::io

namespace java::io
{
	class FileReader : public __jni_impl::java::io::FileReader
	{
	public:
		FileReader(QAndroidJniObject obj) { __thiz = obj; }
		FileReader(__jni_impl::java::io::File arg0)
		{
			__constructor(
				arg0);
		}
		FileReader(__jni_impl::java::io::FileDescriptor arg0)
		{
			__constructor(
				arg0);
		}
		FileReader(jstring arg0)
		{
			__constructor(
				arg0);
		}
		FileReader(__jni_impl::java::io::File arg0, __jni_impl::java::nio::charset::Charset arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		FileReader(jstring arg0, __jni_impl::java::nio::charset::Charset arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::io

#endif // JAVA_IO_FILEREADER

