#pragma once

#ifndef JAVA_UTIL_CONCURRENT_BROKENBARRIEREXCEPTION
#define JAVA_UTIL_CONCURRENT_BROKENBARRIEREXCEPTION

#include "../../lang/Exception.hpp"


namespace __jni_impl::java::util::concurrent
{
	class BrokenBarrierException : public __jni_impl::java::lang::Exception
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		
		// Methods
	};
} // namespace __jni_impl::java::util::concurrent


namespace __jni_impl::java::util::concurrent
{
	// Fields
	
	// Constructors
	void BrokenBarrierException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.BrokenBarrierException",
			"()V");
	}
	void BrokenBarrierException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.BrokenBarrierException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::java::util::concurrent

namespace java::util::concurrent
{
	class BrokenBarrierException : public __jni_impl::java::util::concurrent::BrokenBarrierException
	{
	public:
		BrokenBarrierException(QAndroidJniObject obj) { __thiz = obj; }
		BrokenBarrierException()
		{
			__constructor();
		}
		BrokenBarrierException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util::concurrent

#endif // JAVA_UTIL_CONCURRENT_BROKENBARRIEREXCEPTION

