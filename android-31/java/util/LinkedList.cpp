#include "../../JObjectArray.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./LinkedList.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	LinkedList::LinkedList()
		: java::util::AbstractSequentialList(
			"java.util.LinkedList",
			"()V"
		) {}
	LinkedList::LinkedList(JObject arg0)
		: java::util::AbstractSequentialList(
			"java.util.LinkedList",
			"(Ljava/util/Collection;)V",
			arg0.object()
		) {}
	
	// Methods
	jboolean LinkedList::add(JObject arg0) const
	{
		return callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	void LinkedList::add(jint arg0, JObject arg1) const
	{
		callMethod<void>(
			"add",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1.object<jobject>()
		);
	}
	jboolean LinkedList::addAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"addAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jboolean LinkedList::addAll(jint arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"addAll",
			"(ILjava/util/Collection;)Z",
			arg0,
			arg1.object()
		);
	}
	void LinkedList::addFirst(JObject arg0) const
	{
		callMethod<void>(
			"addFirst",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	void LinkedList::addLast(JObject arg0) const
	{
		callMethod<void>(
			"addLast",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	void LinkedList::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	JObject LinkedList::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	jboolean LinkedList::contains(JObject arg0) const
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject LinkedList::descendingIterator() const
	{
		return callObjectMethod(
			"descendingIterator",
			"()Ljava/util/Iterator;"
		);
	}
	JObject LinkedList::element() const
	{
		return callObjectMethod(
			"element",
			"()Ljava/lang/Object;"
		);
	}
	JObject LinkedList::get(jint arg0) const
	{
		return callObjectMethod(
			"get",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	JObject LinkedList::getFirst() const
	{
		return callObjectMethod(
			"getFirst",
			"()Ljava/lang/Object;"
		);
	}
	JObject LinkedList::getLast() const
	{
		return callObjectMethod(
			"getLast",
			"()Ljava/lang/Object;"
		);
	}
	jint LinkedList::indexOf(JObject arg0) const
	{
		return callMethod<jint>(
			"indexOf",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jint LinkedList::lastIndexOf(JObject arg0) const
	{
		return callMethod<jint>(
			"lastIndexOf",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	JObject LinkedList::listIterator(jint arg0) const
	{
		return callObjectMethod(
			"listIterator",
			"(I)Ljava/util/ListIterator;",
			arg0
		);
	}
	jboolean LinkedList::offer(JObject arg0) const
	{
		return callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean LinkedList::offerFirst(JObject arg0) const
	{
		return callMethod<jboolean>(
			"offerFirst",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean LinkedList::offerLast(JObject arg0) const
	{
		return callMethod<jboolean>(
			"offerLast",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject LinkedList::peek() const
	{
		return callObjectMethod(
			"peek",
			"()Ljava/lang/Object;"
		);
	}
	JObject LinkedList::peekFirst() const
	{
		return callObjectMethod(
			"peekFirst",
			"()Ljava/lang/Object;"
		);
	}
	JObject LinkedList::peekLast() const
	{
		return callObjectMethod(
			"peekLast",
			"()Ljava/lang/Object;"
		);
	}
	JObject LinkedList::poll() const
	{
		return callObjectMethod(
			"poll",
			"()Ljava/lang/Object;"
		);
	}
	JObject LinkedList::pollFirst() const
	{
		return callObjectMethod(
			"pollFirst",
			"()Ljava/lang/Object;"
		);
	}
	JObject LinkedList::pollLast() const
	{
		return callObjectMethod(
			"pollLast",
			"()Ljava/lang/Object;"
		);
	}
	JObject LinkedList::pop() const
	{
		return callObjectMethod(
			"pop",
			"()Ljava/lang/Object;"
		);
	}
	void LinkedList::push(JObject arg0) const
	{
		callMethod<void>(
			"push",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	jboolean LinkedList::remove(JObject arg0) const
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject LinkedList::remove() const
	{
		return callObjectMethod(
			"remove",
			"()Ljava/lang/Object;"
		);
	}
	JObject LinkedList::remove(jint arg0) const
	{
		return callObjectMethod(
			"remove",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	JObject LinkedList::removeFirst() const
	{
		return callObjectMethod(
			"removeFirst",
			"()Ljava/lang/Object;"
		);
	}
	jboolean LinkedList::removeFirstOccurrence(JObject arg0) const
	{
		return callMethod<jboolean>(
			"removeFirstOccurrence",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject LinkedList::removeLast() const
	{
		return callObjectMethod(
			"removeLast",
			"()Ljava/lang/Object;"
		);
	}
	jboolean LinkedList::removeLastOccurrence(JObject arg0) const
	{
		return callMethod<jboolean>(
			"removeLastOccurrence",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject LinkedList::set(jint arg0, JObject arg1) const
	{
		return callObjectMethod(
			"set",
			"(ILjava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1.object<jobject>()
		);
	}
	jint LinkedList::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	JObject LinkedList::spliterator() const
	{
		return callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	JObjectArray LinkedList::toArray() const
	{
		return callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		);
	}
	JObjectArray LinkedList::toArray(JObjectArray arg0) const
	{
		return callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
} // namespace java::util

