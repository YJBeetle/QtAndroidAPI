#pragma once

#include "./AbstractExecutorService.def.hpp"

class JArray;
class JArray;
class JObject;
namespace java::lang
{
	class RuntimePermission;
}
class JString;
class JThrowable;
namespace java::security
{
	class AccessControlContext;
}
namespace java::util::concurrent
{
	class CountedCompleter;
}
namespace java::util::concurrent
{
	class ForkJoinTask;
}
namespace java::util::concurrent
{
	class ForkJoinWorkerThread;
}
namespace java::util::concurrent
{
	class TimeUnit;
}

namespace java::util::concurrent
{
	class ForkJoinPool : public java::util::concurrent::AbstractExecutorService
	{
	public:
		// Fields
		static JObject defaultForkJoinWorkerThreadFactory();
		
		// QJniObject forward
		template<typename ...Ts> explicit ForkJoinPool(const char *className, const char *sig, Ts...agv) : java::util::concurrent::AbstractExecutorService(className, sig, std::forward<Ts>(agv)...) {}
		ForkJoinPool(QJniObject obj) : java::util::concurrent::AbstractExecutorService(obj) {}
		
		// Constructors
		ForkJoinPool();
		ForkJoinPool(jint arg0);
		ForkJoinPool(jint arg0, JObject arg1, JObject arg2, jboolean arg3);
		ForkJoinPool(jint arg0, JObject arg1, JObject arg2, jboolean arg3, jint arg4, jint arg5, jint arg6, JObject arg7, jlong arg8, java::util::concurrent::TimeUnit arg9);
		
		// Methods
		static java::util::concurrent::ForkJoinPool commonPool();
		static jint getCommonPoolParallelism();
		static void managedBlock(JObject arg0);
		jboolean awaitQuiescence(jlong arg0, java::util::concurrent::TimeUnit arg1) const;
		jboolean awaitTermination(jlong arg0, java::util::concurrent::TimeUnit arg1) const;
		void execute(JObject arg0) const;
		void execute(java::util::concurrent::ForkJoinTask arg0) const;
		jint getActiveThreadCount() const;
		jboolean getAsyncMode() const;
		JObject getFactory() const;
		jint getParallelism() const;
		jint getPoolSize() const;
		jint getQueuedSubmissionCount() const;
		jlong getQueuedTaskCount() const;
		jint getRunningThreadCount() const;
		jlong getStealCount() const;
		JObject getUncaughtExceptionHandler() const;
		jboolean hasQueuedSubmissions() const;
		JObject invoke(java::util::concurrent::ForkJoinTask arg0) const;
		JObject invokeAll(JObject arg0) const;
		jboolean isQuiescent() const;
		jboolean isShutdown() const;
		jboolean isTerminated() const;
		jboolean isTerminating() const;
		void shutdown() const;
		JObject shutdownNow() const;
		java::util::concurrent::ForkJoinTask submit(JObject arg0) const;
		java::util::concurrent::ForkJoinTask submit(java::util::concurrent::ForkJoinTask arg0) const;
		java::util::concurrent::ForkJoinTask submit(JObject arg0, JObject arg1) const;
		JString toString() const;
	};
} // namespace java::util::concurrent

