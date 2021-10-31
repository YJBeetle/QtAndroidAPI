#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "./LinkedList.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	LinkedList::LinkedList(QAndroidJniObject obj) : java::util::AbstractSequentialList(obj) {}
	
	// Constructors
	LinkedList::LinkedList()
		: java::util::AbstractSequentialList(
			"java.util.LinkedList",
			"()V"
		) {}
	LinkedList::LinkedList(__JniBaseClass arg0)
		: java::util::AbstractSequentialList(
			"java.util.LinkedList",
			"(Ljava/util/Collection;)V",
			arg0.object()
		) {}
	
	// Methods
	jboolean LinkedList::add(jobject arg0)
	{
		return callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void LinkedList::add(jint arg0, jobject arg1)
	{
		callMethod<void>(
			"add",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	jboolean LinkedList::addAll(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"addAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jboolean LinkedList::addAll(jint arg0, __JniBaseClass arg1)
	{
		return callMethod<jboolean>(
			"addAll",
			"(ILjava/util/Collection;)Z",
			arg0,
			arg1.object()
		);
	}
	void LinkedList::addFirst(jobject arg0)
	{
		callMethod<void>(
			"addFirst",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void LinkedList::addLast(jobject arg0)
	{
		callMethod<void>(
			"addLast",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void LinkedList::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	jobject LinkedList::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean LinkedList::contains(jobject arg0)
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject LinkedList::descendingIterator()
	{
		return callObjectMethod(
			"descendingIterator",
			"()Ljava/util/Iterator;"
		);
	}
	jobject LinkedList::element()
	{
		return callObjectMethod(
			"element",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject LinkedList::get(jint arg0)
	{
		return callObjectMethod(
			"get",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject LinkedList::getFirst()
	{
		return callObjectMethod(
			"getFirst",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject LinkedList::getLast()
	{
		return callObjectMethod(
			"getLast",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint LinkedList::indexOf(jobject arg0)
	{
		return callMethod<jint>(
			"indexOf",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint LinkedList::lastIndexOf(jobject arg0)
	{
		return callMethod<jint>(
			"lastIndexOf",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	QAndroidJniObject LinkedList::listIterator(jint arg0)
	{
		return callObjectMethod(
			"listIterator",
			"(I)Ljava/util/ListIterator;",
			arg0
		);
	}
	jboolean LinkedList::offer(jobject arg0)
	{
		return callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean LinkedList::offerFirst(jobject arg0)
	{
		return callMethod<jboolean>(
			"offerFirst",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean LinkedList::offerLast(jobject arg0)
	{
		return callMethod<jboolean>(
			"offerLast",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jobject LinkedList::peek()
	{
		return callObjectMethod(
			"peek",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject LinkedList::peekFirst()
	{
		return callObjectMethod(
			"peekFirst",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject LinkedList::peekLast()
	{
		return callObjectMethod(
			"peekLast",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject LinkedList::poll()
	{
		return callObjectMethod(
			"poll",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject LinkedList::pollFirst()
	{
		return callObjectMethod(
			"pollFirst",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject LinkedList::pollLast()
	{
		return callObjectMethod(
			"pollLast",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject LinkedList::pop()
	{
		return callObjectMethod(
			"pop",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	void LinkedList::push(jobject arg0)
	{
		callMethod<void>(
			"push",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	jboolean LinkedList::remove(jobject arg0)
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jobject LinkedList::remove()
	{
		return callObjectMethod(
			"remove",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject LinkedList::remove(jint arg0)
	{
		return callObjectMethod(
			"remove",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject LinkedList::removeFirst()
	{
		return callObjectMethod(
			"removeFirst",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean LinkedList::removeFirstOccurrence(jobject arg0)
	{
		return callMethod<jboolean>(
			"removeFirstOccurrence",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jobject LinkedList::removeLast()
	{
		return callObjectMethod(
			"removeLast",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean LinkedList::removeLastOccurrence(jobject arg0)
	{
		return callMethod<jboolean>(
			"removeLastOccurrence",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jobject LinkedList::set(jint arg0, jobject arg1)
	{
		return callObjectMethod(
			"set",
			"(ILjava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jint LinkedList::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	QAndroidJniObject LinkedList::spliterator()
	{
		return callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	jobjectArray LinkedList::toArray()
	{
		return callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		).object<jobjectArray>();
	}
	jobjectArray LinkedList::toArray(jobjectArray arg0)
	{
		return callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0
		).object<jobjectArray>();
	}
} // namespace java::util

