#pragma once

#ifndef JAVA_UTIL_CONCURRENT_CYCLICBARRIER
#define JAVA_UTIL_CONCURRENT_CYCLICBARRIER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::util::concurrent::locks
{
	class ReentrantLock;
}
namespace __jni_impl::java::util::concurrent
{
	class TimeUnit;
}

namespace __jni_impl::java::util::concurrent
{
	class CyclicBarrier : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0);
		void __constructor(jint arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
		void reset();
		jint await();
		jint await(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1);
		jint getParties();
		jboolean isBroken();
		jint getNumberWaiting();
	};
} // namespace __jni_impl::java::util::concurrent

#include "locks/ReentrantLock.hpp"
#include "TimeUnit.hpp"

namespace __jni_impl::java::util::concurrent
{
	// Fields
	
	// Constructors
	void CyclicBarrier::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.CyclicBarrier",
			"(I)V",
			arg0);
	}
	void CyclicBarrier::__constructor(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.CyclicBarrier",
			"(ILjava/lang/Runnable;)V",
			arg0,
			arg1.__jniObject().object());
	}
	
	// Methods
	void CyclicBarrier::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	jint CyclicBarrier::await()
	{
		return __thiz.callMethod<jint>(
			"await",
			"()I"
		);
	}
	jint CyclicBarrier::await(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1)
	{
		return __thiz.callMethod<jint>(
			"await",
			"(JLjava/util/concurrent/TimeUnit;)I",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jint CyclicBarrier::getParties()
	{
		return __thiz.callMethod<jint>(
			"getParties",
			"()I"
		);
	}
	jboolean CyclicBarrier::isBroken()
	{
		return __thiz.callMethod<jboolean>(
			"isBroken",
			"()Z"
		);
	}
	jint CyclicBarrier::getNumberWaiting()
	{
		return __thiz.callMethod<jint>(
			"getNumberWaiting",
			"()I"
		);
	}
} // namespace __jni_impl::java::util::concurrent

namespace java::util::concurrent
{
	class CyclicBarrier : public __jni_impl::java::util::concurrent::CyclicBarrier
	{
	public:
		CyclicBarrier(QAndroidJniObject obj) { __thiz = obj; }
		CyclicBarrier(jint arg0)
		{
			__constructor(
				arg0);
		}
		CyclicBarrier(jint arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::util::concurrent

#endif // JAVA_UTIL_CONCURRENT_CYCLICBARRIER

