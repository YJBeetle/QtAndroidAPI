#pragma once

#ifndef JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP
#define JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP

#include "../AbstractMap.hpp"

namespace __jni_impl::java::util::concurrent
{
	class ConcurrentHashMap_KeySetView;
}
namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::io
{
	class ObjectOutputStream;
}

namespace __jni_impl::java::util::concurrent
{
	class ConcurrentHashMap : public __jni_impl::java::util::AbstractMap
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0);
		void __constructor();
		void __constructor(jint arg0, jfloat arg1);
		void __constructor(jint arg0, jfloat arg1, jint arg2);
		void __constructor(__jni_impl::__JniBaseClass arg0);
		
		// Methods
		jboolean remove(jobject arg0, jobject arg1);
		QAndroidJniObject remove(jobject arg0);
		QAndroidJniObject get(jobject arg0);
		QAndroidJniObject put(jobject arg0, jobject arg1);
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		QAndroidJniObject values();
		jint hashCode();
		void clear();
		jboolean isEmpty();
		jboolean replace(jobject arg0, jobject arg1, jobject arg2);
		QAndroidJniObject replace(jobject arg0, jobject arg1);
		void replaceAll(__jni_impl::__JniBaseClass arg0);
		jint size();
		jboolean contains(jobject arg0);
		QAndroidJniObject elements();
		QAndroidJniObject merge(jobject arg0, jobject arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject entrySet();
		void putAll(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject putIfAbsent(jobject arg0, jobject arg1);
		QAndroidJniObject compute(jobject arg0, __jni_impl::__JniBaseClass arg1);
		void forEach(__jni_impl::__JniBaseClass arg0);
		void forEach(jlong arg0, __jni_impl::__JniBaseClass arg1);
		void forEach(jlong arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
		jboolean containsKey(jobject arg0);
		QAndroidJniObject computeIfAbsent(jobject arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject keys();
		QAndroidJniObject keySet(jobject arg0);
		QAndroidJniObject keySet();
		jboolean containsValue(jobject arg0);
		QAndroidJniObject getOrDefault(jobject arg0, jobject arg1);
		QAndroidJniObject computeIfPresent(jobject arg0, __jni_impl::__JniBaseClass arg1);
		jlong mappingCount();
		static QAndroidJniObject newKeySet();
		static QAndroidJniObject newKeySet(jint arg0);
		QAndroidJniObject search(jlong arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject reduce(jlong arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
		jdouble reduceToDouble(jlong arg0, __jni_impl::__JniBaseClass arg1, jdouble arg2, __jni_impl::__JniBaseClass arg3);
		jlong reduceToLong(jlong arg0, __jni_impl::__JniBaseClass arg1, jlong arg2, __jni_impl::__JniBaseClass arg3);
		jint reduceToInt(jlong arg0, __jni_impl::__JniBaseClass arg1, jint arg2, __jni_impl::__JniBaseClass arg3);
		void forEachKey(jlong arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
		void forEachKey(jlong arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject searchKeys(jlong arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject reduceKeys(jlong arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject reduceKeys(jlong arg0, __jni_impl::__JniBaseClass arg1);
		jdouble reduceKeysToDouble(jlong arg0, __jni_impl::__JniBaseClass arg1, jdouble arg2, __jni_impl::__JniBaseClass arg3);
		jlong reduceKeysToLong(jlong arg0, __jni_impl::__JniBaseClass arg1, jlong arg2, __jni_impl::__JniBaseClass arg3);
		jint reduceKeysToInt(jlong arg0, __jni_impl::__JniBaseClass arg1, jint arg2, __jni_impl::__JniBaseClass arg3);
		void forEachValue(jlong arg0, __jni_impl::__JniBaseClass arg1);
		void forEachValue(jlong arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject searchValues(jlong arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject reduceValues(jlong arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject reduceValues(jlong arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
		jdouble reduceValuesToDouble(jlong arg0, __jni_impl::__JniBaseClass arg1, jdouble arg2, __jni_impl::__JniBaseClass arg3);
		jlong reduceValuesToLong(jlong arg0, __jni_impl::__JniBaseClass arg1, jlong arg2, __jni_impl::__JniBaseClass arg3);
		jint reduceValuesToInt(jlong arg0, __jni_impl::__JniBaseClass arg1, jint arg2, __jni_impl::__JniBaseClass arg3);
		void forEachEntry(jlong arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
		void forEachEntry(jlong arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject searchEntries(jlong arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject reduceEntries(jlong arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject reduceEntries(jlong arg0, __jni_impl::__JniBaseClass arg1);
		jdouble reduceEntriesToDouble(jlong arg0, __jni_impl::__JniBaseClass arg1, jdouble arg2, __jni_impl::__JniBaseClass arg3);
		jlong reduceEntriesToLong(jlong arg0, __jni_impl::__JniBaseClass arg1, jlong arg2, __jni_impl::__JniBaseClass arg3);
		jint reduceEntriesToInt(jlong arg0, __jni_impl::__JniBaseClass arg1, jint arg2, __jni_impl::__JniBaseClass arg3);
	};
} // namespace __jni_impl::java::util::concurrent

#include "ConcurrentHashMap_KeySetView.hpp"
#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"

namespace __jni_impl::java::util::concurrent
{
	// Fields
	
	// Constructors
	void ConcurrentHashMap::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ConcurrentHashMap",
			"(I)V",
			arg0);
	}
	void ConcurrentHashMap::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ConcurrentHashMap",
			"()V");
	}
	void ConcurrentHashMap::__constructor(jint arg0, jfloat arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ConcurrentHashMap",
			"(IF)V",
			arg0,
			arg1);
	}
	void ConcurrentHashMap::__constructor(jint arg0, jfloat arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ConcurrentHashMap",
			"(IFI)V",
			arg0,
			arg1,
			arg2);
	}
	void ConcurrentHashMap::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ConcurrentHashMap",
			"(Ljava/util/Map;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jboolean ConcurrentHashMap::remove(jobject arg0, jobject arg1)
	{
		return __thiz.callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1);
	}
	QAndroidJniObject ConcurrentHashMap::remove(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0);
	}
	QAndroidJniObject ConcurrentHashMap::get(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0);
	}
	QAndroidJniObject ConcurrentHashMap::put(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1);
	}
	jboolean ConcurrentHashMap::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject ConcurrentHashMap::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject ConcurrentHashMap::values()
	{
		return __thiz.callObjectMethod(
			"values",
			"()Ljava/util/Collection;");
	}
	jint ConcurrentHashMap::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	void ConcurrentHashMap::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V");
	}
	jboolean ConcurrentHashMap::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z");
	}
	jboolean ConcurrentHashMap::replace(jobject arg0, jobject arg1, jobject arg2)
	{
		return __thiz.callMethod<jboolean>(
			"replace",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject ConcurrentHashMap::replace(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"replace",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1);
	}
	void ConcurrentHashMap::replaceAll(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"replaceAll",
			"(Ljava/util/function/BiFunction;)V",
			arg0.__jniObject().object());
	}
	jint ConcurrentHashMap::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I");
	}
	jboolean ConcurrentHashMap::contains(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject ConcurrentHashMap::elements()
	{
		return __thiz.callObjectMethod(
			"elements",
			"()Ljava/util/Enumeration;");
	}
	QAndroidJniObject ConcurrentHashMap::merge(jobject arg0, jobject arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"merge",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	QAndroidJniObject ConcurrentHashMap::entrySet()
	{
		return __thiz.callObjectMethod(
			"entrySet",
			"()Ljava/util/Set;");
	}
	void ConcurrentHashMap::putAll(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"putAll",
			"(Ljava/util/Map;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ConcurrentHashMap::putIfAbsent(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"putIfAbsent",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1);
	}
	QAndroidJniObject ConcurrentHashMap::compute(jobject arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"compute",
			"(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object());
	}
	void ConcurrentHashMap::forEach(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Ljava/util/function/BiConsumer;)V",
			arg0.__jniObject().object());
	}
	void ConcurrentHashMap::forEach(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(JLjava/util/function/BiConsumer;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void ConcurrentHashMap::forEach(jlong arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(JLjava/util/function/BiFunction;Ljava/util/function/Consumer;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	jboolean ConcurrentHashMap::containsKey(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject ConcurrentHashMap::computeIfAbsent(jobject arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"computeIfAbsent",
			"(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject ConcurrentHashMap::keys()
	{
		return __thiz.callObjectMethod(
			"keys",
			"()Ljava/util/Enumeration;");
	}
	QAndroidJniObject ConcurrentHashMap::keySet(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"keySet",
			"(Ljava/lang/Object;)Ljava/util/concurrent/ConcurrentHashMap$KeySetView;",
			arg0);
	}
	QAndroidJniObject ConcurrentHashMap::keySet()
	{
		return __thiz.callObjectMethod(
			"keySet",
			"()Ljava/util/concurrent/ConcurrentHashMap$KeySetView;");
	}
	jboolean ConcurrentHashMap::containsValue(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsValue",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject ConcurrentHashMap::getOrDefault(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"getOrDefault",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1);
	}
	QAndroidJniObject ConcurrentHashMap::computeIfPresent(jobject arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"computeIfPresent",
			"(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object());
	}
	jlong ConcurrentHashMap::mappingCount()
	{
		return __thiz.callMethod<jlong>(
			"mappingCount",
			"()J");
	}
	QAndroidJniObject ConcurrentHashMap::newKeySet()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.ConcurrentHashMap",
			"newKeySet",
			"()Ljava/util/concurrent/ConcurrentHashMap$KeySetView;");
	}
	QAndroidJniObject ConcurrentHashMap::newKeySet(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.ConcurrentHashMap",
			"newKeySet",
			"(I)Ljava/util/concurrent/ConcurrentHashMap$KeySetView;",
			arg0);
	}
	QAndroidJniObject ConcurrentHashMap::search(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"search",
			"(JLjava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject ConcurrentHashMap::reduce(jlong arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"reduce",
			"(JLjava/util/function/BiFunction;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	jdouble ConcurrentHashMap::reduceToDouble(jlong arg0, __jni_impl::__JniBaseClass arg1, jdouble arg2, __jni_impl::__JniBaseClass arg3)
	{
		return __thiz.callMethod<jdouble>(
			"reduceToDouble",
			"(JLjava/util/function/ToDoubleBiFunction;DLjava/util/function/DoubleBinaryOperator;)D",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object());
	}
	jlong ConcurrentHashMap::reduceToLong(jlong arg0, __jni_impl::__JniBaseClass arg1, jlong arg2, __jni_impl::__JniBaseClass arg3)
	{
		return __thiz.callMethod<jlong>(
			"reduceToLong",
			"(JLjava/util/function/ToLongBiFunction;JLjava/util/function/LongBinaryOperator;)J",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object());
	}
	jint ConcurrentHashMap::reduceToInt(jlong arg0, __jni_impl::__JniBaseClass arg1, jint arg2, __jni_impl::__JniBaseClass arg3)
	{
		return __thiz.callMethod<jint>(
			"reduceToInt",
			"(JLjava/util/function/ToIntBiFunction;ILjava/util/function/IntBinaryOperator;)I",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object());
	}
	void ConcurrentHashMap::forEachKey(jlong arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"forEachKey",
			"(JLjava/util/function/Function;Ljava/util/function/Consumer;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void ConcurrentHashMap::forEachKey(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"forEachKey",
			"(JLjava/util/function/Consumer;)V",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject ConcurrentHashMap::searchKeys(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"searchKeys",
			"(JLjava/util/function/Function;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject ConcurrentHashMap::reduceKeys(jlong arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"reduceKeys",
			"(JLjava/util/function/Function;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	QAndroidJniObject ConcurrentHashMap::reduceKeys(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"reduceKeys",
			"(JLjava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object());
	}
	jdouble ConcurrentHashMap::reduceKeysToDouble(jlong arg0, __jni_impl::__JniBaseClass arg1, jdouble arg2, __jni_impl::__JniBaseClass arg3)
	{
		return __thiz.callMethod<jdouble>(
			"reduceKeysToDouble",
			"(JLjava/util/function/ToDoubleFunction;DLjava/util/function/DoubleBinaryOperator;)D",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object());
	}
	jlong ConcurrentHashMap::reduceKeysToLong(jlong arg0, __jni_impl::__JniBaseClass arg1, jlong arg2, __jni_impl::__JniBaseClass arg3)
	{
		return __thiz.callMethod<jlong>(
			"reduceKeysToLong",
			"(JLjava/util/function/ToLongFunction;JLjava/util/function/LongBinaryOperator;)J",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object());
	}
	jint ConcurrentHashMap::reduceKeysToInt(jlong arg0, __jni_impl::__JniBaseClass arg1, jint arg2, __jni_impl::__JniBaseClass arg3)
	{
		return __thiz.callMethod<jint>(
			"reduceKeysToInt",
			"(JLjava/util/function/ToIntFunction;ILjava/util/function/IntBinaryOperator;)I",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object());
	}
	void ConcurrentHashMap::forEachValue(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"forEachValue",
			"(JLjava/util/function/Consumer;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void ConcurrentHashMap::forEachValue(jlong arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"forEachValue",
			"(JLjava/util/function/Function;Ljava/util/function/Consumer;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	QAndroidJniObject ConcurrentHashMap::searchValues(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"searchValues",
			"(JLjava/util/function/Function;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject ConcurrentHashMap::reduceValues(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"reduceValues",
			"(JLjava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject ConcurrentHashMap::reduceValues(jlong arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"reduceValues",
			"(JLjava/util/function/Function;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	jdouble ConcurrentHashMap::reduceValuesToDouble(jlong arg0, __jni_impl::__JniBaseClass arg1, jdouble arg2, __jni_impl::__JniBaseClass arg3)
	{
		return __thiz.callMethod<jdouble>(
			"reduceValuesToDouble",
			"(JLjava/util/function/ToDoubleFunction;DLjava/util/function/DoubleBinaryOperator;)D",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object());
	}
	jlong ConcurrentHashMap::reduceValuesToLong(jlong arg0, __jni_impl::__JniBaseClass arg1, jlong arg2, __jni_impl::__JniBaseClass arg3)
	{
		return __thiz.callMethod<jlong>(
			"reduceValuesToLong",
			"(JLjava/util/function/ToLongFunction;JLjava/util/function/LongBinaryOperator;)J",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object());
	}
	jint ConcurrentHashMap::reduceValuesToInt(jlong arg0, __jni_impl::__JniBaseClass arg1, jint arg2, __jni_impl::__JniBaseClass arg3)
	{
		return __thiz.callMethod<jint>(
			"reduceValuesToInt",
			"(JLjava/util/function/ToIntFunction;ILjava/util/function/IntBinaryOperator;)I",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object());
	}
	void ConcurrentHashMap::forEachEntry(jlong arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"forEachEntry",
			"(JLjava/util/function/Function;Ljava/util/function/Consumer;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void ConcurrentHashMap::forEachEntry(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"forEachEntry",
			"(JLjava/util/function/Consumer;)V",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject ConcurrentHashMap::searchEntries(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"searchEntries",
			"(JLjava/util/function/Function;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject ConcurrentHashMap::reduceEntries(jlong arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"reduceEntries",
			"(JLjava/util/function/Function;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	QAndroidJniObject ConcurrentHashMap::reduceEntries(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"reduceEntries",
			"(JLjava/util/function/BiFunction;)Ljava/util/Map$Entry;",
			arg0,
			arg1.__jniObject().object());
	}
	jdouble ConcurrentHashMap::reduceEntriesToDouble(jlong arg0, __jni_impl::__JniBaseClass arg1, jdouble arg2, __jni_impl::__JniBaseClass arg3)
	{
		return __thiz.callMethod<jdouble>(
			"reduceEntriesToDouble",
			"(JLjava/util/function/ToDoubleFunction;DLjava/util/function/DoubleBinaryOperator;)D",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object());
	}
	jlong ConcurrentHashMap::reduceEntriesToLong(jlong arg0, __jni_impl::__JniBaseClass arg1, jlong arg2, __jni_impl::__JniBaseClass arg3)
	{
		return __thiz.callMethod<jlong>(
			"reduceEntriesToLong",
			"(JLjava/util/function/ToLongFunction;JLjava/util/function/LongBinaryOperator;)J",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object());
	}
	jint ConcurrentHashMap::reduceEntriesToInt(jlong arg0, __jni_impl::__JniBaseClass arg1, jint arg2, __jni_impl::__JniBaseClass arg3)
	{
		return __thiz.callMethod<jint>(
			"reduceEntriesToInt",
			"(JLjava/util/function/ToIntFunction;ILjava/util/function/IntBinaryOperator;)I",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object());
	}
} // namespace __jni_impl::java::util::concurrent

namespace java::util::concurrent
{
	class ConcurrentHashMap : public __jni_impl::java::util::concurrent::ConcurrentHashMap
	{
	public:
		ConcurrentHashMap(QAndroidJniObject obj) { __thiz = obj; }
		ConcurrentHashMap(jint arg0)
		{
			__constructor(
				arg0);
		}
		ConcurrentHashMap()
		{
			__constructor();
		}
		ConcurrentHashMap(jint arg0, jfloat arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ConcurrentHashMap(jint arg0, jfloat arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		ConcurrentHashMap(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util::concurrent

#endif // JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP

