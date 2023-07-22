#pragma once

#include "../../../JString.hpp"
#include "../../lang/invoke/VarHandle.def.hpp"
#include "./TimeUnit.def.hpp"
#include "./atomic/AtomicReference.def.hpp"
#include "./Phaser.def.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// Constructors
	inline Phaser::Phaser()
		: JObject(
			"java.util.concurrent.Phaser",
			"()V"
		) {}
	inline Phaser::Phaser(jint arg0)
		: JObject(
			"java.util.concurrent.Phaser",
			"(I)V",
			arg0
		) {}
	inline Phaser::Phaser(java::util::concurrent::Phaser &arg0)
		: JObject(
			"java.util.concurrent.Phaser",
			"(Ljava/util/concurrent/Phaser;)V",
			arg0.object()
		) {}
	inline Phaser::Phaser(java::util::concurrent::Phaser &arg0, jint arg1)
		: JObject(
			"java.util.concurrent.Phaser",
			"(Ljava/util/concurrent/Phaser;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	inline jint Phaser::arrive() const
	{
		return callMethod<jint>(
			"arrive",
			"()I"
		);
	}
	inline jint Phaser::arriveAndAwaitAdvance() const
	{
		return callMethod<jint>(
			"arriveAndAwaitAdvance",
			"()I"
		);
	}
	inline jint Phaser::arriveAndDeregister() const
	{
		return callMethod<jint>(
			"arriveAndDeregister",
			"()I"
		);
	}
	inline jint Phaser::awaitAdvance(jint arg0) const
	{
		return callMethod<jint>(
			"awaitAdvance",
			"(I)I",
			arg0
		);
	}
	inline jint Phaser::awaitAdvanceInterruptibly(jint arg0) const
	{
		return callMethod<jint>(
			"awaitAdvanceInterruptibly",
			"(I)I",
			arg0
		);
	}
	inline jint Phaser::awaitAdvanceInterruptibly(jint arg0, jlong arg1, java::util::concurrent::TimeUnit arg2) const
	{
		return callMethod<jint>(
			"awaitAdvanceInterruptibly",
			"(IJLjava/util/concurrent/TimeUnit;)I",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline jint Phaser::bulkRegister(jint arg0) const
	{
		return callMethod<jint>(
			"bulkRegister",
			"(I)I",
			arg0
		);
	}
	inline void Phaser::forceTermination() const
	{
		callMethod<void>(
			"forceTermination",
			"()V"
		);
	}
	inline jint Phaser::getArrivedParties() const
	{
		return callMethod<jint>(
			"getArrivedParties",
			"()I"
		);
	}
	inline java::util::concurrent::Phaser Phaser::getParent() const
	{
		return callObjectMethod(
			"getParent",
			"()Ljava/util/concurrent/Phaser;"
		);
	}
	inline jint Phaser::getPhase() const
	{
		return callMethod<jint>(
			"getPhase",
			"()I"
		);
	}
	inline jint Phaser::getRegisteredParties() const
	{
		return callMethod<jint>(
			"getRegisteredParties",
			"()I"
		);
	}
	inline java::util::concurrent::Phaser Phaser::getRoot() const
	{
		return callObjectMethod(
			"getRoot",
			"()Ljava/util/concurrent/Phaser;"
		);
	}
	inline jint Phaser::getUnarrivedParties() const
	{
		return callMethod<jint>(
			"getUnarrivedParties",
			"()I"
		);
	}
	inline jboolean Phaser::isTerminated() const
	{
		return callMethod<jboolean>(
			"isTerminated",
			"()Z"
		);
	}
	inline jint Phaser::register_() const
	{
		return callMethod<jint>(
			"register",
			"()I"
		);
	}
	inline JString Phaser::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util::concurrent

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::concurrent;
#endif
