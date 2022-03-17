#pragma once

#include "../../JArray.hpp"
#include "../../JObject.hpp"
#include "../lang/ref/ReferenceQueue.def.hpp"
#include "./WeakHashMap.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	inline WeakHashMap::WeakHashMap()
		: java::util::AbstractMap(
			"java.util.WeakHashMap",
			"()V"
		) {}
	inline WeakHashMap::WeakHashMap(jint arg0)
		: java::util::AbstractMap(
			"java.util.WeakHashMap",
			"(I)V",
			arg0
		) {}
	inline WeakHashMap::WeakHashMap(JObject arg0)
		: java::util::AbstractMap(
			"java.util.WeakHashMap",
			"(Ljava/util/Map;)V",
			arg0.object()
		) {}
	inline WeakHashMap::WeakHashMap(jint arg0, jfloat arg1)
		: java::util::AbstractMap(
			"java.util.WeakHashMap",
			"(IF)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline void WeakHashMap::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	inline jboolean WeakHashMap::containsKey(JObject arg0) const
	{
		return callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jboolean WeakHashMap::containsValue(JObject arg0) const
	{
		return callMethod<jboolean>(
			"containsValue",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject WeakHashMap::entrySet() const
	{
		return callObjectMethod(
			"entrySet",
			"()Ljava/util/Set;"
		);
	}
	inline void WeakHashMap::forEach(JObject arg0) const
	{
		callMethod<void>(
			"forEach",
			"(Ljava/util/function/BiConsumer;)V",
			arg0.object()
		);
	}
	inline JObject WeakHashMap::get(JObject arg0) const
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	inline jboolean WeakHashMap::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	inline JObject WeakHashMap::keySet() const
	{
		return callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
	inline JObject WeakHashMap::put(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	inline void WeakHashMap::putAll(JObject arg0) const
	{
		callMethod<void>(
			"putAll",
			"(Ljava/util/Map;)V",
			arg0.object()
		);
	}
	inline JObject WeakHashMap::remove(JObject arg0) const
	{
		return callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	inline void WeakHashMap::replaceAll(JObject arg0) const
	{
		callMethod<void>(
			"replaceAll",
			"(Ljava/util/function/BiFunction;)V",
			arg0.object()
		);
	}
	inline jint WeakHashMap::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	inline JObject WeakHashMap::values() const
	{
		return callObjectMethod(
			"values",
			"()Ljava/util/Collection;"
		);
	}
} // namespace java::util

// Base class headers
#include "./AbstractMap.hpp"

