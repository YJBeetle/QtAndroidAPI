#pragma once

#include "../../../../JObject.hpp"

class JString;
namespace java::lang
{
	class Thread;
}
namespace java::util::concurrent::locks
{
	class ReentrantReadWriteLock_ReadLock;
}
namespace java::util::concurrent::locks
{
	class ReentrantReadWriteLock_WriteLock;
}

namespace java::util::concurrent::locks
{
	class ReentrantReadWriteLock : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ReentrantReadWriteLock(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ReentrantReadWriteLock(QJniObject obj);
		
		// Constructors
		ReentrantReadWriteLock();
		ReentrantReadWriteLock(jboolean arg0);
		
		// Methods
		jint getQueueLength() const;
		jint getReadHoldCount() const;
		jint getReadLockCount() const;
		jint getWaitQueueLength(JObject arg0) const;
		jint getWriteHoldCount() const;
		jboolean hasQueuedThread(java::lang::Thread arg0) const;
		jboolean hasQueuedThreads() const;
		jboolean hasWaiters(JObject arg0) const;
		jboolean isFair() const;
		jboolean isWriteLocked() const;
		jboolean isWriteLockedByCurrentThread() const;
		java::util::concurrent::locks::ReentrantReadWriteLock_ReadLock readLock() const;
		JString toString() const;
		java::util::concurrent::locks::ReentrantReadWriteLock_WriteLock writeLock() const;
	};
} // namespace java::util::concurrent::locks

