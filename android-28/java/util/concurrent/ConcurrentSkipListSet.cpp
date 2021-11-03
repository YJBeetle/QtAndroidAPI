#include "../../../JObject.hpp"
#include "../../lang/reflect/Field.hpp"
#include "./ConcurrentSkipListSet.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QJniObject forward
	ConcurrentSkipListSet::ConcurrentSkipListSet(QJniObject obj) : java::util::AbstractSet(obj) {}
	
	// Constructors
	ConcurrentSkipListSet::ConcurrentSkipListSet()
		: java::util::AbstractSet(
			"java.util.concurrent.ConcurrentSkipListSet",
			"()V"
		) {}
	ConcurrentSkipListSet::ConcurrentSkipListSet(JObject arg0)
		: java::util::AbstractSet(
			"java.util.concurrent.ConcurrentSkipListSet",
			"(Ljava/util/Collection;)V",
			arg0.object()
		) {}
	
	// Methods
	jboolean ConcurrentSkipListSet::add(JObject arg0)
	{
		return callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject ConcurrentSkipListSet::ceiling(JObject arg0)
	{
		return callObjectMethod(
			"ceiling",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	void ConcurrentSkipListSet::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	java::util::concurrent::ConcurrentSkipListSet ConcurrentSkipListSet::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/util/concurrent/ConcurrentSkipListSet;"
		);
	}
	JObject ConcurrentSkipListSet::comparator()
	{
		return callObjectMethod(
			"comparator",
			"()Ljava/util/Comparator;"
		);
	}
	jboolean ConcurrentSkipListSet::contains(JObject arg0)
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject ConcurrentSkipListSet::descendingIterator()
	{
		return callObjectMethod(
			"descendingIterator",
			"()Ljava/util/Iterator;"
		);
	}
	JObject ConcurrentSkipListSet::descendingSet()
	{
		return callObjectMethod(
			"descendingSet",
			"()Ljava/util/NavigableSet;"
		);
	}
	jboolean ConcurrentSkipListSet::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject ConcurrentSkipListSet::first()
	{
		return callObjectMethod(
			"first",
			"()Ljava/lang/Object;"
		);
	}
	JObject ConcurrentSkipListSet::floor(JObject arg0)
	{
		return callObjectMethod(
			"floor",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	JObject ConcurrentSkipListSet::headSet(JObject arg0)
	{
		return callObjectMethod(
			"headSet",
			"(Ljava/lang/Object;)Ljava/util/NavigableSet;",
			arg0.object<jobject>()
		);
	}
	JObject ConcurrentSkipListSet::headSet(JObject arg0, jboolean arg1)
	{
		return callObjectMethod(
			"headSet",
			"(Ljava/lang/Object;Z)Ljava/util/NavigableSet;",
			arg0.object<jobject>(),
			arg1
		);
	}
	JObject ConcurrentSkipListSet::higher(JObject arg0)
	{
		return callObjectMethod(
			"higher",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	jboolean ConcurrentSkipListSet::isEmpty()
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	JObject ConcurrentSkipListSet::iterator()
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	JObject ConcurrentSkipListSet::last()
	{
		return callObjectMethod(
			"last",
			"()Ljava/lang/Object;"
		);
	}
	JObject ConcurrentSkipListSet::lower(JObject arg0)
	{
		return callObjectMethod(
			"lower",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	JObject ConcurrentSkipListSet::pollFirst()
	{
		return callObjectMethod(
			"pollFirst",
			"()Ljava/lang/Object;"
		);
	}
	JObject ConcurrentSkipListSet::pollLast()
	{
		return callObjectMethod(
			"pollLast",
			"()Ljava/lang/Object;"
		);
	}
	jboolean ConcurrentSkipListSet::remove(JObject arg0)
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean ConcurrentSkipListSet::removeAll(JObject arg0)
	{
		return callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jint ConcurrentSkipListSet::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	JObject ConcurrentSkipListSet::spliterator()
	{
		return callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	JObject ConcurrentSkipListSet::subSet(JObject arg0, JObject arg1)
	{
		return callObjectMethod(
			"subSet",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/NavigableSet;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	JObject ConcurrentSkipListSet::subSet(JObject arg0, jboolean arg1, JObject arg2, jboolean arg3)
	{
		return callObjectMethod(
			"subSet",
			"(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableSet;",
			arg0.object<jobject>(),
			arg1,
			arg2.object<jobject>(),
			arg3
		);
	}
	JObject ConcurrentSkipListSet::tailSet(JObject arg0)
	{
		return callObjectMethod(
			"tailSet",
			"(Ljava/lang/Object;)Ljava/util/NavigableSet;",
			arg0.object<jobject>()
		);
	}
	JObject ConcurrentSkipListSet::tailSet(JObject arg0, jboolean arg1)
	{
		return callObjectMethod(
			"tailSet",
			"(Ljava/lang/Object;Z)Ljava/util/NavigableSet;",
			arg0.object<jobject>(),
			arg1
		);
	}
} // namespace java::util::concurrent

