#pragma once

#include "../../io/ObjectInputStream.def.hpp"
#include "../../io/ObjectOutputStream.def.hpp"
#include "../../../JObject.hpp"
#include "../AbstractMap_SimpleImmutableEntry.def.hpp"
#include "./atomic/LongAdder.def.hpp"
#include "./ConcurrentSkipListMap.def.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// Constructors
	inline ConcurrentSkipListMap::ConcurrentSkipListMap()
		: java::util::AbstractMap(
			"java.util.concurrent.ConcurrentSkipListMap",
			"()V"
		) {}
	inline ConcurrentSkipListMap::ConcurrentSkipListMap(JObject arg0)
		: java::util::AbstractMap(
			"java.util.concurrent.ConcurrentSkipListMap",
			"(Ljava/util/Comparator;)V",
			arg0.object()
		) {}
	
	// Methods
	inline JObject ConcurrentSkipListMap::ceilingEntry(JObject arg0) const
	{
		return callObjectMethod(
			"ceilingEntry",
			"(Ljava/lang/Object;)Ljava/util/Map$Entry;",
			arg0.object<jobject>()
		);
	}
	inline JObject ConcurrentSkipListMap::ceilingKey(JObject arg0) const
	{
		return callObjectMethod(
			"ceilingKey",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	inline void ConcurrentSkipListMap::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	inline java::util::concurrent::ConcurrentSkipListMap ConcurrentSkipListMap::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/util/concurrent/ConcurrentSkipListMap;"
		);
	}
	inline JObject ConcurrentSkipListMap::comparator() const
	{
		return callObjectMethod(
			"comparator",
			"()Ljava/util/Comparator;"
		);
	}
	inline JObject ConcurrentSkipListMap::compute(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"compute",
			"(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	inline JObject ConcurrentSkipListMap::computeIfAbsent(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"computeIfAbsent",
			"(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	inline JObject ConcurrentSkipListMap::computeIfPresent(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"computeIfPresent",
			"(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	inline jboolean ConcurrentSkipListMap::containsKey(JObject arg0) const
	{
		return callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jboolean ConcurrentSkipListMap::containsValue(JObject arg0) const
	{
		return callMethod<jboolean>(
			"containsValue",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject ConcurrentSkipListMap::descendingKeySet() const
	{
		return callObjectMethod(
			"descendingKeySet",
			"()Ljava/util/NavigableSet;"
		);
	}
	inline JObject ConcurrentSkipListMap::descendingMap() const
	{
		return callObjectMethod(
			"descendingMap",
			"()Ljava/util/concurrent/ConcurrentNavigableMap;"
		);
	}
	inline JObject ConcurrentSkipListMap::entrySet() const
	{
		return callObjectMethod(
			"entrySet",
			"()Ljava/util/Set;"
		);
	}
	inline jboolean ConcurrentSkipListMap::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject ConcurrentSkipListMap::firstEntry() const
	{
		return callObjectMethod(
			"firstEntry",
			"()Ljava/util/Map$Entry;"
		);
	}
	inline JObject ConcurrentSkipListMap::firstKey() const
	{
		return callObjectMethod(
			"firstKey",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject ConcurrentSkipListMap::floorEntry(JObject arg0) const
	{
		return callObjectMethod(
			"floorEntry",
			"(Ljava/lang/Object;)Ljava/util/Map$Entry;",
			arg0.object<jobject>()
		);
	}
	inline JObject ConcurrentSkipListMap::floorKey(JObject arg0) const
	{
		return callObjectMethod(
			"floorKey",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	inline void ConcurrentSkipListMap::forEach(JObject arg0) const
	{
		callMethod<void>(
			"forEach",
			"(Ljava/util/function/BiConsumer;)V",
			arg0.object()
		);
	}
	inline JObject ConcurrentSkipListMap::get(JObject arg0) const
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	inline JObject ConcurrentSkipListMap::getOrDefault(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"getOrDefault",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	inline JObject ConcurrentSkipListMap::headMap(JObject arg0) const
	{
		return callObjectMethod(
			"headMap",
			"(Ljava/lang/Object;)Ljava/util/concurrent/ConcurrentNavigableMap;",
			arg0.object<jobject>()
		);
	}
	inline JObject ConcurrentSkipListMap::headMap(JObject arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"headMap",
			"(Ljava/lang/Object;Z)Ljava/util/concurrent/ConcurrentNavigableMap;",
			arg0.object<jobject>(),
			arg1
		);
	}
	inline JObject ConcurrentSkipListMap::higherEntry(JObject arg0) const
	{
		return callObjectMethod(
			"higherEntry",
			"(Ljava/lang/Object;)Ljava/util/Map$Entry;",
			arg0.object<jobject>()
		);
	}
	inline JObject ConcurrentSkipListMap::higherKey(JObject arg0) const
	{
		return callObjectMethod(
			"higherKey",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	inline jboolean ConcurrentSkipListMap::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	inline JObject ConcurrentSkipListMap::keySet() const
	{
		return callObjectMethod(
			"keySet",
			"()Ljava/util/NavigableSet;"
		);
	}
	inline JObject ConcurrentSkipListMap::lastEntry() const
	{
		return callObjectMethod(
			"lastEntry",
			"()Ljava/util/Map$Entry;"
		);
	}
	inline JObject ConcurrentSkipListMap::lastKey() const
	{
		return callObjectMethod(
			"lastKey",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject ConcurrentSkipListMap::lowerEntry(JObject arg0) const
	{
		return callObjectMethod(
			"lowerEntry",
			"(Ljava/lang/Object;)Ljava/util/Map$Entry;",
			arg0.object<jobject>()
		);
	}
	inline JObject ConcurrentSkipListMap::lowerKey(JObject arg0) const
	{
		return callObjectMethod(
			"lowerKey",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	inline JObject ConcurrentSkipListMap::merge(JObject arg0, JObject arg1, JObject arg2) const
	{
		return callObjectMethod(
			"merge",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>(),
			arg2.object()
		);
	}
	inline JObject ConcurrentSkipListMap::navigableKeySet() const
	{
		return callObjectMethod(
			"navigableKeySet",
			"()Ljava/util/NavigableSet;"
		);
	}
	inline JObject ConcurrentSkipListMap::pollFirstEntry() const
	{
		return callObjectMethod(
			"pollFirstEntry",
			"()Ljava/util/Map$Entry;"
		);
	}
	inline JObject ConcurrentSkipListMap::pollLastEntry() const
	{
		return callObjectMethod(
			"pollLastEntry",
			"()Ljava/util/Map$Entry;"
		);
	}
	inline JObject ConcurrentSkipListMap::put(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	inline JObject ConcurrentSkipListMap::putIfAbsent(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"putIfAbsent",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	inline jboolean ConcurrentSkipListMap::remove(JObject arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	inline JObject ConcurrentSkipListMap::remove(JObject arg0) const
	{
		return callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	inline jboolean ConcurrentSkipListMap::replace(JObject arg0, JObject arg1, JObject arg2) const
	{
		return callMethod<jboolean>(
			"replace",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0.object<jobject>(),
			arg1.object<jobject>(),
			arg2.object<jobject>()
		);
	}
	inline JObject ConcurrentSkipListMap::replace(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"replace",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	inline void ConcurrentSkipListMap::replaceAll(JObject arg0) const
	{
		callMethod<void>(
			"replaceAll",
			"(Ljava/util/function/BiFunction;)V",
			arg0.object()
		);
	}
	inline jint ConcurrentSkipListMap::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	inline JObject ConcurrentSkipListMap::subMap(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"subMap",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/concurrent/ConcurrentNavigableMap;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	inline JObject ConcurrentSkipListMap::subMap(JObject arg0, jboolean arg1, JObject arg2, jboolean arg3) const
	{
		return callObjectMethod(
			"subMap",
			"(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/concurrent/ConcurrentNavigableMap;",
			arg0.object<jobject>(),
			arg1,
			arg2.object<jobject>(),
			arg3
		);
	}
	inline JObject ConcurrentSkipListMap::tailMap(JObject arg0) const
	{
		return callObjectMethod(
			"tailMap",
			"(Ljava/lang/Object;)Ljava/util/concurrent/ConcurrentNavigableMap;",
			arg0.object<jobject>()
		);
	}
	inline JObject ConcurrentSkipListMap::tailMap(JObject arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"tailMap",
			"(Ljava/lang/Object;Z)Ljava/util/concurrent/ConcurrentNavigableMap;",
			arg0.object<jobject>(),
			arg1
		);
	}
	inline JObject ConcurrentSkipListMap::values() const
	{
		return callObjectMethod(
			"values",
			"()Ljava/util/Collection;"
		);
	}
} // namespace java::util::concurrent

// Base class headers
#include "../AbstractMap.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::concurrent;
#endif
