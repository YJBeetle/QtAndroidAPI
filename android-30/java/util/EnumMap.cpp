#include "../../JArray.hpp"
#include "../../JObjectArray.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../../JClass.hpp"
#include "../lang/Enum.hpp"
#include "../../JObject.hpp"
#include "./EnumMap.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	EnumMap::EnumMap(JClass arg0)
		: java::util::AbstractMap(
			"java.util.EnumMap",
			"(Ljava/lang/Class;)V",
			arg0.object<jclass>()
		) {}
	EnumMap::EnumMap(java::util::EnumMap &arg0)
		: java::util::AbstractMap(
			"java.util.EnumMap",
			"(Ljava/util/EnumMap;)V",
			arg0.object()
		) {}
	EnumMap::EnumMap(JObject arg0)
		: java::util::AbstractMap(
			"java.util.EnumMap",
			"(Ljava/util/Map;)V",
			arg0.object()
		) {}
	
	// Methods
	void EnumMap::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	java::util::EnumMap EnumMap::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/util/EnumMap;"
		);
	}
	jboolean EnumMap::containsKey(JObject arg0) const
	{
		return callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean EnumMap::containsValue(JObject arg0) const
	{
		return callMethod<jboolean>(
			"containsValue",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject EnumMap::entrySet() const
	{
		return callObjectMethod(
			"entrySet",
			"()Ljava/util/Set;"
		);
	}
	jboolean EnumMap::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject EnumMap::get(JObject arg0) const
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	jint EnumMap::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JObject EnumMap::keySet() const
	{
		return callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
	JObject EnumMap::put(java::lang::Enum arg0, JObject arg1) const
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/Enum;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object(),
			arg1.object<jobject>()
		);
	}
	JObject EnumMap::put(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	void EnumMap::putAll(JObject arg0) const
	{
		callMethod<void>(
			"putAll",
			"(Ljava/util/Map;)V",
			arg0.object()
		);
	}
	JObject EnumMap::remove(JObject arg0) const
	{
		return callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	jint EnumMap::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	JObject EnumMap::values() const
	{
		return callObjectMethod(
			"values",
			"()Ljava/util/Collection;"
		);
	}
} // namespace java::util

