#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./ArrayMap.def.hpp"

namespace android::util
{
	// Fields
	
	// Constructors
	inline ArrayMap::ArrayMap()
		: JObject(
			"android.util.ArrayMap",
			"()V"
		) {}
	inline ArrayMap::ArrayMap(android::util::ArrayMap &arg0)
		: JObject(
			"android.util.ArrayMap",
			"(Landroid/util/ArrayMap;)V",
			arg0.object()
		) {}
	inline ArrayMap::ArrayMap(jint arg0)
		: JObject(
			"android.util.ArrayMap",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline void ArrayMap::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	inline jboolean ArrayMap::containsAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"containsAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	inline jboolean ArrayMap::containsKey(JObject arg0) const
	{
		return callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jboolean ArrayMap::containsValue(JObject arg0) const
	{
		return callMethod<jboolean>(
			"containsValue",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline void ArrayMap::ensureCapacity(jint arg0) const
	{
		callMethod<void>(
			"ensureCapacity",
			"(I)V",
			arg0
		);
	}
	inline JObject ArrayMap::entrySet() const
	{
		return callObjectMethod(
			"entrySet",
			"()Ljava/util/Set;"
		);
	}
	inline jboolean ArrayMap::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline void ArrayMap::forEach(JObject arg0) const
	{
		callMethod<void>(
			"forEach",
			"(Ljava/util/function/BiConsumer;)V",
			arg0.object()
		);
	}
	inline JObject ArrayMap::get(JObject arg0) const
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	inline jint ArrayMap::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jint ArrayMap::indexOfKey(JObject arg0) const
	{
		return callMethod<jint>(
			"indexOfKey",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jint ArrayMap::indexOfValue(JObject arg0) const
	{
		return callMethod<jint>(
			"indexOfValue",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jboolean ArrayMap::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	inline JObject ArrayMap::keyAt(jint arg0) const
	{
		return callObjectMethod(
			"keyAt",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	inline JObject ArrayMap::keySet() const
	{
		return callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
	inline JObject ArrayMap::put(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	inline void ArrayMap::putAll(android::util::ArrayMap arg0) const
	{
		callMethod<void>(
			"putAll",
			"(Landroid/util/ArrayMap;)V",
			arg0.object()
		);
	}
	inline void ArrayMap::putAll(JObject arg0) const
	{
		callMethod<void>(
			"putAll",
			"(Ljava/util/Map;)V",
			arg0.object()
		);
	}
	inline JObject ArrayMap::remove(JObject arg0) const
	{
		return callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	inline jboolean ArrayMap::removeAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	inline JObject ArrayMap::removeAt(jint arg0) const
	{
		return callObjectMethod(
			"removeAt",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	inline void ArrayMap::replaceAll(JObject arg0) const
	{
		callMethod<void>(
			"replaceAll",
			"(Ljava/util/function/BiFunction;)V",
			arg0.object()
		);
	}
	inline jboolean ArrayMap::retainAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"retainAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	inline JObject ArrayMap::setValueAt(jint arg0, JObject arg1) const
	{
		return callObjectMethod(
			"setValueAt",
			"(ILjava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1.object<jobject>()
		);
	}
	inline jint ArrayMap::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	inline JString ArrayMap::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline JObject ArrayMap::valueAt(jint arg0) const
	{
		return callObjectMethod(
			"valueAt",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	inline JObject ArrayMap::values() const
	{
		return callObjectMethod(
			"values",
			"()Ljava/util/Collection;"
		);
	}
} // namespace android::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::util;
#endif
