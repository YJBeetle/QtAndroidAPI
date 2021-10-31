#pragma once

#include "../../../../__JniBaseClass.hpp"

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
	class ReentrantLock : public __JniBaseClass
	{
	public:
		// Fields
		
		ReentrantLock(QAndroidJniObject obj);
		// Constructors
		ReentrantLock();
		ReentrantLock(jboolean arg0);
		
		// Methods
		jint getHoldCount();
		jint getQueueLength();
		jint getWaitQueueLength(__JniBaseClass arg0);
		jboolean hasQueuedThread(java::lang::Thread arg0);
		jboolean hasQueuedThreads();
		jboolean hasWaiters(__JniBaseClass arg0);
		jboolean isFair();
		jboolean isHeldByCurrentThread();
		jboolean isLocked();
		void lock();
		void lockInterruptibly();
		QAndroidJniObject newCondition();
		jstring toString();
		jboolean tryLock();
		jboolean tryLock(jlong arg0, java::util::concurrent::TimeUnit arg1);
		void unlock();
	};
} // namespace java::util::concurrent::locks

