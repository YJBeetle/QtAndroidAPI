#pragma once

#include "./AbstractExecutorService.hpp"

namespace java::lang
{
	class RuntimePermission;
}
class JString;
namespace java::lang
{
	class Thread;
}
class JThrowable;
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
		ThreadPoolExecutor(QAndroidJniObject obj) : java::util::concurrent::AbstractExecutorService(obj) {}
		
		// Constructors
		ThreadPoolExecutor(jint arg0, jint arg1, jlong arg2, java::util::concurrent::TimeUnit arg3, JObject arg4);
		ThreadPoolExecutor(jint arg0, jint arg1, jlong arg2, java::util::concurrent::TimeUnit arg3, JObject arg4, JObject arg5);
		ThreadPoolExecutor(jint arg0, jint arg1, jlong arg2, java::util::concurrent::TimeUnit arg3, JObject arg4, JObject arg5, JObject arg6);
		
		// Methods
		void allowCoreThreadTimeOut(jboolean arg0) const;
		jboolean allowsCoreThreadTimeOut() const;
		jboolean awaitTermination(jlong arg0, java::util::concurrent::TimeUnit arg1) const;
		void execute(JObject arg0) const;
		jint getActiveCount() const;
		jlong getCompletedTaskCount() const;
		jint getCorePoolSize() const;
		jlong getKeepAliveTime(java::util::concurrent::TimeUnit arg0) const;
		jint getLargestPoolSize() const;
		jint getMaximumPoolSize() const;
		jint getPoolSize() const;
		JObject getQueue() const;
		JObject getRejectedExecutionHandler() const;
		jlong getTaskCount() const;
		JObject getThreadFactory() const;
		jboolean isShutdown() const;
		jboolean isTerminated() const;
		jboolean isTerminating() const;
		jint prestartAllCoreThreads() const;
		jboolean prestartCoreThread() const;
		void purge() const;
		jboolean remove(JObject arg0) const;
		void setCorePoolSize(jint arg0) const;
		void setKeepAliveTime(jlong arg0, java::util::concurrent::TimeUnit arg1) const;
		void setMaximumPoolSize(jint arg0) const;
		void setRejectedExecutionHandler(JObject arg0) const;
		void setThreadFactory(JObject arg0) const;
		void shutdown() const;
		JObject shutdownNow() const;
		JString toString() const;
	};
} // namespace java::util::concurrent

