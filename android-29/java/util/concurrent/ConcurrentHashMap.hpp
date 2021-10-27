#pragma once

#ifndef JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP
#define JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP

#include "../../../__JniBaseClass.hpp"
#include "../AbstractMap.hpp"

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
	class ConcurrentHashMap_KeySetView;
}

namespace __jni_impl::java::util::concurrent
{
	class ConcurrentHashMap : public __jni_impl::java::util::AbstractMap
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jint arg0);
		void __constructor(__jni_impl::__JniBaseClass arg0);
		void __constructor(jint arg0, jfloat arg1);
		void __constructor(jint arg0, jfloat arg1, jint arg2);
		
		// Methods
		static QAndroidJniObject newKeySet();
		static QAndroidJniObject newKeySet(jint arg0);
		void clear();
		jobject compute(jobject arg0, __jni_impl::__JniBaseClass arg1);
		jobject computeIfAbsent(jobject arg0, __jni_impl::__JniBaseClass arg1);
		jobject computeIfPresent(jobject arg0, __jni_impl::__JniBaseClass arg1);
		jboolean contains(jobject arg0);
		jboolean containsKey(jobject arg0);
		jboolean containsValue(jobject arg0);
		QAndroidJniObject elements();
		QAndroidJniObject entrySet();
		jboolean equals(jobject arg0);
		void forEach(__jni_impl::__JniBaseClass arg0);
		void forEach(jlong arg0, __jni_impl::__JniBaseClass arg1);
		void forEach(jlong arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
		void forEachEntry(jlong arg0, __jni_impl::__JniBaseClass arg1);
		void forEachEntry(jlong arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
		void forEachKey(jlong arg0, __jni_impl::__JniBaseClass arg1);
		void forEachKey(jlong arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
		void forEachValue(jlong arg0, __jni_impl::__JniBaseClass arg1);
		void forEachValue(jlong arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
		jobject get(jobject arg0);
		jobject getOrDefault(jobject arg0, jobject arg1);
		jint hashCode();
		jboolean isEmpty();
		QAndroidJniObject keySet();
		QAndroidJniObject keySet(jobject arg0);
		QAndroidJniObject keys();
		jlong mappingCount();
		jobject merge(jobject arg0, jobject arg1, __jni_impl::__JniBaseClass arg2);
		jobject put(jobject arg0, jobject arg1);
		void putAll(__jni_impl::__JniBaseClass arg0);
		jobject putIfAbsent(jobject arg0, jobject arg1);
		jobject reduce(jlong arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
		jobject reduceEntries(jlong arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject reduceEntries(jlong arg0, __jni_impl::__JniBaseClass arg1);
		jdouble reduceEntriesToDouble(jlong arg0, __jni_impl::__JniBaseClass arg1, jdouble arg2, __jni_impl::__JniBaseClass arg3);
		jint reduceEntriesToInt(jlong arg0, __jni_impl::__JniBaseClass arg1, jint arg2, __jni_impl::__JniBaseClass arg3);
		jlong reduceEntriesToLong(jlong arg0, __jni_impl::__JniBaseClass arg1, jlong arg2, __jni_impl::__JniBaseClass arg3);
		jobject reduceKeys(jlong arg0, __jni_impl::__JniBaseClass arg1);
		jobject reduceKeys(jlong arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
		jdouble reduceKeysToDouble(jlong arg0, __jni_impl::__JniBaseClass arg1, jdouble arg2, __jni_impl::__JniBaseClass arg3);
		jint reduceKeysToInt(jlong arg0, __jni_impl::__JniBaseClass arg1, jint arg2, __jni_impl::__JniBaseClass arg3);
		jlong reduceKeysToLong(jlong arg0, __jni_impl::__JniBaseClass arg1, jlong arg2, __jni_impl::__JniBaseClass arg3);
		jdouble reduceToDouble(jlong arg0, __jni_impl::__JniBaseClass arg1, jdouble arg2, __jni_impl::__JniBaseClass arg3);
		jint reduceToInt(jlong arg0, __jni_impl::__JniBaseClass arg1, jint arg2, __jni_impl::__JniBaseClass arg3);
		jlong reduceToLong(jlong arg0, __jni_impl::__JniBaseClass arg1, jlong arg2, __jni_impl::__JniBaseClass arg3);
		jobject reduceValues(jlong arg0, __jni_impl::__JniBaseClass arg1);
		jobject reduceValues(jlong arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
		jdouble reduceValuesToDouble(jlong arg0, __jni_impl::__JniBaseClass arg1, jdouble arg2, __jni_impl::__JniBaseClass arg3);
		jint reduceValuesToInt(jlong arg0, __jni_impl::__JniBaseClass arg1, jint arg2, __jni_impl::__JniBaseClass arg3);
		jlong reduceValuesToLong(jlong arg0, __jni_impl::__JniBaseClass arg1, jlong arg2, __jni_impl::__JniBaseClass arg3);
		jboolean remove(jobject arg0, jobject arg1);
		jobject remove(jobject arg0);
		jboolean replace(jobject arg0, jobject arg1, jobject arg2);
		jobject replace(jobject arg0, jobject arg1);
		void replaceAll(__jni_impl::__JniBaseClass arg0);
		jobject search(jlong arg0, __jni_impl::__JniBaseClass arg1);
		jobject searchEntries(jlong arg0, __jni_impl::__JniBaseClass arg1);
		jobject searchKeys(jlong arg0, __jni_impl::__JniBaseClass arg1);
		jobject searchValues(jlong arg0, __jni_impl::__JniBaseClass arg1);
		jint size();
		jstring toString();
		QAndroidJniObject values();
	};
} // namespace __jni_impl::java::util::concurrent

#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"
#include "ConcurrentHashMap_KeySetView.hpp"

namespace __jni_impl::java::util::concurrent
{
	// Fields
	
	// Constructors
	void ConcurrentHashMap::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ConcurrentHashMap",
			"()V"
		);
	}
	void ConcurrentHashMap::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ConcurrentHashMap",
			"(I)V",
			arg0
		);
	}
	void ConcurrentHashMap::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ConcurrentHashMap",
			"(Ljava/util/Map;)V",
			arg0.__jniObject().object()
		);
	}
	void ConcurrentHashMap::__constructor(jint arg0, jfloat arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ConcurrentHashMap",
			"(IF)V",
			arg0,
			arg1
		);
	}
	void ConcurrentHashMap::__constructor(jint arg0, jfloat arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ConcurrentHashMap",
			"(IFI)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	QAndroidJniObject ConcurrentHashMap::newKeySet()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.ConcurrentHashMap",
			"newKeySet",
			"()Ljava/util/concurrent/ConcurrentHashMap$KeySetView;"
		);
	}
	QAndroidJniObject ConcurrentHashMap::newKeySet(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.ConcurrentHashMap",
			"newKeySet",
			"(I)Ljava/util/concurrent/ConcurrentHashMap$KeySetView;",
			arg0
		);
	}
	void ConcurrentHashMap::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jobject ConcurrentHashMap::compute(jobject arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"compute",
			"(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	jobject ConcurrentHashMap::computeIfAbsent(jobject arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"computeIfAbsent",
			"(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	jobject ConcurrentHashMap::computeIfPresent(jobject arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"computeIfPresent",
			"(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	jboolean ConcurrentHashMap::contains(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean ConcurrentHashMap::containsKey(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean ConcurrentHashMap::containsValue(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsValue",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject ConcurrentHashMap::elements()
	{
		return __thiz.callObjectMethod(
			"elements",
			"()Ljava/util/Enumeration;"
		);
	}
	QAndroidJniObject ConcurrentHashMap::entrySet()
	{
		return __thiz.callObjectMethod(
			"entrySet",
			"()Ljava/util/Set;"
		);
	}
	jboolean ConcurrentHashMap::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void ConcurrentHashMap::forEach(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Ljava/util/function/BiConsumer;)V",
			arg0.__jniObject().object()
		);
	}
	void ConcurrentHashMap::forEach(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(JLjava/util/function/BiConsumer;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void ConcurrentHashMap::forEach(jlong arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(JLjava/util/function/BiFunction;Ljava/util/function/Consumer;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void ConcurrentHashMap::forEachEntry(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"forEachEntry",
			"(JLjava/util/function/Consumer;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void ConcurrentHashMap::forEachEntry(jlong arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"forEachEntry",
			"(JLjava/util/function/Function;Ljava/util/function/Consumer;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void ConcurrentHashMap::forEachKey(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"forEachKey",
			"(JLjava/util/function/Consumer;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void ConcurrentHashMap::forEachKey(jlong arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"forEachKey",
			"(JLjava/util/function/Function;Ljava/util/function/Consumer;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void ConcurrentHashMap::forEachValue(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"forEachValue",
			"(JLjava/util/function/Consumer;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void ConcurrentHashMap::forEachValue(jlong arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"forEachValue",
			"(JLjava/util/function/Function;Ljava/util/function/Consumer;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jobject ConcurrentHashMap::get(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject ConcurrentHashMap::getOrDefault(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"getOrDefault",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jint ConcurrentHashMap::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean ConcurrentHashMap::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	QAndroidJniObject ConcurrentHashMap::keySet()
	{
		return __thiz.callObjectMethod(
			"keySet",
			"()Ljava/util/concurrent/ConcurrentHashMap$KeySetView;"
		);
	}
	QAndroidJniObject ConcurrentHashMap::keySet(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"keySet",
			"(Ljava/lang/Object;)Ljava/util/concurrent/ConcurrentHashMap$KeySetView;",
			arg0
		);
	}
	QAndroidJniObject ConcurrentHashMap::keys()
	{
		return __thiz.callObjectMethod(
			"keys",
			"()Ljava/util/Enumeration;"
		);
	}
	jlong ConcurrentHashMap::mappingCount()
	{
		return __thiz.callMethod<jlong>(
			"mappingCount",
			"()J"
		);
	}
	jobject ConcurrentHashMap::merge(jobject arg0, jobject arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"merge",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		).object<jobject>();
	}
	jobject ConcurrentHashMap::put(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	void ConcurrentHashMap::putAll(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"putAll",
			"(Ljava/util/Map;)V",
			arg0.__jniObject().object()
		);
	}
	jobject ConcurrentHashMap::putIfAbsent(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"putIfAbsent",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jobject ConcurrentHashMap::reduce(jlong arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"reduce",
			"(JLjava/util/function/BiFunction;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		).object<jobject>();
	}
	jobject ConcurrentHashMap::reduceEntries(jlong arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"reduceEntries",
			"(JLjava/util/function/Function;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		).object<jobject>();
	}
	QAndroidJniObject ConcurrentHashMap::reduceEntries(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"reduceEntries",
			"(JLjava/util/function/BiFunction;)Ljava/util/Map$Entry;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jdouble ConcurrentHashMap::reduceEntriesToDouble(jlong arg0, __jni_impl::__JniBaseClass arg1, jdouble arg2, __jni_impl::__JniBaseClass arg3)
	{
		return __thiz.callMethod<jdouble>(
			"reduceEntriesToDouble",
			"(JLjava/util/function/ToDoubleFunction;DLjava/util/function/DoubleBinaryOperator;)D",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	jint ConcurrentHashMap::reduceEntriesToInt(jlong arg0, __jni_impl::__JniBaseClass arg1, jint arg2, __jni_impl::__JniBaseClass arg3)
	{
		return __thiz.callMethod<jint>(
			"reduceEntriesToInt",
			"(JLjava/util/function/ToIntFunction;ILjava/util/function/IntBinaryOperator;)I",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	jlong ConcurrentHashMap::reduceEntriesToLong(jlong arg0, __jni_impl::__JniBaseClass arg1, jlong arg2, __jni_impl::__JniBaseClass arg3)
	{
		return __thiz.callMethod<jlong>(
			"reduceEntriesToLong",
			"(JLjava/util/function/ToLongFunction;JLjava/util/function/LongBinaryOperator;)J",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	jobject ConcurrentHashMap::reduceKeys(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"reduceKeys",
			"(JLjava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	jobject ConcurrentHashMap::reduceKeys(jlong arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"reduceKeys",
			"(JLjava/util/function/Function;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		).object<jobject>();
	}
	jdouble ConcurrentHashMap::reduceKeysToDouble(jlong arg0, __jni_impl::__JniBaseClass arg1, jdouble arg2, __jni_impl::__JniBaseClass arg3)
	{
		return __thiz.callMethod<jdouble>(
			"reduceKeysToDouble",
			"(JLjava/util/function/ToDoubleFunction;DLjava/util/function/DoubleBinaryOperator;)D",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	jint ConcurrentHashMap::reduceKeysToInt(jlong arg0, __jni_impl::__JniBaseClass arg1, jint arg2, __jni_impl::__JniBaseClass arg3)
	{
		return __thiz.callMethod<jint>(
			"reduceKeysToInt",
			"(JLjava/util/function/ToIntFunction;ILjava/util/function/IntBinaryOperator;)I",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	jlong ConcurrentHashMap::reduceKeysToLong(jlong arg0, __jni_impl::__JniBaseClass arg1, jlong arg2, __jni_impl::__JniBaseClass arg3)
	{
		return __thiz.callMethod<jlong>(
			"reduceKeysToLong",
			"(JLjava/util/function/ToLongFunction;JLjava/util/function/LongBinaryOperator;)J",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	jdouble ConcurrentHashMap::reduceToDouble(jlong arg0, __jni_impl::__JniBaseClass arg1, jdouble arg2, __jni_impl::__JniBaseClass arg3)
	{
		return __thiz.callMethod<jdouble>(
			"reduceToDouble",
			"(JLjava/util/function/ToDoubleBiFunction;DLjava/util/function/DoubleBinaryOperator;)D",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	jint ConcurrentHashMap::reduceToInt(jlong arg0, __jni_impl::__JniBaseClass arg1, jint arg2, __jni_impl::__JniBaseClass arg3)
	{
		return __thiz.callMethod<jint>(
			"reduceToInt",
			"(JLjava/util/function/ToIntBiFunction;ILjava/util/function/IntBinaryOperator;)I",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	jlong ConcurrentHashMap::reduceToLong(jlong arg0, __jni_impl::__JniBaseClass arg1, jlong arg2, __jni_impl::__JniBaseClass arg3)
	{
		return __thiz.callMethod<jlong>(
			"reduceToLong",
			"(JLjava/util/function/ToLongBiFunction;JLjava/util/function/LongBinaryOperator;)J",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	jobject ConcurrentHashMap::reduceValues(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"reduceValues",
			"(JLjava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	jobject ConcurrentHashMap::reduceValues(jlong arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"reduceValues",
			"(JLjava/util/function/Function;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		).object<jobject>();
	}
	jdouble ConcurrentHashMap::reduceValuesToDouble(jlong arg0, __jni_impl::__JniBaseClass arg1, jdouble arg2, __jni_impl::__JniBaseClass arg3)
	{
		return __thiz.callMethod<jdouble>(
			"reduceValuesToDouble",
			"(JLjava/util/function/ToDoubleFunction;DLjava/util/function/DoubleBinaryOperator;)D",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	jint ConcurrentHashMap::reduceValuesToInt(jlong arg0, __jni_impl::__JniBaseClass arg1, jint arg2, __jni_impl::__JniBaseClass arg3)
	{
		return __thiz.callMethod<jint>(
			"reduceValuesToInt",
			"(JLjava/util/function/ToIntFunction;ILjava/util/function/IntBinaryOperator;)I",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	jlong ConcurrentHashMap::reduceValuesToLong(jlong arg0, __jni_impl::__JniBaseClass arg1, jlong arg2, __jni_impl::__JniBaseClass arg3)
	{
		return __thiz.callMethod<jlong>(
			"reduceValuesToLong",
			"(JLjava/util/function/ToLongFunction;JLjava/util/function/LongBinaryOperator;)J",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	jboolean ConcurrentHashMap::remove(jobject arg0, jobject arg1)
	{
		return __thiz.callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1
		);
	}
	jobject ConcurrentHashMap::remove(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jboolean ConcurrentHashMap::replace(jobject arg0, jobject arg1, jobject arg2)
	{
		return __thiz.callMethod<jboolean>(
			"replace",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jobject ConcurrentHashMap::replace(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"replace",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	void ConcurrentHashMap::replaceAll(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"replaceAll",
			"(Ljava/util/function/BiFunction;)V",
			arg0.__jniObject().object()
		);
	}
	jobject ConcurrentHashMap::search(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"search",
			"(JLjava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	jobject ConcurrentHashMap::searchEntries(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"searchEntries",
			"(JLjava/util/function/Function;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	jobject ConcurrentHashMap::searchKeys(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"searchKeys",
			"(JLjava/util/function/Function;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	jobject ConcurrentHashMap::searchValues(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"searchValues",
			"(JLjava/util/function/Function;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	jint ConcurrentHashMap::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	jstring ConcurrentHashMap::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ConcurrentHashMap::values()
	{
		return __thiz.callObjectMethod(
			"values",
			"()Ljava/util/Collection;"
		);
	}
} // namespace __jni_impl::java::util::concurrent

namespace java::util::concurrent
{
	class ConcurrentHashMap : public __jni_impl::java::util::concurrent::ConcurrentHashMap
	{
	public:
		ConcurrentHashMap(QAndroidJniObject obj) { __thiz = obj; }
		ConcurrentHashMap()
		{
			__constructor();
		}
		ConcurrentHashMap(jint arg0)
		{
			__constructor(
				arg0);
		}
		ConcurrentHashMap(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
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
	};
} // namespace java::util::concurrent

#endif // JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP

