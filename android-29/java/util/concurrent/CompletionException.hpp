#pragma once

#ifndef JAVA_UTIL_CONCURRENT_COMPLETIONEXCEPTION
#define JAVA_UTIL_CONCURRENT_COMPLETIONEXCEPTION

#include "../../lang/RuntimeException.hpp"


namespace __jni_impl::java::util::concurrent
{
	class CompletionException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jthrowable arg0);
		void __constructor(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace __jni_impl::java::util::concurrent


namespace __jni_impl::java::util::concurrent
{
	// Fields
	
	// Constructors
	void CompletionException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.CompletionException",
			"(Ljava/lang/Throwable;)V",
			arg0);
	}
	void CompletionException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.CompletionException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1);
	}
	
	// Methods
} // namespace __jni_impl::java::util::concurrent

namespace java::util::concurrent
{
	class CompletionException : public __jni_impl::java::util::concurrent::CompletionException
	{
	public:
		CompletionException(QAndroidJniObject obj) { __thiz = obj; }
		CompletionException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		CompletionException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::util::concurrent

#endif // JAVA_UTIL_CONCURRENT_COMPLETIONEXCEPTION

