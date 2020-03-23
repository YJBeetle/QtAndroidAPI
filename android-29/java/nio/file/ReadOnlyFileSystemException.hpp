#pragma once

#ifndef JAVA_NIO_FILE_READONLYFILESYSTEMEXCEPTION
#define JAVA_NIO_FILE_READONLYFILESYSTEMEXCEPTION

#include "../../lang/UnsupportedOperationException.hpp"


namespace __jni_impl::java::nio::file
{
	class ReadOnlyFileSystemException : public __jni_impl::java::lang::UnsupportedOperationException
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
	void ReadOnlyFileSystemException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.ReadOnlyFileSystemException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::java::nio::file

namespace java::nio::file
{
	class ReadOnlyFileSystemException : public __jni_impl::java::nio::file::ReadOnlyFileSystemException
	{
	public:
		ReadOnlyFileSystemException(QAndroidJniObject obj) { __thiz = obj; }
		ReadOnlyFileSystemException()
		{
			__constructor();
		}
	};
} // namespace java::nio::file

#endif // JAVA_NIO_FILE_READONLYFILESYSTEMEXCEPTION

