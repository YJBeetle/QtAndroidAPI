#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace java::util
{
	class Date;
}
namespace java::util::concurrent
{
	class TimeUnit;
}
namespace java::util::concurrent::locks
{
	class AbstractQueuedLongSynchronizer;
}

namespace java::util::concurrent::locks
{
	class AbstractQueuedLongSynchronizer_ConditionObject : public __JniBaseClass
	{
	public:
		// Fields
		
		AbstractQueuedLongSynchronizer_ConditionObject(QAndroidJniObject obj);
		// Constructors
		AbstractQueuedLongSynchronizer_ConditionObject(java::util::concurrent::locks::AbstractQueuedLongSynchronizer &arg0);
		AbstractQueuedLongSynchronizer_ConditionObject() = default;
		
		// Methods
		jboolean await(jlong arg0, java::util::concurrent::TimeUnit arg1);
		void await();
		jlong awaitNanos(jlong arg0);
		void awaitUninterruptibly();
		jboolean awaitUntil(java::util::Date arg0);
		void signal();
		void signalAll();
	};
} // namespace java::util::concurrent::locks

