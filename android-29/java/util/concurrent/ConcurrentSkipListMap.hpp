#pragma once

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
namespace __jni_impl::java::util
{
	class AbstractMap_SimpleImmutableEntry;
}
namespace __jni_impl::java::util::concurrent::atomic
{
	class LongAdder;
}

namespace __jni_impl::java::util::concurrent
{
	class ConcurrentSkipListMap : public __jni_impl::java::util::AbstractMap
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
		QAndroidJniObject clone();
		QAndroidJniObject comparator();
		jobject compute(jobject arg0, __jni_impl::__JniBaseClass arg1);
		jobject computeIfAbsent(jobject arg0, __jni_impl::__JniBaseClass arg1);
		jobject computeIfPresent(jobject arg0, __jni_impl::__JniBaseClass arg1);
		jboolean containsKey(jobject arg0);
		jboolean containsValue(jobject arg0);
		QAndroidJniObject descendingKeySet();
		QAndroidJniObject descendingMap();
		QAndroidJniObject entrySet();
		jboolean equals(jobject arg0);
		QAndroidJniObject firstEntry();
		jobject firstKey();
		QAndroidJniObject floorEntry(jobject arg0);
		jobject floorKey(jobject arg0);
		void forEach(__jni_impl::__JniBaseClass arg0);
		jobject get(jobject arg0);
		jobject getOrDefault(jobject arg0, jobject arg1);
		QAndroidJniObject headMap(jobject arg0);
		QAndroidJniObject headMap(jobject arg0, jboolean arg1);
		QAndroidJniObject higherEntry(jobject arg0);
		jobject higherKey(jobject arg0);
		jboolean isEmpty();
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
		jobject putIfAbsent(jobject arg0, jobject arg1);
		jboolean remove(jobject arg0, jobject arg1);
		jobject remove(jobject arg0);
		jboolean replace(jobject arg0, jobject arg1, jobject arg2);
		jobject replace(jobject arg0, jobject arg1);
		void replaceAll(__jni_impl::__JniBaseClass arg0);
		jint size();
		QAndroidJniObject subMap(jobject arg0, jobject arg1);
		QAndroidJniObject subMap(jobject arg0, jboolean arg1, jobject arg2, jboolean arg3);
		QAndroidJniObject tailMap(jobject arg0);
		QAndroidJniObject tailMap(jobject arg0, jboolean arg1);
		QAndroidJniObject values();
	};
} // namespace __jni_impl::java::util::concurrent

#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"
#include "../AbstractMap_SimpleImmutableEntry.hpp"
#include "atomic/LongAdder.hpp"

namespace __jni_impl::java::util::concurrent
{
	// Fields
	
	// Constructors
	void ConcurrentSkipListMap::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ConcurrentSkipListMap",
			"()V"
		);
	}
	void ConcurrentSkipListMap::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ConcurrentSkipListMap",
			"(Ljava/util/Comparator;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject ConcurrentSkipListMap::ceilingEntry(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"ceilingEntry",
			"(Ljava/lang/Object;)Ljava/util/Map$Entry;",
			arg0
		);
	}
	jobject ConcurrentSkipListMap::ceilingKey(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"ceilingKey",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	void ConcurrentSkipListMap::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	QAndroidJniObject ConcurrentSkipListMap::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/util/concurrent/ConcurrentSkipListMap;"
		);
	}
	QAndroidJniObject ConcurrentSkipListMap::comparator()
	{
		return __thiz.callObjectMethod(
			"comparator",
			"()Ljava/util/Comparator;"
		);
	}
	jobject ConcurrentSkipListMap::compute(jobject arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"compute",
			"(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	jobject ConcurrentSkipListMap::computeIfAbsent(jobject arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"computeIfAbsent",
			"(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	jobject ConcurrentSkipListMap::computeIfPresent(jobject arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"computeIfPresent",
			"(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	jboolean ConcurrentSkipListMap::containsKey(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean ConcurrentSkipListMap::containsValue(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsValue",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject ConcurrentSkipListMap::descendingKeySet()
	{
		return __thiz.callObjectMethod(
			"descendingKeySet",
			"()Ljava/util/NavigableSet;"
		);
	}
	QAndroidJniObject ConcurrentSkipListMap::descendingMap()
	{
		return __thiz.callObjectMethod(
			"descendingMap",
			"()Ljava/util/concurrent/ConcurrentNavigableMap;"
		);
	}
	QAndroidJniObject ConcurrentSkipListMap::entrySet()
	{
		return __thiz.callObjectMethod(
			"entrySet",
			"()Ljava/util/Set;"
		);
	}
	jboolean ConcurrentSkipListMap::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject ConcurrentSkipListMap::firstEntry()
	{
		return __thiz.callObjectMethod(
			"firstEntry",
			"()Ljava/util/Map$Entry;"
		);
	}
	jobject ConcurrentSkipListMap::firstKey()
	{
		return __thiz.callObjectMethod(
			"firstKey",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject ConcurrentSkipListMap::floorEntry(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"floorEntry",
			"(Ljava/lang/Object;)Ljava/util/Map$Entry;",
			arg0
		);
	}
	jobject ConcurrentSkipListMap::floorKey(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"floorKey",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	void ConcurrentSkipListMap::forEach(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Ljava/util/function/BiConsumer;)V",
			arg0.__jniObject().object()
		);
	}
	jobject ConcurrentSkipListMap::get(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject ConcurrentSkipListMap::getOrDefault(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"getOrDefault",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	QAndroidJniObject ConcurrentSkipListMap::headMap(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"headMap",
			"(Ljava/lang/Object;)Ljava/util/concurrent/ConcurrentNavigableMap;",
			arg0
		);
	}
	QAndroidJniObject ConcurrentSkipListMap::headMap(jobject arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"headMap",
			"(Ljava/lang/Object;Z)Ljava/util/concurrent/ConcurrentNavigableMap;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ConcurrentSkipListMap::higherEntry(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"higherEntry",
			"(Ljava/lang/Object;)Ljava/util/Map$Entry;",
			arg0
		);
	}
	jobject ConcurrentSkipListMap::higherKey(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"higherKey",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jboolean ConcurrentSkipListMap::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	QAndroidJniObject ConcurrentSkipListMap::keySet()
	{
		return __thiz.callObjectMethod(
			"keySet",
			"()Ljava/util/NavigableSet;"
		);
	}
	QAndroidJniObject ConcurrentSkipListMap::lastEntry()
	{
		return __thiz.callObjectMethod(
			"lastEntry",
			"()Ljava/util/Map$Entry;"
		);
	}
	jobject ConcurrentSkipListMap::lastKey()
	{
		return __thiz.callObjectMethod(
			"lastKey",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject ConcurrentSkipListMap::lowerEntry(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"lowerEntry",
			"(Ljava/lang/Object;)Ljava/util/Map$Entry;",
			arg0
		);
	}
	jobject ConcurrentSkipListMap::lowerKey(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"lowerKey",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject ConcurrentSkipListMap::merge(jobject arg0, jobject arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"merge",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		).object<jobject>();
	}
	QAndroidJniObject ConcurrentSkipListMap::navigableKeySet()
	{
		return __thiz.callObjectMethod(
			"navigableKeySet",
			"()Ljava/util/NavigableSet;"
		);
	}
	QAndroidJniObject ConcurrentSkipListMap::pollFirstEntry()
	{
		return __thiz.callObjectMethod(
			"pollFirstEntry",
			"()Ljava/util/Map$Entry;"
		);
	}
	QAndroidJniObject ConcurrentSkipListMap::pollLastEntry()
	{
		return __thiz.callObjectMethod(
			"pollLastEntry",
			"()Ljava/util/Map$Entry;"
		);
	}
	jobject ConcurrentSkipListMap::put(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jobject ConcurrentSkipListMap::putIfAbsent(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"putIfAbsent",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jboolean ConcurrentSkipListMap::remove(jobject arg0, jobject arg1)
	{
		return __thiz.callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1
		);
	}
	jobject ConcurrentSkipListMap::remove(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jboolean ConcurrentSkipListMap::replace(jobject arg0, jobject arg1, jobject arg2)
	{
		return __thiz.callMethod<jboolean>(
			"replace",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jobject ConcurrentSkipListMap::replace(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"replace",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	void ConcurrentSkipListMap::replaceAll(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"replaceAll",
			"(Ljava/util/function/BiFunction;)V",
			arg0.__jniObject().object()
		);
	}
	jint ConcurrentSkipListMap::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	QAndroidJniObject ConcurrentSkipListMap::subMap(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"subMap",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/concurrent/ConcurrentNavigableMap;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ConcurrentSkipListMap::subMap(jobject arg0, jboolean arg1, jobject arg2, jboolean arg3)
	{
		return __thiz.callObjectMethod(
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
		return __thiz.callObjectMethod(
			"tailMap",
			"(Ljava/lang/Object;)Ljava/util/concurrent/ConcurrentNavigableMap;",
			arg0
		);
	}
	QAndroidJniObject ConcurrentSkipListMap::tailMap(jobject arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"tailMap",
			"(Ljava/lang/Object;Z)Ljava/util/concurrent/ConcurrentNavigableMap;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ConcurrentSkipListMap::values()
	{
		return __thiz.callObjectMethod(
			"values",
			"()Ljava/util/Collection;"
		);
	}
} // namespace __jni_impl::java::util::concurrent

namespace java::util::concurrent
{
	class ConcurrentSkipListMap : public __jni_impl::java::util::concurrent::ConcurrentSkipListMap
	{
	public:
		ConcurrentSkipListMap(QAndroidJniObject obj) { __thiz = obj; }
		ConcurrentSkipListMap()
		{
			__constructor();
		}
		ConcurrentSkipListMap(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util::concurrent

