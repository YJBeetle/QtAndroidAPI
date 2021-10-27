#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace java::util::concurrent
{
	class TimeUnit;
}
namespace java::util::concurrent::locks
{
	class ReentrantReadWriteLock;
}

namespace java::util::concurrent::locks
{
	class ReentrantReadWriteLock_WriteLock : public __JniBaseClass
	{
	public:
		// Fields
		
		ReentrantReadWriteLock_WriteLock(QAndroidJniObject obj);
		// Constructors
		ReentrantReadWriteLock_WriteLock() = default;
		
		// Methods
		jint getHoldCount();
		jboolean isHeldByCurrentThread();
		void lock();
		void lockInterruptibly();
		QAndroidJniObject newCondition();
		jstring toString();
		jboolean tryLock();
		jboolean tryLock(jlong arg0, java::util::concurrent::TimeUnit arg1);
		void unlock();
	};
} // namespace java::util::concurrent::locks

