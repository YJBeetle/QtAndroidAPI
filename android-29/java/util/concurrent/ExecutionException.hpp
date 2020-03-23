#pragma once

#ifndef JAVA_UTIL_CONCURRENT_EXECUTIONEXCEPTION
#define JAVA_UTIL_CONCURRENT_EXECUTIONEXCEPTION

#include "../../lang/Exception.hpp"


namespace __jni_impl::java::util::concurrent
{
	class ExecutionException : public __jni_impl::java::lang::Exception
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
	void ExecutionException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ExecutionException",
			"(Ljava/lang/Throwable;)V",
			arg0);
	}
	void ExecutionException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ExecutionException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1);
	}
	
	// Methods
} // namespace __jni_impl::java::util::concurrent

namespace java::util::concurrent
{
	class ExecutionException : public __jni_impl::java::util::concurrent::ExecutionException
	{
	public:
		ExecutionException(QAndroidJniObject obj) { __thiz = obj; }
		ExecutionException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		ExecutionException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::util::concurrent

#endif // JAVA_UTIL_CONCURRENT_EXECUTIONEXCEPTION

