#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./IOException.hpp"
#include "./ObjectStreamException.hpp"

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
		void __constructor(const QString &arg0, __jni_impl::java::lang::Exception arg1);
		
		// Methods
		jthrowable getCause();
		jstring getMessage();
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
			"Ljava/lang/Exception;"
		);
	}
	
	// Constructors
	void WriteAbortedException::__constructor(jstring arg0, __jni_impl::java::lang::Exception arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.WriteAbortedException",
			"(Ljava/lang/String;Ljava/lang/Exception;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void WriteAbortedException::__constructor(const QString &arg0, __jni_impl::java::lang::Exception arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.WriteAbortedException",
			"(Ljava/lang/String;Ljava/lang/Exception;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jthrowable WriteAbortedException::getCause()
	{
		return __thiz.callObjectMethod(
			"getCause",
			"()Ljava/lang/Throwable;"
		).object<jthrowable>();
	}
	jstring WriteAbortedException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
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

