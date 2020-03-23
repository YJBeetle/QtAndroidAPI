#pragma once

#ifndef JAVA_NIO_FILE_FILESYSTEMNOTFOUNDEXCEPTION
#define JAVA_NIO_FILE_FILESYSTEMNOTFOUNDEXCEPTION

#include "../../lang/RuntimeException.hpp"


namespace __jni_impl::java::nio::file
{
	class FileSystemNotFoundException : public __jni_impl::java::lang::RuntimeException
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
	void FileSystemNotFoundException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.FileSystemNotFoundException",
			"()V");
	}
	void FileSystemNotFoundException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.FileSystemNotFoundException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::java::nio::file

namespace java::nio::file
{
	class FileSystemNotFoundException : public __jni_impl::java::nio::file::FileSystemNotFoundException
	{
	public:
		FileSystemNotFoundException(QAndroidJniObject obj) { __thiz = obj; }
		FileSystemNotFoundException()
		{
			__constructor();
		}
		FileSystemNotFoundException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::nio::file

#endif // JAVA_NIO_FILE_FILESYSTEMNOTFOUNDEXCEPTION

