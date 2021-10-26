#pragma once

#ifndef JAVA_LANG_EXCEPTIONININITIALIZERERROR
#define JAVA_LANG_EXCEPTIONININITIALIZERERROR

#include "../../__JniBaseClass.hpp"
#include "Error.hpp"
#include "LinkageError.hpp"

namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::io
{
	class ObjectOutputStream;
}

namespace __jni_impl::java::lang
{
	class ExceptionInInitializerError : public __jni_impl::java::lang::LinkageError
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jthrowable arg0);
		void __constructor();
		
		// Methods
		jthrowable getException();
	};
} // namespace __jni_impl::java::lang

#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"

namespace __jni_impl::java::lang
{
	// Fields
	
	// Constructors
	void ExceptionInInitializerError::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ExceptionInInitializerError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ExceptionInInitializerError::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ExceptionInInitializerError",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void ExceptionInInitializerError::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ExceptionInInitializerError",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	void ExceptionInInitializerError::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.ExceptionInInitializerError",
			"()V"
		);
	}
	
	// Methods
	jthrowable ExceptionInInitializerError::getException()
	{
		return __thiz.callObjectMethod(
			"getException",
			"()Ljava/lang/Throwable;"
		).object<jthrowable>();
	}
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class ExceptionInInitializerError : public __jni_impl::java::lang::ExceptionInInitializerError
	{
	public:
		ExceptionInInitializerError(QAndroidJniObject obj) { __thiz = obj; }
		ExceptionInInitializerError(jstring arg0)
		{
			__constructor(
				arg0);
		}
		ExceptionInInitializerError(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		ExceptionInInitializerError()
		{
			__constructor();
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_EXCEPTIONININITIALIZERERROR

