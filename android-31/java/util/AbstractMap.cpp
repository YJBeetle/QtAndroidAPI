#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./AbstractMap.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	AbstractMap::AbstractMap(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void AbstractMap::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	jboolean AbstractMap::containsKey(JObject arg0)
	{
		return callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean AbstractMap::containsValue(JObject arg0)
	{
		return callMethod<jboolean>(
			"containsValue",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject AbstractMap::entrySet()
	{
		return callObjectMethod(
			"entrySet",
			"()Ljava/util/Set;"
		);
	}
	jboolean AbstractMap::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject AbstractMap::get(JObject arg0)
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	jint AbstractMap::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean AbstractMap::isEmpty()
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	JObject AbstractMap::keySet()
	{
		return callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
	JObject AbstractMap::put(JObject arg0, JObject arg1)
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	void AbstractMap::putAll(JObject arg0)
	{
		callMethod<void>(
			"putAll",
			"(Ljava/util/Map;)V",
			arg0.object()
		);
	}
	JObject AbstractMap::remove(JObject arg0)
	{
		return callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	jint AbstractMap::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	JString AbstractMap::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	JObject AbstractMap::values()
	{
		return callObjectMethod(
			"values",
			"()Ljava/util/Collection;"
		);
	}
} // namespace java::util

