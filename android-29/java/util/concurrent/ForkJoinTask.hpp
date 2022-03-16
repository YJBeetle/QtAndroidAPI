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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ForkJoinTask(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ForkJoinTask(QAndroidJniObject obj) : JObject(obj) {}
		
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
		jboolean cancel(jboolean arg0) const;
		jboolean compareAndSetForkJoinTaskTag(jshort arg0, jshort arg1) const;
		void complete(JObject arg0) const;
		void completeExceptionally(JThrowable arg0) const;
		java::util::concurrent::ForkJoinTask fork() const;
		JObject get() const;
		JObject get(jlong arg0, java::util::concurrent::TimeUnit arg1) const;
		JThrowable getException() const;
		jshort getForkJoinTaskTag() const;
		JObject getRawResult() const;
		JObject invoke() const;
		jboolean isCancelled() const;
		jboolean isCompletedAbnormally() const;
		jboolean isCompletedNormally() const;
		jboolean isDone() const;
		JObject join() const;
		void quietlyComplete() const;
		void quietlyInvoke() const;
		void quietlyJoin() const;
		void reinitialize() const;
		jshort setForkJoinTaskTag(jshort arg0) const;
		jboolean tryUnfork() const;
	};
} // namespace java::util::concurrent

