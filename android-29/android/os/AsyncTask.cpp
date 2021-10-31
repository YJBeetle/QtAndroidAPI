#include "./AsyncTask_Status.hpp"
#include "../../java/util/concurrent/TimeUnit.hpp"
#include "./AsyncTask.hpp"

namespace android::os
{
	// Fields
	QAndroidJniObject AsyncTask::SERIAL_EXECUTOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.AsyncTask",
			"SERIAL_EXECUTOR",
			"Ljava/util/concurrent/Executor;"
		);
	}
	QAndroidJniObject AsyncTask::THREAD_POOL_EXECUTOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.AsyncTask",
			"THREAD_POOL_EXECUTOR",
			"Ljava/util/concurrent/Executor;"
		);
	}
	
	// QAndroidJniObject forward
	AsyncTask::AsyncTask(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	AsyncTask::AsyncTask()
		: __JniBaseClass(
			"android.os.AsyncTask",
			"()V"
		) {}
	
	// Methods
	void AsyncTask::execute(__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.AsyncTask",
			"execute",
			"(Ljava/lang/Runnable;)V",
			arg0.object()
		);
	}
	jboolean AsyncTask::cancel(jboolean arg0)
	{
		return callMethod<jboolean>(
			"cancel",
			"(Z)Z",
			arg0
		);
	}
	QAndroidJniObject AsyncTask::execute(jobjectArray arg0)
	{
		return callObjectMethod(
			"execute",
			"([Ljava/lang/Object;)Landroid/os/AsyncTask;",
			arg0
		);
	}
	QAndroidJniObject AsyncTask::executeOnExecutor(__JniBaseClass arg0, jobjectArray arg1)
	{
		return callObjectMethod(
			"executeOnExecutor",
			"(Ljava/util/concurrent/Executor;[Ljava/lang/Object;)Landroid/os/AsyncTask;",
			arg0.object(),
			arg1
		);
	}
	jobject AsyncTask::get()
	{
		return callObjectMethod(
			"get",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject AsyncTask::get(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return callObjectMethod(
			"get",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		).object<jobject>();
	}
	QAndroidJniObject AsyncTask::getStatus()
	{
		return callObjectMethod(
			"getStatus",
			"()Landroid/os/AsyncTask$Status;"
		);
	}
	jboolean AsyncTask::isCancelled()
	{
		return callMethod<jboolean>(
			"isCancelled",
			"()Z"
		);
	}
} // namespace android::os

