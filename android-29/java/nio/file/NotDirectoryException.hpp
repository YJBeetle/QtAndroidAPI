#pragma once

#ifndef JAVA_NIO_FILE_NOTDIRECTORYEXCEPTION
#define JAVA_NIO_FILE_NOTDIRECTORYEXCEPTION

#include "FileSystemException.hpp"


namespace __jni_impl::java::nio::file
{
	class NotDirectoryException : public __jni_impl::java::nio::file::FileSystemException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		
		// Methods
	};
} // namespace __jni_impl::java::nio::file


namespace __jni_impl::java::nio::file
{
	// Fields
	
	// Constructors
	void NotDirectoryException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.NotDirectoryException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::java::nio::file

namespace java::nio::file
{
	class NotDirectoryException : public __jni_impl::java::nio::file::NotDirectoryException
	{
	public:
		NotDirectoryException(QAndroidJniObject obj) { __thiz = obj; }
		NotDirectoryException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::nio::file

#endif // JAVA_NIO_FILE_NOTDIRECTORYEXCEPTION

