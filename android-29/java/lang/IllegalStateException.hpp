#pragma once

#ifndef JAVA_LANG_ILLEGALSTATEEXCEPTION
#define JAVA_LANG_ILLEGALSTATEEXCEPTION

#include "RuntimeException.hpp"


namespace __jni_impl::java::lang
{
	class IllegalStateException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jthrowable arg0);
		void __constructor(jstring arg0, jthrowable arg1);
		void __constructor(jstring arg0);
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::java::lang


namespace __jni_impl::java::lang
{
	// Fields
	
	// Constructors
	void IllegalStateException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.IllegalStateException",
			"(Ljava/lang/Throwable;)V",
			arg0);
	}
	void IllegalStateException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.IllegalStateException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1);
	}
	void IllegalStateException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.IllegalStateException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void IllegalStateException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.IllegalStateException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class IllegalStateException : public __jni_impl::java::lang::IllegalStateException
	{
	public:
		IllegalStateException(QAndroidJniObject obj) { __thiz = obj; }
		IllegalStateException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		IllegalStateException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		IllegalStateException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		IllegalStateException()
		{
			__constructor();
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_ILLEGALSTATEEXCEPTION

