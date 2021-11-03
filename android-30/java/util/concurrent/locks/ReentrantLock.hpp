#pragma once

#include "../../../../JObject.hpp"

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
		ReentrantLock(QAndroidJniObject obj);
		
		// Constructors
		ReentrantLock();
		ReentrantLock(jboolean arg0);
		
		// Methods
		jint getHoldCount();
		jint getQueueLength();
		jint getWaitQueueLength(JObject arg0);
		jboolean hasQueuedThread(java::lang::Thread arg0);
		jboolean hasQueuedThreads();
		jboolean hasWaiters(JObject arg0);
		jboolean isFair();
		jboolean isHeldByCurrentThread();
		jboolean isLocked();
		void lock();
		void lockInterruptibly();
		JObject newCondition();
		jstring toString();
		jboolean tryLock();
		jboolean tryLock(jlong arg0, java::util::concurrent::TimeUnit arg1);
		void unlock();
	};
} // namespace java::util::concurrent::locks

