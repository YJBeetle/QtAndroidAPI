#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"
#include "./TimeUnit.hpp"
#include "./locks/ReentrantLock.hpp"
#include "./LinkedBlockingDeque.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QJniObject forward
	LinkedBlockingDeque::LinkedBlockingDeque(QJniObject obj) : java::util::AbstractQueue(obj) {}
	
	// Constructors
	LinkedBlockingDeque::LinkedBlockingDeque()
		: java::util::AbstractQueue(
			"java.util.concurrent.LinkedBlockingDeque",
			"()V"
		) {}
	LinkedBlockingDeque::LinkedBlockingDeque(jint arg0)
		: java::util::AbstractQueue(
			"java.util.concurrent.LinkedBlockingDeque",
			"(I)V",
			arg0
		) {}
	LinkedBlockingDeque::LinkedBlockingDeque(__JniBaseClass arg0)
		: java::util::AbstractQueue(
			"java.util.concurrent.LinkedBlockingDeque",
			"(Ljava/util/Collection;)V",
			arg0.object()
		) {}
	
	// Methods
	jboolean LinkedBlockingDeque::add(jobject arg0)
	{
		return callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean LinkedBlockingDeque::addAll(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"addAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	void LinkedBlockingDeque::addFirst(jobject arg0)
	{
		callMethod<void>(
			"addFirst",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void LinkedBlockingDeque::addLast(jobject arg0)
	{
		callMethod<void>(
			"addLast",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void LinkedBlockingDeque::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	jboolean LinkedBlockingDeque::contains(jobject arg0)
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	__JniBaseClass LinkedBlockingDeque::descendingIterator()
	{
		return callObjectMethod(
			"descendingIterator",
			"()Ljava/util/Iterator;"
		);
	}
	jint LinkedBlockingDeque::drainTo(__JniBaseClass arg0)
	{
		return callMethod<jint>(
			"drainTo",
			"(Ljava/util/Collection;)I",
			arg0.object()
		);
	}
	jint LinkedBlockingDeque::drainTo(__JniBaseClass arg0, jint arg1)
	{
		return callMethod<jint>(
			"drainTo",
			"(Ljava/util/Collection;I)I",
			arg0.object(),
			arg1
		);
	}
	jobject LinkedBlockingDeque::element()
	{
		return callObjectMethod(
			"element",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	void LinkedBlockingDeque::forEach(__JniBaseClass arg0)
	{
		callMethod<void>(
			"forEach",
			"(Ljava/util/function/Consumer;)V",
			arg0.object()
		);
	}
	jobject LinkedBlockingDeque::getFirst()
	{
		return callObjectMethod(
			"getFirst",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject LinkedBlockingDeque::getLast()
	{
		return callObjectMethod(
			"getLast",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	__JniBaseClass LinkedBlockingDeque::iterator()
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jboolean LinkedBlockingDeque::offer(jobject arg0)
	{
		return callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean LinkedBlockingDeque::offer(jobject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2)
	{
		return callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jboolean LinkedBlockingDeque::offerFirst(jobject arg0)
	{
		return callMethod<jboolean>(
			"offerFirst",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean LinkedBlockingDeque::offerFirst(jobject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2)
	{
		return callMethod<jboolean>(
			"offerFirst",
			"(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jboolean LinkedBlockingDeque::offerLast(jobject arg0)
	{
		return callMethod<jboolean>(
			"offerLast",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean LinkedBlockingDeque::offerLast(jobject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2)
	{
		return callMethod<jboolean>(
			"offerLast",
			"(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jobject LinkedBlockingDeque::peek()
	{
		return callObjectMethod(
			"peek",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject LinkedBlockingDeque::peekFirst()
	{
		return callObjectMethod(
			"peekFirst",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject LinkedBlockingDeque::peekLast()
	{
		return callObjectMethod(
			"peekLast",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject LinkedBlockingDeque::poll()
	{
		return callObjectMethod(
			"poll",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject LinkedBlockingDeque::poll(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return callObjectMethod(
			"poll",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		).object<jobject>();
	}
	jobject LinkedBlockingDeque::pollFirst()
	{
		return callObjectMethod(
			"pollFirst",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject LinkedBlockingDeque::pollFirst(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return callObjectMethod(
			"pollFirst",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		).object<jobject>();
	}
	jobject LinkedBlockingDeque::pollLast()
	{
		return callObjectMethod(
			"pollLast",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject LinkedBlockingDeque::pollLast(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return callObjectMethod(
			"pollLast",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		).object<jobject>();
	}
	jobject LinkedBlockingDeque::pop()
	{
		return callObjectMethod(
			"pop",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	void LinkedBlockingDeque::push(jobject arg0)
	{
		callMethod<void>(
			"push",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void LinkedBlockingDeque::put(jobject arg0)
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void LinkedBlockingDeque::putFirst(jobject arg0)
	{
		callMethod<void>(
			"putFirst",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void LinkedBlockingDeque::putLast(jobject arg0)
	{
		callMethod<void>(
			"putLast",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	jint LinkedBlockingDeque::remainingCapacity()
	{
		return callMethod<jint>(
			"remainingCapacity",
			"()I"
		);
	}
	jboolean LinkedBlockingDeque::remove(jobject arg0)
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jobject LinkedBlockingDeque::remove()
	{
		return callObjectMethod(
			"remove",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean LinkedBlockingDeque::removeAll(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jobject LinkedBlockingDeque::removeFirst()
	{
		return callObjectMethod(
			"removeFirst",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean LinkedBlockingDeque::removeFirstOccurrence(jobject arg0)
	{
		return callMethod<jboolean>(
			"removeFirstOccurrence",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean LinkedBlockingDeque::removeIf(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"removeIf",
			"(Ljava/util/function/Predicate;)Z",
			arg0.object()
		);
	}
	jobject LinkedBlockingDeque::removeLast()
	{
		return callObjectMethod(
			"removeLast",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean LinkedBlockingDeque::removeLastOccurrence(jobject arg0)
	{
		return callMethod<jboolean>(
			"removeLastOccurrence",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean LinkedBlockingDeque::retainAll(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"retainAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jint LinkedBlockingDeque::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	__JniBaseClass LinkedBlockingDeque::spliterator()
	{
		return callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	jobject LinkedBlockingDeque::take()
	{
		return callObjectMethod(
			"take",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject LinkedBlockingDeque::takeFirst()
	{
		return callObjectMethod(
			"takeFirst",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject LinkedBlockingDeque::takeLast()
	{
		return callObjectMethod(
			"takeLast",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobjectArray LinkedBlockingDeque::toArray()
	{
		return callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		).object<jobjectArray>();
	}
	jobjectArray LinkedBlockingDeque::toArray(jobjectArray arg0)
	{
		return callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0
		).object<jobjectArray>();
	}
	jstring LinkedBlockingDeque::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util::concurrent

