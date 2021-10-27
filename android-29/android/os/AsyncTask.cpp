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
	
	AsyncTask::AsyncTask(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AsyncTask::AsyncTask()
	{
		__thiz = QAndroidJniObject(
			"android.os.AsyncTask",
			"()V"
		);
	}
	
	// Methods
	void AsyncTask::execute(__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.AsyncTask",
			"execute",
			"(Ljava/lang/Runnable;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean AsyncTask::cancel(jboolean arg0)
	{
		return __thiz.callMethod<jboolean>(
			"cancel",
			"(Z)Z",
			arg0
		);
	}
	QAndroidJniObject AsyncTask::execute(jobjectArray arg0)
	{
		return __thiz.callObjectMethod(
			"execute",
			"([Ljava/lang/Object;)Landroid/os/AsyncTask;",
			arg0
		);
	}
	QAndroidJniObject AsyncTask::executeOnExecutor(__JniBaseClass arg0, jobjectArray arg1)
	{
		return __thiz.callObjectMethod(
			"executeOnExecutor",
			"(Ljava/util/concurrent/Executor;[Ljava/lang/Object;)Landroid/os/AsyncTask;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jobject AsyncTask::get()
	{
		return __thiz.callObjectMethod(
			"get",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject AsyncTask::get(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return __thiz.callObjectMethod(
			"get",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	QAndroidJniObject AsyncTask::getStatus()
	{
		return __thiz.callObjectMethod(
			"getStatus",
			"()Landroid/os/AsyncTask$Status;"
		);
	}
	jboolean AsyncTask::isCancelled()
	{
		return __thiz.callMethod<jboolean>(
			"isCancelled",
			"()Z"
		);
	}
} // namespace android::os

