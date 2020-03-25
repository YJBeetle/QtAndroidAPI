#pragma once

#ifndef JAVA_NIO_FILE_DIRECTORYNOTEMPTYEXCEPTION
#define JAVA_NIO_FILE_DIRECTORYNOTEMPTYEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../io/IOException.hpp"
#include "FileSystemException.hpp"


namespace __jni_impl::java::nio::file
{
	class DirectoryNotEmptyException : public __jni_impl::java::nio::file::FileSystemException
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
	void DirectoryNotEmptyException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.DirectoryNotEmptyException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::java::nio::file

namespace java::nio::file
{
	class DirectoryNotEmptyException : public __jni_impl::java::nio::file::DirectoryNotEmptyException
	{
	public:
		DirectoryNotEmptyException(QAndroidJniObject obj) { __thiz = obj; }
		DirectoryNotEmptyException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::nio::file

#endif // JAVA_NIO_FILE_DIRECTORYNOTEMPTYEXCEPTION

