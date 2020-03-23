#pragma once

#ifndef JAVA_UTIL_TREEMAP
#define JAVA_UTIL_TREEMAP

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
		void __constructor(__jni_impl::__JniBaseClass arg0);
		void __constructor();
		
		// Methods
		QAndroidJniObject remove(jobject arg0);
		QAndroidJniObject get(jobject arg0);
		QAndroidJniObject put(jobject arg0, jobject arg1);
		QAndroidJniObject values();
		QAndroidJniObject clone();
		void clear();
		QAndroidJniObject replace(jobject arg0, jobject arg1);
		jboolean replace(jobject arg0, jobject arg1, jobject arg2);
		void replaceAll(__jni_impl::__JniBaseClass arg0);
		jint size();
		QAndroidJniObject entrySet();
		void putAll(__jni_impl::__JniBaseClass arg0);
		void forEach(__jni_impl::__JniBaseClass arg0);
		jboolean containsKey(jobject arg0);
		QAndroidJniObject keySet();
		jboolean containsValue(jobject arg0);
		QAndroidJniObject comparator();
		QAndroidJniObject firstKey();
		QAndroidJniObject navigableKeySet();
		QAndroidJniObject descendingKeySet();
		QAndroidJniObject lowerKey(jobject arg0);
		QAndroidJniObject floorKey(jobject arg0);
		QAndroidJniObject ceilingKey(jobject arg0);
		QAndroidJniObject higherKey(jobject arg0);
		QAndroidJniObject pollFirstEntry();
		QAndroidJniObject pollLastEntry();
		QAndroidJniObject lastKey();
		QAndroidJniObject subMap(jobject arg0, jboolean arg1, jobject arg2, jboolean arg3);
		QAndroidJniObject subMap(jobject arg0, jobject arg1);
		QAndroidJniObject headMap(jobject arg0, jboolean arg1);
		QAndroidJniObject headMap(jobject arg0);
		QAndroidJniObject tailMap(jobject arg0);
		QAndroidJniObject tailMap(jobject arg0, jboolean arg1);
		QAndroidJniObject descendingMap();
		QAndroidJniObject lowerEntry(jobject arg0);
		QAndroidJniObject floorEntry(jobject arg0);
		QAndroidJniObject ceilingEntry(jobject arg0);
		QAndroidJniObject higherEntry(jobject arg0);
		QAndroidJniObject firstEntry();
		QAndroidJniObject lastEntry();
	};
} // namespace __jni_impl::java::util

#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"

namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void TreeMap::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.TreeMap",
			"(Ljava/util/SortedMap;)V",
			arg0.__jniObject().object());
	}
	void TreeMap::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.TreeMap",
			"()V");
	}
	
	// Methods
	QAndroidJniObject TreeMap::remove(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0);
	}
	QAndroidJniObject TreeMap::get(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0);
	}
	QAndroidJniObject TreeMap::put(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1);
	}
	QAndroidJniObject TreeMap::values()
	{
		return __thiz.callObjectMethod(
			"values",
			"()Ljava/util/Collection;");
	}
	QAndroidJniObject TreeMap::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;");
	}
	void TreeMap::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V");
	}
	QAndroidJniObject TreeMap::replace(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"replace",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1);
	}
	jboolean TreeMap::replace(jobject arg0, jobject arg1, jobject arg2)
	{
		return __thiz.callMethod<jboolean>(
			"replace",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1,
			arg2);
	}
	void TreeMap::replaceAll(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"replaceAll",
			"(Ljava/util/function/BiFunction;)V",
			arg0.__jniObject().object());
	}
	jint TreeMap::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I");
	}
	QAndroidJniObject TreeMap::entrySet()
	{
		return __thiz.callObjectMethod(
			"entrySet",
			"()Ljava/util/Set;");
	}
	void TreeMap::putAll(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"putAll",
			"(Ljava/util/Map;)V",
			arg0.__jniObject().object());
	}
	void TreeMap::forEach(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Ljava/util/function/BiConsumer;)V",
			arg0.__jniObject().object());
	}
	jboolean TreeMap::containsKey(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject TreeMap::keySet()
	{
		return __thiz.callObjectMethod(
			"keySet",
			"()Ljava/util/Set;");
	}
	jboolean TreeMap::containsValue(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsValue",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject TreeMap::comparator()
	{
		return __thiz.callObjectMethod(
			"comparator",
			"()Ljava/util/Comparator;");
	}
	QAndroidJniObject TreeMap::firstKey()
	{
		return __thiz.callObjectMethod(
			"firstKey",
			"()Ljava/lang/Object;");
	}
	QAndroidJniObject TreeMap::navigableKeySet()
	{
		return __thiz.callObjectMethod(
			"navigableKeySet",
			"()Ljava/util/NavigableSet;");
	}
	QAndroidJniObject TreeMap::descendingKeySet()
	{
		return __thiz.callObjectMethod(
			"descendingKeySet",
			"()Ljava/util/NavigableSet;");
	}
	QAndroidJniObject TreeMap::lowerKey(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"lowerKey",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0);
	}
	QAndroidJniObject TreeMap::floorKey(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"floorKey",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0);
	}
	QAndroidJniObject TreeMap::ceilingKey(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"ceilingKey",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0);
	}
	QAndroidJniObject TreeMap::higherKey(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"higherKey",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0);
	}
	QAndroidJniObject TreeMap::pollFirstEntry()
	{
		return __thiz.callObjectMethod(
			"pollFirstEntry",
			"()Ljava/util/Map$Entry;");
	}
	QAndroidJniObject TreeMap::pollLastEntry()
	{
		return __thiz.callObjectMethod(
			"pollLastEntry",
			"()Ljava/util/Map$Entry;");
	}
	QAndroidJniObject TreeMap::lastKey()
	{
		return __thiz.callObjectMethod(
			"lastKey",
			"()Ljava/lang/Object;");
	}
	QAndroidJniObject TreeMap::subMap(jobject arg0, jboolean arg1, jobject arg2, jboolean arg3)
	{
		return __thiz.callObjectMethod(
			"subMap",
			"(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableMap;",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	QAndroidJniObject TreeMap::subMap(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"subMap",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedMap;",
			arg0,
			arg1);
	}
	QAndroidJniObject TreeMap::headMap(jobject arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"headMap",
			"(Ljava/lang/Object;Z)Ljava/util/NavigableMap;",
			arg0,
			arg1);
	}
	QAndroidJniObject TreeMap::headMap(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"headMap",
			"(Ljava/lang/Object;)Ljava/util/SortedMap;",
			arg0);
	}
	QAndroidJniObject TreeMap::tailMap(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"tailMap",
			"(Ljava/lang/Object;)Ljava/util/SortedMap;",
			arg0);
	}
	QAndroidJniObject TreeMap::tailMap(jobject arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"tailMap",
			"(Ljava/lang/Object;Z)Ljava/util/NavigableMap;",
			arg0,
			arg1);
	}
	QAndroidJniObject TreeMap::descendingMap()
	{
		return __thiz.callObjectMethod(
			"descendingMap",
			"()Ljava/util/NavigableMap;");
	}
	QAndroidJniObject TreeMap::lowerEntry(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"lowerEntry",
			"(Ljava/lang/Object;)Ljava/util/Map$Entry;",
			arg0);
	}
	QAndroidJniObject TreeMap::floorEntry(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"floorEntry",
			"(Ljava/lang/Object;)Ljava/util/Map$Entry;",
			arg0);
	}
	QAndroidJniObject TreeMap::ceilingEntry(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"ceilingEntry",
			"(Ljava/lang/Object;)Ljava/util/Map$Entry;",
			arg0);
	}
	QAndroidJniObject TreeMap::higherEntry(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"higherEntry",
			"(Ljava/lang/Object;)Ljava/util/Map$Entry;",
			arg0);
	}
	QAndroidJniObject TreeMap::firstEntry()
	{
		return __thiz.callObjectMethod(
			"firstEntry",
			"()Ljava/util/Map$Entry;");
	}
	QAndroidJniObject TreeMap::lastEntry()
	{
		return __thiz.callObjectMethod(
			"lastEntry",
			"()Ljava/util/Map$Entry;");
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class TreeMap : public __jni_impl::java::util::TreeMap
	{
	public:
		TreeMap(QAndroidJniObject obj) { __thiz = obj; }
		TreeMap(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
		TreeMap()
		{
			__constructor();
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_TREEMAP

