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
namespace java::util::concurrent::atomic
{
	class AtomicInteger;
}
namespace java::util::concurrent::locks
{
	class ReentrantLock;
}

namespace java::util::concurrent
{
	class LinkedBlockingQueue : public java::util::AbstractQueue
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LinkedBlockingQueue(const char *className, const char *sig, Ts...agv) : java::util::AbstractQueue(className, sig, std::forward<Ts>(agv)...) {}
		LinkedBlockingQueue(QJniObject obj);
		
		// Constructors
		LinkedBlockingQueue();
		LinkedBlockingQueue(jint arg0);
		LinkedBlockingQueue(__JniBaseClass arg0);
		
		// Methods
		void clear();
		jboolean contains(jobject arg0);
		jint drainTo(__JniBaseClass arg0);
		jint drainTo(__JniBaseClass arg0, jint arg1);
		void forEach(__JniBaseClass arg0);
		__JniBaseClass iterator();
		jboolean offer(jobject arg0);
		jboolean offer(jobject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2);
		jobject peek();
		jobject poll();
		jobject poll(jlong arg0, java::util::concurrent::TimeUnit arg1);
		void put(jobject arg0);
		jint remainingCapacity();
		jboolean remove(jobject arg0);
		jboolean removeAll(__JniBaseClass arg0);
		jboolean removeIf(__JniBaseClass arg0);
		jboolean retainAll(__JniBaseClass arg0);
		jint size();
		__JniBaseClass spliterator();
		jobject take();
		jobjectArray toArray();
		jobjectArray toArray(jobjectArray arg0);
		jstring toString();
	};
} // namespace java::util::concurrent

