#pragma once

#include "../AbstractQueue.def.hpp"

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
		DelayQueue(QAndroidJniObject obj) : java::util::AbstractQueue(obj) {}
		
		// Constructors
		DelayQueue();
		DelayQueue(JObject arg0);
		
		// Methods
		jboolean add(JObject arg0) const;
		void clear() const;
		jint drainTo(JObject arg0) const;
		jint drainTo(JObject arg0, jint arg1) const;
		JObject iterator() const;
		jboolean offer(JObject arg0) const;
		jboolean offer(JObject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2) const;
		JObject peek() const;
		JObject poll() const;
		JObject poll(jlong arg0, java::util::concurrent::TimeUnit arg1) const;
		void put(JObject arg0) const;
		jint remainingCapacity() const;
		jboolean remove(JObject arg0) const;
		jint size() const;
		JObject take() const;
		JObjectArray toArray() const;
		JObjectArray toArray(JObjectArray arg0) const;
	};
} // namespace java::util::concurrent

