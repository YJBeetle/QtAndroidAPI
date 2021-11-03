#include "../../../JString.hpp"
#include "./TimeUnit.hpp"
#include "./Semaphore.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QAndroidJniObject forward
	Semaphore::Semaphore(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Semaphore::Semaphore(jint arg0)
		: JObject(
			"java.util.concurrent.Semaphore",
			"(I)V",
			arg0
		) {}
	Semaphore::Semaphore(jint arg0, jboolean arg1)
		: JObject(
			"java.util.concurrent.Semaphore",
			"(IZ)V",
			arg0,
			arg1
		) {}
	
	// Methods
	void Semaphore::acquire() const
	{
		callMethod<void>(
			"acquire",
			"()V"
		);
	}
	void Semaphore::acquire(jint arg0) const
	{
		callMethod<void>(
			"acquire",
			"(I)V",
			arg0
		);
	}
	void Semaphore::acquireUninterruptibly() const
	{
		callMethod<void>(
			"acquireUninterruptibly",
			"()V"
		);
	}
	void Semaphore::acquireUninterruptibly(jint arg0) const
	{
		callMethod<void>(
			"acquireUninterruptibly",
			"(I)V",
			arg0
		);
	}
	jint Semaphore::availablePermits() const
	{
		return callMethod<jint>(
			"availablePermits",
			"()I"
		);
	}
	jint Semaphore::drainPermits() const
	{
		return callMethod<jint>(
			"drainPermits",
			"()I"
		);
	}
	jint Semaphore::getQueueLength() const
	{
		return callMethod<jint>(
			"getQueueLength",
			"()I"
		);
	}
	jboolean Semaphore::hasQueuedThreads() const
	{
		return callMethod<jboolean>(
			"hasQueuedThreads",
			"()Z"
		);
	}
	jboolean Semaphore::isFair() const
	{
		return callMethod<jboolean>(
			"isFair",
			"()Z"
		);
	}
	void Semaphore::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	void Semaphore::release(jint arg0) const
	{
		callMethod<void>(
			"release",
			"(I)V",
			arg0
		);
	}
	JString Semaphore::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	jboolean Semaphore::tryAcquire() const
	{
		return callMethod<jboolean>(
			"tryAcquire",
			"()Z"
		);
	}
	jboolean Semaphore::tryAcquire(jint arg0) const
	{
		return callMethod<jboolean>(
			"tryAcquire",
			"(I)Z",
			arg0
		);
	}
	jboolean Semaphore::tryAcquire(jlong arg0, java::util::concurrent::TimeUnit arg1) const
	{
		return callMethod<jboolean>(
			"tryAcquire",
			"(JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean Semaphore::tryAcquire(jint arg0, jlong arg1, java::util::concurrent::TimeUnit arg2) const
	{
		return callMethod<jboolean>(
			"tryAcquire",
			"(IJLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1,
			arg2.object()
		);
	}
} // namespace java::util::concurrent

