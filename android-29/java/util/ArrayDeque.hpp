#pragma once

#include "../../__JniBaseClass.hpp"
#include "./AbstractCollection.hpp"

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
	class ArrayDeque : public java::util::AbstractCollection
	{
	public:
		// Fields
		
		ArrayDeque(QAndroidJniObject obj);
		// Constructors
		ArrayDeque();
		ArrayDeque(jint arg0);
		ArrayDeque(__JniBaseClass arg0);
		
		// Methods
		jboolean add(jobject arg0);
		jboolean addAll(__JniBaseClass arg0);
		void addFirst(jobject arg0);
		void addLast(jobject arg0);
		void clear();
		QAndroidJniObject clone();
		jboolean contains(jobject arg0);
		QAndroidJniObject descendingIterator();
		jobject element();
		void forEach(__JniBaseClass arg0);
		jobject getFirst();
		jobject getLast();
		jboolean isEmpty();
		QAndroidJniObject iterator();
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
		jboolean removeAll(__JniBaseClass arg0);
		jobject removeFirst();
		jboolean removeFirstOccurrence(jobject arg0);
		jboolean removeIf(__JniBaseClass arg0);
		jobject removeLast();
		jboolean removeLastOccurrence(jobject arg0);
		jboolean retainAll(__JniBaseClass arg0);
		jint size();
		QAndroidJniObject spliterator();
		jobjectArray toArray();
		jobjectArray toArray(jobjectArray arg0);
	};
} // namespace java::util

