#pragma once

#include "./AbstractExecutorService.hpp"

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
		ForkJoinPool(QJniObject obj);
		
		// Constructors
		ForkJoinPool();
		ForkJoinPool(jint arg0);
		ForkJoinPool(jint arg0, JObject arg1, JObject arg2, jboolean arg3);
		ForkJoinPool(jint arg0, JObject arg1, JObject arg2, jboolean arg3, jint arg4, jint arg5, jint arg6, JObject arg7, jlong arg8, java::util::concurrent::TimeUnit arg9);
		
		// Methods
		static java::util::concurrent::ForkJoinPool commonPool();
		static jint getCommonPoolParallelism();
		static void managedBlock(JObject arg0);
		jboolean awaitQuiescence(jlong arg0, java::util::concurrent::TimeUnit arg1);
		jboolean awaitTermination(jlong arg0, java::util::concurrent::TimeUnit arg1);
		void execute(JObject arg0);
		void execute(java::util::concurrent::ForkJoinTask arg0);
		jint getActiveThreadCount();
		jboolean getAsyncMode();
		JObject getFactory();
		jint getParallelism();
		jint getPoolSize();
		jint getQueuedSubmissionCount();
		jlong getQueuedTaskCount();
		jint getRunningThreadCount();
		jlong getStealCount();
		JObject getUncaughtExceptionHandler();
		jboolean hasQueuedSubmissions();
		JObject invoke(java::util::concurrent::ForkJoinTask arg0);
		JObject invokeAll(JObject arg0);
		jboolean isQuiescent();
		jboolean isShutdown();
		jboolean isTerminated();
		jboolean isTerminating();
		void shutdown();
		JObject shutdownNow();
		java::util::concurrent::ForkJoinTask submit(JObject arg0);
		java::util::concurrent::ForkJoinTask submit(java::util::concurrent::ForkJoinTask arg0);
		java::util::concurrent::ForkJoinTask submit(JObject arg0, JObject arg1);
		JString toString();
	};
} // namespace java::util::concurrent

