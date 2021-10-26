#pragma once

#ifndef JAVA_LANG_ILLEGALARGUMENTEXCEPTION
#define JAVA_LANG_ILLEGALARGUMENTEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "Exception.hpp"
#include "RuntimeException.hpp"


namespace __jni_impl::java::lang
{
	class IllegalArgumentException : public __jni_impl::java::lang::RuntimeException
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
	void IllegalArgumentException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.IllegalArgumentException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	void IllegalArgumentException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.IllegalArgumentException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	void IllegalArgumentException::__constructor(const QString &arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.IllegalArgumentException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void IllegalArgumentException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.IllegalArgumentException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void IllegalArgumentException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.IllegalArgumentException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void IllegalArgumentException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.IllegalArgumentException",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class IllegalArgumentException : public __jni_impl::java::lang::IllegalArgumentException
	{
	public:
		IllegalArgumentException(QAndroidJniObject obj) { __thiz = obj; }
		IllegalArgumentException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		IllegalArgumentException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		IllegalArgumentException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		IllegalArgumentException()
		{
			__constructor();
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_ILLEGALARGUMENTEXCEPTION

