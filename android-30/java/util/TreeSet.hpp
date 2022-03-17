#pragma once

#include "../io/ObjectInputStream.def.hpp"
#include "../io/ObjectOutputStream.def.hpp"
#include "../../JObject.hpp"
#include "./TreeSet.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	inline TreeSet::TreeSet()
		: java::util::AbstractSet(
			"java.util.TreeSet",
			"()V"
		) {}
	inline TreeSet::TreeSet(JObject arg0)
		: java::util::AbstractSet(
			"java.util.TreeSet",
			"(Ljava/util/Collection;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jboolean TreeSet::add(JObject arg0) const
	{
		return callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jboolean TreeSet::addAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"addAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	inline JObject TreeSet::ceiling(JObject arg0) const
	{
		return callObjectMethod(
			"ceiling",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	inline void TreeSet::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	inline JObject TreeSet::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject TreeSet::comparator() const
	{
		return callObjectMethod(
			"comparator",
			"()Ljava/util/Comparator;"
		);
	}
	inline jboolean TreeSet::contains(JObject arg0) const
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject TreeSet::descendingIterator() const
	{
		return callObjectMethod(
			"descendingIterator",
			"()Ljava/util/Iterator;"
		);
	}
	inline JObject TreeSet::descendingSet() const
	{
		return callObjectMethod(
			"descendingSet",
			"()Ljava/util/NavigableSet;"
		);
	}
	inline JObject TreeSet::first() const
	{
		return callObjectMethod(
			"first",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject TreeSet::floor(JObject arg0) const
	{
		return callObjectMethod(
			"floor",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	inline JObject TreeSet::headSet(JObject arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"headSet",
			"(Ljava/lang/Object;Z)Ljava/util/NavigableSet;",
			arg0.object<jobject>(),
			arg1
		);
	}
	inline JObject TreeSet::headSet(JObject arg0) const
	{
		return callObjectMethod(
			"headSet",
			"(Ljava/lang/Object;)Ljava/util/SortedSet;",
			arg0.object<jobject>()
		);
	}
	inline JObject TreeSet::higher(JObject arg0) const
	{
		return callObjectMethod(
			"higher",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	inline jboolean TreeSet::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	inline JObject TreeSet::iterator() const
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	inline JObject TreeSet::last() const
	{
		return callObjectMethod(
			"last",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject TreeSet::lower(JObject arg0) const
	{
		return callObjectMethod(
			"lower",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	inline JObject TreeSet::pollFirst() const
	{
		return callObjectMethod(
			"pollFirst",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject TreeSet::pollLast() const
	{
		return callObjectMethod(
			"pollLast",
			"()Ljava/lang/Object;"
		);
	}
	inline jboolean TreeSet::remove(JObject arg0) const
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint TreeSet::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	inline JObject TreeSet::spliterator() const
	{
		return callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	inline JObject TreeSet::subSet(JObject arg0, jboolean arg1, JObject arg2, jboolean arg3) const
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
	inline JObject TreeSet::subSet(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"subSet",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedSet;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	inline JObject TreeSet::tailSet(JObject arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"tailSet",
			"(Ljava/lang/Object;Z)Ljava/util/NavigableSet;",
			arg0.object<jobject>(),
			arg1
		);
	}
	inline JObject TreeSet::tailSet(JObject arg0) const
	{
		return callObjectMethod(
			"tailSet",
			"(Ljava/lang/Object;)Ljava/util/SortedSet;",
			arg0.object<jobject>()
		);
	}
} // namespace java::util

// Base class headers
#include "./AbstractCollection.hpp"
#include "./AbstractSet.hpp"

