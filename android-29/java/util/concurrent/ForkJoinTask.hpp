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
		
		ForkJoinTask(QAndroidJniObject obj);
		// Constructors
		ForkJoinTask();
		
		// Methods
		static QAndroidJniObject adapt(__JniBaseClass arg0);
		static QAndroidJniObject adapt(__JniBaseClass arg0, jobject arg1);
		static QAndroidJniObject getPool();
		static jint getQueuedTaskCount();
		static jint getSurplusQueuedTaskCount();
		static void helpQuiesce();
		static jboolean inForkJoinPool();
		static QAndroidJniObject invokeAll(__JniBaseClass arg0);
		static void invokeAll(jarray arg0);
		static void invokeAll(java::util::concurrent::ForkJoinTask arg0, java::util::concurrent::ForkJoinTask arg1);
		jboolean cancel(jboolean arg0);
		jboolean compareAndSetForkJoinTaskTag(jshort arg0, jshort arg1);
		void complete(jobject arg0);
		void completeExceptionally(jthrowable arg0);
		QAndroidJniObject fork();
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

