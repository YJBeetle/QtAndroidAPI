#pragma once

#include "../../../../JObject.hpp"

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
	class AbstractQueuedLongSynchronizer_ConditionObject : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AbstractQueuedLongSynchronizer_ConditionObject(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AbstractQueuedLongSynchronizer_ConditionObject(QAndroidJniObject obj);
		
		// Constructors
		AbstractQueuedLongSynchronizer_ConditionObject(java::util::concurrent::locks::AbstractQueuedLongSynchronizer arg0);
		
		// Methods
		jboolean await(jlong arg0, java::util::concurrent::TimeUnit arg1) const;
		void await() const;
		jlong awaitNanos(jlong arg0) const;
		void awaitUninterruptibly() const;
		jboolean awaitUntil(java::util::Date arg0) const;
		void signal() const;
		void signalAll() const;
	};
} // namespace java::util::concurrent::locks

