#pragma once

#include "../AbstractQueue.hpp"

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
namespace java::util::concurrent::locks
{
	class ReentrantLock;
}

namespace java::util::concurrent
{
	class LinkedBlockingDeque : public java::util::AbstractQueue
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LinkedBlockingDeque(const char *className, const char *sig, Ts...agv) : java::util::AbstractQueue(className, sig, std::forward<Ts>(agv)...) {}
		LinkedBlockingDeque(QJniObject obj);
		
		// Constructors
		LinkedBlockingDeque();
		LinkedBlockingDeque(jint arg0);
		LinkedBlockingDeque(JObject arg0);
		
		// Methods
		jboolean add(JObject arg0) const;
		jboolean addAll(JObject arg0) const;
		void addFirst(JObject arg0) const;
		void addLast(JObject arg0) const;
		void clear() const;
		jboolean contains(JObject arg0) const;
		JObject descendingIterator() const;
		jint drainTo(JObject arg0) const;
		jint drainTo(JObject arg0, jint arg1) const;
		JObject element() const;
		void forEach(JObject arg0) const;
		JObject getFirst() const;
		JObject getLast() const;
		JObject iterator() const;
		jboolean offer(JObject arg0) const;
		jboolean offer(JObject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2) const;
		jboolean offerFirst(JObject arg0) const;
		jboolean offerFirst(JObject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2) const;
		jboolean offerLast(JObject arg0) const;
		jboolean offerLast(JObject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2) const;
		JObject peek() const;
		JObject peekFirst() const;
		JObject peekLast() const;
		JObject poll() const;
		JObject poll(jlong arg0, java::util::concurrent::TimeUnit arg1) const;
		JObject pollFirst() const;
		JObject pollFirst(jlong arg0, java::util::concurrent::TimeUnit arg1) const;
		JObject pollLast() const;
		JObject pollLast(jlong arg0, java::util::concurrent::TimeUnit arg1) const;
		JObject pop() const;
		void push(JObject arg0) const;
		void put(JObject arg0) const;
		void putFirst(JObject arg0) const;
		void putLast(JObject arg0) const;
		jint remainingCapacity() const;
		jboolean remove(JObject arg0) const;
		JObject remove() const;
		jboolean removeAll(JObject arg0) const;
		JObject removeFirst() const;
		jboolean removeFirstOccurrence(JObject arg0) const;
		jboolean removeIf(JObject arg0) const;
		JObject removeLast() const;
		jboolean removeLastOccurrence(JObject arg0) const;
		jboolean retainAll(JObject arg0) const;
		jint size() const;
		JObject spliterator() const;
		JObject take() const;
		JObject takeFirst() const;
		JObject takeLast() const;
		JObjectArray toArray() const;
		JObjectArray toArray(JObjectArray arg0) const;
		JString toString() const;
	};
} // namespace java::util::concurrent

