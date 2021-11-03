#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../../JObject.hpp"
#include "./TreeSet.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	TreeSet::TreeSet(QAndroidJniObject obj) : java::util::AbstractSet(obj) {}
	
	// Constructors
	TreeSet::TreeSet()
		: java::util::AbstractSet(
			"java.util.TreeSet",
			"()V"
		) {}
	TreeSet::TreeSet(JObject arg0)
		: java::util::AbstractSet(
			"java.util.TreeSet",
			"(Ljava/util/Collection;)V",
			arg0.object()
		) {}
	
	// Methods
	jboolean TreeSet::add(JObject arg0)
	{
		return callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean TreeSet::addAll(JObject arg0)
	{
		return callMethod<jboolean>(
			"addAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	JObject TreeSet::ceiling(JObject arg0)
	{
		return callObjectMethod(
			"ceiling",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	void TreeSet::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	JObject TreeSet::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	JObject TreeSet::comparator()
	{
		return callObjectMethod(
			"comparator",
			"()Ljava/util/Comparator;"
		);
	}
	jboolean TreeSet::contains(JObject arg0)
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject TreeSet::descendingIterator()
	{
		return callObjectMethod(
			"descendingIterator",
			"()Ljava/util/Iterator;"
		);
	}
	JObject TreeSet::descendingSet()
	{
		return callObjectMethod(
			"descendingSet",
			"()Ljava/util/NavigableSet;"
		);
	}
	JObject TreeSet::first()
	{
		return callObjectMethod(
			"first",
			"()Ljava/lang/Object;"
		);
	}
	JObject TreeSet::floor(JObject arg0)
	{
		return callObjectMethod(
			"floor",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	JObject TreeSet::headSet(JObject arg0, jboolean arg1)
	{
		return callObjectMethod(
			"headSet",
			"(Ljava/lang/Object;Z)Ljava/util/NavigableSet;",
			arg0.object<jobject>(),
			arg1
		);
	}
	JObject TreeSet::headSet(JObject arg0)
	{
		return callObjectMethod(
			"headSet",
			"(Ljava/lang/Object;)Ljava/util/SortedSet;",
			arg0.object<jobject>()
		);
	}
	JObject TreeSet::higher(JObject arg0)
	{
		return callObjectMethod(
			"higher",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	jboolean TreeSet::isEmpty()
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	JObject TreeSet::iterator()
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	JObject TreeSet::last()
	{
		return callObjectMethod(
			"last",
			"()Ljava/lang/Object;"
		);
	}
	JObject TreeSet::lower(JObject arg0)
	{
		return callObjectMethod(
			"lower",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	JObject TreeSet::pollFirst()
	{
		return callObjectMethod(
			"pollFirst",
			"()Ljava/lang/Object;"
		);
	}
	JObject TreeSet::pollLast()
	{
		return callObjectMethod(
			"pollLast",
			"()Ljava/lang/Object;"
		);
	}
	jboolean TreeSet::remove(JObject arg0)
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint TreeSet::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	JObject TreeSet::spliterator()
	{
		return callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	JObject TreeSet::subSet(JObject arg0, jboolean arg1, JObject arg2, jboolean arg3)
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
	JObject TreeSet::subSet(JObject arg0, JObject arg1)
	{
		return callObjectMethod(
			"subSet",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedSet;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	JObject TreeSet::tailSet(JObject arg0, jboolean arg1)
	{
		return callObjectMethod(
			"tailSet",
			"(Ljava/lang/Object;Z)Ljava/util/NavigableSet;",
			arg0.object<jobject>(),
			arg1
		);
	}
	JObject TreeSet::tailSet(JObject arg0)
	{
		return callObjectMethod(
			"tailSet",
			"(Ljava/lang/Object;)Ljava/util/SortedSet;",
			arg0.object<jobject>()
		);
	}
} // namespace java::util

