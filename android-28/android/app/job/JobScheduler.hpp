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

namespace android::app::job
{
	class JobScheduler : public JObject
	{
	public:
		// Fields
		static jint RESULT_FAILURE();
		static jint RESULT_SUCCESS();
		
		// QJniObject forward
		template<typename ...Ts> explicit JobScheduler(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		JobScheduler(QJniObject obj);
		
		// Constructors
		JobScheduler();
		
		// Methods
		void cancel(jint arg0) const;
		void cancelAll() const;
		jint enqueue(android::app::job::JobInfo arg0, android::app::job::JobWorkItem arg1) const;
		JObject getAllPendingJobs() const;
		android::app::job::JobInfo getPendingJob(jint arg0) const;
		jint schedule(android::app::job::JobInfo arg0) const;
	};
} // namespace android::app::job

