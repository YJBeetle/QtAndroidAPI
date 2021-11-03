#pragma once

#include "../../../JObject.hpp"

class JArray;
class JArray;
namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
class JObject;
class JThrowable;
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
	class ForkJoinTask : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ForkJoinTask(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ForkJoinTask(QJniObject obj);
		
		// Constructors
		ForkJoinTask();
		
		// Methods
		static java::util::concurrent::ForkJoinTask adapt(JObject arg0);
		static java::util::concurrent::ForkJoinTask adapt(JObject arg0, JObject arg1);
		static java::util::concurrent::ForkJoinPool getPool();
		static jint getQueuedTaskCount();
		static jint getSurplusQueuedTaskCount();
		static void helpQuiesce();
		static jboolean inForkJoinPool();
		static JObject invokeAll(JObject arg0);
		static void invokeAll(JArray arg0);
		static void invokeAll(java::util::concurrent::ForkJoinTask arg0, java::util::concurrent::ForkJoinTask arg1);
		jboolean cancel(jboolean arg0);
		jboolean compareAndSetForkJoinTaskTag(jshort arg0, jshort arg1);
		void complete(JObject arg0);
		void completeExceptionally(JThrowable arg0);
		java::util::concurrent::ForkJoinTask fork();
		JObject get();
		JObject get(jlong arg0, java::util::concurrent::TimeUnit arg1);
		JThrowable getException();
		jshort getForkJoinTaskTag();
		JObject getRawResult();
		JObject invoke();
		jboolean isCancelled();
		jboolean isCompletedAbnormally();
		jboolean isCompletedNormally();
		jboolean isDone();
		JObject join();
		void quietlyComplete();
		void quietlyInvoke();
		void quietlyJoin();
		void reinitialize();
		jshort setForkJoinTaskTag(jshort arg0);
		jboolean tryUnfork();
	};
} // namespace java::util::concurrent

