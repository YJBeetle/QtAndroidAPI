#include "../../JArray.hpp"
#include "../../JObject.hpp"
#include "../lang/ref/ReferenceQueue.hpp"
#include "./WeakHashMap.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	WeakHashMap::WeakHashMap(QJniObject obj) : java::util::AbstractMap(obj) {}
	
	// Constructors
	WeakHashMap::WeakHashMap()
		: java::util::AbstractMap(
			"java.util.WeakHashMap",
			"()V"
		) {}
	WeakHashMap::WeakHashMap(jint arg0)
		: java::util::AbstractMap(
			"java.util.WeakHashMap",
			"(I)V",
			arg0
		) {}
	WeakHashMap::WeakHashMap(JObject arg0)
		: java::util::AbstractMap(
			"java.util.WeakHashMap",
			"(Ljava/util/Map;)V",
			arg0.object()
		) {}
	WeakHashMap::WeakHashMap(jint arg0, jfloat arg1)
		: java::util::AbstractMap(
			"java.util.WeakHashMap",
			"(IF)V",
			arg0,
			arg1
		) {}
	
	// Methods
	void WeakHashMap::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	jboolean WeakHashMap::containsKey(JObject arg0) const
	{
		return callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean WeakHashMap::containsValue(JObject arg0) const
	{
		return callMethod<jboolean>(
			"containsValue",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject WeakHashMap::entrySet() const
	{
		return callObjectMethod(
			"entrySet",
			"()Ljava/util/Set;"
		);
	}
	void WeakHashMap::forEach(JObject arg0) const
	{
		callMethod<void>(
			"forEach",
			"(Ljava/util/function/BiConsumer;)V",
			arg0.object()
		);
	}
	JObject WeakHashMap::get(JObject arg0) const
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	jboolean WeakHashMap::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	JObject WeakHashMap::keySet() const
	{
		return callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
	JObject WeakHashMap::put(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	void WeakHashMap::putAll(JObject arg0) const
	{
		callMethod<void>(
			"putAll",
			"(Ljava/util/Map;)V",
			arg0.object()
		);
	}
	JObject WeakHashMap::remove(JObject arg0) const
	{
		return callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	void WeakHashMap::replaceAll(JObject arg0) const
	{
		callMethod<void>(
			"replaceAll",
			"(Ljava/util/function/BiFunction;)V",
			arg0.object()
		);
	}
	jint WeakHashMap::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	JObject WeakHashMap::values() const
	{
		return callObjectMethod(
			"values",
			"()Ljava/util/Collection;"
		);
	}
} // namespace java::util

