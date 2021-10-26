#pragma once

#ifndef ANDROID_APP_JOB_JOBSCHEDULER
#define ANDROID_APP_JOB_JOBSCHEDULER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::app::job
{
	class JobInfo;
}
namespace __jni_impl::android::app::job
{
	class JobWorkItem;
}

namespace __jni_impl::android::app::job
{
	class JobScheduler : public __JniBaseClass
	{
	public:
		// Fields
		static jint RESULT_FAILURE();
		static jint RESULT_SUCCESS();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint enqueue(__jni_impl::android::app::job::JobInfo arg0, __jni_impl::android::app::job::JobWorkItem arg1);
		void cancel(jint arg0);
		void cancelAll();
		jint schedule(__jni_impl::android::app::job::JobInfo arg0);
		QAndroidJniObject getAllPendingJobs();
		QAndroidJniObject getPendingJob(jint arg0);
	};
} // namespace __jni_impl::android::app::job

#include "JobInfo.hpp"
#include "JobWorkItem.hpp"

namespace __jni_impl::android::app::job
{
	// Fields
	jint JobScheduler::RESULT_FAILURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.job.JobScheduler",
			"RESULT_FAILURE"
		);
	}
	jint JobScheduler::RESULT_SUCCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.job.JobScheduler",
			"RESULT_SUCCESS"
		);
	}
	
	// Constructors
	void JobScheduler::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.job.JobScheduler",
			"()V"
		);
	}
	
	// Methods
	jint JobScheduler::enqueue(__jni_impl::android::app::job::JobInfo arg0, __jni_impl::android::app::job::JobWorkItem arg1)
	{
		return __thiz.callMethod<jint>(
			"enqueue",
			"(Landroid/app/job/JobInfo;Landroid/app/job/JobWorkItem;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void JobScheduler::cancel(jint arg0)
	{
		__thiz.callMethod<void>(
			"cancel",
			"(I)V",
			arg0
		);
	}
	void JobScheduler::cancelAll()
	{
		__thiz.callMethod<void>(
			"cancelAll",
			"()V"
		);
	}
	jint JobScheduler::schedule(__jni_impl::android::app::job::JobInfo arg0)
	{
		return __thiz.callMethod<jint>(
			"schedule",
			"(Landroid/app/job/JobInfo;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject JobScheduler::getAllPendingJobs()
	{
		return __thiz.callObjectMethod(
			"getAllPendingJobs",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject JobScheduler::getPendingJob(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getPendingJob",
			"(I)Landroid/app/job/JobInfo;",
			arg0
		);
	}
} // namespace __jni_impl::android::app::job

namespace android::app::job
{
	class JobScheduler : public __jni_impl::android::app::job::JobScheduler
	{
	public:
		JobScheduler(QAndroidJniObject obj) { __thiz = obj; }
		JobScheduler()
		{
			__constructor();
		}
	};
} // namespace android::app::job

#endif // ANDROID_APP_JOB_JOBSCHEDULER

