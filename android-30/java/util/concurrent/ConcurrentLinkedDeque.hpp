#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../AbstractCollection.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}

namespace java::util::concurrent
{
	class ConcurrentLinkedDeque : public java::util::AbstractCollection
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ConcurrentLinkedDeque(const char *className, const char *sig, Ts...agv) : java::util::AbstractCollection(className, sig, std::forward<Ts>(agv)...) {}
		ConcurrentLinkedDeque(QJniObject obj);
		
		// Constructors
		ConcurrentLinkedDeque();
		ConcurrentLinkedDeque(__JniBaseClass arg0);
		
		// Methods
		jboolean add(jobject arg0);
		jboolean addAll(__JniBaseClass arg0);
		void addFirst(jobject arg0);
		void addLast(jobject arg0);
		void clear();
		jboolean contains(jobject arg0);
		__JniBaseClass descendingIterator();
		jobject element();
		void forEach(__JniBaseClass arg0);
		jobject getFirst();
		jobject getLast();
		jboolean isEmpty();
		__JniBaseClass iterator();
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
		__JniBaseClass spliterator();
		jobjectArray toArray();
		jobjectArray toArray(jobjectArray arg0);
		jstring toString();
	};
} // namespace java::util::concurrent

