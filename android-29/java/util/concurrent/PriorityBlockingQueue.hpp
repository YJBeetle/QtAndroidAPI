#pragma once

#include "../AbstractQueue.hpp"

class JLongArray;
class JObjectArray;
namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
class JObject;
class JString;
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
	class PriorityBlockingQueue : public java::util::AbstractQueue
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PriorityBlockingQueue(const char *className, const char *sig, Ts...agv) : java::util::AbstractQueue(className, sig, std::forward<Ts>(agv)...) {}
		PriorityBlockingQueue(QAndroidJniObject obj) : java::util::AbstractQueue(obj) {}
		
		// Constructors
		PriorityBlockingQueue();
		PriorityBlockingQueue(jint arg0);
		PriorityBlockingQueue(JObject arg0);
		PriorityBlockingQueue(jint arg0, JObject arg1);
		
		// Methods
		jboolean add(JObject arg0) const;
		void clear() const;
		JObject comparator() const;
		jboolean contains(JObject arg0) const;
		jint drainTo(JObject arg0) const;
		jint drainTo(JObject arg0, jint arg1) const;
		void forEach(JObject arg0) const;
		JObject iterator() const;
		jboolean offer(JObject arg0) const;
		jboolean offer(JObject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2) const;
		JObject peek() const;
		JObject poll() const;
		JObject poll(jlong arg0, java::util::concurrent::TimeUnit arg1) const;
		void put(JObject arg0) const;
		jint remainingCapacity() const;
		jboolean remove(JObject arg0) const;
		jboolean removeAll(JObject arg0) const;
		jboolean removeIf(JObject arg0) const;
		jboolean retainAll(JObject arg0) const;
		jint size() const;
		JObject spliterator() const;
		JObject take() const;
		JObjectArray toArray() const;
		JObjectArray toArray(JObjectArray arg0) const;
		JString toString() const;
	};
} // namespace java::util::concurrent

