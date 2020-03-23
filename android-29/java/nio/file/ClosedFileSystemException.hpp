#pragma once

#ifndef JAVA_NIO_FILE_CLOSEDFILESYSTEMEXCEPTION
#define JAVA_NIO_FILE_CLOSEDFILESYSTEMEXCEPTION

#include "../../lang/IllegalStateException.hpp"


namespace __jni_impl::java::nio::file
{
	class ClosedFileSystemException : public __jni_impl::java::lang::IllegalStateException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::java::nio::file


namespace __jni_impl::java::nio::file
{
	// Fields
	
	// Constructors
	void ClosedFileSystemException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.ClosedFileSystemException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::java::nio::file

namespace java::nio::file
{
	class ClosedFileSystemException : public __jni_impl::java::nio::file::ClosedFileSystemException
	{
	public:
		ClosedFileSystemException(QAndroidJniObject obj) { __thiz = obj; }
		ClosedFileSystemException()
		{
			__constructor();
		}
	};
} // namespace java::nio::file

#endif // JAVA_NIO_FILE_CLOSEDFILESYSTEMEXCEPTION

