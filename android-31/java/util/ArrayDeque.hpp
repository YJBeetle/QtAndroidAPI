#pragma once

#include "./AbstractCollection.hpp"

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
class JClass;
class JObject;

namespace java::util
{
	class ArrayDeque : public java::util::AbstractCollection
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ArrayDeque(const char *className, const char *sig, Ts...agv) : java::util::AbstractCollection(className, sig, std::forward<Ts>(agv)...) {}
		ArrayDeque(QAndroidJniObject obj);
		
		// Constructors
		ArrayDeque();
		ArrayDeque(jint arg0);
		ArrayDeque(JObject arg0);
		
		// Methods
		jboolean add(JObject arg0);
		jboolean addAll(JObject arg0);
		void addFirst(JObject arg0);
		void addLast(JObject arg0);
		void clear();
		java::util::ArrayDeque clone();
		jboolean contains(JObject arg0);
		JObject descendingIterator();
		JObject element();
		void forEach(JObject arg0);
		JObject getFirst();
		JObject getLast();
		jboolean isEmpty();
		JObject iterator();
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
		jboolean removeAll(JObject arg0);
		JObject removeFirst();
		jboolean removeFirstOccurrence(JObject arg0);
		jboolean removeIf(JObject arg0);
		JObject removeLast();
		jboolean removeLastOccurrence(JObject arg0);
		jboolean retainAll(JObject arg0);
		jint size();
		JObject spliterator();
		JObjectArray toArray();
		JObjectArray toArray(JObjectArray arg0);
	};
} // namespace java::util

