#pragma once

#include "../../../JObject.hpp"
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ThreadPoolExecutor(const char *className, const char *sig, Ts...agv) : java::util::concurrent::AbstractExecutorService(className, sig, std::forward<Ts>(agv)...) {}
		ThreadPoolExecutor(QAndroidJniObject obj);
		
		// Constructors
		ThreadPoolExecutor(jint arg0, jint arg1, jlong arg2, java::util::concurrent::TimeUnit arg3, JObject arg4);
		ThreadPoolExecutor(jint arg0, jint arg1, jlong arg2, java::util::concurrent::TimeUnit arg3, JObject arg4, JObject arg5);
		ThreadPoolExecutor(jint arg0, jint arg1, jlong arg2, java::util::concurrent::TimeUnit arg3, JObject arg4, JObject arg5, JObject arg6);
		
		// Methods
		void allowCoreThreadTimeOut(jboolean arg0);
		jboolean allowsCoreThreadTimeOut();
		jboolean awaitTermination(jlong arg0, java::util::concurrent::TimeUnit arg1);
		void execute(JObject arg0);
		jint getActiveCount();
		jlong getCompletedTaskCount();
		jint getCorePoolSize();
		jlong getKeepAliveTime(java::util::concurrent::TimeUnit arg0);
		jint getLargestPoolSize();
		jint getMaximumPoolSize();
		jint getPoolSize();
		JObject getQueue();
		JObject getRejectedExecutionHandler();
		jlong getTaskCount();
		JObject getThreadFactory();
		jboolean isShutdown();
		jboolean isTerminated();
		jboolean isTerminating();
		jint prestartAllCoreThreads();
		jboolean prestartCoreThread();
		void purge();
		jboolean remove(JObject arg0);
		void setCorePoolSize(jint arg0);
		void setKeepAliveTime(jlong arg0, java::util::concurrent::TimeUnit arg1);
		void setMaximumPoolSize(jint arg0);
		void setRejectedExecutionHandler(JObject arg0);
		void setThreadFactory(JObject arg0);
		void shutdown();
		JObject shutdownNow();
		jstring toString();
	};
} // namespace java::util::concurrent

