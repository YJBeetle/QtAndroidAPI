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
		jint getQueueLength();
		jint getReadHoldCount();
		jint getReadLockCount();
		jint getWaitQueueLength(JObject arg0);
		jint getWriteHoldCount();
		jboolean hasQueuedThread(java::lang::Thread arg0);
		jboolean hasQueuedThreads();
		jboolean hasWaiters(JObject arg0);
		jboolean isFair();
		jboolean isWriteLocked();
		jboolean isWriteLockedByCurrentThread();
		java::util::concurrent::locks::ReentrantReadWriteLock_ReadLock readLock();
		JString toString();
		java::util::concurrent::locks::ReentrantReadWriteLock_WriteLock writeLock();
	};
} // namespace java::util::concurrent::locks

