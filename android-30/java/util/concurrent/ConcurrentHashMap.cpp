#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"
#include "../../../JClass.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
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
	ConcurrentHashMap::ConcurrentHashMap(JObject arg0)
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
	void ConcurrentHashMap::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	JObject ConcurrentHashMap::compute(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"compute",
			"(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	JObject ConcurrentHashMap::computeIfAbsent(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"computeIfAbsent",
			"(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	JObject ConcurrentHashMap::computeIfPresent(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"computeIfPresent",
			"(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	jboolean ConcurrentHashMap::contains(JObject arg0) const
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean ConcurrentHashMap::containsKey(JObject arg0) const
	{
		return callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean ConcurrentHashMap::containsValue(JObject arg0) const
	{
		return callMethod<jboolean>(
			"containsValue",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject ConcurrentHashMap::elements() const
	{
		return callObjectMethod(
			"elements",
			"()Ljava/util/Enumeration;"
		);
	}
	JObject ConcurrentHashMap::entrySet() const
	{
		return callObjectMethod(
			"entrySet",
			"()Ljava/util/Set;"
		);
	}
	jboolean ConcurrentHashMap::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	void ConcurrentHashMap::forEach(JObject arg0) const
	{
		callMethod<void>(
			"forEach",
			"(Ljava/util/function/BiConsumer;)V",
			arg0.object()
		);
	}
	void ConcurrentHashMap::forEach(jlong arg0, JObject arg1) const
	{
		callMethod<void>(
			"forEach",
			"(JLjava/util/function/BiConsumer;)V",
			arg0,
			arg1.object()
		);
	}
	void ConcurrentHashMap::forEach(jlong arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"forEach",
			"(JLjava/util/function/BiFunction;Ljava/util/function/Consumer;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	void ConcurrentHashMap::forEachEntry(jlong arg0, JObject arg1) const
	{
		callMethod<void>(
			"forEachEntry",
			"(JLjava/util/function/Consumer;)V",
			arg0,
			arg1.object()
		);
	}
	void ConcurrentHashMap::forEachEntry(jlong arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"forEachEntry",
			"(JLjava/util/function/Function;Ljava/util/function/Consumer;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	void ConcurrentHashMap::forEachKey(jlong arg0, JObject arg1) const
	{
		callMethod<void>(
			"forEachKey",
			"(JLjava/util/function/Consumer;)V",
			arg0,
			arg1.object()
		);
	}
	void ConcurrentHashMap::forEachKey(jlong arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"forEachKey",
			"(JLjava/util/function/Function;Ljava/util/function/Consumer;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	void ConcurrentHashMap::forEachValue(jlong arg0, JObject arg1) const
	{
		callMethod<void>(
			"forEachValue",
			"(JLjava/util/function/Consumer;)V",
			arg0,
			arg1.object()
		);
	}
	void ConcurrentHashMap::forEachValue(jlong arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"forEachValue",
			"(JLjava/util/function/Function;Ljava/util/function/Consumer;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	JObject ConcurrentHashMap::get(JObject arg0) const
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	JObject ConcurrentHashMap::getOrDefault(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"getOrDefault",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	jint ConcurrentHashMap::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean ConcurrentHashMap::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	java::util::concurrent::ConcurrentHashMap_KeySetView ConcurrentHashMap::keySet() const
	{
		return callObjectMethod(
			"keySet",
			"()Ljava/util/concurrent/ConcurrentHashMap$KeySetView;"
		);
	}
	java::util::concurrent::ConcurrentHashMap_KeySetView ConcurrentHashMap::keySet(JObject arg0) const
	{
		return callObjectMethod(
			"keySet",
			"(Ljava/lang/Object;)Ljava/util/concurrent/ConcurrentHashMap$KeySetView;",
			arg0.object<jobject>()
		);
	}
	JObject ConcurrentHashMap::keys() const
	{
		return callObjectMethod(
			"keys",
			"()Ljava/util/Enumeration;"
		);
	}
	jlong ConcurrentHashMap::mappingCount() const
	{
		return callMethod<jlong>(
			"mappingCount",
			"()J"
		);
	}
	JObject ConcurrentHashMap::merge(JObject arg0, JObject arg1, JObject arg2) const
	{
		return callObjectMethod(
			"merge",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>(),
			arg2.object()
		);
	}
	JObject ConcurrentHashMap::put(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	void ConcurrentHashMap::putAll(JObject arg0) const
	{
		callMethod<void>(
			"putAll",
			"(Ljava/util/Map;)V",
			arg0.object()
		);
	}
	JObject ConcurrentHashMap::putIfAbsent(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"putIfAbsent",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	JObject ConcurrentHashMap::reduce(jlong arg0, JObject arg1, JObject arg2) const
	{
		return callObjectMethod(
			"reduce",
			"(JLjava/util/function/BiFunction;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	JObject ConcurrentHashMap::reduceEntries(jlong arg0, JObject arg1, JObject arg2) const
	{
		return callObjectMethod(
			"reduceEntries",
			"(JLjava/util/function/Function;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	JObject ConcurrentHashMap::reduceEntries(jlong arg0, JObject arg1) const
	{
		return callObjectMethod(
			"reduceEntries",
			"(JLjava/util/function/BiFunction;)Ljava/util/Map$Entry;",
			arg0,
			arg1.object()
		);
	}
	jdouble ConcurrentHashMap::reduceEntriesToDouble(jlong arg0, JObject arg1, jdouble arg2, JObject arg3) const
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
	jint ConcurrentHashMap::reduceEntriesToInt(jlong arg0, JObject arg1, jint arg2, JObject arg3) const
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
	jlong ConcurrentHashMap::reduceEntriesToLong(jlong arg0, JObject arg1, jlong arg2, JObject arg3) const
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
	JObject ConcurrentHashMap::reduceKeys(jlong arg0, JObject arg1) const
	{
		return callObjectMethod(
			"reduceKeys",
			"(JLjava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		);
	}
	JObject ConcurrentHashMap::reduceKeys(jlong arg0, JObject arg1, JObject arg2) const
	{
		return callObjectMethod(
			"reduceKeys",
			"(JLjava/util/function/Function;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	jdouble ConcurrentHashMap::reduceKeysToDouble(jlong arg0, JObject arg1, jdouble arg2, JObject arg3) const
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
	jint ConcurrentHashMap::reduceKeysToInt(jlong arg0, JObject arg1, jint arg2, JObject arg3) const
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
	jlong ConcurrentHashMap::reduceKeysToLong(jlong arg0, JObject arg1, jlong arg2, JObject arg3) const
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
	jdouble ConcurrentHashMap::reduceToDouble(jlong arg0, JObject arg1, jdouble arg2, JObject arg3) const
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
	jint ConcurrentHashMap::reduceToInt(jlong arg0, JObject arg1, jint arg2, JObject arg3) const
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
	jlong ConcurrentHashMap::reduceToLong(jlong arg0, JObject arg1, jlong arg2, JObject arg3) const
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
	JObject ConcurrentHashMap::reduceValues(jlong arg0, JObject arg1) const
	{
		return callObjectMethod(
			"reduceValues",
			"(JLjava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		);
	}
	JObject ConcurrentHashMap::reduceValues(jlong arg0, JObject arg1, JObject arg2) const
	{
		return callObjectMethod(
			"reduceValues",
			"(JLjava/util/function/Function;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	jdouble ConcurrentHashMap::reduceValuesToDouble(jlong arg0, JObject arg1, jdouble arg2, JObject arg3) const
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
	jint ConcurrentHashMap::reduceValuesToInt(jlong arg0, JObject arg1, jint arg2, JObject arg3) const
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
	jlong ConcurrentHashMap::reduceValuesToLong(jlong arg0, JObject arg1, jlong arg2, JObject arg3) const
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
	jboolean ConcurrentHashMap::remove(JObject arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	JObject ConcurrentHashMap::remove(JObject arg0) const
	{
		return callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	jboolean ConcurrentHashMap::replace(JObject arg0, JObject arg1, JObject arg2) const
	{
		return callMethod<jboolean>(
			"replace",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0.object<jobject>(),
			arg1.object<jobject>(),
			arg2.object<jobject>()
		);
	}
	JObject ConcurrentHashMap::replace(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"replace",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	void ConcurrentHashMap::replaceAll(JObject arg0) const
	{
		callMethod<void>(
			"replaceAll",
			"(Ljava/util/function/BiFunction;)V",
			arg0.object()
		);
	}
	JObject ConcurrentHashMap::search(jlong arg0, JObject arg1) const
	{
		return callObjectMethod(
			"search",
			"(JLjava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		);
	}
	JObject ConcurrentHashMap::searchEntries(jlong arg0, JObject arg1) const
	{
		return callObjectMethod(
			"searchEntries",
			"(JLjava/util/function/Function;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		);
	}
	JObject ConcurrentHashMap::searchKeys(jlong arg0, JObject arg1) const
	{
		return callObjectMethod(
			"searchKeys",
			"(JLjava/util/function/Function;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		);
	}
	JObject ConcurrentHashMap::searchValues(jlong arg0, JObject arg1) const
	{
		return callObjectMethod(
			"searchValues",
			"(JLjava/util/function/Function;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		);
	}
	jint ConcurrentHashMap::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	JString ConcurrentHashMap::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	JObject ConcurrentHashMap::values() const
	{
		return callObjectMethod(
			"values",
			"()Ljava/util/Collection;"
		);
	}
} // namespace java::util::concurrent

