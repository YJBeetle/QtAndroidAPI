#pragma once

#include "../../../JObject.hpp"
#include "../../lang/reflect/Field.def.hpp"
#include "./ConcurrentSkipListSet.def.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// Constructors
	inline ConcurrentSkipListSet::ConcurrentSkipListSet()
		: java::util::AbstractSet(
			"java.util.concurrent.ConcurrentSkipListSet",
			"()V"
		) {}
	inline ConcurrentSkipListSet::ConcurrentSkipListSet(JObject arg0)
		: java::util::AbstractSet(
			"java.util.concurrent.ConcurrentSkipListSet",
			"(Ljava/util/Collection;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jboolean ConcurrentSkipListSet::add(JObject arg0) const
	{
		return callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject ConcurrentSkipListSet::ceiling(JObject arg0) const
	{
		return callObjectMethod(
			"ceiling",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	inline void ConcurrentSkipListSet::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	inline java::util::concurrent::ConcurrentSkipListSet ConcurrentSkipListSet::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/util/concurrent/ConcurrentSkipListSet;"
		);
	}
	inline JObject ConcurrentSkipListSet::comparator() const
	{
		return callObjectMethod(
			"comparator",
			"()Ljava/util/Comparator;"
		);
	}
	inline jboolean ConcurrentSkipListSet::contains(JObject arg0) const
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject ConcurrentSkipListSet::descendingIterator() const
	{
		return callObjectMethod(
			"descendingIterator",
			"()Ljava/util/Iterator;"
		);
	}
	inline JObject ConcurrentSkipListSet::descendingSet() const
	{
		return callObjectMethod(
			"descendingSet",
			"()Ljava/util/NavigableSet;"
		);
	}
	inline jboolean ConcurrentSkipListSet::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject ConcurrentSkipListSet::first() const
	{
		return callObjectMethod(
			"first",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject ConcurrentSkipListSet::floor(JObject arg0) const
	{
		return callObjectMethod(
			"floor",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	inline JObject ConcurrentSkipListSet::headSet(JObject arg0) const
	{
		return callObjectMethod(
			"headSet",
			"(Ljava/lang/Object;)Ljava/util/NavigableSet;",
			arg0.object<jobject>()
		);
	}
	inline JObject ConcurrentSkipListSet::headSet(JObject arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"headSet",
			"(Ljava/lang/Object;Z)Ljava/util/NavigableSet;",
			arg0.object<jobject>(),
			arg1
		);
	}
	inline JObject ConcurrentSkipListSet::higher(JObject arg0) const
	{
		return callObjectMethod(
			"higher",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	inline jboolean ConcurrentSkipListSet::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	inline JObject ConcurrentSkipListSet::iterator() const
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	inline JObject ConcurrentSkipListSet::last() const
	{
		return callObjectMethod(
			"last",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject ConcurrentSkipListSet::lower(JObject arg0) const
	{
		return callObjectMethod(
			"lower",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	inline JObject ConcurrentSkipListSet::pollFirst() const
	{
		return callObjectMethod(
			"pollFirst",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject ConcurrentSkipListSet::pollLast() const
	{
		return callObjectMethod(
			"pollLast",
			"()Ljava/lang/Object;"
		);
	}
	inline jboolean ConcurrentSkipListSet::remove(JObject arg0) const
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jboolean ConcurrentSkipListSet::removeAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	inline jint ConcurrentSkipListSet::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	inline JObject ConcurrentSkipListSet::spliterator() const
	{
		return callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	inline JObject ConcurrentSkipListSet::subSet(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"subSet",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/NavigableSet;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	inline JObject ConcurrentSkipListSet::subSet(JObject arg0, jboolean arg1, JObject arg2, jboolean arg3) const
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
	inline JObject ConcurrentSkipListSet::tailSet(JObject arg0) const
	{
		return callObjectMethod(
			"tailSet",
			"(Ljava/lang/Object;)Ljava/util/NavigableSet;",
			arg0.object<jobject>()
		);
	}
	inline JObject ConcurrentSkipListSet::tailSet(JObject arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"tailSet",
			"(Ljava/lang/Object;Z)Ljava/util/NavigableSet;",
			arg0.object<jobject>(),
			arg1
		);
	}
} // namespace java::util::concurrent

// Base class headers
#include "../AbstractCollection.hpp"
#include "../AbstractSet.hpp"

