#pragma once

#ifndef JAVA_UTIL_CONCURRENT_FORKJOINTASK
#define JAVA_UTIL_CONCURRENT_FORKJOINTASK

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::util::concurrent::locks
{
	class ReentrantLock;
}
namespace __jni_impl::java::lang::ref
{
	class ReferenceQueue;
}
namespace __jni_impl::java::util::concurrent
{
	class TimeUnit;
}
namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::io
{
	class ObjectOutputStream;
}
namespace __jni_impl::java::util::concurrent
{
	class ForkJoinPool;
}

namespace __jni_impl::java::util::concurrent
{
	class ForkJoinTask : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject invoke();
		QAndroidJniObject get(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1);
		QAndroidJniObject get();
		QAndroidJniObject join();
		QAndroidJniObject getException();
		void reinitialize();
		QAndroidJniObject fork();
		QAndroidJniObject getRawResult();
		void quietlyComplete();
		jboolean cancel(jboolean arg0);
		static void invokeAll(jarray arg0);
		static QAndroidJniObject invokeAll(__jni_impl::__JniBaseClass arg0);
		static void invokeAll(__jni_impl::java::util::concurrent::ForkJoinTask arg0, __jni_impl::java::util::concurrent::ForkJoinTask arg1);
		static jint getSurplusQueuedTaskCount();
		jboolean isDone();
		jboolean isCancelled();
		jboolean isCompletedAbnormally();
		jboolean isCompletedNormally();
		void completeExceptionally(jthrowable arg0);
		void quietlyJoin();
		void quietlyInvoke();
		static void helpQuiesce();
		static jboolean inForkJoinPool();
		jboolean tryUnfork();
		static jint getQueuedTaskCount();
		jshort getForkJoinTaskTag();
		jshort setForkJoinTaskTag(jshort arg0);
		jboolean compareAndSetForkJoinTaskTag(jshort arg0, jshort arg1);
		static QAndroidJniObject adapt(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject adapt(__jni_impl::__JniBaseClass arg0, jobject arg1);
		void complete(jobject arg0);
		static QAndroidJniObject getPool();
	};
} // namespace __jni_impl::java::util::concurrent

#include "locks/ReentrantLock.hpp"
#include "../../lang/ref/ReferenceQueue.hpp"
#include "TimeUnit.hpp"
#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"
#include "ForkJoinPool.hpp"

namespace __jni_impl::java::util::concurrent
{
	// Fields
	
	// Constructors
	void ForkJoinTask::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ForkJoinTask",
			"()V");
	}
	
	// Methods
	QAndroidJniObject ForkJoinTask::invoke()
	{
		return __thiz.callObjectMethod(
			"invoke",
			"()Ljava/lang/Object;");
	}
	QAndroidJniObject ForkJoinTask::get(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1)
	{
		return __thiz.callObjectMethod(
			"get",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject ForkJoinTask::get()
	{
		return __thiz.callObjectMethod(
			"get",
			"()Ljava/lang/Object;");
	}
	QAndroidJniObject ForkJoinTask::join()
	{
		return __thiz.callObjectMethod(
			"join",
			"()Ljava/lang/Object;");
	}
	QAndroidJniObject ForkJoinTask::getException()
	{
		return __thiz.callObjectMethod(
			"getException",
			"()Ljava/lang/Throwable;");
	}
	void ForkJoinTask::reinitialize()
	{
		__thiz.callMethod<void>(
			"reinitialize",
			"()V");
	}
	QAndroidJniObject ForkJoinTask::fork()
	{
		return __thiz.callObjectMethod(
			"fork",
			"()Ljava/util/concurrent/ForkJoinTask;");
	}
	QAndroidJniObject ForkJoinTask::getRawResult()
	{
		return __thiz.callObjectMethod(
			"getRawResult",
			"()Ljava/lang/Object;");
	}
	void ForkJoinTask::quietlyComplete()
	{
		__thiz.callMethod<void>(
			"quietlyComplete",
			"()V");
	}
	jboolean ForkJoinTask::cancel(jboolean arg0)
	{
		return __thiz.callMethod<jboolean>(
			"cancel",
			"(Z)Z",
			arg0);
	}
	void ForkJoinTask::invokeAll(jarray arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.util.concurrent.ForkJoinTask",
			"invokeAll",
			"([Ljava/util/concurrent/ForkJoinTask;)V",
			arg0);
	}
	QAndroidJniObject ForkJoinTask::invokeAll(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.ForkJoinTask",
			"invokeAll",
			"(Ljava/util/Collection;)Ljava/util/Collection;",
			arg0.__jniObject().object());
	}
	void ForkJoinTask::invokeAll(__jni_impl::java::util::concurrent::ForkJoinTask arg0, __jni_impl::java::util::concurrent::ForkJoinTask arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.util.concurrent.ForkJoinTask",
			"invokeAll",
			"(Ljava/util/concurrent/ForkJoinTask;Ljava/util/concurrent/ForkJoinTask;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	jint ForkJoinTask::getSurplusQueuedTaskCount()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.util.concurrent.ForkJoinTask",
			"getSurplusQueuedTaskCount",
			"()I");
	}
	jboolean ForkJoinTask::isDone()
	{
		return __thiz.callMethod<jboolean>(
			"isDone",
			"()Z");
	}
	jboolean ForkJoinTask::isCancelled()
	{
		return __thiz.callMethod<jboolean>(
			"isCancelled",
			"()Z");
	}
	jboolean ForkJoinTask::isCompletedAbnormally()
	{
		return __thiz.callMethod<jboolean>(
			"isCompletedAbnormally",
			"()Z");
	}
	jboolean ForkJoinTask::isCompletedNormally()
	{
		return __thiz.callMethod<jboolean>(
			"isCompletedNormally",
			"()Z");
	}
	void ForkJoinTask::completeExceptionally(jthrowable arg0)
	{
		__thiz.callMethod<void>(
			"completeExceptionally",
			"(Ljava/lang/Throwable;)V",
			arg0);
	}
	void ForkJoinTask::quietlyJoin()
	{
		__thiz.callMethod<void>(
			"quietlyJoin",
			"()V");
	}
	void ForkJoinTask::quietlyInvoke()
	{
		__thiz.callMethod<void>(
			"quietlyInvoke",
			"()V");
	}
	void ForkJoinTask::helpQuiesce()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.util.concurrent.ForkJoinTask",
			"helpQuiesce",
			"()V");
	}
	jboolean ForkJoinTask::inForkJoinPool()
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.util.concurrent.ForkJoinTask",
			"inForkJoinPool",
			"()Z");
	}
	jboolean ForkJoinTask::tryUnfork()
	{
		return __thiz.callMethod<jboolean>(
			"tryUnfork",
			"()Z");
	}
	jint ForkJoinTask::getQueuedTaskCount()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.util.concurrent.ForkJoinTask",
			"getQueuedTaskCount",
			"()I");
	}
	jshort ForkJoinTask::getForkJoinTaskTag()
	{
		return __thiz.callMethod<jshort>(
			"getForkJoinTaskTag",
			"()S");
	}
	jshort ForkJoinTask::setForkJoinTaskTag(jshort arg0)
	{
		return __thiz.callMethod<jshort>(
			"setForkJoinTaskTag",
			"(S)S",
			arg0);
	}
	jboolean ForkJoinTask::compareAndSetForkJoinTaskTag(jshort arg0, jshort arg1)
	{
		return __thiz.callMethod<jboolean>(
			"compareAndSetForkJoinTaskTag",
			"(SS)Z",
			arg0,
			arg1);
	}
	QAndroidJniObject ForkJoinTask::adapt(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.ForkJoinTask",
			"adapt",
			"(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/ForkJoinTask;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ForkJoinTask::adapt(__jni_impl::__JniBaseClass arg0, jobject arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.ForkJoinTask",
			"adapt",
			"(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/ForkJoinTask;",
			arg0.__jniObject().object(),
			arg1);
	}
	void ForkJoinTask::complete(jobject arg0)
	{
		__thiz.callMethod<void>(
			"complete",
			"(Ljava/lang/Object;)V",
			arg0);
	}
	QAndroidJniObject ForkJoinTask::getPool()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.ForkJoinTask",
			"getPool",
			"()Ljava/util/concurrent/ForkJoinPool;");
	}
} // namespace __jni_impl::java::util::concurrent

namespace java::util::concurrent
{
	class ForkJoinTask : public __jni_impl::java::util::concurrent::ForkJoinTask
	{
	public:
		ForkJoinTask(QAndroidJniObject obj) { __thiz = obj; }
		ForkJoinTask()
		{
			__constructor();
		}
	};
} // namespace java::util::concurrent

#endif // JAVA_UTIL_CONCURRENT_FORKJOINTASK

