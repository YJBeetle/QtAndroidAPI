#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../../JObject.hpp"
#include "./TreeMap.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	TreeMap::TreeMap()
		: java::util::AbstractMap(
			"java.util.TreeMap",
			"()V"
		) {}
	TreeMap::TreeMap(JObject arg0)
		: java::util::AbstractMap(
			"java.util.TreeMap",
			"(Ljava/util/Comparator;)V",
			arg0.object()
		) {}
	
	// Methods
	JObject TreeMap::ceilingEntry(JObject arg0) const
	{
		return callObjectMethod(
			"ceilingEntry",
			"(Ljava/lang/Object;)Ljava/util/Map$Entry;",
			arg0.object<jobject>()
		);
	}
	JObject TreeMap::ceilingKey(JObject arg0) const
	{
		return callObjectMethod(
			"ceilingKey",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	void TreeMap::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	JObject TreeMap::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	JObject TreeMap::comparator() const
	{
		return callObjectMethod(
			"comparator",
			"()Ljava/util/Comparator;"
		);
	}
	JObject TreeMap::compute(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"compute",
			"(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	JObject TreeMap::computeIfAbsent(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"computeIfAbsent",
			"(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	JObject TreeMap::computeIfPresent(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"computeIfPresent",
			"(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	jboolean TreeMap::containsKey(JObject arg0) const
	{
		return callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean TreeMap::containsValue(JObject arg0) const
	{
		return callMethod<jboolean>(
			"containsValue",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject TreeMap::descendingKeySet() const
	{
		return callObjectMethod(
			"descendingKeySet",
			"()Ljava/util/NavigableSet;"
		);
	}
	JObject TreeMap::descendingMap() const
	{
		return callObjectMethod(
			"descendingMap",
			"()Ljava/util/NavigableMap;"
		);
	}
	JObject TreeMap::entrySet() const
	{
		return callObjectMethod(
			"entrySet",
			"()Ljava/util/Set;"
		);
	}
	JObject TreeMap::firstEntry() const
	{
		return callObjectMethod(
			"firstEntry",
			"()Ljava/util/Map$Entry;"
		);
	}
	JObject TreeMap::firstKey() const
	{
		return callObjectMethod(
			"firstKey",
			"()Ljava/lang/Object;"
		);
	}
	JObject TreeMap::floorEntry(JObject arg0) const
	{
		return callObjectMethod(
			"floorEntry",
			"(Ljava/lang/Object;)Ljava/util/Map$Entry;",
			arg0.object<jobject>()
		);
	}
	JObject TreeMap::floorKey(JObject arg0) const
	{
		return callObjectMethod(
			"floorKey",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	void TreeMap::forEach(JObject arg0) const
	{
		callMethod<void>(
			"forEach",
			"(Ljava/util/function/BiConsumer;)V",
			arg0.object()
		);
	}
	JObject TreeMap::get(JObject arg0) const
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	JObject TreeMap::headMap(JObject arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"headMap",
			"(Ljava/lang/Object;Z)Ljava/util/NavigableMap;",
			arg0.object<jobject>(),
			arg1
		);
	}
	JObject TreeMap::headMap(JObject arg0) const
	{
		return callObjectMethod(
			"headMap",
			"(Ljava/lang/Object;)Ljava/util/SortedMap;",
			arg0.object<jobject>()
		);
	}
	JObject TreeMap::higherEntry(JObject arg0) const
	{
		return callObjectMethod(
			"higherEntry",
			"(Ljava/lang/Object;)Ljava/util/Map$Entry;",
			arg0.object<jobject>()
		);
	}
	JObject TreeMap::higherKey(JObject arg0) const
	{
		return callObjectMethod(
			"higherKey",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	JObject TreeMap::keySet() const
	{
		return callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
	JObject TreeMap::lastEntry() const
	{
		return callObjectMethod(
			"lastEntry",
			"()Ljava/util/Map$Entry;"
		);
	}
	JObject TreeMap::lastKey() const
	{
		return callObjectMethod(
			"lastKey",
			"()Ljava/lang/Object;"
		);
	}
	JObject TreeMap::lowerEntry(JObject arg0) const
	{
		return callObjectMethod(
			"lowerEntry",
			"(Ljava/lang/Object;)Ljava/util/Map$Entry;",
			arg0.object<jobject>()
		);
	}
	JObject TreeMap::lowerKey(JObject arg0) const
	{
		return callObjectMethod(
			"lowerKey",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	JObject TreeMap::merge(JObject arg0, JObject arg1, JObject arg2) const
	{
		return callObjectMethod(
			"merge",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>(),
			arg2.object()
		);
	}
	JObject TreeMap::navigableKeySet() const
	{
		return callObjectMethod(
			"navigableKeySet",
			"()Ljava/util/NavigableSet;"
		);
	}
	JObject TreeMap::pollFirstEntry() const
	{
		return callObjectMethod(
			"pollFirstEntry",
			"()Ljava/util/Map$Entry;"
		);
	}
	JObject TreeMap::pollLastEntry() const
	{
		return callObjectMethod(
			"pollLastEntry",
			"()Ljava/util/Map$Entry;"
		);
	}
	JObject TreeMap::put(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	void TreeMap::putAll(JObject arg0) const
	{
		callMethod<void>(
			"putAll",
			"(Ljava/util/Map;)V",
			arg0.object()
		);
	}
	JObject TreeMap::putIfAbsent(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"putIfAbsent",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	JObject TreeMap::remove(JObject arg0) const
	{
		return callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	jboolean TreeMap::replace(JObject arg0, JObject arg1, JObject arg2) const
	{
		return callMethod<jboolean>(
			"replace",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0.object<jobject>(),
			arg1.object<jobject>(),
			arg2.object<jobject>()
		);
	}
	JObject TreeMap::replace(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"replace",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	void TreeMap::replaceAll(JObject arg0) const
	{
		callMethod<void>(
			"replaceAll",
			"(Ljava/util/function/BiFunction;)V",
			arg0.object()
		);
	}
	jint TreeMap::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	JObject TreeMap::subMap(JObject arg0, jboolean arg1, JObject arg2, jboolean arg3) const
	{
		return callObjectMethod(
			"subMap",
			"(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableMap;",
			arg0.object<jobject>(),
			arg1,
			arg2.object<jobject>(),
			arg3
		);
	}
	JObject TreeMap::subMap(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"subMap",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedMap;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	JObject TreeMap::tailMap(JObject arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"tailMap",
			"(Ljava/lang/Object;Z)Ljava/util/NavigableMap;",
			arg0.object<jobject>(),
			arg1
		);
	}
	JObject TreeMap::tailMap(JObject arg0) const
	{
		return callObjectMethod(
			"tailMap",
			"(Ljava/lang/Object;)Ljava/util/SortedMap;",
			arg0.object<jobject>()
		);
	}
	JObject TreeMap::values() const
	{
		return callObjectMethod(
			"values",
			"()Ljava/util/Collection;"
		);
	}
} // namespace java::util

