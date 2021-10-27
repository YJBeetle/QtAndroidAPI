#pragma once

#include "../../__JniBaseClass.hpp"
#include "Exception.hpp"
#include "RuntimeException.hpp"


namespace __jni_impl::java::lang
{
	class NullPointerException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
		jthrowable fillInStackTrace();
		jstring getMessage();
	};
} // namespace __jni_impl::java::lang


namespace __jni_impl::java::lang
{
	// Fields
	
	// Constructors
	void NullPointerException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.NullPointerException",
			"()V"
		);
	}
	void NullPointerException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.NullPointerException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void NullPointerException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.NullPointerException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	jthrowable NullPointerException::fillInStackTrace()
	{
		return __thiz.callObjectMethod(
			"fillInStackTrace",
			"()Ljava/lang/Throwable;"
		).object<jthrowable>();
	}
	jstring NullPointerException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class NullPointerException : public __jni_impl::java::lang::NullPointerException
	{
	public:
		NullPointerException(QAndroidJniObject obj) { __thiz = obj; }
		NullPointerException()
		{
			__constructor();
		}
		NullPointerException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::lang

