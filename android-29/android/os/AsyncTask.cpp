#include "../../JObjectArray.hpp"
#include "./AsyncTask_Status.hpp"
#include "../../JObject.hpp"
#include "../../java/util/concurrent/TimeUnit.hpp"
#include "./AsyncTask.hpp"

namespace android::os
{
	// Fields
	JObject AsyncTask::SERIAL_EXECUTOR()
	{
		return getStaticObjectField(
			"android.os.AsyncTask",
			"SERIAL_EXECUTOR",
			"Ljava/util/concurrent/Executor;"
		);
	}
	JObject AsyncTask::THREAD_POOL_EXECUTOR()
	{
		return getStaticObjectField(
			"android.os.AsyncTask",
			"THREAD_POOL_EXECUTOR",
			"Ljava/util/concurrent/Executor;"
		);
	}
	
	// QAndroidJniObject forward
	AsyncTask::AsyncTask(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	AsyncTask::AsyncTask()
		: JObject(
			"android.os.AsyncTask",
			"()V"
		) {}
	
	// Methods
	void AsyncTask::execute(JObject arg0)
	{
		callStaticMethod<void>(
			"android.os.AsyncTask",
			"execute",
			"(Ljava/lang/Runnable;)V",
			arg0.object()
		);
	}
	jboolean AsyncTask::cancel(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"cancel",
			"(Z)Z",
			arg0
		);
	}
	android::os::AsyncTask AsyncTask::execute(JObjectArray arg0) const
	{
		return callObjectMethod(
			"execute",
			"([Ljava/lang/Object;)Landroid/os/AsyncTask;",
			arg0.object<jobjectArray>()
		);
	}
	android::os::AsyncTask AsyncTask::executeOnExecutor(JObject arg0, JObjectArray arg1) const
	{
		return callObjectMethod(
			"executeOnExecutor",
			"(Ljava/util/concurrent/Executor;[Ljava/lang/Object;)Landroid/os/AsyncTask;",
			arg0.object(),
			arg1.object<jobjectArray>()
		);
	}
	JObject AsyncTask::get() const
	{
		return callObjectMethod(
			"get",
			"()Ljava/lang/Object;"
		);
	}
	JObject AsyncTask::get(jlong arg0, java::util::concurrent::TimeUnit arg1) const
	{
		return callObjectMethod(
			"get",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		);
	}
	android::os::AsyncTask_Status AsyncTask::getStatus() const
	{
		return callObjectMethod(
			"getStatus",
			"()Landroid/os/AsyncTask$Status;"
		);
	}
	jboolean AsyncTask::isCancelled() const
	{
		return callMethod<jboolean>(
			"isCancelled",
			"()Z"
		);
	}
} // namespace android::os

