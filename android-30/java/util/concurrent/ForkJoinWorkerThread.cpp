#include "../../lang/ClassLoader.hpp"
#include "../../lang/ThreadGroup.hpp"
#include "../../security/AccessControlContext.hpp"
#include "./ForkJoinPool.hpp"
#include "./ForkJoinWorkerThread.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QJniObject forward
	ForkJoinWorkerThread::ForkJoinWorkerThread(QJniObject obj) : java::lang::Thread(obj) {}
	
	// Constructors
	
	// Methods
	java::util::concurrent::ForkJoinPool ForkJoinWorkerThread::getPool()
	{
		return callObjectMethod(
			"getPool",
			"()Ljava/util/concurrent/ForkJoinPool;"
		);
	}
	jint ForkJoinWorkerThread::getPoolIndex()
	{
		return callMethod<jint>(
			"getPoolIndex",
			"()I"
		);
	}
	void ForkJoinWorkerThread::run()
	{
		callMethod<void>(
			"run",
			"()V"
		);
	}
} // namespace java::util::concurrent

