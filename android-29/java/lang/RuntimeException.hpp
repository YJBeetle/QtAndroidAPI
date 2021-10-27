#pragma once

#ifndef JAVA_LANG_RUNTIMEEXCEPTION
#define JAVA_LANG_RUNTIMEEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "Exception.hpp"


namespace __jni_impl::java::lang
{
	class RuntimeException : public __jni_impl::java::lang::Exception
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jthrowable arg0);
		void __constructor(jstring arg0, jthrowable arg1);
		void __constructor(const QString &arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace __jni_impl::java::lang


namespace __jni_impl::java::lang
{
	// Fields
	
	// Constructors
	void RuntimeException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.RuntimeException",
			"()V"
		);
	}
	void RuntimeException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.RuntimeException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void RuntimeException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.RuntimeException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void RuntimeException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.RuntimeException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	void RuntimeException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.RuntimeException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	void RuntimeException::__constructor(const QString &arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.RuntimeException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class RuntimeException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		RuntimeException(QAndroidJniObject obj) { __thiz = obj; }
		RuntimeException()
		{
			__constructor();
		}
		RuntimeException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		RuntimeException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		RuntimeException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_RUNTIMEEXCEPTION

