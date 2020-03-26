#pragma once

#ifndef JAVA_NIO_FILE_FILESYSTEMEXCEPTION
#define JAVA_NIO_FILE_FILESYSTEMEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../io/IOException.hpp"


namespace __jni_impl::java::nio::file
{
	class FileSystemException : public __jni_impl::java::io::IOException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(jstring arg0, jstring arg1, jstring arg2);
		
		// Methods
		jstring getMessage();
		jstring getFile();
		jstring getReason();
		jstring getOtherFile();
	};
} // namespace __jni_impl::java::nio::file


namespace __jni_impl::java::nio::file
{
	// Fields
	
	// Constructors
	void FileSystemException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.FileSystemException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void FileSystemException::__constructor(jstring arg0, jstring arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.FileSystemException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2);
	}
	
	// Methods
	jstring FileSystemException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring FileSystemException::getFile()
	{
		return __thiz.callObjectMethod(
			"getFile",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring FileSystemException::getReason()
	{
		return __thiz.callObjectMethod(
			"getReason",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring FileSystemException::getOtherFile()
	{
		return __thiz.callObjectMethod(
			"getOtherFile",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::nio::file

namespace java::nio::file
{
	class FileSystemException : public __jni_impl::java::nio::file::FileSystemException
	{
	public:
		FileSystemException(QAndroidJniObject obj) { __thiz = obj; }
		FileSystemException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		FileSystemException(jstring arg0, jstring arg1, jstring arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace java::nio::file

#endif // JAVA_NIO_FILE_FILESYSTEMEXCEPTION

