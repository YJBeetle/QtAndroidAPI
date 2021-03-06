#pragma once

#ifndef JAVA_UTIL_CONCURRENT_REJECTEDEXECUTIONEXCEPTION
#define JAVA_UTIL_CONCURRENT_REJECTEDEXECUTIONEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"


namespace __jni_impl::java::util::concurrent
{
	class RejectedExecutionException : public __jni_impl::java::lang::RuntimeException
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
} // namespace __jni_impl::java::util::concurrent


namespace __jni_impl::java::util::concurrent
{
	// Fields
	
	// Constructors
	void RejectedExecutionException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.RejectedExecutionException",
			"(Ljava/lang/Throwable;)V",
			arg0);
	}
	void RejectedExecutionException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.RejectedExecutionException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1);
	}
	void RejectedExecutionException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.RejectedExecutionException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void RejectedExecutionException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.RejectedExecutionException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::java::util::concurrent

namespace java::util::concurrent
{
	class RejectedExecutionException : public __jni_impl::java::util::concurrent::RejectedExecutionException
	{
	public:
		RejectedExecutionException(QAndroidJniObject obj) { __thiz = obj; }
		RejectedExecutionException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		RejectedExecutionException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		RejectedExecutionException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		RejectedExecutionException()
		{
			__constructor();
		}
	};
} // namespace java::util::concurrent

#endif // JAVA_UTIL_CONCURRENT_REJECTEDEXECUTIONEXCEPTION

