#include "./TimeUnit.hpp"
#include "./locks/ReentrantLock.hpp"
#include "./CyclicBarrier.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QJniObject forward
	CyclicBarrier::CyclicBarrier(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	CyclicBarrier::CyclicBarrier(jint arg0)
		: __JniBaseClass(
			"java.util.concurrent.CyclicBarrier",
			"(I)V",
			arg0
		) {}
	CyclicBarrier::CyclicBarrier(jint arg0, __JniBaseClass arg1)
		: __JniBaseClass(
			"java.util.concurrent.CyclicBarrier",
			"(ILjava/lang/Runnable;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	jint CyclicBarrier::await()
	{
		return callMethod<jint>(
			"await",
			"()I"
		);
	}
	jint CyclicBarrier::await(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return callMethod<jint>(
			"await",
			"(JLjava/util/concurrent/TimeUnit;)I",
			arg0,
			arg1.object()
		);
	}
	jint CyclicBarrier::getNumberWaiting()
	{
		return callMethod<jint>(
			"getNumberWaiting",
			"()I"
		);
	}
	jint CyclicBarrier::getParties()
	{
		return callMethod<jint>(
			"getParties",
			"()I"
		);
	}
	jboolean CyclicBarrier::isBroken()
	{
		return callMethod<jboolean>(
			"isBroken",
			"()Z"
		);
	}
	void CyclicBarrier::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
} // namespace java::util::concurrent

