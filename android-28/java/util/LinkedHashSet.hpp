#pragma once

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
