#pragma once

#include "../../../../JObject.hpp"
#include "../../../lang/Thread.def.hpp"
#include "./LockSupport.def.hpp"

namespace java::util::concurrent::locks
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject LockSupport::getBlocker(java::lang::Thread arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.locks.LockSupport",
			"getBlocker",
			"(Ljava/lang/Thread;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	inline void LockSupport::park()
	{
		callStaticMethod<void>(
			"java.util.concurrent.locks.LockSupport",
			"park",
			"()V"
		);
	}
	inline void LockSupport::park(JObject arg0)
	{
		callStaticMethod<void>(
			"java.util.concurrent.locks.LockSupport",
			"park",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	inline void LockSupport::parkNanos(jlong arg0)
	{
		callStaticMethod<void>(
			"java.util.concurrent.locks.LockSupport",
			"parkNanos",
			"(J)V",
			arg0
		);
	}
	inline void LockSupport::parkNanos(JObject arg0, jlong arg1)
	{
		callStaticMethod<void>(
			"java.util.concurrent.locks.LockSupport",
			"parkNanos",
			"(Ljava/lang/Object;J)V",
			arg0.object<jobject>(),
			arg1
		);
	}
	inline void LockSupport::parkUntil(jlong arg0)
	{
		callStaticMethod<void>(
			"java.util.concurrent.locks.LockSupport",
			"parkUntil",
			"(J)V",
			arg0
		);
	}
	inline void LockSupport::parkUntil(JObject arg0, jlong arg1)
	{
		callStaticMethod<void>(
			"java.util.concurrent.locks.LockSupport",
			"parkUntil",
			"(Ljava/lang/Object;J)V",
			arg0.object<jobject>(),
			arg1
		);
	}
	inline void LockSupport::setCurrentBlocker(JObject arg0)
	{
		callStaticMethod<void>(
			"java.util.concurrent.locks.LockSupport",
			"setCurrentBlocker",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	inline void LockSupport::unpark(java::lang::Thread arg0)
	{
		callStaticMethod<void>(
			"java.util.concurrent.locks.LockSupport",
			"unpark",
			"(Ljava/lang/Thread;)V",
			arg0.object()
		);
	}
} // namespace java::util::concurrent::locks

// Base class headers

