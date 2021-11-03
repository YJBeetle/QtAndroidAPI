#include "../../../JObjectArray.hpp"
#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./TimeUnit.hpp"
#include "./locks/ReentrantLock.hpp"
#include "./LinkedBlockingDeque.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QAndroidJniObject forward
	LinkedBlockingDeque::LinkedBlockingDeque(QAndroidJniObject obj) : java::util::AbstractQueue(obj) {}
	
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
	LinkedBlockingDeque::LinkedBlockingDeque(JObject arg0)
		: java::util::AbstractQueue(
			"java.util.concurrent.LinkedBlockingDeque",
			"(Ljava/util/Collection;)V",
			arg0.object()
		) {}
	
	// Methods
	jboolean LinkedBlockingDeque::add(JObject arg0)
	{
		return callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean LinkedBlockingDeque::addAll(JObject arg0)
	{
		return callMethod<jboolean>(
			"addAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	void LinkedBlockingDeque::addFirst(JObject arg0)
	{
		callMethod<void>(
			"addFirst",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	void LinkedBlockingDeque::addLast(JObject arg0)
	{
		callMethod<void>(
			"addLast",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	void LinkedBlockingDeque::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	jboolean LinkedBlockingDeque::contains(JObject arg0)
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject LinkedBlockingDeque::descendingIterator()
	{
		return callObjectMethod(
			"descendingIterator",
			"()Ljava/util/Iterator;"
		);
	}
	jint LinkedBlockingDeque::drainTo(JObject arg0)
	{
		return callMethod<jint>(
			"drainTo",
			"(Ljava/util/Collection;)I",
			arg0.object()
		);
	}
	jint LinkedBlockingDeque::drainTo(JObject arg0, jint arg1)
	{
		return callMethod<jint>(
			"drainTo",
			"(Ljava/util/Collection;I)I",
			arg0.object(),
			arg1
		);
	}
	JObject LinkedBlockingDeque::element()
	{
		return callObjectMethod(
			"element",
			"()Ljava/lang/Object;"
		);
	}
	void LinkedBlockingDeque::forEach(JObject arg0)
	{
		callMethod<void>(
			"forEach",
			"(Ljava/util/function/Consumer;)V",
			arg0.object()
		);
	}
	JObject LinkedBlockingDeque::getFirst()
	{
		return callObjectMethod(
			"getFirst",
			"()Ljava/lang/Object;"
		);
	}
	JObject LinkedBlockingDeque::getLast()
	{
		return callObjectMethod(
			"getLast",
			"()Ljava/lang/Object;"
		);
	}
	JObject LinkedBlockingDeque::iterator()
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jboolean LinkedBlockingDeque::offer(JObject arg0)
	{
		return callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean LinkedBlockingDeque::offer(JObject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2)
	{
		return callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z",
			arg0.object<jobject>(),
			arg1,
			arg2.object()
		);
	}
	jboolean LinkedBlockingDeque::offerFirst(JObject arg0)
	{
		return callMethod<jboolean>(
			"offerFirst",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean LinkedBlockingDeque::offerFirst(JObject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2)
	{
		return callMethod<jboolean>(
			"offerFirst",
			"(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z",
			arg0.object<jobject>(),
			arg1,
			arg2.object()
		);
	}
	jboolean LinkedBlockingDeque::offerLast(JObject arg0)
	{
		return callMethod<jboolean>(
			"offerLast",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean LinkedBlockingDeque::offerLast(JObject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2)
	{
		return callMethod<jboolean>(
			"offerLast",
			"(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z",
			arg0.object<jobject>(),
			arg1,
			arg2.object()
		);
	}
	JObject LinkedBlockingDeque::peek()
	{
		return callObjectMethod(
			"peek",
			"()Ljava/lang/Object;"
		);
	}
	JObject LinkedBlockingDeque::peekFirst()
	{
		return callObjectMethod(
			"peekFirst",
			"()Ljava/lang/Object;"
		);
	}
	JObject LinkedBlockingDeque::peekLast()
	{
		return callObjectMethod(
			"peekLast",
			"()Ljava/lang/Object;"
		);
	}
	JObject LinkedBlockingDeque::poll()
	{
		return callObjectMethod(
			"poll",
			"()Ljava/lang/Object;"
		);
	}
	JObject LinkedBlockingDeque::poll(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return callObjectMethod(
			"poll",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		);
	}
	JObject LinkedBlockingDeque::pollFirst()
	{
		return callObjectMethod(
			"pollFirst",
			"()Ljava/lang/Object;"
		);
	}
	JObject LinkedBlockingDeque::pollFirst(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return callObjectMethod(
			"pollFirst",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		);
	}
	JObject LinkedBlockingDeque::pollLast()
	{
		return callObjectMethod(
			"pollLast",
			"()Ljava/lang/Object;"
		);
	}
	JObject LinkedBlockingDeque::pollLast(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return callObjectMethod(
			"pollLast",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		);
	}
	JObject LinkedBlockingDeque::pop()
	{
		return callObjectMethod(
			"pop",
			"()Ljava/lang/Object;"
		);
	}
	void LinkedBlockingDeque::push(JObject arg0)
	{
		callMethod<void>(
			"push",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	void LinkedBlockingDeque::put(JObject arg0)
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	void LinkedBlockingDeque::putFirst(JObject arg0)
	{
		callMethod<void>(
			"putFirst",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	void LinkedBlockingDeque::putLast(JObject arg0)
	{
		callMethod<void>(
			"putLast",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	jint LinkedBlockingDeque::remainingCapacity()
	{
		return callMethod<jint>(
			"remainingCapacity",
			"()I"
		);
	}
	jboolean LinkedBlockingDeque::remove(JObject arg0)
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject LinkedBlockingDeque::remove()
	{
		return callObjectMethod(
			"remove",
			"()Ljava/lang/Object;"
		);
	}
	jboolean LinkedBlockingDeque::removeAll(JObject arg0)
	{
		return callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	JObject LinkedBlockingDeque::removeFirst()
	{
		return callObjectMethod(
			"removeFirst",
			"()Ljava/lang/Object;"
		);
	}
	jboolean LinkedBlockingDeque::removeFirstOccurrence(JObject arg0)
	{
		return callMethod<jboolean>(
			"removeFirstOccurrence",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean LinkedBlockingDeque::removeIf(JObject arg0)
	{
		return callMethod<jboolean>(
			"removeIf",
			"(Ljava/util/function/Predicate;)Z",
			arg0.object()
		);
	}
	JObject LinkedBlockingDeque::removeLast()
	{
		return callObjectMethod(
			"removeLast",
			"()Ljava/lang/Object;"
		);
	}
	jboolean LinkedBlockingDeque::removeLastOccurrence(JObject arg0)
	{
		return callMethod<jboolean>(
			"removeLastOccurrence",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean LinkedBlockingDeque::retainAll(JObject arg0)
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
	JObject LinkedBlockingDeque::spliterator()
	{
		return callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	JObject LinkedBlockingDeque::take()
	{
		return callObjectMethod(
			"take",
			"()Ljava/lang/Object;"
		);
	}
	JObject LinkedBlockingDeque::takeFirst()
	{
		return callObjectMethod(
			"takeFirst",
			"()Ljava/lang/Object;"
		);
	}
	JObject LinkedBlockingDeque::takeLast()
	{
		return callObjectMethod(
			"takeLast",
			"()Ljava/lang/Object;"
		);
	}
	JObjectArray LinkedBlockingDeque::toArray()
	{
		return callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		);
	}
	JObjectArray LinkedBlockingDeque::toArray(JObjectArray arg0)
	{
		return callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	JString LinkedBlockingDeque::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util::concurrent

