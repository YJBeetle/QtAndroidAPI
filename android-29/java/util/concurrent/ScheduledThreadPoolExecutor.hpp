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
		void execute(JObject arg0) const;
		jboolean getContinueExistingPeriodicTasksAfterShutdownPolicy() const;
		jboolean getExecuteExistingDelayedTasksAfterShutdownPolicy() const;
		JObject getQueue() const;
		jboolean getRemoveOnCancelPolicy() const;
		JObject schedule(JObject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2) const;
		JObject scheduleAtFixedRate(JObject arg0, jlong arg1, jlong arg2, java::util::concurrent::TimeUnit arg3) const;
		JObject scheduleWithFixedDelay(JObject arg0, jlong arg1, jlong arg2, java::util::concurrent::TimeUnit arg3) const;
		void setContinueExistingPeriodicTasksAfterShutdownPolicy(jboolean arg0) const;
		void setExecuteExistingDelayedTasksAfterShutdownPolicy(jboolean arg0) const;
		void setRemoveOnCancelPolicy(jboolean arg0) const;
		void shutdown() const;
		JObject shutdownNow() const;
		JObject submit(JObject arg0) const;
		JObject submit(JObject arg0, JObject arg1) const;
	};
} // namespace java::util::concurrent

