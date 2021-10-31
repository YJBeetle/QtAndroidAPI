#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../AbstractCollection.hpp"
#include "../AbstractQueue.hpp"

namespace java::io
{
	class ObjectInputStream;
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
	class ArrayBlockingQueue : public java::util::AbstractQueue
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ArrayBlockingQueue(const char *className, const char *sig, Ts...agv) : java::util::AbstractQueue(className, sig, std::forward<Ts>(agv)...) {}
		ArrayBlockingQueue(QAndroidJniObject obj);
		
		// Constructors
		ArrayBlockingQueue(jint arg0);
		ArrayBlockingQueue(jint arg0, jboolean arg1);
		ArrayBlockingQueue(jint arg0, jboolean arg1, __JniBaseClass arg2);
		
		// Methods
		jboolean add(jobject arg0);
		void clear();
		jboolean contains(jobject arg0);
		jint drainTo(__JniBaseClass arg0);
		jint drainTo(__JniBaseClass arg0, jint arg1);
		void forEach(__JniBaseClass arg0);
		QAndroidJniObject iterator();
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
		QAndroidJniObject spliterator();
		jobject take();
		jobjectArray toArray();
		jobjectArray toArray(jobjectArray arg0);
		jstring toString();
	};
} // namespace java::util::concurrent

