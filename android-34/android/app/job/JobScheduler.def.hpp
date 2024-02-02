#pragma once

#include "../../../JObject.hpp"

namespace android::app::job
{
	class JobInfo;
}
namespace android::app::job
{
	class JobWorkItem;
}
class JString;

namespace android::app::job
{
	class JobScheduler : public JObject
	{
	public:
		// Fields
		static jint PENDING_JOB_REASON_APP();
		static jint PENDING_JOB_REASON_APP_STANDBY();
		static jint PENDING_JOB_REASON_BACKGROUND_RESTRICTION();
		static jint PENDING_JOB_REASON_CONSTRAINT_BATTERY_NOT_LOW();
		static jint PENDING_JOB_REASON_CONSTRAINT_CHARGING();
		static jint PENDING_JOB_REASON_CONSTRAINT_CONNECTIVITY();
		static jint PENDING_JOB_REASON_CONSTRAINT_CONTENT_TRIGGER();
		static jint PENDING_JOB_REASON_CONSTRAINT_DEVICE_IDLE();
		static jint PENDING_JOB_REASON_CONSTRAINT_MINIMUM_LATENCY();
		static jint PENDING_JOB_REASON_CONSTRAINT_PREFETCH();
		static jint PENDING_JOB_REASON_CONSTRAINT_STORAGE_NOT_LOW();
		static jint PENDING_JOB_REASON_DEVICE_STATE();
		static jint PENDING_JOB_REASON_EXECUTING();
		static jint PENDING_JOB_REASON_INVALID_JOB_ID();
		static jint PENDING_JOB_REASON_JOB_SCHEDULER_OPTIMIZATION();
		static jint PENDING_JOB_REASON_QUOTA();
		static jint PENDING_JOB_REASON_UNDEFINED();
		static jint PENDING_JOB_REASON_USER();
		static jint RESULT_FAILURE();
		static jint RESULT_SUCCESS();
		
		// QJniObject forward
		template<typename ...Ts> explicit JobScheduler(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		JobScheduler(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		JobScheduler();
		
		// Methods
		jboolean canRunUserInitiatedJobs() const;
		void cancel(jint arg0) const;
		void cancelAll() const;
		void cancelInAllNamespaces() const;
		jint enqueue(android::app::job::JobInfo arg0, android::app::job::JobWorkItem arg1) const;
		android::app::job::JobScheduler forNamespace(JString arg0) const;
		JObject getAllPendingJobs() const;
		JString getNamespace() const;
		android::app::job::JobInfo getPendingJob(jint arg0) const;
		jint getPendingJobReason(jint arg0) const;
		JObject getPendingJobsInAllNamespaces() const;
		jint schedule(android::app::job::JobInfo arg0) const;
	};
} // namespace android::app::job

