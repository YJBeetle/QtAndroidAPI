#pragma once

#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../io/ObjectInputStream.def.hpp"
#include "../../io/ObjectOutputStream.def.hpp"
#include "../../../JClass.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./ConcurrentHashMap_KeySetView.def.hpp"
#include "./ConcurrentHashMap.def.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// Constructors
	inline ConcurrentHashMap::ConcurrentHashMap()
		: java::util::AbstractMap(
			"java.util.concurrent.ConcurrentHashMap",
			"()V"
		) {}
	inline ConcurrentHashMap::ConcurrentHashMap(jint arg0)
		: java::util::AbstractMap(
			"java.util.concurrent.ConcurrentHashMap",
			"(I)V",
			arg0
		) {}
	inline ConcurrentHashMap::ConcurrentHashMap(JObject arg0)
		: java::util::AbstractMap(
			"java.util.concurrent.ConcurrentHashMap",
			"(Ljava/util/Map;)V",
			arg0.object()
		) {}
	inline ConcurrentHashMap::ConcurrentHashMap(jint arg0, jfloat arg1)
		: java::util::AbstractMap(
			"java.util.concurrent.ConcurrentHashMap",
			"(IF)V",
			arg0,
			arg1
		) {}
	inline ConcurrentHashMap::ConcurrentHashMap(jint arg0, jfloat arg1, jint arg2)
		: java::util::AbstractMap(
			"java.util.concurrent.ConcurrentHashMap",
			"(IFI)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	inline java::util::concurrent::ConcurrentHashMap_KeySetView ConcurrentHashMap::newKeySet()
	{
		return callStaticObjectMethod(
			"java.util.concurrent.ConcurrentHashMap",
			"newKeySet",
			"()Ljava/util/concurrent/ConcurrentHashMap$KeySetView;"
		);
	}
	inline java::util::concurrent::ConcurrentHashMap_KeySetView ConcurrentHashMap::newKeySet(jint arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.ConcurrentHashMap",
			"newKeySet",
			"(I)Ljava/util/concurrent/ConcurrentHashMap$KeySetView;",
			arg0
		);
	}
	inline void ConcurrentHashMap::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	inline JObject ConcurrentHashMap::compute(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"compute",
			"(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	inline JObject ConcurrentHashMap::computeIfAbsent(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"computeIfAbsent",
			"(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	inline JObject ConcurrentHashMap::computeIfPresent(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"computeIfPresent",
			"(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	inline jboolean ConcurrentHashMap::contains(JObject arg0) const
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jboolean ConcurrentHashMap::containsKey(JObject arg0) const
	{
		return callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jboolean ConcurrentHashMap::containsValue(JObject arg0) const
	{
		return callMethod<jboolean>(
			"containsValue",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject ConcurrentHashMap::elements() const
	{
		return callObjectMethod(
			"elements",
			"()Ljava/util/Enumeration;"
		);
	}
	inline JObject ConcurrentHashMap::entrySet() const
	{
		return callObjectMethod(
			"entrySet",
			"()Ljava/util/Set;"
		);
	}
	inline jboolean ConcurrentHashMap::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline void ConcurrentHashMap::forEach(JObject arg0) const
	{
		callMethod<void>(
			"forEach",
			"(Ljava/util/function/BiConsumer;)V",
			arg0.object()
		);
	}
	inline void ConcurrentHashMap::forEach(jlong arg0, JObject arg1) const
	{
		callMethod<void>(
			"forEach",
			"(JLjava/util/function/BiConsumer;)V",
			arg0,
			arg1.object()
		);
	}
	inline void ConcurrentHashMap::forEach(jlong arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"forEach",
			"(JLjava/util/function/BiFunction;Ljava/util/function/Consumer;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	inline void ConcurrentHashMap::forEachEntry(jlong arg0, JObject arg1) const
	{
		callMethod<void>(
			"forEachEntry",
			"(JLjava/util/function/Consumer;)V",
			arg0,
			arg1.object()
		);
	}
	inline void ConcurrentHashMap::forEachEntry(jlong arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"forEachEntry",
			"(JLjava/util/function/Function;Ljava/util/function/Consumer;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	inline void ConcurrentHashMap::forEachKey(jlong arg0, JObject arg1) const
	{
		callMethod<void>(
			"forEachKey",
			"(JLjava/util/function/Consumer;)V",
			arg0,
			arg1.object()
		);
	}
	inline void ConcurrentHashMap::forEachKey(jlong arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"forEachKey",
			"(JLjava/util/function/Function;Ljava/util/function/Consumer;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	inline void ConcurrentHashMap::forEachValue(jlong arg0, JObject arg1) const
	{
		callMethod<void>(
			"forEachValue",
			"(JLjava/util/function/Consumer;)V",
			arg0,
			arg1.object()
		);
	}
	inline void ConcurrentHashMap::forEachValue(jlong arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"forEachValue",
			"(JLjava/util/function/Function;Ljava/util/function/Consumer;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	inline JObject ConcurrentHashMap::get(JObject arg0) const
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	inline JObject ConcurrentHashMap::getOrDefault(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"getOrDefault",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	inline jint ConcurrentHashMap::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean ConcurrentHashMap::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	inline java::util::concurrent::ConcurrentHashMap_KeySetView ConcurrentHashMap::keySet() const
	{
		return callObjectMethod(
			"keySet",
			"()Ljava/util/concurrent/ConcurrentHashMap$KeySetView;"
		);
	}
	inline java::util::concurrent::ConcurrentHashMap_KeySetView ConcurrentHashMap::keySet(JObject arg0) const
	{
		return callObjectMethod(
			"keySet",
			"(Ljava/lang/Object;)Ljava/util/concurrent/ConcurrentHashMap$KeySetView;",
			arg0.object<jobject>()
		);
	}
	inline JObject ConcurrentHashMap::keys() const
	{
		return callObjectMethod(
			"keys",
			"()Ljava/util/Enumeration;"
		);
	}
	inline jlong ConcurrentHashMap::mappingCount() const
	{
		return callMethod<jlong>(
			"mappingCount",
			"()J"
		);
	}
	inline JObject ConcurrentHashMap::merge(JObject arg0, JObject arg1, JObject arg2) const
	{
		return callObjectMethod(
			"merge",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>(),
			arg2.object()
		);
	}
	inline JObject ConcurrentHashMap::put(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	inline void ConcurrentHashMap::putAll(JObject arg0) const
	{
		callMethod<void>(
			"putAll",
			"(Ljava/util/Map;)V",
			arg0.object()
		);
	}
	inline JObject ConcurrentHashMap::putIfAbsent(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"putIfAbsent",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	inline JObject ConcurrentHashMap::reduce(jlong arg0, JObject arg1, JObject arg2) const
	{
		return callObjectMethod(
			"reduce",
			"(JLjava/util/function/BiFunction;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	inline JObject ConcurrentHashMap::reduceEntries(jlong arg0, JObject arg1, JObject arg2) const
	{
		return callObjectMethod(
			"reduceEntries",
			"(JLjava/util/function/Function;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	inline JObject ConcurrentHashMap::reduceEntries(jlong arg0, JObject arg1) const
	{
		return callObjectMethod(
			"reduceEntries",
			"(JLjava/util/function/BiFunction;)Ljava/util/Map$Entry;",
			arg0,
			arg1.object()
		);
	}
	inline jdouble ConcurrentHashMap::reduceEntriesToDouble(jlong arg0, JObject arg1, jdouble arg2, JObject arg3) const
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
	inline jint ConcurrentHashMap::reduceEntriesToInt(jlong arg0, JObject arg1, jint arg2, JObject arg3) const
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
	inline jlong ConcurrentHashMap::reduceEntriesToLong(jlong arg0, JObject arg1, jlong arg2, JObject arg3) const
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
	inline JObject ConcurrentHashMap::reduceKeys(jlong arg0, JObject arg1) const
	{
		return callObjectMethod(
			"reduceKeys",
			"(JLjava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		);
	}
	inline JObject ConcurrentHashMap::reduceKeys(jlong arg0, JObject arg1, JObject arg2) const
	{
		return callObjectMethod(
			"reduceKeys",
			"(JLjava/util/function/Function;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	inline jdouble ConcurrentHashMap::reduceKeysToDouble(jlong arg0, JObject arg1, jdouble arg2, JObject arg3) const
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
	inline jint ConcurrentHashMap::reduceKeysToInt(jlong arg0, JObject arg1, jint arg2, JObject arg3) const
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
	inline jlong ConcurrentHashMap::reduceKeysToLong(jlong arg0, JObject arg1, jlong arg2, JObject arg3) const
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
	inline jdouble ConcurrentHashMap::reduceToDouble(jlong arg0, JObject arg1, jdouble arg2, JObject arg3) const
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
	inline jint ConcurrentHashMap::reduceToInt(jlong arg0, JObject arg1, jint arg2, JObject arg3) const
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
	inline jlong ConcurrentHashMap::reduceToLong(jlong arg0, JObject arg1, jlong arg2, JObject arg3) const
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
	inline JObject ConcurrentHashMap::reduceValues(jlong arg0, JObject arg1) const
	{
		return callObjectMethod(
			"reduceValues",
			"(JLjava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		);
	}
	inline JObject ConcurrentHashMap::reduceValues(jlong arg0, JObject arg1, JObject arg2) const
	{
		return callObjectMethod(
			"reduceValues",
			"(JLjava/util/function/Function;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	inline jdouble ConcurrentHashMap::reduceValuesToDouble(jlong arg0, JObject arg1, jdouble arg2, JObject arg3) const
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
	inline jint ConcurrentHashMap::reduceValuesToInt(jlong arg0, JObject arg1, jint arg2, JObject arg3) const
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
	inline jlong ConcurrentHashMap::reduceValuesToLong(jlong arg0, JObject arg1, jlong arg2, JObject arg3) const
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
	inline jboolean ConcurrentHashMap::remove(JObject arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	inline JObject ConcurrentHashMap::remove(JObject arg0) const
	{
		return callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	inline jboolean ConcurrentHashMap::replace(JObject arg0, JObject arg1, JObject arg2) const
	{
		return callMethod<jboolean>(
			"replace",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0.object<jobject>(),
			arg1.object<jobject>(),
			arg2.object<jobject>()
		);
	}
	inline JObject ConcurrentHashMap::replace(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"replace",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	inline void ConcurrentHashMap::replaceAll(JObject arg0) const
	{
		callMethod<void>(
			"replaceAll",
			"(Ljava/util/function/BiFunction;)V",
			arg0.object()
		);
	}
	inline JObject ConcurrentHashMap::search(jlong arg0, JObject arg1) const
	{
		return callObjectMethod(
			"search",
			"(JLjava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		);
	}
	inline JObject ConcurrentHashMap::searchEntries(jlong arg0, JObject arg1) const
	{
		return callObjectMethod(
			"searchEntries",
			"(JLjava/util/function/Function;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		);
	}
	inline JObject ConcurrentHashMap::searchKeys(jlong arg0, JObject arg1) const
	{
		return callObjectMethod(
			"searchKeys",
			"(JLjava/util/function/Function;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		);
	}
	inline JObject ConcurrentHashMap::searchValues(jlong arg0, JObject arg1) const
	{
		return callObjectMethod(
			"searchValues",
			"(JLjava/util/function/Function;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		);
	}
	inline jint ConcurrentHashMap::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	inline JString ConcurrentHashMap::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline JObject ConcurrentHashMap::values() const
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
