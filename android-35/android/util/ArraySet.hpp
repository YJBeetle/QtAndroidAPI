#pragma once

#include "../../JObjectArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./ArraySet.def.hpp"

namespace android::util
{
	// Fields
	
	// Constructors
	inline ArraySet::ArraySet()
		: JObject(
			"android.util.ArraySet",
			"()V"
		) {}
	inline ArraySet::ArraySet(JObjectArray arg0)
		: JObject(
			"android.util.ArraySet",
			"([Ljava/lang/Object;)V",
			arg0.object<jobjectArray>()
		) {}
	inline ArraySet::ArraySet(android::util::ArraySet &arg0)
		: JObject(
			"android.util.ArraySet",
			"(Landroid/util/ArraySet;)V",
			arg0.object()
		) {}
	inline ArraySet::ArraySet(jint arg0)
		: JObject(
			"android.util.ArraySet",
			"(I)V",
			arg0
		) {}
	inline ArraySet::ArraySet(JObject arg0)
		: JObject(
			"android.util.ArraySet",
			"(Ljava/util/Collection;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jboolean ArraySet::add(JObject arg0) const
	{
		return callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jboolean ArraySet::addAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"addAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	inline void ArraySet::addAll(android::util::ArraySet arg0) const
	{
		callMethod<void>(
			"addAll",
			"(Landroid/util/ArraySet;)V",
			arg0.object()
		);
	}
	inline void ArraySet::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	inline jboolean ArraySet::contains(JObject arg0) const
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jboolean ArraySet::containsAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"containsAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	inline void ArraySet::ensureCapacity(jint arg0) const
	{
		callMethod<void>(
			"ensureCapacity",
			"(I)V",
			arg0
		);
	}
	inline jboolean ArraySet::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline void ArraySet::forEach(JObject arg0) const
	{
		callMethod<void>(
			"forEach",
			"(Ljava/util/function/Consumer;)V",
			arg0.object()
		);
	}
	inline jint ArraySet::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jint ArraySet::indexOf(JObject arg0) const
	{
		return callMethod<jint>(
			"indexOf",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jboolean ArraySet::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	inline JObject ArraySet::iterator() const
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	inline jboolean ArraySet::remove(JObject arg0) const
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jboolean ArraySet::removeAll(android::util::ArraySet arg0) const
	{
		return callMethod<jboolean>(
			"removeAll",
			"(Landroid/util/ArraySet;)Z",
			arg0.object()
		);
	}
	inline jboolean ArraySet::removeAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	inline JObject ArraySet::removeAt(jint arg0) const
	{
		return callObjectMethod(
			"removeAt",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	inline jboolean ArraySet::removeIf(JObject arg0) const
	{
		return callMethod<jboolean>(
			"removeIf",
			"(Ljava/util/function/Predicate;)Z",
			arg0.object()
		);
	}
	inline jboolean ArraySet::retainAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"retainAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	inline jint ArraySet::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	inline JObjectArray ArraySet::toArray() const
	{
		return callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		);
	}
	inline JObjectArray ArraySet::toArray(JObjectArray arg0) const
	{
		return callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	inline JString ArraySet::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline JObject ArraySet::valueAt(jint arg0) const
	{
		return callObjectMethod(
			"valueAt",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
} // namespace android::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::util;
#endif
