#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./AbstractExecutorService.hpp"

namespace java::lang
{
	class RuntimePermission;
}
namespace java::lang
{
	class Thread;
}
namespace java::util
{
	class HashSet;
}
namespace java::util::concurrent
{
	class TimeUnit;
}
namespace java::util::concurrent::atomic
{
	class AtomicInteger;
}
namespace java::util::concurrent::locks
{
	class ReentrantLock;
}

namespace java::util::concurrent
{
	class ThreadPoolExecutor : public java::util::concurrent::AbstractExecutorService
	{
	public:
		// Fields
		
		ThreadPoolExecutor(QAndroidJniObject obj);
		// Constructors
		ThreadPoolExecutor(jint arg0, jint arg1, jlong arg2, java::util::concurrent::TimeUnit arg3, __JniBaseClass arg4);
		ThreadPoolExecutor(jint arg0, jint arg1, jlong arg2, java::util::concurrent::TimeUnit arg3, __JniBaseClass arg4, __JniBaseClass arg5);
		ThreadPoolExecutor(jint arg0, jint arg1, jlong arg2, java::util::concurrent::TimeUnit arg3, __JniBaseClass arg4, __JniBaseClass arg5, __JniBaseClass arg6);
		ThreadPoolExecutor() = default;
		
		// Methods
		void allowCoreThreadTimeOut(jboolean arg0);
		jboolean allowsCoreThreadTimeOut();
		jboolean awaitTermination(jlong arg0, java::util::concurrent::TimeUnit arg1);
		void execute(__JniBaseClass arg0);
		jint getActiveCount();
		jlong getCompletedTaskCount();
		jint getCorePoolSize();
		jlong getKeepAliveTime(java::util::concurrent::TimeUnit arg0);
		jint getLargestPoolSize();
		jint getMaximumPoolSize();
		jint getPoolSize();
		QAndroidJniObject getQueue();
		QAndroidJniObject getRejectedExecutionHandler();
		jlong getTaskCount();
		QAndroidJniObject getThreadFactory();
		jboolean isShutdown();
		jboolean isTerminated();
		jboolean isTerminating();
		jint prestartAllCoreThreads();
		jboolean prestartCoreThread();
		void purge();
		jboolean remove(__JniBaseClass arg0);
		void setCorePoolSize(jint arg0);
		void setKeepAliveTime(jlong arg0, java::util::concurrent::TimeUnit arg1);
		void setMaximumPoolSize(jint arg0);
		void setRejectedExecutionHandler(__JniBaseClass arg0);
		void setThreadFactory(__JniBaseClass arg0);
		void shutdown();
		QAndroidJniObject shutdownNow();
		jstring toString();
	};
} // namespace java::util::concurrent

