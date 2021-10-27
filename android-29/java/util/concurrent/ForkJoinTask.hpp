#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::io
{
	class ObjectOutputStream;
}
namespace __jni_impl::java::lang::ref
{
	class ReferenceQueue;
}
namespace __jni_impl::java::util::concurrent
{
	class ForkJoinPool;
}
namespace __jni_impl::java::util::concurrent
{
	class TimeUnit;
}
namespace __jni_impl::java::util::concurrent::locks
{
	class ReentrantLock;
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
		static QAndroidJniObject adapt(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject adapt(__jni_impl::__JniBaseClass arg0, jobject arg1);
		static QAndroidJniObject getPool();
		static jint getQueuedTaskCount();
		static jint getSurplusQueuedTaskCount();
		static void helpQuiesce();
		static jboolean inForkJoinPool();
		static QAndroidJniObject invokeAll(__jni_impl::__JniBaseClass arg0);
		static void invokeAll(jarray arg0);
		static void invokeAll(__jni_impl::java::util::concurrent::ForkJoinTask arg0, __jni_impl::java::util::concurrent::ForkJoinTask arg1);
		jboolean cancel(jboolean arg0);
		jboolean compareAndSetForkJoinTaskTag(jshort arg0, jshort arg1);
		void complete(jobject arg0);
		void completeExceptionally(jthrowable arg0);
		QAndroidJniObject fork();
		jobject get();
		jobject get(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1);
		jthrowable getException();
		jshort getForkJoinTaskTag();
		jobject getRawResult();
		jobject invoke();
		jboolean isCancelled();
		jboolean isCompletedAbnormally();
		jboolean isCompletedNormally();
		jboolean isDone();
		jobject join();
		void quietlyComplete();
		void quietlyInvoke();
		void quietlyJoin();
		void reinitialize();
		jshort setForkJoinTaskTag(jshort arg0);
		jboolean tryUnfork();
	};
} // namespace __jni_impl::java::util::concurrent

#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"
#include "../../lang/ref/ReferenceQueue.hpp"
#include "ForkJoinPool.hpp"
#include "TimeUnit.hpp"
#include "locks/ReentrantLock.hpp"

namespace __jni_impl::java::util::concurrent
{
	// Fields
	
	// Constructors
	void ForkJoinTask::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ForkJoinTask",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject ForkJoinTask::adapt(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.ForkJoinTask",
			"adapt",
			"(Ljava/lang/Runnable;)Ljava/util/concurrent/ForkJoinTask;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ForkJoinTask::adapt(__jni_impl::__JniBaseClass arg0, jobject arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.ForkJoinTask",
			"adapt",
			"(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/ForkJoinTask;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject ForkJoinTask::getPool()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.ForkJoinTask",
			"getPool",
			"()Ljava/util/concurrent/ForkJoinPool;"
		);
	}
	jint ForkJoinTask::getQueuedTaskCount()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.util.concurrent.ForkJoinTask",
			"getQueuedTaskCount",
			"()I"
		);
	}
	jint ForkJoinTask::getSurplusQueuedTaskCount()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.util.concurrent.ForkJoinTask",
			"getSurplusQueuedTaskCount",
			"()I"
		);
	}
	void ForkJoinTask::helpQuiesce()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.util.concurrent.ForkJoinTask",
			"helpQuiesce",
			"()V"
		);
	}
	jboolean ForkJoinTask::inForkJoinPool()
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.util.concurrent.ForkJoinTask",
			"inForkJoinPool",
			"()Z"
		);
	}
	QAndroidJniObject ForkJoinTask::invokeAll(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.ForkJoinTask",
			"invokeAll",
			"(Ljava/util/Collection;)Ljava/util/Collection;",
			arg0.__jniObject().object()
		);
	}
	void ForkJoinTask::invokeAll(jarray arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.util.concurrent.ForkJoinTask",
			"invokeAll",
			"([Ljava/util/concurrent/ForkJoinTask;)V",
			arg0
		);
	}
	void ForkJoinTask::invokeAll(__jni_impl::java::util::concurrent::ForkJoinTask arg0, __jni_impl::java::util::concurrent::ForkJoinTask arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.util.concurrent.ForkJoinTask",
			"invokeAll",
			"(Ljava/util/concurrent/ForkJoinTask;Ljava/util/concurrent/ForkJoinTask;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean ForkJoinTask::cancel(jboolean arg0)
	{
		return __thiz.callMethod<jboolean>(
			"cancel",
			"(Z)Z",
			arg0
		);
	}
	jboolean ForkJoinTask::compareAndSetForkJoinTaskTag(jshort arg0, jshort arg1)
	{
		return __thiz.callMethod<jboolean>(
			"compareAndSetForkJoinTaskTag",
			"(SS)Z",
			arg0,
			arg1
		);
	}
	void ForkJoinTask::complete(jobject arg0)
	{
		__thiz.callMethod<void>(
			"complete",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void ForkJoinTask::completeExceptionally(jthrowable arg0)
	{
		__thiz.callMethod<void>(
			"completeExceptionally",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	QAndroidJniObject ForkJoinTask::fork()
	{
		return __thiz.callObjectMethod(
			"fork",
			"()Ljava/util/concurrent/ForkJoinTask;"
		);
	}
	jobject ForkJoinTask::get()
	{
		return __thiz.callObjectMethod(
			"get",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject ForkJoinTask::get(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1)
	{
		return __thiz.callObjectMethod(
			"get",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	jthrowable ForkJoinTask::getException()
	{
		return __thiz.callObjectMethod(
			"getException",
			"()Ljava/lang/Throwable;"
		).object<jthrowable>();
	}
	jshort ForkJoinTask::getForkJoinTaskTag()
	{
		return __thiz.callMethod<jshort>(
			"getForkJoinTaskTag",
			"()S"
		);
	}
	jobject ForkJoinTask::getRawResult()
	{
		return __thiz.callObjectMethod(
			"getRawResult",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject ForkJoinTask::invoke()
	{
		return __thiz.callObjectMethod(
			"invoke",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean ForkJoinTask::isCancelled()
	{
		return __thiz.callMethod<jboolean>(
			"isCancelled",
			"()Z"
		);
	}
	jboolean ForkJoinTask::isCompletedAbnormally()
	{
		return __thiz.callMethod<jboolean>(
			"isCompletedAbnormally",
			"()Z"
		);
	}
	jboolean ForkJoinTask::isCompletedNormally()
	{
		return __thiz.callMethod<jboolean>(
			"isCompletedNormally",
			"()Z"
		);
	}
	jboolean ForkJoinTask::isDone()
	{
		return __thiz.callMethod<jboolean>(
			"isDone",
			"()Z"
		);
	}
	jobject ForkJoinTask::join()
	{
		return __thiz.callObjectMethod(
			"join",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	void ForkJoinTask::quietlyComplete()
	{
		__thiz.callMethod<void>(
			"quietlyComplete",
			"()V"
		);
	}
	void ForkJoinTask::quietlyInvoke()
	{
		__thiz.callMethod<void>(
			"quietlyInvoke",
			"()V"
		);
	}
	void ForkJoinTask::quietlyJoin()
	{
		__thiz.callMethod<void>(
			"quietlyJoin",
			"()V"
		);
	}
	void ForkJoinTask::reinitialize()
	{
		__thiz.callMethod<void>(
			"reinitialize",
			"()V"
		);
	}
	jshort ForkJoinTask::setForkJoinTaskTag(jshort arg0)
	{
		return __thiz.callMethod<jshort>(
			"setForkJoinTaskTag",
			"(S)S",
			arg0
		);
	}
	jboolean ForkJoinTask::tryUnfork()
	{
		return __thiz.callMethod<jboolean>(
			"tryUnfork",
			"()Z"
		);
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

