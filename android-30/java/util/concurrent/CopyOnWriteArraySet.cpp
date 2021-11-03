#include "../../../JObjectArray.hpp"
#include "../../../JObject.hpp"
#include "./CopyOnWriteArrayList.hpp"
#include "./CopyOnWriteArraySet.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QAndroidJniObject forward
	CopyOnWriteArraySet::CopyOnWriteArraySet(QAndroidJniObject obj) : java::util::AbstractSet(obj) {}
	
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
	jboolean CopyOnWriteArraySet::add(JObject arg0)
	{
		return callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean CopyOnWriteArraySet::addAll(JObject arg0)
	{
		return callMethod<jboolean>(
			"addAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	void CopyOnWriteArraySet::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	jboolean CopyOnWriteArraySet::contains(JObject arg0)
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean CopyOnWriteArraySet::containsAll(JObject arg0)
	{
		return callMethod<jboolean>(
			"containsAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jboolean CopyOnWriteArraySet::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	void CopyOnWriteArraySet::forEach(JObject arg0)
	{
		callMethod<void>(
			"forEach",
			"(Ljava/util/function/Consumer;)V",
			arg0.object()
		);
	}
	jboolean CopyOnWriteArraySet::isEmpty()
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	JObject CopyOnWriteArraySet::iterator()
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jboolean CopyOnWriteArraySet::remove(JObject arg0)
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean CopyOnWriteArraySet::removeAll(JObject arg0)
	{
		return callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jboolean CopyOnWriteArraySet::removeIf(JObject arg0)
	{
		return callMethod<jboolean>(
			"removeIf",
			"(Ljava/util/function/Predicate;)Z",
			arg0.object()
		);
	}
	jboolean CopyOnWriteArraySet::retainAll(JObject arg0)
	{
		return callMethod<jboolean>(
			"retainAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jint CopyOnWriteArraySet::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	JObject CopyOnWriteArraySet::spliterator()
	{
		return callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	JObjectArray CopyOnWriteArraySet::toArray()
	{
		return callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		);
	}
	JObjectArray CopyOnWriteArraySet::toArray(JObjectArray arg0)
	{
		return callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
} // namespace java::util::concurrent

