#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"
#include "./ConcurrentHashMap_KeySetView.hpp"
#include "./ConcurrentHashMap.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QAndroidJniObject forward
	ConcurrentHashMap::ConcurrentHashMap(QAndroidJniObject obj) : java::util::AbstractMap(obj) {}
	
	// Constructors
	ConcurrentHashMap::ConcurrentHashMap()
		: java::util::AbstractMap(
			"java.util.concurrent.ConcurrentHashMap",
			"()V"
		) {}
	ConcurrentHashMap::ConcurrentHashMap(jint arg0)
		: java::util::AbstractMap(
			"java.util.concurrent.ConcurrentHashMap",
			"(I)V",
			arg0
		) {}
	ConcurrentHashMap::ConcurrentHashMap(__JniBaseClass arg0)
		: java::util::AbstractMap(
			"java.util.concurrent.ConcurrentHashMap",
			"(Ljava/util/Map;)V",
			arg0.object()
		) {}
	ConcurrentHashMap::ConcurrentHashMap(jint arg0, jfloat arg1)
		: java::util::AbstractMap(
			"java.util.concurrent.ConcurrentHashMap",
			"(IF)V",
			arg0,
			arg1
		) {}
	ConcurrentHashMap::ConcurrentHashMap(jint arg0, jfloat arg1, jint arg2)
		: java::util::AbstractMap(
			"java.util.concurrent.ConcurrentHashMap",
			"(IFI)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	java::util::concurrent::ConcurrentHashMap_KeySetView ConcurrentHashMap::newKeySet()
	{
		return callStaticObjectMethod(
			"java.util.concurrent.ConcurrentHashMap",
			"newKeySet",
			"()Ljava/util/concurrent/ConcurrentHashMap$KeySetView;"
		);
	}
	java::util::concurrent::ConcurrentHashMap_KeySetView ConcurrentHashMap::newKeySet(jint arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.ConcurrentHashMap",
			"newKeySet",
			"(I)Ljava/util/concurrent/ConcurrentHashMap$KeySetView;",
			arg0
		);
	}
	void ConcurrentHashMap::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	jobject ConcurrentHashMap::compute(jobject arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"compute",
			"(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		).object<jobject>();
	}
	jobject ConcurrentHashMap::computeIfAbsent(jobject arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"computeIfAbsent",
			"(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		).object<jobject>();
	}
	jobject ConcurrentHashMap::computeIfPresent(jobject arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"computeIfPresent",
			"(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		).object<jobject>();
	}
	jboolean ConcurrentHashMap::contains(jobject arg0)
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean ConcurrentHashMap::containsKey(jobject arg0)
	{
		return callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean ConcurrentHashMap::containsValue(jobject arg0)
	{
		return callMethod<jboolean>(
			"containsValue",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	__JniBaseClass ConcurrentHashMap::elements()
	{
		return callObjectMethod(
			"elements",
			"()Ljava/util/Enumeration;"
		);
	}
	__JniBaseClass ConcurrentHashMap::entrySet()
	{
		return callObjectMethod(
			"entrySet",
			"()Ljava/util/Set;"
		);
	}
	jboolean ConcurrentHashMap::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void ConcurrentHashMap::forEach(__JniBaseClass arg0)
	{
		callMethod<void>(
			"forEach",
			"(Ljava/util/function/BiConsumer;)V",
			arg0.object()
		);
	}
	void ConcurrentHashMap::forEach(jlong arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"forEach",
			"(JLjava/util/function/BiConsumer;)V",
			arg0,
			arg1.object()
		);
	}
	void ConcurrentHashMap::forEach(jlong arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		callMethod<void>(
			"forEach",
			"(JLjava/util/function/BiFunction;Ljava/util/function/Consumer;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	void ConcurrentHashMap::forEachEntry(jlong arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"forEachEntry",
			"(JLjava/util/function/Consumer;)V",
			arg0,
			arg1.object()
		);
	}
	void ConcurrentHashMap::forEachEntry(jlong arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		callMethod<void>(
			"forEachEntry",
			"(JLjava/util/function/Function;Ljava/util/function/Consumer;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	void ConcurrentHashMap::forEachKey(jlong arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"forEachKey",
			"(JLjava/util/function/Consumer;)V",
			arg0,
			arg1.object()
		);
	}
	void ConcurrentHashMap::forEachKey(jlong arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		callMethod<void>(
			"forEachKey",
			"(JLjava/util/function/Function;Ljava/util/function/Consumer;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	void ConcurrentHashMap::forEachValue(jlong arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"forEachValue",
			"(JLjava/util/function/Consumer;)V",
			arg0,
			arg1.object()
		);
	}
	void ConcurrentHashMap::forEachValue(jlong arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		callMethod<void>(
			"forEachValue",
			"(JLjava/util/function/Function;Ljava/util/function/Consumer;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	jobject ConcurrentHashMap::get(jobject arg0)
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject ConcurrentHashMap::getOrDefault(jobject arg0, jobject arg1)
	{
		return callObjectMethod(
			"getOrDefault",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jint ConcurrentHashMap::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean ConcurrentHashMap::isEmpty()
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	java::util::concurrent::ConcurrentHashMap_KeySetView ConcurrentHashMap::keySet()
	{
		return callObjectMethod(
			"keySet",
			"()Ljava/util/concurrent/ConcurrentHashMap$KeySetView;"
		);
	}
	java::util::concurrent::ConcurrentHashMap_KeySetView ConcurrentHashMap::keySet(jobject arg0)
	{
		return callObjectMethod(
			"keySet",
			"(Ljava/lang/Object;)Ljava/util/concurrent/ConcurrentHashMap$KeySetView;",
			arg0
		);
	}
	__JniBaseClass ConcurrentHashMap::keys()
	{
		return callObjectMethod(
			"keys",
			"()Ljava/util/Enumeration;"
		);
	}
	jlong ConcurrentHashMap::mappingCount()
	{
		return callMethod<jlong>(
			"mappingCount",
			"()J"
		);
	}
	jobject ConcurrentHashMap::merge(jobject arg0, jobject arg1, __JniBaseClass arg2)
	{
		return callObjectMethod(
			"merge",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1,
			arg2.object()
		).object<jobject>();
	}
	jobject ConcurrentHashMap::put(jobject arg0, jobject arg1)
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	void ConcurrentHashMap::putAll(__JniBaseClass arg0)
	{
		callMethod<void>(
			"putAll",
			"(Ljava/util/Map;)V",
			arg0.object()
		);
	}
	jobject ConcurrentHashMap::putIfAbsent(jobject arg0, jobject arg1)
	{
		return callObjectMethod(
			"putIfAbsent",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jobject ConcurrentHashMap::reduce(jlong arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		return callObjectMethod(
			"reduce",
			"(JLjava/util/function/BiFunction;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.object(),
			arg2.object()
		).object<jobject>();
	}
	jobject ConcurrentHashMap::reduceEntries(jlong arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		return callObjectMethod(
			"reduceEntries",
			"(JLjava/util/function/Function;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.object(),
			arg2.object()
		).object<jobject>();
	}
	__JniBaseClass ConcurrentHashMap::reduceEntries(jlong arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"reduceEntries",
			"(JLjava/util/function/BiFunction;)Ljava/util/Map$Entry;",
			arg0,
			arg1.object()
		);
	}
	jdouble ConcurrentHashMap::reduceEntriesToDouble(jlong arg0, __JniBaseClass arg1, jdouble arg2, __JniBaseClass arg3)
	{
		return callMethod<jdouble>(
			"reduceEntriesToDouble",
			"(JLjava/util/function/ToDoubleFunction;DLjava/util/function/DoubleBinaryOperator;)D",
			arg0,
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	jint ConcurrentHashMap::reduceEntriesToInt(jlong arg0, __JniBaseClass arg1, jint arg2, __JniBaseClass arg3)
	{
		return callMethod<jint>(
			"reduceEntriesToInt",
			"(JLjava/util/function/ToIntFunction;ILjava/util/function/IntBinaryOperator;)I",
			arg0,
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	jlong ConcurrentHashMap::reduceEntriesToLong(jlong arg0, __JniBaseClass arg1, jlong arg2, __JniBaseClass arg3)
	{
		return callMethod<jlong>(
			"reduceEntriesToLong",
			"(JLjava/util/function/ToLongFunction;JLjava/util/function/LongBinaryOperator;)J",
			arg0,
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	jobject ConcurrentHashMap::reduceKeys(jlong arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"reduceKeys",
			"(JLjava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		).object<jobject>();
	}
	jobject ConcurrentHashMap::reduceKeys(jlong arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		return callObjectMethod(
			"reduceKeys",
			"(JLjava/util/function/Function;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.object(),
			arg2.object()
		).object<jobject>();
	}
	jdouble ConcurrentHashMap::reduceKeysToDouble(jlong arg0, __JniBaseClass arg1, jdouble arg2, __JniBaseClass arg3)
	{
		return callMethod<jdouble>(
			"reduceKeysToDouble",
			"(JLjava/util/function/ToDoubleFunction;DLjava/util/function/DoubleBinaryOperator;)D",
			arg0,
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	jint ConcurrentHashMap::reduceKeysToInt(jlong arg0, __JniBaseClass arg1, jint arg2, __JniBaseClass arg3)
	{
		return callMethod<jint>(
			"reduceKeysToInt",
			"(JLjava/util/function/ToIntFunction;ILjava/util/function/IntBinaryOperator;)I",
			arg0,
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	jlong ConcurrentHashMap::reduceKeysToLong(jlong arg0, __JniBaseClass arg1, jlong arg2, __JniBaseClass arg3)
	{
		return callMethod<jlong>(
			"reduceKeysToLong",
			"(JLjava/util/function/ToLongFunction;JLjava/util/function/LongBinaryOperator;)J",
			arg0,
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	jdouble ConcurrentHashMap::reduceToDouble(jlong arg0, __JniBaseClass arg1, jdouble arg2, __JniBaseClass arg3)
	{
		return callMethod<jdouble>(
			"reduceToDouble",
			"(JLjava/util/function/ToDoubleBiFunction;DLjava/util/function/DoubleBinaryOperator;)D",
			arg0,
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	jint ConcurrentHashMap::reduceToInt(jlong arg0, __JniBaseClass arg1, jint arg2, __JniBaseClass arg3)
	{
		return callMethod<jint>(
			"reduceToInt",
			"(JLjava/util/function/ToIntBiFunction;ILjava/util/function/IntBinaryOperator;)I",
			arg0,
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	jlong ConcurrentHashMap::reduceToLong(jlong arg0, __JniBaseClass arg1, jlong arg2, __JniBaseClass arg3)
	{
		return callMethod<jlong>(
			"reduceToLong",
			"(JLjava/util/function/ToLongBiFunction;JLjava/util/function/LongBinaryOperator;)J",
			arg0,
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	jobject ConcurrentHashMap::reduceValues(jlong arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"reduceValues",
			"(JLjava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		).object<jobject>();
	}
	jobject ConcurrentHashMap::reduceValues(jlong arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		return callObjectMethod(
			"reduceValues",
			"(JLjava/util/function/Function;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.object(),
			arg2.object()
		).object<jobject>();
	}
	jdouble ConcurrentHashMap::reduceValuesToDouble(jlong arg0, __JniBaseClass arg1, jdouble arg2, __JniBaseClass arg3)
	{
		return callMethod<jdouble>(
			"reduceValuesToDouble",
			"(JLjava/util/function/ToDoubleFunction;DLjava/util/function/DoubleBinaryOperator;)D",
			arg0,
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	jint ConcurrentHashMap::reduceValuesToInt(jlong arg0, __JniBaseClass arg1, jint arg2, __JniBaseClass arg3)
	{
		return callMethod<jint>(
			"reduceValuesToInt",
			"(JLjava/util/function/ToIntFunction;ILjava/util/function/IntBinaryOperator;)I",
			arg0,
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	jlong ConcurrentHashMap::reduceValuesToLong(jlong arg0, __JniBaseClass arg1, jlong arg2, __JniBaseClass arg3)
	{
		return callMethod<jlong>(
			"reduceValuesToLong",
			"(JLjava/util/function/ToLongFunction;JLjava/util/function/LongBinaryOperator;)J",
			arg0,
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	jboolean ConcurrentHashMap::remove(jobject arg0, jobject arg1)
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1
		);
	}
	jobject ConcurrentHashMap::remove(jobject arg0)
	{
		return callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jboolean ConcurrentHashMap::replace(jobject arg0, jobject arg1, jobject arg2)
	{
		return callMethod<jboolean>(
			"replace",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jobject ConcurrentHashMap::replace(jobject arg0, jobject arg1)
	{
		return callObjectMethod(
			"replace",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	void ConcurrentHashMap::replaceAll(__JniBaseClass arg0)
	{
		callMethod<void>(
			"replaceAll",
			"(Ljava/util/function/BiFunction;)V",
			arg0.object()
		);
	}
	jobject ConcurrentHashMap::search(jlong arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"search",
			"(JLjava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		).object<jobject>();
	}
	jobject ConcurrentHashMap::searchEntries(jlong arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"searchEntries",
			"(JLjava/util/function/Function;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		).object<jobject>();
	}
	jobject ConcurrentHashMap::searchKeys(jlong arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"searchKeys",
			"(JLjava/util/function/Function;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		).object<jobject>();
	}
	jobject ConcurrentHashMap::searchValues(jlong arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"searchValues",
			"(JLjava/util/function/Function;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		).object<jobject>();
	}
	jint ConcurrentHashMap::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	jstring ConcurrentHashMap::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	__JniBaseClass ConcurrentHashMap::values()
	{
		return callObjectMethod(
			"values",
			"()Ljava/util/Collection;"
		);
	}
} // namespace java::util::concurrent

