#pragma once

#include "./JobInfo.def.hpp"
#include "./JobWorkItem.def.hpp"
#include "../../../JString.hpp"
#include "./JobScheduler.def.hpp"

namespace android::app::job
{
	// Fields
	inline jint JobScheduler::PENDING_JOB_REASON_APP()
	{
		return getStaticField<jint>(
			"android.app.job.JobScheduler",
			"PENDING_JOB_REASON_APP"
		);
	}
	inline jint JobScheduler::PENDING_JOB_REASON_APP_STANDBY()
	{
		return getStaticField<jint>(
			"android.app.job.JobScheduler",
			"PENDING_JOB_REASON_APP_STANDBY"
		);
	}
	inline jint JobScheduler::PENDING_JOB_REASON_BACKGROUND_RESTRICTION()
	{
		return getStaticField<jint>(
			"android.app.job.JobScheduler",
			"PENDING_JOB_REASON_BACKGROUND_RESTRICTION"
		);
	}
	inline jint JobScheduler::PENDING_JOB_REASON_CONSTRAINT_BATTERY_NOT_LOW()
	{
		return getStaticField<jint>(
			"android.app.job.JobScheduler",
			"PENDING_JOB_REASON_CONSTRAINT_BATTERY_NOT_LOW"
		);
	}
	inline jint JobScheduler::PENDING_JOB_REASON_CONSTRAINT_CHARGING()
	{
		return getStaticField<jint>(
			"android.app.job.JobScheduler",
			"PENDING_JOB_REASON_CONSTRAINT_CHARGING"
		);
	}
	inline jint JobScheduler::PENDING_JOB_REASON_CONSTRAINT_CONNECTIVITY()
	{
		return getStaticField<jint>(
			"android.app.job.JobScheduler",
			"PENDING_JOB_REASON_CONSTRAINT_CONNECTIVITY"
		);
	}
	inline jint JobScheduler::PENDING_JOB_REASON_CONSTRAINT_CONTENT_TRIGGER()
	{
		return getStaticField<jint>(
			"android.app.job.JobScheduler",
			"PENDING_JOB_REASON_CONSTRAINT_CONTENT_TRIGGER"
		);
	}
	inline jint JobScheduler::PENDING_JOB_REASON_CONSTRAINT_DEVICE_IDLE()
	{
		return getStaticField<jint>(
			"android.app.job.JobScheduler",
			"PENDING_JOB_REASON_CONSTRAINT_DEVICE_IDLE"
		);
	}
	inline jint JobScheduler::PENDING_JOB_REASON_CONSTRAINT_MINIMUM_LATENCY()
	{
		return getStaticField<jint>(
			"android.app.job.JobScheduler",
			"PENDING_JOB_REASON_CONSTRAINT_MINIMUM_LATENCY"
		);
	}
	inline jint JobScheduler::PENDING_JOB_REASON_CONSTRAINT_PREFETCH()
	{
		return getStaticField<jint>(
			"android.app.job.JobScheduler",
			"PENDING_JOB_REASON_CONSTRAINT_PREFETCH"
		);
	}
	inline jint JobScheduler::PENDING_JOB_REASON_CONSTRAINT_STORAGE_NOT_LOW()
	{
		return getStaticField<jint>(
			"android.app.job.JobScheduler",
			"PENDING_JOB_REASON_CONSTRAINT_STORAGE_NOT_LOW"
		);
	}
	inline jint JobScheduler::PENDING_JOB_REASON_DEVICE_STATE()
	{
		return getStaticField<jint>(
			"android.app.job.JobScheduler",
			"PENDING_JOB_REASON_DEVICE_STATE"
		);
	}
	inline jint JobScheduler::PENDING_JOB_REASON_EXECUTING()
	{
		return getStaticField<jint>(
			"android.app.job.JobScheduler",
			"PENDING_JOB_REASON_EXECUTING"
		);
	}
	inline jint JobScheduler::PENDING_JOB_REASON_INVALID_JOB_ID()
	{
		return getStaticField<jint>(
			"android.app.job.JobScheduler",
			"PENDING_JOB_REASON_INVALID_JOB_ID"
		);
	}
	inline jint JobScheduler::PENDING_JOB_REASON_JOB_SCHEDULER_OPTIMIZATION()
	{
		return getStaticField<jint>(
			"android.app.job.JobScheduler",
			"PENDING_JOB_REASON_JOB_SCHEDULER_OPTIMIZATION"
		);
	}
	inline jint JobScheduler::PENDING_JOB_REASON_QUOTA()
	{
		return getStaticField<jint>(
			"android.app.job.JobScheduler",
			"PENDING_JOB_REASON_QUOTA"
		);
	}
	inline jint JobScheduler::PENDING_JOB_REASON_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.app.job.JobScheduler",
			"PENDING_JOB_REASON_UNDEFINED"
		);
	}
	inline jint JobScheduler::PENDING_JOB_REASON_USER()
	{
		return getStaticField<jint>(
			"android.app.job.JobScheduler",
			"PENDING_JOB_REASON_USER"
		);
	}
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
	inline jboolean JobScheduler::canRunUserInitiatedJobs() const
	{
		return callMethod<jboolean>(
			"canRunUserInitiatedJobs",
			"()Z"
		);
	}
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
	inline void JobScheduler::cancelInAllNamespaces() const
	{
		callMethod<void>(
			"cancelInAllNamespaces",
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
	inline android::app::job::JobScheduler JobScheduler::forNamespace(JString arg0) const
	{
		return callObjectMethod(
			"forNamespace",
			"(Ljava/lang/String;)Landroid/app/job/JobScheduler;",
			arg0.object<jstring>()
		);
	}
	inline JObject JobScheduler::getAllPendingJobs() const
	{
		return callObjectMethod(
			"getAllPendingJobs",
			"()Ljava/util/List;"
		);
	}
	inline JString JobScheduler::getNamespace() const
	{
		return callObjectMethod(
			"getNamespace",
			"()Ljava/lang/String;"
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
	inline jint JobScheduler::getPendingJobReason(jint arg0) const
	{
		return callMethod<jint>(
			"getPendingJobReason",
			"(I)I",
			arg0
		);
	}
	inline JObject JobScheduler::getPendingJobsInAllNamespaces() const
	{
		return callObjectMethod(
			"getPendingJobsInAllNamespaces",
			"()Ljava/util/Map;"
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
