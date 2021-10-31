#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../AbstractCollection.hpp"
#include "../AbstractQueue.hpp"

namespace java::lang
{
	class Thread;
}
namespace java::util
{
	class PriorityQueue;
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
	class DelayQueue : public java::util::AbstractQueue
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DelayQueue(const char *className, const char *sig, Ts...agv) : java::util::AbstractQueue(className, sig, std::forward<Ts>(agv)...) {}
		DelayQueue(QAndroidJniObject obj);
		
		// Constructors
		DelayQueue();
		DelayQueue(__JniBaseClass arg0);
		
		// Methods
		jboolean add(jobject arg0);
		jboolean add(__JniBaseClass arg0);
		void clear();
		jint drainTo(__JniBaseClass arg0);
		jint drainTo(__JniBaseClass arg0, jint arg1);
		QAndroidJniObject iterator();
		jboolean offer(jobject arg0);
		jboolean offer(__JniBaseClass arg0);
		jboolean offer(jobject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2);
		jboolean offer(__JniBaseClass arg0, jlong arg1, java::util::concurrent::TimeUnit arg2);
		QAndroidJniObject peek();
		QAndroidJniObject poll();
		QAndroidJniObject poll(jlong arg0, java::util::concurrent::TimeUnit arg1);
		void put(jobject arg0);
		void put(__JniBaseClass arg0);
		jint remainingCapacity();
		jboolean remove(jobject arg0);
		jint size();
		QAndroidJniObject take();
		jobjectArray toArray();
		jobjectArray toArray(jobjectArray arg0);
	};
} // namespace java::util::concurrent

