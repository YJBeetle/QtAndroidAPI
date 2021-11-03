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
	
	// QJniObject forward
	EnumMap::EnumMap(QJniObject obj) : java::util::AbstractMap(obj) {}
	
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
	void EnumMap::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	java::util::EnumMap EnumMap::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/util/EnumMap;"
		);
	}
	jboolean EnumMap::containsKey(JObject arg0)
	{
		return callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean EnumMap::containsValue(JObject arg0)
	{
		return callMethod<jboolean>(
			"containsValue",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject EnumMap::entrySet()
	{
		return callObjectMethod(
			"entrySet",
			"()Ljava/util/Set;"
		);
	}
	jboolean EnumMap::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject EnumMap::get(JObject arg0)
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	jint EnumMap::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JObject EnumMap::keySet()
	{
		return callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
	JObject EnumMap::put(java::lang::Enum arg0, JObject arg1)
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/Enum;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object(),
			arg1.object<jobject>()
		);
	}
	JObject EnumMap::put(JObject arg0, JObject arg1)
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	void EnumMap::putAll(JObject arg0)
	{
		callMethod<void>(
			"putAll",
			"(Ljava/util/Map;)V",
			arg0.object()
		);
	}
	JObject EnumMap::remove(JObject arg0)
	{
		return callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	jint EnumMap::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	JObject EnumMap::values()
	{
		return callObjectMethod(
			"values",
			"()Ljava/util/Collection;"
		);
	}
} // namespace java::util

