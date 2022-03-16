#pragma once

#include "../../../../JObject.hpp"

class JString;
namespace java::lang
{
	class Thread;
}
namespace java::util::concurrent
{
	class TimeUnit;
}

namespace java::util::concurrent::locks
{
	class ReentrantLock : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ReentrantLock(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ReentrantLock(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		ReentrantLock();
		ReentrantLock(jboolean arg0);
		
		// Methods
		jint getHoldCount() const;
		jint getQueueLength() const;
		jint getWaitQueueLength(JObject arg0) const;
		jboolean hasQueuedThread(java::lang::Thread arg0) const;
		jboolean hasQueuedThreads() const;
		jboolean hasWaiters(JObject arg0) const;
		jboolean isFair() const;
		jboolean isHeldByCurrentThread() const;
		jboolean isLocked() const;
		void lock() const;
		void lockInterruptibly() const;
		JObject newCondition() const;
		JString toString() const;
		jboolean tryLock() const;
		jboolean tryLock(jlong arg0, java::util::concurrent::TimeUnit arg1) const;
		void unlock() const;
	};
} // namespace java::util::concurrent::locks

