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
	class AbstractQueuedSynchronizer;
}

namespace java::util::concurrent::locks
{
	class AbstractQueuedSynchronizer_ConditionObject : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AbstractQueuedSynchronizer_ConditionObject(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AbstractQueuedSynchronizer_ConditionObject(QJniObject obj);
		
		// Constructors
		AbstractQueuedSynchronizer_ConditionObject(java::util::concurrent::locks::AbstractQueuedSynchronizer arg0);
		
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

