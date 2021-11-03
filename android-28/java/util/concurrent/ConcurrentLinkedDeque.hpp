#pragma once

#include "../../../JObject.hpp"
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
		ConcurrentLinkedDeque(JObject arg0);
		
		// Methods
		jboolean add(jobject arg0);
		jboolean addAll(JObject arg0);
		void addFirst(jobject arg0);
		void addLast(jobject arg0);
		void clear();
		jboolean contains(jobject arg0);
		JObject descendingIterator();
		jobject element();
		void forEach(JObject arg0);
		jobject getFirst();
		jobject getLast();
		jboolean isEmpty();
		JObject iterator();
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
		jboolean removeAll(JObject arg0);
		jobject removeFirst();
		jboolean removeFirstOccurrence(jobject arg0);
		jboolean removeIf(JObject arg0);
		jobject removeLast();
		jboolean removeLastOccurrence(jobject arg0);
		jboolean retainAll(JObject arg0);
		jint size();
		JObject spliterator();
		jobjectArray toArray();
		jobjectArray toArray(jobjectArray arg0);
		jstring toString();
	};
} // namespace java::util::concurrent

