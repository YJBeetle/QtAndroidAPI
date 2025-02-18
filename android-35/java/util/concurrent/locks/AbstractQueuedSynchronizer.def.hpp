#pragma once

#include "./AbstractOwnableSynchronizer.def.hpp"

class JString;
namespace java::lang
{
	class Thread;
}
namespace java::util::concurrent::locks
{
	class AbstractQueuedSynchronizer_ConditionObject;
}

namespace java::util::concurrent::locks
{
	class AbstractQueuedSynchronizer : public java::util::concurrent::locks::AbstractOwnableSynchronizer
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AbstractQueuedSynchronizer(const char *className, const char *sig, Ts...agv) : java::util::concurrent::locks::AbstractOwnableSynchronizer(className, sig, std::forward<Ts>(agv)...) {}
		AbstractQueuedSynchronizer(QJniObject obj) : java::util::concurrent::locks::AbstractOwnableSynchronizer(obj) {}
		
		// Constructors
		
		// Methods
		void acquire(jint arg0) const;
		void acquireInterruptibly(jint arg0) const;
		void acquireShared(jint arg0) const;
		void acquireSharedInterruptibly(jint arg0) const;
		JObject getExclusiveQueuedThreads() const;
		java::lang::Thread getFirstQueuedThread() const;
		jint getQueueLength() const;
		JObject getQueuedThreads() const;
		JObject getSharedQueuedThreads() const;
		jint getWaitQueueLength(java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject arg0) const;
		JObject getWaitingThreads(java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject arg0) const;
		jboolean hasContended() const;
		jboolean hasQueuedPredecessors() const;
		jboolean hasQueuedThreads() const;
		jboolean hasWaiters(java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject arg0) const;
		jboolean isQueued(java::lang::Thread arg0) const;
		jboolean owns(java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject arg0) const;
		jboolean release(jint arg0) const;
		jboolean releaseShared(jint arg0) const;
		JString toString() const;
		jboolean tryAcquireNanos(jint arg0, jlong arg1) const;
		jboolean tryAcquireSharedNanos(jint arg0, jlong arg1) const;
	};
} // namespace java::util::concurrent::locks

