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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ReentrantReadWriteLock_WriteLock(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ReentrantReadWriteLock_WriteLock(QAndroidJniObject obj);
		
		// Constructors
		
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

