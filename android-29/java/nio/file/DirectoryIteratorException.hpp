#pragma once

#ifndef JAVA_NIO_FILE_DIRECTORYITERATOREXCEPTION
#define JAVA_NIO_FILE_DIRECTORYITERATOREXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../util/ConcurrentModificationException.hpp"

namespace __jni_impl::java::io
{
	class IOException;
}
namespace __jni_impl::java::io
{
	class ObjectInputStream;
}

namespace __jni_impl::java::nio::file
{
	class DirectoryIteratorException : public __jni_impl::java::util::ConcurrentModificationException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::io::IOException arg0);
		
		// Methods
		QAndroidJniObject getCause();
	};
} // namespace __jni_impl::java::nio::file

#include "../../io/IOException.hpp"
#include "../../io/ObjectInputStream.hpp"

namespace __jni_impl::java::nio::file
{
	// Fields
	
	// Constructors
	void DirectoryIteratorException::__constructor(__jni_impl::java::io::IOException arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.DirectoryIteratorException",
			"(Ljava/io/IOException;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject DirectoryIteratorException::getCause()
	{
		return __thiz.callObjectMethod(
			"getCause",
			"()Ljava/io/IOException;");
	}
} // namespace __jni_impl::java::nio::file

namespace java::nio::file
{
	class DirectoryIteratorException : public __jni_impl::java::nio::file::DirectoryIteratorException
	{
	public:
		DirectoryIteratorException(QAndroidJniObject obj) { __thiz = obj; }
		DirectoryIteratorException(__jni_impl::java::io::IOException arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::nio::file

#endif // JAVA_NIO_FILE_DIRECTORYITERATOREXCEPTION

