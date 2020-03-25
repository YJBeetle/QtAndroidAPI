#pragma once

#ifndef JAVA_UTIL_CONCURRENT_FORKJOINWORKERTHREAD
#define JAVA_UTIL_CONCURRENT_FORKJOINWORKERTHREAD

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Thread.hpp"

namespace __jni_impl::java::util::concurrent
{
	class ForkJoinPool;
}
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
	class ForkJoinWorkerThread : public __jni_impl::java::lang::Thread
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void run();
		jint getPoolIndex();
		QAndroidJniObject getPool();
	};
} // namespace __jni_impl::java::util::concurrent

#include "ForkJoinPool.hpp"
#include "../../lang/ClassLoader.hpp"
#include "../../lang/ThreadGroup.hpp"
#include "../../security/AccessControlContext.hpp"

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
	void ForkJoinWorkerThread::run()
	{
		__thiz.callMethod<void>(
			"run",
			"()V");
	}
	jint ForkJoinWorkerThread::getPoolIndex()
	{
		return __thiz.callMethod<jint>(
			"getPoolIndex",
			"()I");
	}
	QAndroidJniObject ForkJoinWorkerThread::getPool()
	{
		return __thiz.callObjectMethod(
			"getPool",
			"()Ljava/util/concurrent/ForkJoinPool;");
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

#endif // JAVA_UTIL_CONCURRENT_FORKJOINWORKERTHREAD

