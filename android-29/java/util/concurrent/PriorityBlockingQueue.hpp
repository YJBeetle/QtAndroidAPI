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
		
		// QJniObject forward
		template<typename ...Ts> explicit PriorityBlockingQueue(const char *className, const char *sig, Ts...agv) : java::util::AbstractQueue(className, sig, std::forward<Ts>(agv)...) {}
		PriorityBlockingQueue(QJniObject obj);
		
		// Constructors
		PriorityBlockingQueue();
		PriorityBlockingQueue(jint arg0);
		PriorityBlockingQueue(JObject arg0);
		PriorityBlockingQueue(jint arg0, JObject arg1);
		
		// Methods
		jboolean add(JObject arg0);
		void clear();
		JObject comparator();
		jboolean contains(JObject arg0);
		jint drainTo(JObject arg0);
		jint drainTo(JObject arg0, jint arg1);
		void forEach(JObject arg0);
		JObject iterator();
		jboolean offer(JObject arg0);
		jboolean offer(JObject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2);
		JObject peek();
		JObject poll();
		JObject poll(jlong arg0, java::util::concurrent::TimeUnit arg1);
		void put(JObject arg0);
		jint remainingCapacity();
		jboolean remove(JObject arg0);
		jboolean removeAll(JObject arg0);
		jboolean removeIf(JObject arg0);
		jboolean retainAll(JObject arg0);
		jint size();
		JObject spliterator();
		JObject take();
		JObjectArray toArray();
		JObjectArray toArray(JObjectArray arg0);
		JString toString();
	};
} // namespace java::util::concurrent

