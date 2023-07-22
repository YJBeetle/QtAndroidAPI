#pragma once

#include "../../JObjectArray.hpp"
#include "../io/ObjectOutputStream.def.hpp"
#include "../../JObject.hpp"
#include "./LinkedHashMap.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	inline LinkedHashMap::LinkedHashMap()
		: java::util::HashMap(
			"java.util.LinkedHashMap",
			"()V"
		) {}
	inline LinkedHashMap::LinkedHashMap(jint arg0)
		: java::util::HashMap(
			"java.util.LinkedHashMap",
			"(I)V",
			arg0
		) {}
	inline LinkedHashMap::LinkedHashMap(JObject arg0)
		: java::util::HashMap(
			"java.util.LinkedHashMap",
			"(Ljava/util/Map;)V",
			arg0.object()
		) {}
	inline LinkedHashMap::LinkedHashMap(jint arg0, jfloat arg1)
		: java::util::HashMap(
			"java.util.LinkedHashMap",
			"(IF)V",
			arg0,
			arg1
		) {}
	inline LinkedHashMap::LinkedHashMap(jint arg0, jfloat arg1, jboolean arg2)
		: java::util::HashMap(
			"java.util.LinkedHashMap",
			"(IFZ)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	inline java::util::LinkedHashMap LinkedHashMap::newLinkedHashMap(jint arg0)
	{
		return callStaticObjectMethod(
			"java.util.LinkedHashMap",
			"newLinkedHashMap",
			"(I)Ljava/util/LinkedHashMap;",
			arg0
		);
	}
	inline void LinkedHashMap::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	inline jboolean LinkedHashMap::containsValue(JObject arg0) const
	{
		return callMethod<jboolean>(
			"containsValue",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject LinkedHashMap::entrySet() const
	{
		return callObjectMethod(
			"entrySet",
			"()Ljava/util/Set;"
		);
	}
	inline void LinkedHashMap::forEach(JObject arg0) const
	{
		callMethod<void>(
			"forEach",
			"(Ljava/util/function/BiConsumer;)V",
			arg0.object()
		);
	}
	inline JObject LinkedHashMap::get(JObject arg0) const
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	inline JObject LinkedHashMap::getOrDefault(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"getOrDefault",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	inline JObject LinkedHashMap::keySet() const
	{
		return callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
	inline void LinkedHashMap::replaceAll(JObject arg0) const
	{
		callMethod<void>(
			"replaceAll",
			"(Ljava/util/function/BiFunction;)V",
			arg0.object()
		);
	}
	inline JObject LinkedHashMap::values() const
	{
		return callObjectMethod(
			"values",
			"()Ljava/util/Collection;"
		);
	}
} // namespace java::util

// Base class headers
#include "./AbstractMap.hpp"
#include "./HashMap.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util;
#endif
