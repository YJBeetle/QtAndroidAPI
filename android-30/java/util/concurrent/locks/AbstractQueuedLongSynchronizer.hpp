#pragma once

#include "../../../../__JniBaseClass.hpp"
#include "./AbstractOwnableSynchronizer.hpp"

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
		void acquire(jlong arg0);
		void acquireInterruptibly(jlong arg0);
		void acquireShared(jlong arg0);
		void acquireSharedInterruptibly(jlong arg0);
		__JniBaseClass getExclusiveQueuedThreads();
		java::lang::Thread getFirstQueuedThread();
		jint getQueueLength();
		__JniBaseClass getQueuedThreads();
		__JniBaseClass getSharedQueuedThreads();
		jint getWaitQueueLength(java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject arg0);
		__JniBaseClass getWaitingThreads(java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject arg0);
		jboolean hasContended();
		jboolean hasQueuedPredecessors();
		jboolean hasQueuedThreads();
		jboolean hasWaiters(java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject arg0);
		jboolean isQueued(java::lang::Thread arg0);
		jboolean owns(java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject arg0);
		jboolean release(jlong arg0);
		jboolean releaseShared(jlong arg0);
		jstring toString();
		jboolean tryAcquireNanos(jlong arg0, jlong arg1);
		jboolean tryAcquireSharedNanos(jlong arg0, jlong arg1);
	};
} // namespace java::util::concurrent::locks

