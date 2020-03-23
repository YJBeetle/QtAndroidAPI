#pragma once

#ifndef JAVA_UTIL_CONCURRENT_SEMAPHORE
#define JAVA_UTIL_CONCURRENT_SEMAPHORE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::util::concurrent
{
	class TimeUnit;
}

namespace __jni_impl::java::util::concurrent
{
	class Semaphore : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0);
		void __constructor(jint arg0, jboolean arg1);
		
		// Methods
		QAndroidJniObject toString();
		void release();
		void release(jint arg0);
		void acquire();
		void acquire(jint arg0);
		jboolean hasQueuedThreads();
		jint getQueueLength();
		jboolean isFair();
		jboolean tryAcquire(jint arg0, jlong arg1, __jni_impl::java::util::concurrent::TimeUnit arg2);
		jboolean tryAcquire(jint arg0);
		jboolean tryAcquire(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1);
		jboolean tryAcquire();
		jint drainPermits();
		void acquireUninterruptibly();
		void acquireUninterruptibly(jint arg0);
		jint availablePermits();
	};
} // namespace __jni_impl::java::util::concurrent

#include "TimeUnit.hpp"

namespace __jni_impl::java::util::concurrent
{
	// Fields
	
	// Constructors
	void Semaphore::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.Semaphore",
			"(I)V",
			arg0);
	}
	void Semaphore::__constructor(jint arg0, jboolean arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.Semaphore",
			"(IZ)V",
			arg0,
			arg1);
	}
	
	// Methods
	QAndroidJniObject Semaphore::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	void Semaphore::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V");
	}
	void Semaphore::release(jint arg0)
	{
		__thiz.callMethod<void>(
			"release",
			"(I)V",
			arg0);
	}
	void Semaphore::acquire()
	{
		__thiz.callMethod<void>(
			"acquire",
			"()V");
	}
	void Semaphore::acquire(jint arg0)
	{
		__thiz.callMethod<void>(
			"acquire",
			"(I)V",
			arg0);
	}
	jboolean Semaphore::hasQueuedThreads()
	{
		return __thiz.callMethod<jboolean>(
			"hasQueuedThreads",
			"()Z");
	}
	jint Semaphore::getQueueLength()
	{
		return __thiz.callMethod<jint>(
			"getQueueLength",
			"()I");
	}
	jboolean Semaphore::isFair()
	{
		return __thiz.callMethod<jboolean>(
			"isFair",
			"()Z");
	}
	jboolean Semaphore::tryAcquire(jint arg0, jlong arg1, __jni_impl::java::util::concurrent::TimeUnit arg2)
	{
		return __thiz.callMethod<jboolean>(
			"tryAcquire",
			"(IJLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	jboolean Semaphore::tryAcquire(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"tryAcquire",
			"(I)Z",
			arg0);
	}
	jboolean Semaphore::tryAcquire(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1)
	{
		return __thiz.callMethod<jboolean>(
			"tryAcquire",
			"(JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1.__jniObject().object());
	}
	jboolean Semaphore::tryAcquire()
	{
		return __thiz.callMethod<jboolean>(
			"tryAcquire",
			"()Z");
	}
	jint Semaphore::drainPermits()
	{
		return __thiz.callMethod<jint>(
			"drainPermits",
			"()I");
	}
	void Semaphore::acquireUninterruptibly()
	{
		__thiz.callMethod<void>(
			"acquireUninterruptibly",
			"()V");
	}
	void Semaphore::acquireUninterruptibly(jint arg0)
	{
		__thiz.callMethod<void>(
			"acquireUninterruptibly",
			"(I)V",
			arg0);
	}
	jint Semaphore::availablePermits()
	{
		return __thiz.callMethod<jint>(
			"availablePermits",
			"()I");
	}
} // namespace __jni_impl::java::util::concurrent

namespace java::util::concurrent
{
	class Semaphore : public __jni_impl::java::util::concurrent::Semaphore
	{
	public:
		Semaphore(QAndroidJniObject obj) { __thiz = obj; }
		Semaphore(jint arg0)
		{
			__constructor(
				arg0);
		}
		Semaphore(jint arg0, jboolean arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::util::concurrent

#endif // JAVA_UTIL_CONCURRENT_SEMAPHORE

