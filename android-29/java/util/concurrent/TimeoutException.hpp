#pragma once

#ifndef JAVA_UTIL_CONCURRENT_TIMEOUTEXCEPTION
#define JAVA_UTIL_CONCURRENT_TIMEOUTEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"


namespace __jni_impl::java::util::concurrent
{
	class TimeoutException : public __jni_impl::java::lang::Exception
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
	};
} // namespace __jni_impl::java::util::concurrent


namespace __jni_impl::java::util::concurrent
{
	// Fields
	
	// Constructors
	void TimeoutException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.TimeoutException",
			"()V"
		);
	}
	void TimeoutException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.TimeoutException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void TimeoutException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.TimeoutException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::java::util::concurrent

namespace java::util::concurrent
{
	class TimeoutException : public __jni_impl::java::util::concurrent::TimeoutException
	{
	public:
		TimeoutException(QAndroidJniObject obj) { __thiz = obj; }
		TimeoutException()
		{
			__constructor();
		}
		TimeoutException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util::concurrent

#endif // JAVA_UTIL_CONCURRENT_TIMEOUTEXCEPTION

