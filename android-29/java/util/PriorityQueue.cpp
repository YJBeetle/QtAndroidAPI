#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "./PriorityQueue.hpp"

namespace java::util
{
	// Fields
	
	PriorityQueue::PriorityQueue(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PriorityQueue::PriorityQueue()
	{
		__thiz = QAndroidJniObject(
			"java.util.PriorityQueue",
			"()V"
		);
	}
	PriorityQueue::PriorityQueue(jint &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.PriorityQueue",
			"(I)V",
			arg0
		);
	}
	PriorityQueue::PriorityQueue(__JniBaseClass &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.PriorityQueue",
			"(Ljava/util/Collection;)V",
			arg0.__jniObject().object()
		);
	}
	PriorityQueue::PriorityQueue(java::util::PriorityQueue &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.PriorityQueue",
			"(Ljava/util/PriorityQueue;)V",
			arg0.__jniObject().object()
		);
	}
	PriorityQueue::PriorityQueue(jint &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.PriorityQueue",
			"(ILjava/util/Comparator;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jboolean PriorityQueue::add(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void PriorityQueue::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	QAndroidJniObject PriorityQueue::comparator()
	{
		return __thiz.callObjectMethod(
			"comparator",
			"()Ljava/util/Comparator;"
		);
	}
	jboolean PriorityQueue::contains(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void PriorityQueue::forEach(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Ljava/util/function/Consumer;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PriorityQueue::iterator()
	{
		return __thiz.callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jboolean PriorityQueue::offer(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jobject PriorityQueue::peek()
	{
		return __thiz.callObjectMethod(
			"peek",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject PriorityQueue::poll()
	{
		return __thiz.callObjectMethod(
			"poll",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean PriorityQueue::remove(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean PriorityQueue::removeAll(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean PriorityQueue::removeIf(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeIf",
			"(Ljava/util/function/Predicate;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean PriorityQueue::retainAll(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"retainAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object()
		);
	}
	jint PriorityQueue::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	QAndroidJniObject PriorityQueue::spliterator()
	{
		return __thiz.callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	jobjectArray PriorityQueue::toArray()
	{
		return __thiz.callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		).object<jobjectArray>();
	}
	jobjectArray PriorityQueue::toArray(jobjectArray arg0)
	{
		return __thiz.callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0
		).object<jobjectArray>();
	}
} // namespace java::util

