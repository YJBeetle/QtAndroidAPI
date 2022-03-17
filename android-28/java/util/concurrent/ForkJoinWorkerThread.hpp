#pragma once

#include "../../lang/ClassLoader.def.hpp"
#include "../../lang/ThreadGroup.def.hpp"
#include "../../../JThrowable.hpp"
#include "../../security/AccessControlContext.def.hpp"
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
