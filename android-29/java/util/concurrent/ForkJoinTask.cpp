#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"
#include "../../lang/ref/ReferenceQueue.hpp"
#include "./ForkJoinPool.hpp"
#include "./TimeUnit.hpp"
#include "./locks/ReentrantLock.hpp"
#include "./ForkJoinTask.hpp"

namespace java::util::concurrent
{
	// Fields
	
	ForkJoinTask::ForkJoinTask(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ForkJoinTask::ForkJoinTask()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ForkJoinTask",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject ForkJoinTask::adapt(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.ForkJoinTask",
			"adapt",
			"(Ljava/lang/Runnable;)Ljava/util/concurrent/ForkJoinTask;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ForkJoinTask::adapt(__JniBaseClass arg0, jobject arg1)
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
	QAndroidJniObject ForkJoinTask::invokeAll(__JniBaseClass arg0)
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
	void ForkJoinTask::invokeAll(java::util::concurrent::ForkJoinTask arg0, java::util::concurrent::ForkJoinTask arg1)
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
	jobject ForkJoinTask::get(jlong arg0, java::util::concurrent::TimeUnit arg1)
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
} // namespace java::util::concurrent

