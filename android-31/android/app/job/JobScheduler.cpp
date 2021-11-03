#include "./JobInfo.hpp"
#include "./JobWorkItem.hpp"
#include "./JobScheduler.hpp"

namespace android::app::job
{
	// Fields
	jint JobScheduler::RESULT_FAILURE()
	{
		return getStaticField<jint>(
			"android.app.job.JobScheduler",
			"RESULT_FAILURE"
		);
	}
	jint JobScheduler::RESULT_SUCCESS()
	{
		return getStaticField<jint>(
			"android.app.job.JobScheduler",
			"RESULT_SUCCESS"
		);
	}
	
	// QJniObject forward
	JobScheduler::JobScheduler(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	JobScheduler::JobScheduler()
		: JObject(
			"android.app.job.JobScheduler",
			"()V"
		) {}
	
	// Methods
	void JobScheduler::cancel(jint arg0)
	{
		callMethod<void>(
			"cancel",
			"(I)V",
			arg0
		);
	}
	void JobScheduler::cancelAll()
	{
		callMethod<void>(
			"cancelAll",
			"()V"
		);
	}
	jint JobScheduler::enqueue(android::app::job::JobInfo arg0, android::app::job::JobWorkItem arg1)
	{
		return callMethod<jint>(
			"enqueue",
			"(Landroid/app/job/JobInfo;Landroid/app/job/JobWorkItem;)I",
			arg0.object(),
			arg1.object()
		);
	}
	JObject JobScheduler::getAllPendingJobs()
	{
		return callObjectMethod(
			"getAllPendingJobs",
			"()Ljava/util/List;"
		);
	}
	android::app::job::JobInfo JobScheduler::getPendingJob(jint arg0)
	{
		return callObjectMethod(
			"getPendingJob",
			"(I)Landroid/app/job/JobInfo;",
			arg0
		);
	}
	jint JobScheduler::schedule(android::app::job::JobInfo arg0)
	{
		return callMethod<jint>(
			"schedule",
			"(Landroid/app/job/JobInfo;)I",
			arg0.object()
		);
	}
} // namespace android::app::job

