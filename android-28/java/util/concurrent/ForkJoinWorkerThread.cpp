#include "../../lang/ClassLoader.hpp"
#include "../../lang/ThreadGroup.hpp"
#include "../../../JThrowable.hpp"
#include "../../security/AccessControlContext.hpp"
#include "./ForkJoinPool.hpp"
#include "./ForkJoinWorkerThread.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// Constructors
	
	// Methods
	java::util::concurrent::ForkJoinPool ForkJoinWorkerThread::getPool() const
	{
		return callObjectMethod(
			"getPool",
			"()Ljava/util/concurrent/ForkJoinPool;"
		);
	}
	jint ForkJoinWorkerThread::getPoolIndex() const
	{
		return callMethod<jint>(
			"getPoolIndex",
			"()I"
		);
	}
	void ForkJoinWorkerThread::run() const
	{
		callMethod<void>(
			"run",
			"()V"
		);
	}
} // namespace java::util::concurrent

