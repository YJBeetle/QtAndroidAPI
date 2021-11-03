#pragma once

#include "../../JObject.hpp"
#include "./AbstractCollection.hpp"
#include "./AbstractList.hpp"
#include "./AbstractSequentialList.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}

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
		jboolean add(jobject arg0);
		void add(jint arg0, jobject arg1);
		jboolean addAll(JObject arg0);
		jboolean addAll(jint arg0, JObject arg1);
		void addFirst(jobject arg0);
		void addLast(jobject arg0);
		void clear();
		jobject clone();
		jboolean contains(jobject arg0);
		JObject descendingIterator();
		jobject element();
		jobject get(jint arg0);
		jobject getFirst();
		jobject getLast();
		jint indexOf(jobject arg0);
		jint lastIndexOf(jobject arg0);
		JObject listIterator(jint arg0);
		jboolean offer(jobject arg0);
		jboolean offerFirst(jobject arg0);
		jboolean offerLast(jobject arg0);
		jobject peek();
		jobject peekFirst();
		jobject peekLast();
		jobject poll();
		jobject pollFirst();
		jobject pollLast();
		jobject pop();
		void push(jobject arg0);
		jboolean remove(jobject arg0);
		jobject remove();
		jobject remove(jint arg0);
		jobject removeFirst();
		jboolean removeFirstOccurrence(jobject arg0);
		jobject removeLast();
		jboolean removeLastOccurrence(jobject arg0);
		jobject set(jint arg0, jobject arg1);
		jint size();
		JObject spliterator();
		jobjectArray toArray();
		jobjectArray toArray(jobjectArray arg0);
	};
} // namespace java::util

