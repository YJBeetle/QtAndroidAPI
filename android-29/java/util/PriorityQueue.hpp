#pragma once

#include "../../__JniBaseClass.hpp"
#include "./AbstractCollection.hpp"
#include "./AbstractQueue.hpp"

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
	class PriorityQueue : public java::util::AbstractQueue
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PriorityQueue(const char *className, const char *sig, Ts...agv) : java::util::AbstractQueue(className, sig, std::forward<Ts>(agv)...) {}
		PriorityQueue(QAndroidJniObject obj);
		
		// Constructors
		PriorityQueue();
		PriorityQueue(jint arg0);
		PriorityQueue(__JniBaseClass arg0);
		PriorityQueue(java::util::PriorityQueue &arg0);
		PriorityQueue(jint arg0, __JniBaseClass arg1);
		
		// Methods
		jboolean add(jobject arg0);
		void clear();
		QAndroidJniObject comparator();
		jboolean contains(jobject arg0);
		void forEach(__JniBaseClass arg0);
		QAndroidJniObject iterator();
		jboolean offer(jobject arg0);
		jobject peek();
		jobject poll();
		jboolean remove(jobject arg0);
		jboolean removeAll(__JniBaseClass arg0);
		jboolean removeIf(__JniBaseClass arg0);
		jboolean retainAll(__JniBaseClass arg0);
		jint size();
		QAndroidJniObject spliterator();
		jobjectArray toArray();
		jobjectArray toArray(jobjectArray arg0);
	};
} // namespace java::util

