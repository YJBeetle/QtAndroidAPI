#pragma once

#include "../../JArray.hpp"
#include "../../JObjectArray.hpp"
#include "../io/ObjectInputStream.def.hpp"
#include "../io/ObjectOutputStream.def.hpp"
#include "../../JClass.hpp"
#include "../lang/Enum.def.hpp"
#include "../../JObject.hpp"
#include "./EnumMap.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	inline EnumMap::EnumMap(JClass arg0)
		: java::util::AbstractMap(
			"java.util.EnumMap",
			"(Ljava/lang/Class;)V",
			arg0.object<jclass>()
		) {}
	inline EnumMap::EnumMap(java::util::EnumMap &arg0)
		: java::util::AbstractMap(
			"java.util.EnumMap",
			"(Ljava/util/EnumMap;)V",
			arg0.object()
		) {}
	inline EnumMap::EnumMap(JObject arg0)
		: java::util::AbstractMap(
			"java.util.EnumMap",
			"(Ljava/util/Map;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void EnumMap::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	inline java::util::EnumMap EnumMap::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/util/EnumMap;"
		);
	}
	inline jboolean EnumMap::containsKey(JObject arg0) const
	{
		return callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jboolean EnumMap::containsValue(JObject arg0) const
	{
		return callMethod<jboolean>(
			"containsValue",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject EnumMap::entrySet() const
	{
		return callObjectMethod(
			"entrySet",
			"()Ljava/util/Set;"
		);
	}
	inline jboolean EnumMap::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject EnumMap::get(JObject arg0) const
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	inline jint EnumMap::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JObject EnumMap::keySet() const
	{
		return callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
	inline JObject EnumMap::put(java::lang::Enum arg0, JObject arg1) const
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/Enum;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object(),
			arg1.object<jobject>()
		);
	}
	inline JObject EnumMap::put(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	inline void EnumMap::putAll(JObject arg0) const
	{
		callMethod<void>(
			"putAll",
			"(Ljava/util/Map;)V",
			arg0.object()
		);
	}
	inline JObject EnumMap::remove(JObject arg0) const
	{
		return callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	inline jint EnumMap::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	inline JObject EnumMap::values() const
	{
		return callObjectMethod(
			"values",
			"()Ljava/util/Collection;"
		);
	}
} // namespace java::util

// Base class headers
#include "./AbstractMap.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util;
#endif
