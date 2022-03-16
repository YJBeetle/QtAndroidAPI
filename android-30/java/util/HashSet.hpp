#pragma once

#include "../../JObjectArray.hpp"
#include "../io/ObjectInputStream.def.hpp"
#include "../io/ObjectOutputStream.def.hpp"
#include "../../JObject.hpp"
#include "./HashMap.def.hpp"
#include "./HashSet.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	inline HashSet::HashSet()
		: java::util::AbstractSet(
			"java.util.HashSet",
			"()V"
		) {}
	inline HashSet::HashSet(jint arg0)
		: java::util::AbstractSet(
			"java.util.HashSet",
			"(I)V",
			arg0
		) {}
	inline HashSet::HashSet(JObject arg0)
		: java::util::AbstractSet(
			"java.util.HashSet",
			"(Ljava/util/Collection;)V",
			arg0.object()
		) {}
	inline HashSet::HashSet(jint arg0, jfloat arg1)
		: java::util::AbstractSet(
			"java.util.HashSet",
			"(IF)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline jboolean HashSet::add(JObject arg0) const
	{
		return callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline void HashSet::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	inline JObject HashSet::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	inline jboolean HashSet::contains(JObject arg0) const
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jboolean HashSet::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	inline JObject HashSet::iterator() const
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	inline jboolean HashSet::remove(JObject arg0) const
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint HashSet::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	inline JObject HashSet::spliterator() const
	{
		return callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	inline JObjectArray HashSet::toArray() const
	{
		return callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		);
	}
	inline JObjectArray HashSet::toArray(JObjectArray arg0) const
	{
		return callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
} // namespace java::util

// Base class headers
#include "./AbstractCollection.hpp"
#include "./AbstractSet.hpp"

