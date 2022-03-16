#include "../../../JObjectArray.hpp"
#include "../../../JObject.hpp"
#include "./CopyOnWriteArrayList.hpp"
#include "./CopyOnWriteArraySet.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// Constructors
	CopyOnWriteArraySet::CopyOnWriteArraySet()
		: java::util::AbstractSet(
			"java.util.concurrent.CopyOnWriteArraySet",
			"()V"
		) {}
	CopyOnWriteArraySet::CopyOnWriteArraySet(JObject arg0)
		: java::util::AbstractSet(
			"java.util.concurrent.CopyOnWriteArraySet",
			"(Ljava/util/Collection;)V",
			arg0.object()
		) {}
	
	// Methods
	jboolean CopyOnWriteArraySet::add(JObject arg0) const
	{
		return callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean CopyOnWriteArraySet::addAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"addAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	void CopyOnWriteArraySet::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	jboolean CopyOnWriteArraySet::contains(JObject arg0) const
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean CopyOnWriteArraySet::containsAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"containsAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jboolean CopyOnWriteArraySet::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	void CopyOnWriteArraySet::forEach(JObject arg0) const
	{
		callMethod<void>(
			"forEach",
			"(Ljava/util/function/Consumer;)V",
			arg0.object()
		);
	}
	jboolean CopyOnWriteArraySet::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	JObject CopyOnWriteArraySet::iterator() const
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jboolean CopyOnWriteArraySet::remove(JObject arg0) const
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean CopyOnWriteArraySet::removeAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jboolean CopyOnWriteArraySet::removeIf(JObject arg0) const
	{
		return callMethod<jboolean>(
			"removeIf",
			"(Ljava/util/function/Predicate;)Z",
			arg0.object()
		);
	}
	jboolean CopyOnWriteArraySet::retainAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"retainAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jint CopyOnWriteArraySet::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	JObject CopyOnWriteArraySet::spliterator() const
	{
		return callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	JObjectArray CopyOnWriteArraySet::toArray() const
	{
		return callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		);
	}
	JObjectArray CopyOnWriteArraySet::toArray(JObjectArray arg0) const
	{
		return callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
} // namespace java::util::concurrent

