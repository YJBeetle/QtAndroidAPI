#include "../../lang/Thread.hpp"
#include "./TimeUnit.hpp"
#include "./FutureTask.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QJniObject forward
	FutureTask::FutureTask(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	FutureTask::FutureTask(__JniBaseClass arg0)
		: __JniBaseClass(
			"java.util.concurrent.FutureTask",
			"(Ljava/util/concurrent/Callable;)V",
			arg0.object()
		) {}
	FutureTask::FutureTask(__JniBaseClass arg0, jobject arg1)
		: __JniBaseClass(
			"java.util.concurrent.FutureTask",
			"(Ljava/lang/Runnable;Ljava/lang/Object;)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	jboolean FutureTask::cancel(jboolean arg0)
	{
		return callMethod<jboolean>(
			"cancel",
			"(Z)Z",
			arg0
		);
	}
	jobject FutureTask::get()
	{
		return callObjectMethod(
			"get",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject FutureTask::get(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return callObjectMethod(
			"get",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		).object<jobject>();
	}
	jboolean FutureTask::isCancelled()
	{
		return callMethod<jboolean>(
			"isCancelled",
			"()Z"
		);
	}
	jboolean FutureTask::isDone()
	{
		return callMethod<jboolean>(
			"isDone",
			"()Z"
		);
	}
	void FutureTask::run()
	{
		callMethod<void>(
			"run",
			"()V"
		);
	}
	jstring FutureTask::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util::concurrent

