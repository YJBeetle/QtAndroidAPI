#pragma once

#ifndef ANDROID_OS_ASYNCTASK
#define ANDROID_OS_ASYNCTASK

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::util::concurrent
{
	class TimeUnit;
}
namespace __jni_impl::android::os
{
	class AsyncTask_Status;
}

namespace __jni_impl::android::os
{
	class AsyncTask : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject SERIAL_EXECUTOR();
		static QAndroidJniObject THREAD_POOL_EXECUTOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jobject get();
		jobject get(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1);
		static void execute(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject execute(jobjectArray arg0);
		jboolean cancel(jboolean arg0);
		jboolean isCancelled();
		QAndroidJniObject executeOnExecutor(__jni_impl::__JniBaseClass arg0, jobjectArray arg1);
		QAndroidJniObject getStatus();
	};
} // namespace __jni_impl::android::os

#include "../../java/util/concurrent/TimeUnit.hpp"
#include "AsyncTask_Status.hpp"

namespace __jni_impl::android::os
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
	
	// Constructors
	void AsyncTask::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.AsyncTask",
			"()V");
	}
	
	// Methods
	jobject AsyncTask::get()
	{
		return __thiz.callObjectMethod(
			"get",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject AsyncTask::get(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1)
	{
		return __thiz.callObjectMethod(
			"get",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	void AsyncTask::execute(__jni_impl::__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.AsyncTask",
			"execute",
			"(Ljava/lang/Runnable;)V",
			arg0.__jniObject().object()
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
	jboolean AsyncTask::cancel(jboolean arg0)
	{
		return __thiz.callMethod<jboolean>(
			"cancel",
			"(Z)Z",
			arg0
		);
	}
	jboolean AsyncTask::isCancelled()
	{
		return __thiz.callMethod<jboolean>(
			"isCancelled",
			"()Z"
		);
	}
	QAndroidJniObject AsyncTask::executeOnExecutor(__jni_impl::__JniBaseClass arg0, jobjectArray arg1)
	{
		return __thiz.callObjectMethod(
			"executeOnExecutor",
			"(Ljava/util/concurrent/Executor;[Ljava/lang/Object;)Landroid/os/AsyncTask;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject AsyncTask::getStatus()
	{
		return __thiz.callObjectMethod(
			"getStatus",
			"()Landroid/os/AsyncTask$Status;"
		);
	}
} // namespace __jni_impl::android::os

namespace android::os
{
	class AsyncTask : public __jni_impl::android::os::AsyncTask
	{
	public:
		AsyncTask(QAndroidJniObject obj) { __thiz = obj; }
		AsyncTask()
		{
			__constructor();
		}
	};
} // namespace android::os

#endif // ANDROID_OS_ASYNCTASK

