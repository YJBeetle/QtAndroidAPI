#pragma once

#include "../AbstractQueue.def.hpp"

class JLongArray;
class JObjectArray;
namespace java::io
{
	class ObjectInputStream;
}
class JObject;
class JString;
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
	class ArrayBlockingQueue : public java::util::AbstractQueue
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ArrayBlockingQueue(const char *className, const char *sig, Ts...agv) : java::util::AbstractQueue(className, sig, std::forward<Ts>(agv)...) {}
		ArrayBlockingQueue(QJniObject obj) : java::util::AbstractQueue(obj) {}
		
		// Constructors
		ArrayBlockingQueue(jint arg0);
		ArrayBlockingQueue(jint arg0, jboolean arg1);
		ArrayBlockingQueue(jint arg0, jboolean arg1, JObject arg2);
		
		// Methods
		jboolean add(JObject arg0) const;
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

