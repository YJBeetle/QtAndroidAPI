#pragma once

#include "../../__JniBaseClass.hpp"
#include "AbstractMap.hpp"

namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::io
{
	class ObjectOutputStream;
}

namespace __jni_impl::java::util
{
	class TreeMap : public __jni_impl::java::util::AbstractMap
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::__JniBaseClass arg0);
		
		// Methods
		QAndroidJniObject ceilingEntry(jobject arg0);
		jobject ceilingKey(jobject arg0);
		void clear();
		jobject clone();
		QAndroidJniObject comparator();
		jobject compute(jobject arg0, __jni_impl::__JniBaseClass arg1);
		jobject computeIfAbsent(jobject arg0, __jni_impl::__JniBaseClass arg1);
		jobject computeIfPresent(jobject arg0, __jni_impl::__JniBaseClass arg1);
		jboolean containsKey(jobject arg0);
		jboolean containsValue(jobject arg0);
		QAndroidJniObject descendingKeySet();
		QAndroidJniObject descendingMap();
		QAndroidJniObject entrySet();
		QAndroidJniObject firstEntry();
		jobject firstKey();
		QAndroidJniObject floorEntry(jobject arg0);
		jobject floorKey(jobject arg0);
		void forEach(__jni_impl::__JniBaseClass arg0);
		jobject get(jobject arg0);
		QAndroidJniObject headMap(jobject arg0, jboolean arg1);
		QAndroidJniObject headMap(jobject arg0);
		QAndroidJniObject higherEntry(jobject arg0);
		jobject higherKey(jobject arg0);
		QAndroidJniObject keySet();
		QAndroidJniObject lastEntry();
		jobject lastKey();
		QAndroidJniObject lowerEntry(jobject arg0);
		jobject lowerKey(jobject arg0);
		jobject merge(jobject arg0, jobject arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject navigableKeySet();
		QAndroidJniObject pollFirstEntry();
		QAndroidJniObject pollLastEntry();
		jobject put(jobject arg0, jobject arg1);
		void putAll(__jni_impl::__JniBaseClass arg0);
		jobject putIfAbsent(jobject arg0, jobject arg1);
		jobject remove(jobject arg0);
		jboolean replace(jobject arg0, jobject arg1, jobject arg2);
		jobject replace(jobject arg0, jobject arg1);
		void replaceAll(__jni_impl::__JniBaseClass arg0);
		jint size();
		QAndroidJniObject subMap(jobject arg0, jboolean arg1, jobject arg2, jboolean arg3);
		QAndroidJniObject subMap(jobject arg0, jobject arg1);
		QAndroidJniObject tailMap(jobject arg0, jboolean arg1);
		QAndroidJniObject tailMap(jobject arg0);
		QAndroidJniObject values();
	};
} // namespace __jni_impl::java::util

#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"

namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void TreeMap::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.TreeMap",
			"()V"
		);
	}
	void TreeMap::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.TreeMap",
			"(Ljava/util/Comparator;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject TreeMap::ceilingEntry(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"ceilingEntry",
			"(Ljava/lang/Object;)Ljava/util/Map$Entry;",
			arg0
		);
	}
	jobject TreeMap::ceilingKey(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"ceilingKey",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	void TreeMap::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jobject TreeMap::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject TreeMap::comparator()
	{
		return __thiz.callObjectMethod(
			"comparator",
			"()Ljava/util/Comparator;"
		);
	}
	jobject TreeMap::compute(jobject arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"compute",
			"(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	jobject TreeMap::computeIfAbsent(jobject arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"computeIfAbsent",
			"(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	jobject TreeMap::computeIfPresent(jobject arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"computeIfPresent",
			"(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	jboolean TreeMap::containsKey(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean TreeMap::containsValue(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsValue",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject TreeMap::descendingKeySet()
	{
		return __thiz.callObjectMethod(
			"descendingKeySet",
			"()Ljava/util/NavigableSet;"
		);
	}
	QAndroidJniObject TreeMap::descendingMap()
	{
		return __thiz.callObjectMethod(
			"descendingMap",
			"()Ljava/util/NavigableMap;"
		);
	}
	QAndroidJniObject TreeMap::entrySet()
	{
		return __thiz.callObjectMethod(
			"entrySet",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject TreeMap::firstEntry()
	{
		return __thiz.callObjectMethod(
			"firstEntry",
			"()Ljava/util/Map$Entry;"
		);
	}
	jobject TreeMap::firstKey()
	{
		return __thiz.callObjectMethod(
			"firstKey",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject TreeMap::floorEntry(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"floorEntry",
			"(Ljava/lang/Object;)Ljava/util/Map$Entry;",
			arg0
		);
	}
	jobject TreeMap::floorKey(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"floorKey",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	void TreeMap::forEach(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Ljava/util/function/BiConsumer;)V",
			arg0.__jniObject().object()
		);
	}
	jobject TreeMap::get(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	QAndroidJniObject TreeMap::headMap(jobject arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"headMap",
			"(Ljava/lang/Object;Z)Ljava/util/NavigableMap;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject TreeMap::headMap(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"headMap",
			"(Ljava/lang/Object;)Ljava/util/SortedMap;",
			arg0
		);
	}
	QAndroidJniObject TreeMap::higherEntry(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"higherEntry",
			"(Ljava/lang/Object;)Ljava/util/Map$Entry;",
			arg0
		);
	}
	jobject TreeMap::higherKey(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"higherKey",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	QAndroidJniObject TreeMap::keySet()
	{
		return __thiz.callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject TreeMap::lastEntry()
	{
		return __thiz.callObjectMethod(
			"lastEntry",
			"()Ljava/util/Map$Entry;"
		);
	}
	jobject TreeMap::lastKey()
	{
		return __thiz.callObjectMethod(
			"lastKey",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject TreeMap::lowerEntry(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"lowerEntry",
			"(Ljava/lang/Object;)Ljava/util/Map$Entry;",
			arg0
		);
	}
	jobject TreeMap::lowerKey(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"lowerKey",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject TreeMap::merge(jobject arg0, jobject arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"merge",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		).object<jobject>();
	}
	QAndroidJniObject TreeMap::navigableKeySet()
	{
		return __thiz.callObjectMethod(
			"navigableKeySet",
			"()Ljava/util/NavigableSet;"
		);
	}
	QAndroidJniObject TreeMap::pollFirstEntry()
	{
		return __thiz.callObjectMethod(
			"pollFirstEntry",
			"()Ljava/util/Map$Entry;"
		);
	}
	QAndroidJniObject TreeMap::pollLastEntry()
	{
		return __thiz.callObjectMethod(
			"pollLastEntry",
			"()Ljava/util/Map$Entry;"
		);
	}
	jobject TreeMap::put(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	void TreeMap::putAll(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"putAll",
			"(Ljava/util/Map;)V",
			arg0.__jniObject().object()
		);
	}
	jobject TreeMap::putIfAbsent(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"putIfAbsent",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jobject TreeMap::remove(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jboolean TreeMap::replace(jobject arg0, jobject arg1, jobject arg2)
	{
		return __thiz.callMethod<jboolean>(
			"replace",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jobject TreeMap::replace(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"replace",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	void TreeMap::replaceAll(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"replaceAll",
			"(Ljava/util/function/BiFunction;)V",
			arg0.__jniObject().object()
		);
	}
	jint TreeMap::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	QAndroidJniObject TreeMap::subMap(jobject arg0, jboolean arg1, jobject arg2, jboolean arg3)
	{
		return __thiz.callObjectMethod(
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
		return __thiz.callObjectMethod(
			"subMap",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedMap;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject TreeMap::tailMap(jobject arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"tailMap",
			"(Ljava/lang/Object;Z)Ljava/util/NavigableMap;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject TreeMap::tailMap(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"tailMap",
			"(Ljava/lang/Object;)Ljava/util/SortedMap;",
			arg0
		);
	}
	QAndroidJniObject TreeMap::values()
	{
		return __thiz.callObjectMethod(
			"values",
			"()Ljava/util/Collection;"
		);
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class TreeMap : public __jni_impl::java::util::TreeMap
	{
	public:
		TreeMap(QAndroidJniObject obj) { __thiz = obj; }
		TreeMap()
		{
			__constructor();
		}
		TreeMap(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util

