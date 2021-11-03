#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../lang/Thread.hpp"
#include "../../../JThrowable.hpp"
#include "./TimeUnit.hpp"
#include "./FutureTask.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QAndroidJniObject forward
	FutureTask::FutureTask(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	FutureTask::FutureTask(JObject arg0)
		: JObject(
			"java.util.concurrent.FutureTask",
			"(Ljava/util/concurrent/Callable;)V",
			arg0.object()
		) {}
	FutureTask::FutureTask(JObject arg0, JObject arg1)
		: JObject(
			"java.util.concurrent.FutureTask",
			"(Ljava/lang/Runnable;Ljava/lang/Object;)V",
			arg0.object(),
			arg1.object<jobject>()
		) {}
	
	// Methods
	jboolean FutureTask::cancel(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"cancel",
			"(Z)Z",
			arg0
		);
	}
	JObject FutureTask::get() const
	{
		return callObjectMethod(
			"get",
			"()Ljava/lang/Object;"
		);
	}
	JObject FutureTask::get(jlong arg0, java::util::concurrent::TimeUnit arg1) const
	{
		return callObjectMethod(
			"get",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		);
	}
	jboolean FutureTask::isCancelled() const
	{
		return callMethod<jboolean>(
			"isCancelled",
			"()Z"
		);
	}
	jboolean FutureTask::isDone() const
	{
		return callMethod<jboolean>(
			"isDone",
			"()Z"
		);
	}
	void FutureTask::run() const
	{
		callMethod<void>(
			"run",
			"()V"
		);
	}
	JString FutureTask::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util::concurrent

