#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../AbstractCollection.hpp"
#include "../AbstractQueue.hpp"

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LinkedBlockingDeque(const char *className, const char *sig, Ts...agv) : java::util::AbstractQueue(className, sig, std::forward<Ts>(agv)...) {}
		LinkedBlockingDeque(QAndroidJniObject obj);
		
		// Constructors
		LinkedBlockingDeque();
		LinkedBlockingDeque(jint arg0);
		LinkedBlockingDeque(__JniBaseClass arg0);
		
		// Methods
		jboolean add(jobject arg0);
		jboolean addAll(__JniBaseClass arg0);
		void addFirst(jobject arg0);
		void addLast(jobject arg0);
		void clear();
		jboolean contains(jobject arg0);
		__JniBaseClass descendingIterator();
		jint drainTo(__JniBaseClass arg0);
		jint drainTo(__JniBaseClass arg0, jint arg1);
		jobject element();
		void forEach(__JniBaseClass arg0);
		jobject getFirst();
		jobject getLast();
		__JniBaseClass iterator();
		jboolean offer(jobject arg0);
		jboolean offer(jobject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2);
		jboolean offerFirst(jobject arg0);
		jboolean offerFirst(jobject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2);
		jboolean offerLast(jobject arg0);
		jboolean offerLast(jobject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2);
		jobject peek();
		jobject peekFirst();
		jobject peekLast();
		jobject poll();
		jobject poll(jlong arg0, java::util::concurrent::TimeUnit arg1);
		jobject pollFirst();
		jobject pollFirst(jlong arg0, java::util::concurrent::TimeUnit arg1);
		jobject pollLast();
		jobject pollLast(jlong arg0, java::util::concurrent::TimeUnit arg1);
		jobject pop();
		void push(jobject arg0);
		void put(jobject arg0);
		void putFirst(jobject arg0);
		void putLast(jobject arg0);
		jint remainingCapacity();
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
		jobject take();
		jobject takeFirst();
		jobject takeLast();
		jobjectArray toArray();
		jobjectArray toArray(jobjectArray arg0);
		jstring toString();
	};
} // namespace java::util::concurrent

