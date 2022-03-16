#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./AbstractMap_SimpleImmutableEntry.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	inline AbstractMap_SimpleImmutableEntry::AbstractMap_SimpleImmutableEntry(JObject arg0)
		: JObject(
			"java.util.AbstractMap$SimpleImmutableEntry",
			"(Ljava/util/Map$Entry;)V",
			arg0.object()
		) {}
	inline AbstractMap_SimpleImmutableEntry::AbstractMap_SimpleImmutableEntry(JObject arg0, JObject arg1)
		: JObject(
			"java.util.AbstractMap$SimpleImmutableEntry",
			"(Ljava/lang/Object;Ljava/lang/Object;)V",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		) {}
	
	// Methods
	inline jboolean AbstractMap_SimpleImmutableEntry::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject AbstractMap_SimpleImmutableEntry::getKey() const
	{
		return callObjectMethod(
			"getKey",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject AbstractMap_SimpleImmutableEntry::getValue() const
	{
		return callObjectMethod(
			"getValue",
			"()Ljava/lang/Object;"
		);
	}
	inline jint AbstractMap_SimpleImmutableEntry::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JObject AbstractMap_SimpleImmutableEntry::setValue(JObject arg0) const
	{
		return callObjectMethod(
			"setValue",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	inline JString AbstractMap_SimpleImmutableEntry::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util

// Base class headers

