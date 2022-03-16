#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"
#include "../../../JObject.hpp"
#include "../AbstractMap_SimpleImmutableEntry.hpp"
#include "./atomic/LongAdder.hpp"
#include "./ConcurrentSkipListMap.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// Constructors
	ConcurrentSkipListMap::ConcurrentSkipListMap()
		: java::util::AbstractMap(
			"java.util.concurrent.ConcurrentSkipListMap",
			"()V"
		) {}
	ConcurrentSkipListMap::ConcurrentSkipListMap(JObject arg0)
		: java::util::AbstractMap(
			"java.util.concurrent.ConcurrentSkipListMap",
			"(Ljava/util/Comparator;)V",
			arg0.object()
		) {}
	
	// Methods
	JObject ConcurrentSkipListMap::ceilingEntry(JObject arg0) const
	{
		return callObjectMethod(
			"ceilingEntry",
			"(Ljava/lang/Object;)Ljava/util/Map$Entry;",
			arg0.object<jobject>()
		);
	}
	JObject ConcurrentSkipListMap::ceilingKey(JObject arg0) const
	{
		return callObjectMethod(
			"ceilingKey",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	void ConcurrentSkipListMap::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	java::util::concurrent::ConcurrentSkipListMap ConcurrentSkipListMap::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/util/concurrent/ConcurrentSkipListMap;"
		);
	}
	JObject ConcurrentSkipListMap::comparator() const
	{
		return callObjectMethod(
			"comparator",
			"()Ljava/util/Comparator;"
		);
	}
	JObject ConcurrentSkipListMap::compute(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"compute",
			"(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	JObject ConcurrentSkipListMap::computeIfAbsent(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"computeIfAbsent",
			"(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	JObject ConcurrentSkipListMap::computeIfPresent(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"computeIfPresent",
			"(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	jboolean ConcurrentSkipListMap::containsKey(JObject arg0) const
	{
		return callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean ConcurrentSkipListMap::containsValue(JObject arg0) const
	{
		return callMethod<jboolean>(
			"containsValue",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject ConcurrentSkipListMap::descendingKeySet() const
	{
		return callObjectMethod(
			"descendingKeySet",
			"()Ljava/util/NavigableSet;"
		);
	}
	JObject ConcurrentSkipListMap::descendingMap() const
	{
		return callObjectMethod(
			"descendingMap",
			"()Ljava/util/concurrent/ConcurrentNavigableMap;"
		);
	}
	JObject ConcurrentSkipListMap::entrySet() const
	{
		return callObjectMethod(
			"entrySet",
			"()Ljava/util/Set;"
		);
	}
	jboolean ConcurrentSkipListMap::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject ConcurrentSkipListMap::firstEntry() const
	{
		return callObjectMethod(
			"firstEntry",
			"()Ljava/util/Map$Entry;"
		);
	}
	JObject ConcurrentSkipListMap::firstKey() const
	{
		return callObjectMethod(
			"firstKey",
			"()Ljava/lang/Object;"
		);
	}
	JObject ConcurrentSkipListMap::floorEntry(JObject arg0) const
	{
		return callObjectMethod(
			"floorEntry",
			"(Ljava/lang/Object;)Ljava/util/Map$Entry;",
			arg0.object<jobject>()
		);
	}
	JObject ConcurrentSkipListMap::floorKey(JObject arg0) const
	{
		return callObjectMethod(
			"floorKey",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	void ConcurrentSkipListMap::forEach(JObject arg0) const
	{
		callMethod<void>(
			"forEach",
			"(Ljava/util/function/BiConsumer;)V",
			arg0.object()
		);
	}
	JObject ConcurrentSkipListMap::get(JObject arg0) const
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	JObject ConcurrentSkipListMap::getOrDefault(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"getOrDefault",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	JObject ConcurrentSkipListMap::headMap(JObject arg0) const
	{
		return callObjectMethod(
			"headMap",
			"(Ljava/lang/Object;)Ljava/util/concurrent/ConcurrentNavigableMap;",
			arg0.object<jobject>()
		);
	}
	JObject ConcurrentSkipListMap::headMap(JObject arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"headMap",
			"(Ljava/lang/Object;Z)Ljava/util/concurrent/ConcurrentNavigableMap;",
			arg0.object<jobject>(),
			arg1
		);
	}
	JObject ConcurrentSkipListMap::higherEntry(JObject arg0) const
	{
		return callObjectMethod(
			"higherEntry",
			"(Ljava/lang/Object;)Ljava/util/Map$Entry;",
			arg0.object<jobject>()
		);
	}
	JObject ConcurrentSkipListMap::higherKey(JObject arg0) const
	{
		return callObjectMethod(
			"higherKey",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	jboolean ConcurrentSkipListMap::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	JObject ConcurrentSkipListMap::keySet() const
	{
		return callObjectMethod(
			"keySet",
			"()Ljava/util/NavigableSet;"
		);
	}
	JObject ConcurrentSkipListMap::lastEntry() const
	{
		return callObjectMethod(
			"lastEntry",
			"()Ljava/util/Map$Entry;"
		);
	}
	JObject ConcurrentSkipListMap::lastKey() const
	{
		return callObjectMethod(
			"lastKey",
			"()Ljava/lang/Object;"
		);
	}
	JObject ConcurrentSkipListMap::lowerEntry(JObject arg0) const
	{
		return callObjectMethod(
			"lowerEntry",
			"(Ljava/lang/Object;)Ljava/util/Map$Entry;",
			arg0.object<jobject>()
		);
	}
	JObject ConcurrentSkipListMap::lowerKey(JObject arg0) const
	{
		return callObjectMethod(
			"lowerKey",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	JObject ConcurrentSkipListMap::merge(JObject arg0, JObject arg1, JObject arg2) const
	{
		return callObjectMethod(
			"merge",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>(),
			arg2.object()
		);
	}
	JObject ConcurrentSkipListMap::navigableKeySet() const
	{
		return callObjectMethod(
			"navigableKeySet",
			"()Ljava/util/NavigableSet;"
		);
	}
	JObject ConcurrentSkipListMap::pollFirstEntry() const
	{
		return callObjectMethod(
			"pollFirstEntry",
			"()Ljava/util/Map$Entry;"
		);
	}
	JObject ConcurrentSkipListMap::pollLastEntry() const
	{
		return callObjectMethod(
			"pollLastEntry",
			"()Ljava/util/Map$Entry;"
		);
	}
	JObject ConcurrentSkipListMap::put(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	JObject ConcurrentSkipListMap::putIfAbsent(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"putIfAbsent",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	jboolean ConcurrentSkipListMap::remove(JObject arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	JObject ConcurrentSkipListMap::remove(JObject arg0) const
	{
		return callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	jboolean ConcurrentSkipListMap::replace(JObject arg0, JObject arg1, JObject arg2) const
	{
		return callMethod<jboolean>(
			"replace",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0.object<jobject>(),
			arg1.object<jobject>(),
			arg2.object<jobject>()
		);
	}
	JObject ConcurrentSkipListMap::replace(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"replace",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	void ConcurrentSkipListMap::replaceAll(JObject arg0) const
	{
		callMethod<void>(
			"replaceAll",
			"(Ljava/util/function/BiFunction;)V",
			arg0.object()
		);
	}
	jint ConcurrentSkipListMap::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	JObject ConcurrentSkipListMap::subMap(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"subMap",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/concurrent/ConcurrentNavigableMap;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	JObject ConcurrentSkipListMap::subMap(JObject arg0, jboolean arg1, JObject arg2, jboolean arg3) const
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
	JObject ConcurrentSkipListMap::tailMap(JObject arg0) const
	{
		return callObjectMethod(
			"tailMap",
			"(Ljava/lang/Object;)Ljava/util/concurrent/ConcurrentNavigableMap;",
			arg0.object<jobject>()
		);
	}
	JObject ConcurrentSkipListMap::tailMap(JObject arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"tailMap",
			"(Ljava/lang/Object;Z)Ljava/util/concurrent/ConcurrentNavigableMap;",
			arg0.object<jobject>(),
			arg1
		);
	}
	JObject ConcurrentSkipListMap::values() const
	{
		return callObjectMethod(
			"values",
			"()Ljava/util/Collection;"
		);
	}
} // namespace java::util::concurrent

