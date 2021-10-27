#include "./TimeUnit.hpp"
#include "./atomic/AtomicReference.hpp"
#include "./Phaser.hpp"

namespace java::util::concurrent
{
	// Fields
	
	Phaser::Phaser(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Phaser::Phaser()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.Phaser",
			"()V"
		);
	}
	Phaser::Phaser(jint &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.Phaser",
			"(I)V",
			arg0
		);
	}
	Phaser::Phaser(java::util::concurrent::Phaser &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.Phaser",
			"(Ljava/util/concurrent/Phaser;)V",
			arg0.__jniObject().object()
		);
	}
	Phaser::Phaser(java::util::concurrent::Phaser &arg0, jint &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.Phaser",
			"(Ljava/util/concurrent/Phaser;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	jint Phaser::arrive()
	{
		return __thiz.callMethod<jint>(
			"arrive",
			"()I"
		);
	}
	jint Phaser::arriveAndAwaitAdvance()
	{
		return __thiz.callMethod<jint>(
			"arriveAndAwaitAdvance",
			"()I"
		);
	}
	jint Phaser::arriveAndDeregister()
	{
		return __thiz.callMethod<jint>(
			"arriveAndDeregister",
			"()I"
		);
	}
	jint Phaser::awaitAdvance(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"awaitAdvance",
			"(I)I",
			arg0
		);
	}
	jint Phaser::awaitAdvanceInterruptibly(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"awaitAdvanceInterruptibly",
			"(I)I",
			arg0
		);
	}
	jint Phaser::awaitAdvanceInterruptibly(jint arg0, jlong arg1, java::util::concurrent::TimeUnit arg2)
	{
		return __thiz.callMethod<jint>(
			"awaitAdvanceInterruptibly",
			"(IJLjava/util/concurrent/TimeUnit;)I",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jint Phaser::bulkRegister(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"bulkRegister",
			"(I)I",
			arg0
		);
	}
	void Phaser::forceTermination()
	{
		__thiz.callMethod<void>(
			"forceTermination",
			"()V"
		);
	}
	jint Phaser::getArrivedParties()
	{
		return __thiz.callMethod<jint>(
			"getArrivedParties",
			"()I"
		);
	}
	QAndroidJniObject Phaser::getParent()
	{
		return __thiz.callObjectMethod(
			"getParent",
			"()Ljava/util/concurrent/Phaser;"
		);
	}
	jint Phaser::getPhase()
	{
		return __thiz.callMethod<jint>(
			"getPhase",
			"()I"
		);
	}
	jint Phaser::getRegisteredParties()
	{
		return __thiz.callMethod<jint>(
			"getRegisteredParties",
			"()I"
		);
	}
	QAndroidJniObject Phaser::getRoot()
	{
		return __thiz.callObjectMethod(
			"getRoot",
			"()Ljava/util/concurrent/Phaser;"
		);
	}
	jint Phaser::getUnarrivedParties()
	{
		return __thiz.callMethod<jint>(
			"getUnarrivedParties",
			"()I"
		);
	}
	jboolean Phaser::isTerminated()
	{
		return __thiz.callMethod<jboolean>(
			"isTerminated",
			"()Z"
		);
	}
	jint Phaser::_register()
	{
		return __thiz.callMethod<jint>(
			"register",
			"()I"
		);
	}
	jstring Phaser::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util::concurrent

