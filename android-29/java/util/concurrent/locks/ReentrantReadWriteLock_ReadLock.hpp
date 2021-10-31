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
	class ReentrantReadWriteLock_ReadLock : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ReentrantReadWriteLock_ReadLock(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ReentrantReadWriteLock_ReadLock(QJniObject obj);
		
		// Constructors
		
		// Methods
		void lock();
		void lockInterruptibly();
		__JniBaseClass newCondition();
		jstring toString();
		jboolean tryLock();
		jboolean tryLock(jlong arg0, java::util::concurrent::TimeUnit arg1);
		void unlock();
	};
} // namespace java::util::concurrent::locks

