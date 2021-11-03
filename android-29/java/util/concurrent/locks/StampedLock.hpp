#pragma once

#include "../../../../JObject.hpp"

namespace java::io
{
	class ObjectInputStream;
}
class JString;
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
		JObject asReadLock() const;
		JObject asReadWriteLock() const;
		JObject asWriteLock() const;
		jint getReadLockCount() const;
		jboolean isReadLocked() const;
		jboolean isWriteLocked() const;
		jlong readLock() const;
		jlong readLockInterruptibly() const;
		JString toString() const;
		jlong tryConvertToOptimisticRead(jlong arg0) const;
		jlong tryConvertToReadLock(jlong arg0) const;
		jlong tryConvertToWriteLock(jlong arg0) const;
		jlong tryOptimisticRead() const;
		jlong tryReadLock() const;
		jlong tryReadLock(jlong arg0, java::util::concurrent::TimeUnit arg1) const;
		jboolean tryUnlockRead() const;
		jboolean tryUnlockWrite() const;
		jlong tryWriteLock() const;
		jlong tryWriteLock(jlong arg0, java::util::concurrent::TimeUnit arg1) const;
		void unlock(jlong arg0) const;
		void unlockRead(jlong arg0) const;
		void unlockWrite(jlong arg0) const;
		jboolean validate(jlong arg0) const;
		jlong writeLock() const;
		jlong writeLockInterruptibly() const;
	};
} // namespace java::util::concurrent::locks

