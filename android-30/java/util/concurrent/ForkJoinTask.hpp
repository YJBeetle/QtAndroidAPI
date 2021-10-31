#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
namespace java::lang::ref
{
	class ReferenceQueue;
}
namespace java::util::concurrent
{
	class ForkJoinPool;
}
namespace java::util::concurrent
{
	class TimeUnit;
}
namespace java::util::concurrent::locks
{
	class ReentrantLock;
}

namespace java::util::concurrent
{
	class ForkJoinTask : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ForkJoinTask(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ForkJoinTask(QJniObject obj);
		
		// Constructors
		ForkJoinTask();
		
		// Methods
		static java::util::concurrent::ForkJoinTask adapt(__JniBaseClass arg0);
		static java::util::concurrent::ForkJoinTask adapt(__JniBaseClass arg0, jobject arg1);
		static java::util::concurrent::ForkJoinPool getPool();
		static jint getQueuedTaskCount();
		static jint getSurplusQueuedTaskCount();
		static void helpQuiesce();
		static jboolean inForkJoinPool();
		static __JniBaseClass invokeAll(__JniBaseClass arg0);
		static void invokeAll(jarray arg0);
		static void invokeAll(java::util::concurrent::ForkJoinTask arg0, java::util::concurrent::ForkJoinTask arg1);
		jboolean cancel(jboolean arg0);
		jboolean compareAndSetForkJoinTaskTag(jshort arg0, jshort arg1);
		void complete(jobject arg0);
		void completeExceptionally(jthrowable arg0);
		java::util::concurrent::ForkJoinTask fork();
		jobject get();
		jobject get(jlong arg0, java::util::concurrent::TimeUnit arg1);
		jthrowable getException();
		jshort getForkJoinTaskTag();
		jobject getRawResult();
		jobject invoke();
		jboolean isCancelled();
		jboolean isCompletedAbnormally();
		jboolean isCompletedNormally();
		jboolean isDone();
		jobject join();
		void quietlyComplete();
		void quietlyInvoke();
		void quietlyJoin();
		void reinitialize();
		jshort setForkJoinTaskTag(jshort arg0);
		jboolean tryUnfork();
	};
} // namespace java::util::concurrent

