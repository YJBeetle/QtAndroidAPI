#include "../../lang/Thread.hpp"
#include "./TimeUnit.hpp"
#include "./FutureTask.hpp"

namespace java::util::concurrent
{
	// Fields
	
	FutureTask::FutureTask(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	FutureTask::FutureTask(__JniBaseClass &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.FutureTask",
			"(Ljava/util/concurrent/Callable;)V",
			arg0.__jniObject().object()
		);
	}
	FutureTask::FutureTask(__JniBaseClass &arg0, jobject &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.FutureTask",
			"(Ljava/lang/Runnable;Ljava/lang/Object;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	jboolean FutureTask::cancel(jboolean arg0)
	{
		return __thiz.callMethod<jboolean>(
			"cancel",
			"(Z)Z",
			arg0
		);
	}
	jobject FutureTask::get()
	{
		return __thiz.callObjectMethod(
			"get",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject FutureTask::get(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return __thiz.callObjectMethod(
			"get",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	jboolean FutureTask::isCancelled()
	{
		return __thiz.callMethod<jboolean>(
			"isCancelled",
			"()Z"
		);
	}
	jboolean FutureTask::isDone()
	{
		return __thiz.callMethod<jboolean>(
			"isDone",
			"()Z"
		);
	}
	void FutureTask::run()
	{
		__thiz.callMethod<void>(
			"run",
			"()V"
		);
	}
	jstring FutureTask::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util::concurrent

