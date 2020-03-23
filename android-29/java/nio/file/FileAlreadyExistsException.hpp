#pragma once

#ifndef JAVA_NIO_FILE_FILEALREADYEXISTSEXCEPTION
#define JAVA_NIO_FILE_FILEALREADYEXISTSEXCEPTION

#include "FileSystemException.hpp"


namespace __jni_impl::java::nio::file
{
	class FileAlreadyExistsException : public __jni_impl::java::nio::file::FileSystemException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(jstring arg0, jstring arg1, jstring arg2);
		
		// Methods
	};
} // namespace __jni_impl::java::nio::file


namespace __jni_impl::java::nio::file
{
	// Fields
	
	// Constructors
	void FileAlreadyExistsException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.FileAlreadyExistsException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void FileAlreadyExistsException::__constructor(jstring arg0, jstring arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.FileAlreadyExistsException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2);
	}
	
	// Methods
} // namespace __jni_impl::java::nio::file

namespace java::nio::file
{
	class FileAlreadyExistsException : public __jni_impl::java::nio::file::FileAlreadyExistsException
	{
	public:
		FileAlreadyExistsException(QAndroidJniObject obj) { __thiz = obj; }
		FileAlreadyExistsException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		FileAlreadyExistsException(jstring arg0, jstring arg1, jstring arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace java::nio::file

#endif // JAVA_NIO_FILE_FILEALREADYEXISTSEXCEPTION

