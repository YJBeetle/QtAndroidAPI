#pragma once

#ifndef JAVA_LANG_SECURITYEXCEPTION
#define JAVA_LANG_SECURITYEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "Exception.hpp"
#include "RuntimeException.hpp"


namespace __jni_impl::java::lang
{
	class SecurityException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jthrowable arg0);
		void __constructor(jstring arg0, jthrowable arg1);
		void __constructor(const QString &arg0, jthrowable arg1);
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::java::lang


namespace __jni_impl::java::lang
{
	// Fields
	
	// Constructors
	void SecurityException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.SecurityException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	void SecurityException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.SecurityException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	void SecurityException::__constructor(const QString &arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.SecurityException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void SecurityException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.SecurityException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SecurityException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.SecurityException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void SecurityException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.SecurityException",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class SecurityException : public __jni_impl::java::lang::SecurityException
	{
	public:
		SecurityException(QAndroidJniObject obj) { __thiz = obj; }
		SecurityException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		SecurityException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		SecurityException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		SecurityException()
		{
			__constructor();
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_SECURITYEXCEPTION

