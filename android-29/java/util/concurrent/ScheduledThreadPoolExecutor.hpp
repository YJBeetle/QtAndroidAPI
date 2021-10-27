#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./AbstractExecutorService.hpp"
#include "./ThreadPoolExecutor.hpp"

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
		
		ScheduledThreadPoolExecutor(QAndroidJniObject obj);
		// Constructors
		ScheduledThreadPoolExecutor(jint &arg0);
		ScheduledThreadPoolExecutor(jint &arg0, __JniBaseClass &arg1);
		ScheduledThreadPoolExecutor(jint &arg0, __JniBaseClass &arg1, __JniBaseClass &arg2);
		ScheduledThreadPoolExecutor() = default;
		
		// Methods
		void execute(__JniBaseClass arg0);
		jboolean getContinueExistingPeriodicTasksAfterShutdownPolicy();
		jboolean getExecuteExistingDelayedTasksAfterShutdownPolicy();
		QAndroidJniObject getQueue();
		jboolean getRemoveOnCancelPolicy();
		QAndroidJniObject schedule(__JniBaseClass arg0, jlong arg1, java::util::concurrent::TimeUnit arg2);
		QAndroidJniObject scheduleAtFixedRate(__JniBaseClass arg0, jlong arg1, jlong arg2, java::util::concurrent::TimeUnit arg3);
		QAndroidJniObject scheduleWithFixedDelay(__JniBaseClass arg0, jlong arg1, jlong arg2, java::util::concurrent::TimeUnit arg3);
		void setContinueExistingPeriodicTasksAfterShutdownPolicy(jboolean arg0);
		void setExecuteExistingDelayedTasksAfterShutdownPolicy(jboolean arg0);
		void setRemoveOnCancelPolicy(jboolean arg0);
		void shutdown();
		QAndroidJniObject shutdownNow();
		QAndroidJniObject submit(__JniBaseClass arg0);
		QAndroidJniObject submit(__JniBaseClass arg0, jobject arg1);
	};
} // namespace java::util::concurrent

