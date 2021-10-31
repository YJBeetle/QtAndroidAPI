#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./AbstractExecutorService.hpp"

namespace java::lang
{
	class RuntimePermission;
}
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
		static __JniBaseClass defaultForkJoinWorkerThreadFactory();
		
		// QJniObject forward
		template<typename ...Ts> explicit ForkJoinPool(const char *className, const char *sig, Ts...agv) : java::util::concurrent::AbstractExecutorService(className, sig, std::forward<Ts>(agv)...) {}
		ForkJoinPool(QJniObject obj);
		
		// Constructors
		ForkJoinPool();
		ForkJoinPool(jint arg0);
		ForkJoinPool(jint arg0, __JniBaseClass arg1, __JniBaseClass arg2, jboolean arg3);
		ForkJoinPool(jint arg0, __JniBaseClass arg1, __JniBaseClass arg2, jboolean arg3, jint arg4, jint arg5, jint arg6, __JniBaseClass arg7, jlong arg8, java::util::concurrent::TimeUnit arg9);
		
		// Methods
		static java::util::concurrent::ForkJoinPool commonPool();
		static jint getCommonPoolParallelism();
		static void managedBlock(__JniBaseClass arg0);
		jboolean awaitQuiescence(jlong arg0, java::util::concurrent::TimeUnit arg1);
		jboolean awaitTermination(jlong arg0, java::util::concurrent::TimeUnit arg1);
		void execute(__JniBaseClass arg0);
		void execute(java::util::concurrent::ForkJoinTask arg0);
		jint getActiveThreadCount();
		jboolean getAsyncMode();
		__JniBaseClass getFactory();
		jint getParallelism();
		jint getPoolSize();
		jint getQueuedSubmissionCount();
		jlong getQueuedTaskCount();
		jint getRunningThreadCount();
		jlong getStealCount();
		__JniBaseClass getUncaughtExceptionHandler();
		jboolean hasQueuedSubmissions();
		jobject invoke(java::util::concurrent::ForkJoinTask arg0);
		__JniBaseClass invokeAll(__JniBaseClass arg0);
		jboolean isQuiescent();
		jboolean isShutdown();
		jboolean isTerminated();
		jboolean isTerminating();
		void shutdown();
		__JniBaseClass shutdownNow();
		java::util::concurrent::ForkJoinTask submit(__JniBaseClass arg0);
		java::util::concurrent::ForkJoinTask submit(java::util::concurrent::ForkJoinTask arg0);
		java::util::concurrent::ForkJoinTask submit(__JniBaseClass arg0, jobject arg1);
		jstring toString();
	};
} // namespace java::util::concurrent

