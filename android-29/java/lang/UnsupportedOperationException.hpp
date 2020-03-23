#pragma once

#ifndef JAVA_LANG_UNSUPPORTEDOPERATIONEXCEPTION
#define JAVA_LANG_UNSUPPORTEDOPERATIONEXCEPTION

#include "RuntimeException.hpp"


namespace __jni_impl::java::lang
{
	class UnsupportedOperationException : public __jni_impl::java::lang::RuntimeException
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
	void UnsupportedOperationException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.UnsupportedOperationException",
			"(Ljava/lang/Throwable;)V",
			arg0);
	}
	void UnsupportedOperationException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.UnsupportedOperationException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1);
	}
	void UnsupportedOperationException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.UnsupportedOperationException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void UnsupportedOperationException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.UnsupportedOperationException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class UnsupportedOperationException : public __jni_impl::java::lang::UnsupportedOperationException
	{
	public:
		UnsupportedOperationException(QAndroidJniObject obj) { __thiz = obj; }
		UnsupportedOperationException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		UnsupportedOperationException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		UnsupportedOperationException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		UnsupportedOperationException()
		{
			__constructor();
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_UNSUPPORTEDOPERATIONEXCEPTION

