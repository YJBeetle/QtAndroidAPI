#pragma once

#ifndef JAVA_NIO_FILE_FILESYSTEMALREADYEXISTSEXCEPTION
#define JAVA_NIO_FILE_FILESYSTEMALREADYEXISTSEXCEPTION

#include "../../lang/RuntimeException.hpp"


namespace __jni_impl::java::nio::file
{
	class FileSystemAlreadyExistsException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		
		// Methods
	};
} // namespace __jni_impl::java::nio::file


namespace __jni_impl::java::nio::file
{
	// Fields
	
	// Constructors
	void FileSystemAlreadyExistsException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.FileSystemAlreadyExistsException",
			"()V");
	}
	void FileSystemAlreadyExistsException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.FileSystemAlreadyExistsException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::java::nio::file

namespace java::nio::file
{
	class FileSystemAlreadyExistsException : public __jni_impl::java::nio::file::FileSystemAlreadyExistsException
	{
	public:
		FileSystemAlreadyExistsException(QAndroidJniObject obj) { __thiz = obj; }
		FileSystemAlreadyExistsException()
		{
			__constructor();
		}
		FileSystemAlreadyExistsException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::nio::file

#endif // JAVA_NIO_FILE_FILESYSTEMALREADYEXISTSEXCEPTION

