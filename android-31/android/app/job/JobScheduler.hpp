#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class JobScheduler : public __JniBaseClass
	{
	public:
		// Fields
		static jint RESULT_FAILURE();
		static jint RESULT_SUCCESS();
		
		// QJniObject forward
		template<typename ...Ts> explicit JobScheduler(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		JobScheduler(QJniObject obj);
		
		// Constructors
		JobScheduler();
		
		// Methods
		void cancel(jint arg0);
		void cancelAll();
		jint enqueue(android::app::job::JobInfo arg0, android::app::job::JobWorkItem arg1);
		__JniBaseClass getAllPendingJobs();
		android::app::job::JobInfo getPendingJob(jint arg0);
		jint schedule(android::app::job::JobInfo arg0);
	};
} // namespace android::app::job

