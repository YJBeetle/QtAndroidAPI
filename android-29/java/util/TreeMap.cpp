#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "./TreeMap.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	TreeMap::TreeMap(QAndroidJniObject obj) : java::util::AbstractMap(obj) {}
	
	// Constructors
	TreeMap::TreeMap()
		: java::util::AbstractMap(
			"java.util.TreeMap",
			"()V"
		) {}
	TreeMap::TreeMap(__JniBaseClass arg0)
		: java::util::AbstractMap(
			"java.util.TreeMap",
			"(Ljava/util/Comparator;)V",
			arg0.object()
		) {}
	
	// Methods
	QAndroidJniObject TreeMap::ceilingEntry(jobject arg0)
	{
		return callObjectMethod(
			"ceilingEntry",
			"(Ljava/lang/Object;)Ljava/util/Map$Entry;",
			arg0
		);
	}
	jobject TreeMap::ceilingKey(jobject arg0)
	{
		return callObjectMethod(
			"ceilingKey",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	void TreeMap::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	jobject TreeMap::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject TreeMap::comparator()
	{
		return callObjectMethod(
			"comparator",
			"()Ljava/util/Comparator;"
		);
	}
	jobject TreeMap::compute(jobject arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"compute",
			"(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		).object<jobject>();
	}
	jobject TreeMap::computeIfAbsent(jobject arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"computeIfAbsent",
			"(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		).object<jobject>();
	}
	jobject TreeMap::computeIfPresent(jobject arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"computeIfPresent",
			"(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		).object<jobject>();
	}
	jboolean TreeMap::containsKey(jobject arg0)
	{
		return callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean TreeMap::containsValue(jobject arg0)
	{
		return callMethod<jboolean>(
			"containsValue",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject TreeMap::descendingKeySet()
	{
		return callObjectMethod(
			"descendingKeySet",
			"()Ljava/util/NavigableSet;"
		);
	}
	QAndroidJniObject TreeMap::descendingMap()
	{
		return callObjectMethod(
			"descendingMap",
			"()Ljava/util/NavigableMap;"
		);
	}
	QAndroidJniObject TreeMap::entrySet()
	{
		return callObjectMethod(
			"entrySet",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject TreeMap::firstEntry()
	{
		return callObjectMethod(
			"firstEntry",
			"()Ljava/util/Map$Entry;"
		);
	}
	jobject TreeMap::firstKey()
	{
		return callObjectMethod(
			"firstKey",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject TreeMap::floorEntry(jobject arg0)
	{
		return callObjectMethod(
			"floorEntry",
			"(Ljava/lang/Object;)Ljava/util/Map$Entry;",
			arg0
		);
	}
	jobject TreeMap::floorKey(jobject arg0)
	{
		return callObjectMethod(
			"floorKey",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	void TreeMap::forEach(__JniBaseClass arg0)
	{
		callMethod<void>(
			"forEach",
			"(Ljava/util/function/BiConsumer;)V",
			arg0.object()
		);
	}
	jobject TreeMap::get(jobject arg0)
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	QAndroidJniObject TreeMap::headMap(jobject arg0, jboolean arg1)
	{
		return callObjectMethod(
			"headMap",
			"(Ljava/lang/Object;Z)Ljava/util/NavigableMap;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject TreeMap::headMap(jobject arg0)
	{
		return callObjectMethod(
			"headMap",
			"(Ljava/lang/Object;)Ljava/util/SortedMap;",
			arg0
		);
	}
	QAndroidJniObject TreeMap::higherEntry(jobject arg0)
	{
		return callObjectMethod(
			"higherEntry",
			"(Ljava/lang/Object;)Ljava/util/Map$Entry;",
			arg0
		);
	}
	jobject TreeMap::higherKey(jobject arg0)
	{
		return callObjectMethod(
			"higherKey",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	QAndroidJniObject TreeMap::keySet()
	{
		return callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject TreeMap::lastEntry()
	{
		return callObjectMethod(
			"lastEntry",
			"()Ljava/util/Map$Entry;"
		);
	}
	jobject TreeMap::lastKey()
	{
		return callObjectMethod(
			"lastKey",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject TreeMap::lowerEntry(jobject arg0)
	{
		return callObjectMethod(
			"lowerEntry",
			"(Ljava/lang/Object;)Ljava/util/Map$Entry;",
			arg0
		);
	}
	jobject TreeMap::lowerKey(jobject arg0)
	{
		return callObjectMethod(
			"lowerKey",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject TreeMap::merge(jobject arg0, jobject arg1, __JniBaseClass arg2)
	{
		return callObjectMethod(
			"merge",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1,
			arg2.object()
		).object<jobject>();
	}
	QAndroidJniObject TreeMap::navigableKeySet()
	{
		return callObjectMethod(
			"navigableKeySet",
			"()Ljava/util/NavigableSet;"
		);
	}
	QAndroidJniObject TreeMap::pollFirstEntry()
	{
		return callObjectMethod(
			"pollFirstEntry",
			"()Ljava/util/Map$Entry;"
		);
	}
	QAndroidJniObject TreeMap::pollLastEntry()
	{
		return callObjectMethod(
			"pollLastEntry",
			"()Ljava/util/Map$Entry;"
		);
	}
	jobject TreeMap::put(jobject arg0, jobject arg1)
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	void TreeMap::putAll(__JniBaseClass arg0)
	{
		callMethod<void>(
			"putAll",
			"(Ljava/util/Map;)V",
			arg0.object()
		);
	}
	jobject TreeMap::putIfAbsent(jobject arg0, jobject arg1)
	{
		return callObjectMethod(
			"putIfAbsent",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jobject TreeMap::remove(jobject arg0)
	{
		return callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jboolean TreeMap::replace(jobject arg0, jobject arg1, jobject arg2)
	{
		return callMethod<jboolean>(
			"replace",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jobject TreeMap::replace(jobject arg0, jobject arg1)
	{
		return callObjectMethod(
			"replace",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	void TreeMap::replaceAll(__JniBaseClass arg0)
	{
		callMethod<void>(
			"replaceAll",
			"(Ljava/util/function/BiFunction;)V",
			arg0.object()
		);
	}
	jint TreeMap::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	QAndroidJniObject TreeMap::subMap(jobject arg0, jboolean arg1, jobject arg2, jboolean arg3)
	{
		return callObjectMethod(
			"subMap",
			"(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableMap;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject TreeMap::subMap(jobject arg0, jobject arg1)
	{
		return callObjectMethod(
			"subMap",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedMap;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject TreeMap::tailMap(jobject arg0, jboolean arg1)
	{
		return callObjectMethod(
			"tailMap",
			"(Ljava/lang/Object;Z)Ljava/util/NavigableMap;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject TreeMap::tailMap(jobject arg0)
	{
		return callObjectMethod(
			"tailMap",
			"(Ljava/lang/Object;)Ljava/util/SortedMap;",
			arg0
		);
	}
	QAndroidJniObject TreeMap::values()
	{
		return callObjectMethod(
			"values",
			"()Ljava/util/Collection;"
		);
	}
} // namespace java::util

