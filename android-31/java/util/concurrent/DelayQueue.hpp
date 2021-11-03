#pragma once

#include "../AbstractQueue.hpp"

class JObjectArray;
class JObject;
namespace java::lang
{
	class Thread;
}
namespace java::util
{
	class PriorityQueue;
}
namespace java::util::concurrent
{
	class TimeUnit;
}
namespace java::util::concurrent::locks
{
	class ReentrantLock;
}

namespace java::util::concurrent
{
	class DelayQueue : public java::util::AbstractQueue
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DelayQueue(const char *className, const char *sig, Ts...agv) : java::util::AbstractQueue(className, sig, std::forward<Ts>(agv)...) {}
		DelayQueue(QAndroidJniObject obj);
		
		// Constructors
		DelayQueue();
		DelayQueue(JObject arg0);
		
		// Methods
		jboolean add(JObject arg0);
		void clear();
		jint drainTo(JObject arg0);
		jint drainTo(JObject arg0, jint arg1);
		JObject iterator();
		jboolean offer(JObject arg0);
		jboolean offer(JObject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2);
		JObject peek();
		JObject poll();
		JObject poll(jlong arg0, java::util::concurrent::TimeUnit arg1);
		void put(JObject arg0);
		jint remainingCapacity();
		jboolean remove(JObject arg0);
		jint size();
		JObject take();
		JObjectArray toArray();
		JObjectArray toArray(JObjectArray arg0);
	};
} // namespace java::util::concurrent

