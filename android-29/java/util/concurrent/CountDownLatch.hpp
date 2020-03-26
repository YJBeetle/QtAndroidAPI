#pragma once

#ifndef JAVA_UTIL_CONCURRENT_COUNTDOWNLATCH
#define JAVA_UTIL_CONCURRENT_COUNTDOWNLATCH

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::util::concurrent
{
	class TimeUnit;
}

namespace __jni_impl::java::util::concurrent
{
	class CountDownLatch : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0);
		
		// Methods
		jstring toString();
		jlong getCount();
		void countDown();
		void await();
		jboolean await(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1);
	};
} // namespace __jni_impl::java::util::concurrent

#include "TimeUnit.hpp"

namespace __jni_impl::java::util::concurrent
{
	// Fields
	
	// Constructors
	void CountDownLatch::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.CountDownLatch",
			"(I)V",
			arg0);
	}
	
	// Methods
	jstring CountDownLatch::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong CountDownLatch::getCount()
	{
		return __thiz.callMethod<jlong>(
			"getCount",
			"()J"
		);
	}
	void CountDownLatch::countDown()
	{
		__thiz.callMethod<void>(
			"countDown",
			"()V"
		);
	}
	void CountDownLatch::await()
	{
		__thiz.callMethod<void>(
			"await",
			"()V"
		);
	}
	jboolean CountDownLatch::await(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1)
	{
		return __thiz.callMethod<jboolean>(
			"await",
			"(JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::util::concurrent

namespace java::util::concurrent
{
	class CountDownLatch : public __jni_impl::java::util::concurrent::CountDownLatch
	{
	public:
		CountDownLatch(QAndroidJniObject obj) { __thiz = obj; }
		CountDownLatch(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util::concurrent

#endif // JAVA_UTIL_CONCURRENT_COUNTDOWNLATCH

