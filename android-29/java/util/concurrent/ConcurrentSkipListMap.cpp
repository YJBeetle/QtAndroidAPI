#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"
#include "../AbstractMap_SimpleImmutableEntry.hpp"
#include "./atomic/LongAdder.hpp"
#include "./ConcurrentSkipListMap.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QAndroidJniObject forward
	ConcurrentSkipListMap::ConcurrentSkipListMap(QAndroidJniObject obj) : java::util::AbstractMap(obj) {}
	
	// Constructors
	ConcurrentSkipListMap::ConcurrentSkipListMap()
		: java::util::AbstractMap(
			"java.util.concurrent.ConcurrentSkipListMap",
			"()V"
		) {}
	ConcurrentSkipListMap::ConcurrentSkipListMap(__JniBaseClass arg0)
		: java::util::AbstractMap(
			"java.util.concurrent.ConcurrentSkipListMap",
			"(Ljava/util/Comparator;)V",
			arg0.object()
		) {}
	
	// Methods
	QAndroidJniObject ConcurrentSkipListMap::ceilingEntry(jobject arg0)
	{
		return callObjectMethod(
			"ceilingEntry",
			"(Ljava/lang/Object;)Ljava/util/Map$Entry;",
			arg0
		);
	}
	jobject ConcurrentSkipListMap::ceilingKey(jobject arg0)
	{
		return callObjectMethod(
			"ceilingKey",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	void ConcurrentSkipListMap::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	QAndroidJniObject ConcurrentSkipListMap::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/util/concurrent/ConcurrentSkipListMap;"
		);
	}
	QAndroidJniObject ConcurrentSkipListMap::comparator()
	{
		return callObjectMethod(
			"comparator",
			"()Ljava/util/Comparator;"
		);
	}
	jobject ConcurrentSkipListMap::compute(jobject arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"compute",
			"(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		).object<jobject>();
	}
	jobject ConcurrentSkipListMap::computeIfAbsent(jobject arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"computeIfAbsent",
			"(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		).object<jobject>();
	}
	jobject ConcurrentSkipListMap::computeIfPresent(jobject arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"computeIfPresent",
			"(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		).object<jobject>();
	}
	jboolean ConcurrentSkipListMap::containsKey(jobject arg0)
	{
		return callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean ConcurrentSkipListMap::containsValue(jobject arg0)
	{
		return callMethod<jboolean>(
			"containsValue",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject ConcurrentSkipListMap::descendingKeySet()
	{
		return callObjectMethod(
			"descendingKeySet",
			"()Ljava/util/NavigableSet;"
		);
	}
	QAndroidJniObject ConcurrentSkipListMap::descendingMap()
	{
		return callObjectMethod(
			"descendingMap",
			"()Ljava/util/concurrent/ConcurrentNavigableMap;"
		);
	}
	QAndroidJniObject ConcurrentSkipListMap::entrySet()
	{
		return callObjectMethod(
			"entrySet",
			"()Ljava/util/Set;"
		);
	}
	jboolean ConcurrentSkipListMap::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject ConcurrentSkipListMap::firstEntry()
	{
		return callObjectMethod(
			"firstEntry",
			"()Ljava/util/Map$Entry;"
		);
	}
	jobject ConcurrentSkipListMap::firstKey()
	{
		return callObjectMethod(
			"firstKey",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject ConcurrentSkipListMap::floorEntry(jobject arg0)
	{
		return callObjectMethod(
			"floorEntry",
			"(Ljava/lang/Object;)Ljava/util/Map$Entry;",
			arg0
		);
	}
	jobject ConcurrentSkipListMap::floorKey(jobject arg0)
	{
		return callObjectMethod(
			"floorKey",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	void ConcurrentSkipListMap::forEach(__JniBaseClass arg0)
	{
		callMethod<void>(
			"forEach",
			"(Ljava/util/function/BiConsumer;)V",
			arg0.object()
		);
	}
	jobject ConcurrentSkipListMap::get(jobject arg0)
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject ConcurrentSkipListMap::getOrDefault(jobject arg0, jobject arg1)
	{
		return callObjectMethod(
			"getOrDefault",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	QAndroidJniObject ConcurrentSkipListMap::headMap(jobject arg0)
	{
		return callObjectMethod(
			"headMap",
			"(Ljava/lang/Object;)Ljava/util/concurrent/ConcurrentNavigableMap;",
			arg0
		);
	}
	QAndroidJniObject ConcurrentSkipListMap::headMap(jobject arg0, jboolean arg1)
	{
		return callObjectMethod(
			"headMap",
			"(Ljava/lang/Object;Z)Ljava/util/concurrent/ConcurrentNavigableMap;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ConcurrentSkipListMap::higherEntry(jobject arg0)
	{
		return callObjectMethod(
			"higherEntry",
			"(Ljava/lang/Object;)Ljava/util/Map$Entry;",
			arg0
		);
	}
	jobject ConcurrentSkipListMap::higherKey(jobject arg0)
	{
		return callObjectMethod(
			"higherKey",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jboolean ConcurrentSkipListMap::isEmpty()
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	QAndroidJniObject ConcurrentSkipListMap::keySet()
	{
		return callObjectMethod(
			"keySet",
			"()Ljava/util/NavigableSet;"
		);
	}
	QAndroidJniObject ConcurrentSkipListMap::lastEntry()
	{
		return callObjectMethod(
			"lastEntry",
			"()Ljava/util/Map$Entry;"
		);
	}
	jobject ConcurrentSkipListMap::lastKey()
	{
		return callObjectMethod(
			"lastKey",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject ConcurrentSkipListMap::lowerEntry(jobject arg0)
	{
		return callObjectMethod(
			"lowerEntry",
			"(Ljava/lang/Object;)Ljava/util/Map$Entry;",
			arg0
		);
	}
	jobject ConcurrentSkipListMap::lowerKey(jobject arg0)
	{
		return callObjectMethod(
			"lowerKey",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject ConcurrentSkipListMap::merge(jobject arg0, jobject arg1, __JniBaseClass arg2)
	{
		return callObjectMethod(
			"merge",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1,
			arg2.object()
		).object<jobject>();
	}
	QAndroidJniObject ConcurrentSkipListMap::navigableKeySet()
	{
		return callObjectMethod(
			"navigableKeySet",
			"()Ljava/util/NavigableSet;"
		);
	}
	QAndroidJniObject ConcurrentSkipListMap::pollFirstEntry()
	{
		return callObjectMethod(
			"pollFirstEntry",
			"()Ljava/util/Map$Entry;"
		);
	}
	QAndroidJniObject ConcurrentSkipListMap::pollLastEntry()
	{
		return callObjectMethod(
			"pollLastEntry",
			"()Ljava/util/Map$Entry;"
		);
	}
	jobject ConcurrentSkipListMap::put(jobject arg0, jobject arg1)
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jobject ConcurrentSkipListMap::putIfAbsent(jobject arg0, jobject arg1)
	{
		return callObjectMethod(
			"putIfAbsent",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jboolean ConcurrentSkipListMap::remove(jobject arg0, jobject arg1)
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1
		);
	}
	jobject ConcurrentSkipListMap::remove(jobject arg0)
	{
		return callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jboolean ConcurrentSkipListMap::replace(jobject arg0, jobject arg1, jobject arg2)
	{
		return callMethod<jboolean>(
			"replace",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jobject ConcurrentSkipListMap::replace(jobject arg0, jobject arg1)
	{
		return callObjectMethod(
			"replace",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	void ConcurrentSkipListMap::replaceAll(__JniBaseClass arg0)
	{
		callMethod<void>(
			"replaceAll",
			"(Ljava/util/function/BiFunction;)V",
			arg0.object()
		);
	}
	jint ConcurrentSkipListMap::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	QAndroidJniObject ConcurrentSkipListMap::subMap(jobject arg0, jobject arg1)
	{
		return callObjectMethod(
			"subMap",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/concurrent/ConcurrentNavigableMap;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ConcurrentSkipListMap::subMap(jobject arg0, jboolean arg1, jobject arg2, jboolean arg3)
	{
		return callObjectMethod(
			"subMap",
			"(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/concurrent/ConcurrentNavigableMap;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject ConcurrentSkipListMap::tailMap(jobject arg0)
	{
		return callObjectMethod(
			"tailMap",
			"(Ljava/lang/Object;)Ljava/util/concurrent/ConcurrentNavigableMap;",
			arg0
		);
	}
	QAndroidJniObject ConcurrentSkipListMap::tailMap(jobject arg0, jboolean arg1)
	{
		return callObjectMethod(
			"tailMap",
			"(Ljava/lang/Object;Z)Ljava/util/concurrent/ConcurrentNavigableMap;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ConcurrentSkipListMap::values()
	{
		return callObjectMethod(
			"values",
			"()Ljava/util/Collection;"
		);
	}
} // namespace java::util::concurrent
