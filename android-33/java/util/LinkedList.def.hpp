#pragma once

#include "./AbstractSequentialList.def.hpp"

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
	class LinkedList : public java::util::AbstractSequentialList
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LinkedList(const char *className, const char *sig, Ts...agv) : java::util::AbstractSequentialList(className, sig, std::forward<Ts>(agv)...) {}
		LinkedList(QAndroidJniObject obj) : java::util::AbstractSequentialList(obj) {}
		
		// Constructors
		LinkedList();
		LinkedList(JObject arg0);
		
		// Methods
		jboolean add(JObject arg0) const;
		void add(jint arg0, JObject arg1) const;
		jboolean addAll(JObject arg0) const;
		jboolean addAll(jint arg0, JObject arg1) const;
		void addFirst(JObject arg0) const;
		void addLast(JObject arg0) const;
		void clear() const;
		JObject clone() const;
		jboolean contains(JObject arg0) const;
		JObject descendingIterator() const;
		JObject element() const;
		JObject get(jint arg0) const;
		JObject getFirst() const;
		JObject getLast() const;
		jint indexOf(JObject arg0) const;
		jint lastIndexOf(JObject arg0) const;
		JObject listIterator(jint arg0) const;
		jboolean offer(JObject arg0) const;
		jboolean offerFirst(JObject arg0) const;
		jboolean offerLast(JObject arg0) const;
		JObject peek() const;
		JObject peekFirst() const;
		JObject peekLast() const;
		JObject poll() const;
		JObject pollFirst() const;
		JObject pollLast() const;
		JObject pop() const;
		void push(JObject arg0) const;
		jboolean remove(JObject arg0) const;
		JObject remove() const;
		JObject remove(jint arg0) const;
		JObject removeFirst() const;
		jboolean removeFirstOccurrence(JObject arg0) const;
		JObject removeLast() const;
		jboolean removeLastOccurrence(JObject arg0) const;
		JObject set(jint arg0, JObject arg1) const;
		jint size() const;
		JObject spliterator() const;
		JObjectArray toArray() const;
		JObjectArray toArray(JObjectArray arg0) const;
	};
} // namespace java::util

