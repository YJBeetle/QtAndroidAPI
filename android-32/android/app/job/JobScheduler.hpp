#pragma once

#include "./JobInfo.def.hpp"
#include "./JobWorkItem.def.hpp"
#include "./JobScheduler.def.hpp"

namespace android::app::job
{
	// Fields
	inline jint JobScheduler::RESULT_FAILURE()
	{
		return getStaticField<jint>(
			"android.app.job.JobScheduler",
			"RESULT_FAILURE"
		);
	}
	inline jint JobScheduler::RESULT_SUCCESS()
	{
		return getStaticField<jint>(
			"android.app.job.JobScheduler",
			"RESULT_SUCCESS"
		);
	}
	
	// Constructors
	inline JobScheduler::JobScheduler()
		: JObject(
			"android.app.job.JobScheduler",
			"()V"
		) {}
	
	// Methods
	inline void JobScheduler::cancel(jint arg0) const
	{
		callMethod<void>(
			"cancel",
			"(I)V",
			arg0
		);
	}
	inline void JobScheduler::cancelAll() const
	{
		callMethod<void>(
			"cancelAll",
			"()V"
		);
	}
	inline jint JobScheduler::enqueue(android::app::job::JobInfo arg0, android::app::job::JobWorkItem arg1) const
	{
		return callMethod<jint>(
			"enqueue",
			"(Landroid/app/job/JobInfo;Landroid/app/job/JobWorkItem;)I",
			arg0.object(),
			arg1.object()
		);
	}
	inline JObject JobScheduler::getAllPendingJobs() const
	{
		return callObjectMethod(
			"getAllPendingJobs",
			"()Ljava/util/List;"
		);
	}
	inline android::app::job::JobInfo JobScheduler::getPendingJob(jint arg0) const
	{
		return callObjectMethod(
			"getPendingJob",
			"(I)Landroid/app/job/JobInfo;",
			arg0
		);
	}
	inline jint JobScheduler::schedule(android::app::job::JobInfo arg0) const
	{
		return callMethod<jint>(
			"schedule",
			"(Landroid/app/job/JobInfo;)I",
			arg0.object()
		);
	}
} // namespace android::app::job

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::job;
#endif
