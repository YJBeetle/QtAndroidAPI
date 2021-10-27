#include "../../lang/ClassLoader.hpp"
#include "../../lang/ThreadGroup.hpp"
#include "../../security/AccessControlContext.hpp"
#include "./ForkJoinPool.hpp"
#include "./ForkJoinWorkerThread.hpp"

namespace java::util::concurrent
{
	// Fields
	
	ForkJoinWorkerThread::ForkJoinWorkerThread(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject ForkJoinWorkerThread::getPool()
	{
		return __thiz.callObjectMethod(
			"getPool",
			"()Ljava/util/concurrent/ForkJoinPool;"
		);
	}
	jint ForkJoinWorkerThread::getPoolIndex()
	{
		return __thiz.callMethod<jint>(
			"getPoolIndex",
			"()I"
		);
	}
	void ForkJoinWorkerThread::run()
	{
		__thiz.callMethod<void>(
			"run",
			"()V"
		);
	}
} // namespace java::util::concurrent

