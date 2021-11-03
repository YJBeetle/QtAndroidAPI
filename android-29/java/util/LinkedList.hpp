#pragma once

#include "./AbstractSequentialList.hpp"

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
		LinkedList(QAndroidJniObject obj);
		
		// Constructors
		LinkedList();
		LinkedList(JObject arg0);
		
		// Methods
		jboolean add(JObject arg0);
		void add(jint arg0, JObject arg1);
		jboolean addAll(JObject arg0);
		jboolean addAll(jint arg0, JObject arg1);
		void addFirst(JObject arg0);
		void addLast(JObject arg0);
		void clear();
		JObject clone();
		jboolean contains(JObject arg0);
		JObject descendingIterator();
		JObject element();
		JObject get(jint arg0);
		JObject getFirst();
		JObject getLast();
		jint indexOf(JObject arg0);
		jint lastIndexOf(JObject arg0);
		JObject listIterator(jint arg0);
		jboolean offer(JObject arg0);
		jboolean offerFirst(JObject arg0);
		jboolean offerLast(JObject arg0);
		JObject peek();
		JObject peekFirst();
		JObject peekLast();
		JObject poll();
		JObject pollFirst();
		JObject pollLast();
		JObject pop();
		void push(JObject arg0);
		jboolean remove(JObject arg0);
		JObject remove();
		JObject remove(jint arg0);
		JObject removeFirst();
		jboolean removeFirstOccurrence(JObject arg0);
		JObject removeLast();
		jboolean removeLastOccurrence(JObject arg0);
		JObject set(jint arg0, JObject arg1);
		jint size();
		JObject spliterator();
		JObjectArray toArray();
		JObjectArray toArray(JObjectArray arg0);
	};
} // namespace java::util

