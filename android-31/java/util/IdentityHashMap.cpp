#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
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
	void IdentityHashMap::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	jobject IdentityHashMap::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean IdentityHashMap::containsKey(jobject arg0)
	{
		return callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean IdentityHashMap::containsValue(jobject arg0)
	{
		return callMethod<jboolean>(
			"containsValue",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	JObject IdentityHashMap::entrySet()
	{
		return callObjectMethod(
			"entrySet",
			"()Ljava/util/Set;"
		);
	}
	jboolean IdentityHashMap::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void IdentityHashMap::forEach(JObject arg0)
	{
		callMethod<void>(
			"forEach",
			"(Ljava/util/function/BiConsumer;)V",
			arg0.object()
		);
	}
	jobject IdentityHashMap::get(jobject arg0)
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jint IdentityHashMap::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean IdentityHashMap::isEmpty()
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	JObject IdentityHashMap::keySet()
	{
		return callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
	jobject IdentityHashMap::put(jobject arg0, jobject arg1)
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	void IdentityHashMap::putAll(JObject arg0)
	{
		callMethod<void>(
			"putAll",
			"(Ljava/util/Map;)V",
			arg0.object()
		);
	}
	jobject IdentityHashMap::remove(jobject arg0)
	{
		return callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	void IdentityHashMap::replaceAll(JObject arg0)
	{
		callMethod<void>(
			"replaceAll",
			"(Ljava/util/function/BiFunction;)V",
			arg0.object()
		);
	}
	jint IdentityHashMap::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	JObject IdentityHashMap::values()
	{
		return callObjectMethod(
			"values",
			"()Ljava/util/Collection;"
		);
	}
} // namespace java::util

