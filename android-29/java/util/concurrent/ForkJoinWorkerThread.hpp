#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Thread.hpp"

namespace __jni_impl::java::lang
{
	class ClassLoader;
}
namespace __jni_impl::java::lang
{
	class ThreadGroup;
}
namespace __jni_impl::java::security
{
	class AccessControlContext;
}
namespace __jni_impl::java::util::concurrent
{
	class ForkJoinPool;
}

namespace __jni_impl::java::util::concurrent
{
	class ForkJoinWorkerThread : public __jni_impl::java::lang::Thread
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getPool();
		jint getPoolIndex();
		void run();
	};
} // namespace __jni_impl::java::util::concurrent

#include "../../lang/ClassLoader.hpp"
#include "../../lang/ThreadGroup.hpp"
#include "../../security/AccessControlContext.hpp"
#include "ForkJoinPool.hpp"

namespace __jni_impl::java::util::concurrent
{
	// Fields
	
	// Constructors
	void ForkJoinWorkerThread::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ForkJoinWorkerThread",
			"(V)V");
	}
	
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
} // namespace __jni_impl::java::util::concurrent

namespace java::util::concurrent
{
	class ForkJoinWorkerThread : public __jni_impl::java::util::concurrent::ForkJoinWorkerThread
	{
	public:
		ForkJoinWorkerThread(QAndroidJniObject obj) { __thiz = obj; }
		ForkJoinWorkerThread()
		{
			__constructor();
		}
	};
} // namespace java::util::concurrent

