#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::util::concurrent
{
	class TimeUnit;
}

namespace java::util::concurrent
{
	class Semaphore : public __JniBaseClass
	{
	public:
		// Fields
		
		Semaphore(QAndroidJniObject obj);
		// Constructors
		Semaphore(jint &arg0);
		Semaphore(jint &arg0, jboolean &arg1);
		Semaphore() = default;
		
		// Methods
		void acquire();
		void acquire(jint arg0);
		void acquireUninterruptibly();
		void acquireUninterruptibly(jint arg0);
		jint availablePermits();
		jint drainPermits();
		jint getQueueLength();
		jboolean hasQueuedThreads();
		jboolean isFair();
		void release();
		void release(jint arg0);
		jstring toString();
		jboolean tryAcquire();
		jboolean tryAcquire(jint arg0);
		jboolean tryAcquire(jlong arg0, java::util::concurrent::TimeUnit arg1);
		jboolean tryAcquire(jint arg0, jlong arg1, java::util::concurrent::TimeUnit arg2);
	};
} // namespace java::util::concurrent

