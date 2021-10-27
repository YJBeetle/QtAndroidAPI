#include "./JobInfo.hpp"
#include "./JobWorkItem.hpp"
#include "./JobScheduler.hpp"

namespace android::app::job
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
	
	JobScheduler::JobScheduler(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	JobScheduler::JobScheduler()
	{
		__thiz = QAndroidJniObject(
			"android.app.job.JobScheduler",
			"()V"
		);
	}
	
	// Methods
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
	jint JobScheduler::enqueue(android::app::job::JobInfo arg0, android::app::job::JobWorkItem arg1)
	{
		return __thiz.callMethod<jint>(
			"enqueue",
			"(Landroid/app/job/JobInfo;Landroid/app/job/JobWorkItem;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
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
	jint JobScheduler::schedule(android::app::job::JobInfo arg0)
	{
		return __thiz.callMethod<jint>(
			"schedule",
			"(Landroid/app/job/JobInfo;)I",
			arg0.__jniObject().object()
		);
	}
} // namespace android::app::job

