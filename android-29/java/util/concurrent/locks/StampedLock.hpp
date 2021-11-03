#pragma once

#include "../../../../JObject.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::util::concurrent
{
	class TimeUnit;
}

namespace java::util::concurrent::locks
{
	class StampedLock : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StampedLock(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StampedLock(QAndroidJniObject obj);
		
		// Constructors
		StampedLock();
		
		// Methods
		static jboolean isLockStamp(jlong arg0);
		static jboolean isOptimisticReadStamp(jlong arg0);
		static jboolean isReadLockStamp(jlong arg0);
		static jboolean isWriteLockStamp(jlong arg0);
		JObject asReadLock();
		JObject asReadWriteLock();
		JObject asWriteLock();
		jint getReadLockCount();
		jboolean isReadLocked();
		jboolean isWriteLocked();
		jlong readLock();
		jlong readLockInterruptibly();
		jstring toString();
		jlong tryConvertToOptimisticRead(jlong arg0);
		jlong tryConvertToReadLock(jlong arg0);
		jlong tryConvertToWriteLock(jlong arg0);
		jlong tryOptimisticRead();
		jlong tryReadLock();
		jlong tryReadLock(jlong arg0, java::util::concurrent::TimeUnit arg1);
		jboolean tryUnlockRead();
		jboolean tryUnlockWrite();
		jlong tryWriteLock();
		jlong tryWriteLock(jlong arg0, java::util::concurrent::TimeUnit arg1);
		void unlock(jlong arg0);
		void unlockRead(jlong arg0);
		void unlockWrite(jlong arg0);
		jboolean validate(jlong arg0);
		jlong writeLock();
		jlong writeLockInterruptibly();
	};
} // namespace java::util::concurrent::locks

