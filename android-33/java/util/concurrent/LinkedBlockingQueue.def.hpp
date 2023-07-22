#pragma once

#include "../AbstractQueue.def.hpp"

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
namespace java::util::concurrent
{
	class TimeUnit;
}
namespace java::util::concurrent::atomic
{
	class AtomicInteger;
}
namespace java::util::concurrent::locks
{
	class ReentrantLock;
}

namespace java::util::concurrent
{
	class LinkedBlockingQueue : public java::util::AbstractQueue
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LinkedBlockingQueue(const char *className, const char *sig, Ts...agv) : java::util::AbstractQueue(className, sig, std::forward<Ts>(agv)...) {}
		LinkedBlockingQueue(QAndroidJniObject obj) : java::util::AbstractQueue(obj) {}
		
		// Constructors
		LinkedBlockingQueue();
		LinkedBlockingQueue(jint arg0);
		LinkedBlockingQueue(JObject arg0);
		
		// Methods
		void clear() const;
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

