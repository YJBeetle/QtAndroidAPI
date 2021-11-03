#pragma once

#include "./ThreadPoolExecutor.hpp"

class JObject;
namespace java::util::concurrent
{
	class TimeUnit;
}
namespace java::util::concurrent::atomic
{
	class AtomicLong;
}

namespace java::util::concurrent
{
	class ScheduledThreadPoolExecutor : public java::util::concurrent::ThreadPoolExecutor
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ScheduledThreadPoolExecutor(const char *className, const char *sig, Ts...agv) : java::util::concurrent::ThreadPoolExecutor(className, sig, std::forward<Ts>(agv)...) {}
		ScheduledThreadPoolExecutor(QAndroidJniObject obj);
		
		// Constructors
		ScheduledThreadPoolExecutor(jint arg0);
		ScheduledThreadPoolExecutor(jint arg0, JObject arg1);
		ScheduledThreadPoolExecutor(jint arg0, JObject arg1, JObject arg2);
		
		// Methods
		void execute(JObject arg0);
		jboolean getContinueExistingPeriodicTasksAfterShutdownPolicy();
		jboolean getExecuteExistingDelayedTasksAfterShutdownPolicy();
		JObject getQueue();
		jboolean getRemoveOnCancelPolicy();
		JObject schedule(JObject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2);
		JObject scheduleAtFixedRate(JObject arg0, jlong arg1, jlong arg2, java::util::concurrent::TimeUnit arg3);
		JObject scheduleWithFixedDelay(JObject arg0, jlong arg1, jlong arg2, java::util::concurrent::TimeUnit arg3);
		void setContinueExistingPeriodicTasksAfterShutdownPolicy(jboolean arg0);
		void setExecuteExistingDelayedTasksAfterShutdownPolicy(jboolean arg0);
		void setRemoveOnCancelPolicy(jboolean arg0);
		void shutdown();
		JObject shutdownNow();
		JObject submit(JObject arg0);
		JObject submit(JObject arg0, JObject arg1);
	};
} // namespace java::util::concurrent

