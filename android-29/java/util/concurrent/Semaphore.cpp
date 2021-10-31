#include "./TimeUnit.hpp"
#include "./Semaphore.hpp"

namespace java::util::concurrent
{
	// Fields
	
	Semaphore::Semaphore(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Semaphore::Semaphore(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.Semaphore",
			"(I)V",
			arg0
		);
	}
	Semaphore::Semaphore(jint arg0, jboolean arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.Semaphore",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	void Semaphore::acquire()
	{
		__thiz.callMethod<void>(
			"acquire",
			"()V"
		);
	}
	void Semaphore::acquire(jint arg0)
	{
		__thiz.callMethod<void>(
			"acquire",
			"(I)V",
			arg0
		);
	}
	void Semaphore::acquireUninterruptibly()
	{
		__thiz.callMethod<void>(
			"acquireUninterruptibly",
			"()V"
		);
	}
	void Semaphore::acquireUninterruptibly(jint arg0)
	{
		__thiz.callMethod<void>(
			"acquireUninterruptibly",
			"(I)V",
			arg0
		);
	}
	jint Semaphore::availablePermits()
	{
		return __thiz.callMethod<jint>(
			"availablePermits",
			"()I"
		);
	}
	jint Semaphore::drainPermits()
	{
		return __thiz.callMethod<jint>(
			"drainPermits",
			"()I"
		);
	}
	jint Semaphore::getQueueLength()
	{
		return __thiz.callMethod<jint>(
			"getQueueLength",
			"()I"
		);
	}
	jboolean Semaphore::hasQueuedThreads()
	{
		return __thiz.callMethod<jboolean>(
			"hasQueuedThreads",
			"()Z"
		);
	}
	jboolean Semaphore::isFair()
	{
		return __thiz.callMethod<jboolean>(
			"isFair",
			"()Z"
		);
	}
	void Semaphore::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V"
		);
	}
	void Semaphore::release(jint arg0)
	{
		__thiz.callMethod<void>(
			"release",
			"(I)V",
			arg0
		);
	}
	jstring Semaphore::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean Semaphore::tryAcquire()
	{
		return __thiz.callMethod<jboolean>(
			"tryAcquire",
			"()Z"
		);
	}
	jboolean Semaphore::tryAcquire(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"tryAcquire",
			"(I)Z",
			arg0
		);
	}
	jboolean Semaphore::tryAcquire(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return __thiz.callMethod<jboolean>(
			"tryAcquire",
			"(JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean Semaphore::tryAcquire(jint arg0, jlong arg1, java::util::concurrent::TimeUnit arg2)
	{
		return __thiz.callMethod<jboolean>(
			"tryAcquire",
			"(IJLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
} // namespace java::util::concurrent

