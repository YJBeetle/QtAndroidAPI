#pragma once

#include "../../../JObject.hpp"
#include "./ConcurrentHashMap.def.hpp"
#include "./ConcurrentHashMap_KeySetView.def.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean ConcurrentHashMap_KeySetView::add(JObject arg0) const
	{
		return callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jboolean ConcurrentHashMap_KeySetView::addAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"addAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	inline jboolean ConcurrentHashMap_KeySetView::contains(JObject arg0) const
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jboolean ConcurrentHashMap_KeySetView::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline void ConcurrentHashMap_KeySetView::forEach(JObject arg0) const
	{
		callMethod<void>(
			"forEach",
			"(Ljava/util/function/Consumer;)V",
			arg0.object()
		);
	}
	inline java::util::concurrent::ConcurrentHashMap ConcurrentHashMap_KeySetView::getMap() const
	{
		return callObjectMethod(
			"getMap",
			"()Ljava/util/concurrent/ConcurrentHashMap;"
		);
	}
	inline JObject ConcurrentHashMap_KeySetView::getMappedValue() const
	{
		return callObjectMethod(
			"getMappedValue",
			"()Ljava/lang/Object;"
		);
	}
	inline jint ConcurrentHashMap_KeySetView::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JObject ConcurrentHashMap_KeySetView::iterator() const
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	inline jboolean ConcurrentHashMap_KeySetView::remove(JObject arg0) const
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jboolean ConcurrentHashMap_KeySetView::removeAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	inline JObject ConcurrentHashMap_KeySetView::spliterator() const
	{
		return callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
} // namespace java::util::concurrent

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::concurrent;
#endif
