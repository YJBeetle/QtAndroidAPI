#include "./TimeUnit.hpp"
#include "./atomic/AtomicReference.hpp"
#include "./Phaser.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QJniObject forward
	Phaser::Phaser(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Phaser::Phaser()
		: __JniBaseClass(
			"java.util.concurrent.Phaser",
			"()V"
		) {}
	Phaser::Phaser(jint arg0)
		: __JniBaseClass(
			"java.util.concurrent.Phaser",
			"(I)V",
			arg0
		) {}
	Phaser::Phaser(java::util::concurrent::Phaser &arg0)
		: __JniBaseClass(
			"java.util.concurrent.Phaser",
			"(Ljava/util/concurrent/Phaser;)V",
			arg0.object()
		) {}
	Phaser::Phaser(java::util::concurrent::Phaser &arg0, jint arg1)
		: __JniBaseClass(
			"java.util.concurrent.Phaser",
			"(Ljava/util/concurrent/Phaser;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	jint Phaser::arrive()
	{
		return callMethod<jint>(
			"arrive",
			"()I"
		);
	}
	jint Phaser::arriveAndAwaitAdvance()
	{
		return callMethod<jint>(
			"arriveAndAwaitAdvance",
			"()I"
		);
	}
	jint Phaser::arriveAndDeregister()
	{
		return callMethod<jint>(
			"arriveAndDeregister",
			"()I"
		);
	}
	jint Phaser::awaitAdvance(jint arg0)
	{
		return callMethod<jint>(
			"awaitAdvance",
			"(I)I",
			arg0
		);
	}
	jint Phaser::awaitAdvanceInterruptibly(jint arg0)
	{
		return callMethod<jint>(
			"awaitAdvanceInterruptibly",
			"(I)I",
			arg0
		);
	}
	jint Phaser::awaitAdvanceInterruptibly(jint arg0, jlong arg1, java::util::concurrent::TimeUnit arg2)
	{
		return callMethod<jint>(
			"awaitAdvanceInterruptibly",
			"(IJLjava/util/concurrent/TimeUnit;)I",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jint Phaser::bulkRegister(jint arg0)
	{
		return callMethod<jint>(
			"bulkRegister",
			"(I)I",
			arg0
		);
	}
	void Phaser::forceTermination()
	{
		callMethod<void>(
			"forceTermination",
			"()V"
		);
	}
	jint Phaser::getArrivedParties()
	{
		return callMethod<jint>(
			"getArrivedParties",
			"()I"
		);
	}
	java::util::concurrent::Phaser Phaser::getParent()
	{
		return callObjectMethod(
			"getParent",
			"()Ljava/util/concurrent/Phaser;"
		);
	}
	jint Phaser::getPhase()
	{
		return callMethod<jint>(
			"getPhase",
			"()I"
		);
	}
	jint Phaser::getRegisteredParties()
	{
		return callMethod<jint>(
			"getRegisteredParties",
			"()I"
		);
	}
	java::util::concurrent::Phaser Phaser::getRoot()
	{
		return callObjectMethod(
			"getRoot",
			"()Ljava/util/concurrent/Phaser;"
		);
	}
	jint Phaser::getUnarrivedParties()
	{
		return callMethod<jint>(
			"getUnarrivedParties",
			"()I"
		);
	}
	jboolean Phaser::isTerminated()
	{
		return callMethod<jboolean>(
			"isTerminated",
			"()Z"
		);
	}
	jint Phaser::_register()
	{
		return callMethod<jint>(
			"register",
			"()I"
		);
	}
	jstring Phaser::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util::concurrent

