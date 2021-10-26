#pragma once

#ifndef JAVA_NIO_FILE_CLOSEDDIRECTORYSTREAMEXCEPTION
#define JAVA_NIO_FILE_CLOSEDDIRECTORYSTREAMEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalStateException.hpp"


namespace __jni_impl::java::nio::file
{
	class ClosedDirectoryStreamException : public __jni_impl::java::lang::IllegalStateException
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
	void ClosedDirectoryStreamException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.ClosedDirectoryStreamException",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::java::nio::file

namespace java::nio::file
{
	class ClosedDirectoryStreamException : public __jni_impl::java::nio::file::ClosedDirectoryStreamException
	{
	public:
		ClosedDirectoryStreamException(QAndroidJniObject obj) { __thiz = obj; }
		ClosedDirectoryStreamException()
		{
			__constructor();
		}
	};
} // namespace java::nio::file

#endif // JAVA_NIO_FILE_CLOSEDDIRECTORYSTREAMEXCEPTION

