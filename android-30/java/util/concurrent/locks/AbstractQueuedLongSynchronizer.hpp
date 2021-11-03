#pragma once

#include "./AbstractOwnableSynchronizer.hpp"

class JString;
namespace java::lang
{
	class Thread;
}
namespace java::util::concurrent::locks
{
	class AbstractQueuedLongSynchronizer_ConditionObject;
}

namespace java::util::concurrent::locks
{
	class AbstractQueuedLongSynchronizer : public java::util::concurrent::locks::AbstractOwnableSynchronizer
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AbstractQueuedLongSynchronizer(const char *className, const char *sig, Ts...agv) : java::util::concurrent::locks::AbstractOwnableSynchronizer(className, sig, std::forward<Ts>(agv)...) {}
		AbstractQueuedLongSynchronizer(QAndroidJniObject obj);
		
		// Constructors
		AbstractQueuedLongSynchronizer();
		
		// Methods
		void acquire(jlong arg0) const;
		void acquireInterruptibly(jlong arg0) const;
		void acquireShared(jlong arg0) const;
		void acquireSharedInterruptibly(jlong arg0) const;
		JObject getExclusiveQueuedThreads() const;
		java::lang::Thread getFirstQueuedThread() const;
		jint getQueueLength() const;
		JObject getQueuedThreads() const;
		JObject getSharedQueuedThreads() const;
		jint getWaitQueueLength(java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject arg0) const;
		JObject getWaitingThreads(java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject arg0) const;
		jboolean hasContended() const;
		jboolean hasQueuedPredecessors() const;
		jboolean hasQueuedThreads() const;
		jboolean hasWaiters(java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject arg0) const;
		jboolean isQueued(java::lang::Thread arg0) const;
		jboolean owns(java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject arg0) const;
		jboolean release(jlong arg0) const;
		jboolean releaseShared(jlong arg0) const;
		JString toString() const;
		jboolean tryAcquireNanos(jlong arg0, jlong arg1) const;
		jboolean tryAcquireSharedNanos(jlong arg0, jlong arg1) const;
	};
} // namespace java::util::concurrent::locks

