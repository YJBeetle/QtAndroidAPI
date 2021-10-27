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
	class ConcurrentLinkedQueue : public java::util::AbstractQueue
	{
	public:
		// Fields
		
		ConcurrentLinkedQueue(QAndroidJniObject obj);
		// Constructors
		ConcurrentLinkedQueue();
		ConcurrentLinkedQueue(__JniBaseClass &arg0);
		
		// Methods
		jboolean add(jobject arg0);
		jboolean addAll(__JniBaseClass arg0);
		void clear();
		jboolean contains(jobject arg0);
		void forEach(__JniBaseClass arg0);
		jboolean isEmpty();
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
		jstring toString();
	};
} // namespace java::util::concurrent

