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
	CopyOnWriteArraySet::CopyOnWriteArraySet(__JniBaseClass arg0)
		: java::util::AbstractSet(
			"java.util.concurrent.CopyOnWriteArraySet",
			"(Ljava/util/Collection;)V",
			arg0.object()
		) {}
	
	// Methods
	jboolean CopyOnWriteArraySet::add(jobject arg0)
	{
		return callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean CopyOnWriteArraySet::addAll(__JniBaseClass arg0)
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
	jboolean CopyOnWriteArraySet::contains(jobject arg0)
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean CopyOnWriteArraySet::containsAll(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"containsAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jboolean CopyOnWriteArraySet::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void CopyOnWriteArraySet::forEach(__JniBaseClass arg0)
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
	QAndroidJniObject CopyOnWriteArraySet::iterator()
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jboolean CopyOnWriteArraySet::remove(jobject arg0)
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean CopyOnWriteArraySet::removeAll(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jboolean CopyOnWriteArraySet::removeIf(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"removeIf",
			"(Ljava/util/function/Predicate;)Z",
			arg0.object()
		);
	}
	jboolean CopyOnWriteArraySet::retainAll(__JniBaseClass arg0)
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
	QAndroidJniObject CopyOnWriteArraySet::spliterator()
	{
		return callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	jobjectArray CopyOnWriteArraySet::toArray()
	{
		return callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		).object<jobjectArray>();
	}
	jobjectArray CopyOnWriteArraySet::toArray(jobjectArray arg0)
	{
		return callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0
		).object<jobjectArray>();
	}
} // namespace java::util::concurrent

