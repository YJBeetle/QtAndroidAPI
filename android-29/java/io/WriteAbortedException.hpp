#pragma once

#ifndef JAVA_IO_WRITEABORTEDEXCEPTION
#define JAVA_IO_WRITEABORTEDEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "IOException.hpp"
#include "ObjectStreamException.hpp"

namespace __jni_impl::java::lang
{
	class Exception;
}

namespace __jni_impl::java::io
{
	class WriteAbortedException : public __jni_impl::java::io::ObjectStreamException
	{
	public:
		// Fields
		QAndroidJniObject detail();
		
		// Constructors
		void __constructor(jstring arg0, __jni_impl::java::lang::Exception arg1);
		
		// Methods
		QAndroidJniObject getCause();
		QAndroidJniObject getMessage();
	};
} // namespace __jni_impl::java::io

#include "../lang/Exception.hpp"

namespace __jni_impl::java::io
{
	// Fields
	QAndroidJniObject WriteAbortedException::detail()
	{
		return __thiz.getObjectField(
			"detail",
			"Ljava/lang/Exception;");
	}
	
	// Constructors
	void WriteAbortedException::__constructor(jstring arg0, __jni_impl::java::lang::Exception arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.WriteAbortedException",
			"(Ljava/lang/String;Ljava/lang/Exception;)V",
			arg0,
			arg1.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject WriteAbortedException::getCause()
	{
		return __thiz.callObjectMethod(
			"getCause",
			"()Ljava/lang/Throwable;");
	}
	QAndroidJniObject WriteAbortedException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;");
	}
} // namespace __jni_impl::java::io

namespace java::io
{
	class WriteAbortedException : public __jni_impl::java::io::WriteAbortedException
	{
	public:
		WriteAbortedException(QAndroidJniObject obj) { __thiz = obj; }
		WriteAbortedException(jstring arg0, __jni_impl::java::lang::Exception arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::io

#endif // JAVA_IO_WRITEABORTEDEXCEPTION

