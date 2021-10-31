#include "./TimeUnit.hpp"
#include "./locks/ReentrantLock.hpp"
#include "./CyclicBarrier.hpp"

namespace java::util::concurrent
{
	// Fields
	
	CyclicBarrier::CyclicBarrier(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CyclicBarrier::CyclicBarrier(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.CyclicBarrier",
			"(I)V",
			arg0
		);
	}
	CyclicBarrier::CyclicBarrier(jint arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.CyclicBarrier",
			"(ILjava/lang/Runnable;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jint CyclicBarrier::await()
	{
		return __thiz.callMethod<jint>(
			"await",
			"()I"
		);
	}
	jint CyclicBarrier::await(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return __thiz.callMethod<jint>(
			"await",
			"(JLjava/util/concurrent/TimeUnit;)I",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jint CyclicBarrier::getNumberWaiting()
	{
		return __thiz.callMethod<jint>(
			"getNumberWaiting",
			"()I"
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
	void CyclicBarrier::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
} // namespace java::util::concurrent

