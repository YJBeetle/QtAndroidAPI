#pragma once

#include "../../../JString.hpp"
#include "./TimeUnit.def.hpp"
#include "./CountDownLatch.def.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// Constructors
	inline CountDownLatch::CountDownLatch(jint arg0)
		: JObject(
			"java.util.concurrent.CountDownLatch",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline jboolean CountDownLatch::await(jlong arg0, java::util::concurrent::TimeUnit arg1) const
	{
		return callMethod<jboolean>(
			"await",
			"(JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1.object()
		);
	}
	inline void CountDownLatch::await() const
	{
		callMethod<void>(
			"await",
			"()V"
		);
	}
	inline void CountDownLatch::countDown() const
	{
		callMethod<void>(
			"countDown",
			"()V"
		);
	}
	inline jlong CountDownLatch::getCount() const
	{
		return callMethod<jlong>(
			"getCount",
			"()J"
		);
	}
	inline JString CountDownLatch::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util::concurrent

// Base class headers

