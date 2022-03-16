#include "../../JObjectArray.hpp"
#include "../../JArray.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "./HashMap.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	HashMap::HashMap()
		: java::util::AbstractMap(
			"java.util.HashMap",
			"()V"
		) {}
	HashMap::HashMap(jint arg0)
		: java::util::AbstractMap(
			"java.util.HashMap",
			"(I)V",
			arg0
		) {}
	HashMap::HashMap(JObject arg0)
		: java::util::AbstractMap(
			"java.util.HashMap",
			"(Ljava/util/Map;)V",
			arg0.object()
		) {}
	HashMap::HashMap(jint arg0, jfloat arg1)
		: java::util::AbstractMap(
			"java.util.HashMap",
			"(IF)V",
			arg0,
			arg1
		) {}
	
	// Methods
	void HashMap::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	JObject HashMap::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	JObject HashMap::compute(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"compute",
			"(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	JObject HashMap::computeIfAbsent(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"computeIfAbsent",
			"(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	JObject HashMap::computeIfPresent(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"computeIfPresent",
			"(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	jboolean HashMap::containsKey(JObject arg0) const
	{
		return callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean HashMap::containsValue(JObject arg0) const
	{
		return callMethod<jboolean>(
			"containsValue",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject HashMap::entrySet() const
	{
		return callObjectMethod(
			"entrySet",
			"()Ljava/util/Set;"
		);
	}
	void HashMap::forEach(JObject arg0) const
	{
		callMethod<void>(
			"forEach",
			"(Ljava/util/function/BiConsumer;)V",
			arg0.object()
		);
	}
	JObject HashMap::get(JObject arg0) const
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	JObject HashMap::getOrDefault(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"getOrDefault",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	jboolean HashMap::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	JObject HashMap::keySet() const
	{
		return callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
	JObject HashMap::merge(JObject arg0, JObject arg1, JObject arg2) const
	{
		return callObjectMethod(
			"merge",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>(),
			arg2.object()
		);
	}
	JObject HashMap::put(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	void HashMap::putAll(JObject arg0) const
	{
		callMethod<void>(
			"putAll",
			"(Ljava/util/Map;)V",
			arg0.object()
		);
	}
	JObject HashMap::putIfAbsent(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"putIfAbsent",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	jboolean HashMap::remove(JObject arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	JObject HashMap::remove(JObject arg0) const
	{
		return callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	jboolean HashMap::replace(JObject arg0, JObject arg1, JObject arg2) const
	{
		return callMethod<jboolean>(
			"replace",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0.object<jobject>(),
			arg1.object<jobject>(),
			arg2.object<jobject>()
		);
	}
	JObject HashMap::replace(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"replace",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	void HashMap::replaceAll(JObject arg0) const
	{
		callMethod<void>(
			"replaceAll",
			"(Ljava/util/function/BiFunction;)V",
			arg0.object()
		);
	}
	jint HashMap::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	JObject HashMap::values() const
	{
		return callObjectMethod(
			"values",
			"()Ljava/util/Collection;"
		);
	}
} // namespace java::util

