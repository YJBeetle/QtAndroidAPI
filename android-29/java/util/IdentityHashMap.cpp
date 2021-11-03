#include "../../JObjectArray.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../../JObject.hpp"
#include "./IdentityHashMap.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	IdentityHashMap::IdentityHashMap(QAndroidJniObject obj) : java::util::AbstractMap(obj) {}
	
	// Constructors
	IdentityHashMap::IdentityHashMap()
		: java::util::AbstractMap(
			"java.util.IdentityHashMap",
			"()V"
		) {}
	IdentityHashMap::IdentityHashMap(jint arg0)
		: java::util::AbstractMap(
			"java.util.IdentityHashMap",
			"(I)V",
			arg0
		) {}
	IdentityHashMap::IdentityHashMap(JObject arg0)
		: java::util::AbstractMap(
			"java.util.IdentityHashMap",
			"(Ljava/util/Map;)V",
			arg0.object()
		) {}
	
	// Methods
	void IdentityHashMap::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	JObject IdentityHashMap::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	jboolean IdentityHashMap::containsKey(JObject arg0) const
	{
		return callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean IdentityHashMap::containsValue(JObject arg0) const
	{
		return callMethod<jboolean>(
			"containsValue",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject IdentityHashMap::entrySet() const
	{
		return callObjectMethod(
			"entrySet",
			"()Ljava/util/Set;"
		);
	}
	jboolean IdentityHashMap::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	void IdentityHashMap::forEach(JObject arg0) const
	{
		callMethod<void>(
			"forEach",
			"(Ljava/util/function/BiConsumer;)V",
			arg0.object()
		);
	}
	JObject IdentityHashMap::get(JObject arg0) const
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	jint IdentityHashMap::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean IdentityHashMap::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	JObject IdentityHashMap::keySet() const
	{
		return callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
	JObject IdentityHashMap::put(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	void IdentityHashMap::putAll(JObject arg0) const
	{
		callMethod<void>(
			"putAll",
			"(Ljava/util/Map;)V",
			arg0.object()
		);
	}
	JObject IdentityHashMap::remove(JObject arg0) const
	{
		return callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	void IdentityHashMap::replaceAll(JObject arg0) const
	{
		callMethod<void>(
			"replaceAll",
			"(Ljava/util/function/BiFunction;)V",
			arg0.object()
		);
	}
	jint IdentityHashMap::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	JObject IdentityHashMap::values() const
	{
		return callObjectMethod(
			"values",
			"()Ljava/util/Collection;"
		);
	}
} // namespace java::util

