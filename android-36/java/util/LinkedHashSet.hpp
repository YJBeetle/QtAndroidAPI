#pragma once

#include "../../JObject.hpp"
#include "./LinkedHashMap.def.hpp"
#include "./LinkedHashSet.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	inline LinkedHashSet::LinkedHashSet()
		: java::util::HashSet(
			"java.util.LinkedHashSet",
			"()V"
		) {}
	inline LinkedHashSet::LinkedHashSet(jint arg0)
		: java::util::HashSet(
			"java.util.LinkedHashSet",
			"(I)V",
			arg0
		) {}
	inline LinkedHashSet::LinkedHashSet(JObject arg0)
		: java::util::HashSet(
			"java.util.LinkedHashSet",
			"(Ljava/util/Collection;)V",
			arg0.object()
		) {}
	inline LinkedHashSet::LinkedHashSet(jint arg0, jfloat arg1)
		: java::util::HashSet(
			"java.util.LinkedHashSet",
			"(IF)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline java::util::LinkedHashSet LinkedHashSet::newLinkedHashSet(jint arg0)
	{
		return callStaticObjectMethod(
			"java.util.LinkedHashSet",
			"newLinkedHashSet",
			"(I)Ljava/util/LinkedHashSet;",
			arg0
		);
	}
	inline void LinkedHashSet::addFirst(JObject arg0) const
	{
		callMethod<void>(
			"addFirst",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	inline void LinkedHashSet::addLast(JObject arg0) const
	{
		callMethod<void>(
			"addLast",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	inline JObject LinkedHashSet::getFirst() const
	{
		return callObjectMethod(
			"getFirst",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject LinkedHashSet::getLast() const
	{
		return callObjectMethod(
			"getLast",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject LinkedHashSet::removeFirst() const
	{
		return callObjectMethod(
			"removeFirst",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject LinkedHashSet::removeLast() const
	{
		return callObjectMethod(
			"removeLast",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject LinkedHashSet::reversed() const
	{
		return callObjectMethod(
			"reversed",
			"()Ljava/util/SequencedSet;"
		);
	}
	inline JObject LinkedHashSet::spliterator() const
	{
		return callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
} // namespace java::util

// Base class headers
#include "./AbstractCollection.hpp"
#include "./AbstractSet.hpp"
#include "./HashSet.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util;
#endif
