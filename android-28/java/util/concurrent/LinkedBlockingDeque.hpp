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
		jboolean add(JObject arg0);
		jboolean addAll(JObject arg0);
		void addFirst(JObject arg0);
		void addLast(JObject arg0);
		void clear();
		jboolean contains(JObject arg0);
		JObject descendingIterator();
		jint drainTo(JObject arg0);
		jint drainTo(JObject arg0, jint arg1);
		JObject element();
		void forEach(JObject arg0);
		JObject getFirst();
		JObject getLast();
		JObject iterator();
		jboolean offer(JObject arg0);
		jboolean offer(JObject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2);
		jboolean offerFirst(JObject arg0);
		jboolean offerFirst(JObject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2);
		jboolean offerLast(JObject arg0);
		jboolean offerLast(JObject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2);
		JObject peek();
		JObject peekFirst();
		JObject peekLast();
		JObject poll();
		JObject poll(jlong arg0, java::util::concurrent::TimeUnit arg1);
		JObject pollFirst();
		JObject pollFirst(jlong arg0, java::util::concurrent::TimeUnit arg1);
		JObject pollLast();
		JObject pollLast(jlong arg0, java::util::concurrent::TimeUnit arg1);
		JObject pop();
		void push(JObject arg0);
		void put(JObject arg0);
		void putFirst(JObject arg0);
		void putLast(JObject arg0);
		jint remainingCapacity();
		jboolean remove(JObject arg0);
		JObject remove();
		jboolean removeAll(JObject arg0);
		JObject removeFirst();
		jboolean removeFirstOccurrence(JObject arg0);
		jboolean removeIf(JObject arg0);
		JObject removeLast();
		jboolean removeLastOccurrence(JObject arg0);
		jboolean retainAll(JObject arg0);
		jint size();
		JObject spliterator();
		JObject take();
		JObject takeFirst();
		JObject takeLast();
		JObjectArray toArray();
		JObjectArray toArray(JObjectArray arg0);
		JString toString();
	};
} // namespace java::util::concurrent

