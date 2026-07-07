#pragma once

#include "../../lang/ThreadGroup.def.hpp"
#include "../../../JThrowable.hpp"
#include "./ForkJoinPool.def.hpp"
#include "./ForkJoinWorkerThread.def.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::util::concurrent::ForkJoinPool ForkJoinWorkerThread::getPool() const
	{
		return callObjectMethod(
			"getPool",
			"()Ljava/util/concurrent/ForkJoinPool;"
		);
	}
	inline jint ForkJoinWorkerThread::getPoolIndex() const
	{
		return callMethod<jint>(
			"getPoolIndex",
			"()I"
		);
	}
	inline jint ForkJoinWorkerThread::getQueuedTaskCount() const
	{
		return callMethod<jint>(
			"getQueuedTaskCount",
			"()I"
		);
	}
	inline void ForkJoinWorkerThread::run() const
	{
		callMethod<void>(
			"run",
			"()V"
		);
	}
} // namespace java::util::concurrent

// Base class headers
#include "../../lang/Thread.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::concurrent;
#endif
