#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::util
{
	class ArrayList;
}
namespace __jni_impl::java::util
{
	class Random;
}

namespace __jni_impl::java::util
{
	class Collections : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject EMPTY_LIST();
		static QAndroidJniObject EMPTY_MAP();
		static QAndroidJniObject EMPTY_SET();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jboolean addAll(__jni_impl::__JniBaseClass arg0, jobjectArray arg1);
		static QAndroidJniObject asLifoQueue(__jni_impl::__JniBaseClass arg0);
		static jint binarySearch(__jni_impl::__JniBaseClass arg0, jobject arg1);
		static jint binarySearch(__jni_impl::__JniBaseClass arg0, jobject arg1, __jni_impl::__JniBaseClass arg2);
		static QAndroidJniObject checkedCollection(__jni_impl::__JniBaseClass arg0, jclass arg1);
		static QAndroidJniObject checkedList(__jni_impl::__JniBaseClass arg0, jclass arg1);
		static QAndroidJniObject checkedMap(__jni_impl::__JniBaseClass arg0, jclass arg1, jclass arg2);
		static QAndroidJniObject checkedNavigableMap(__jni_impl::__JniBaseClass arg0, jclass arg1, jclass arg2);
		static QAndroidJniObject checkedNavigableSet(__jni_impl::__JniBaseClass arg0, jclass arg1);
		static QAndroidJniObject checkedQueue(__jni_impl::__JniBaseClass arg0, jclass arg1);
		static QAndroidJniObject checkedSet(__jni_impl::__JniBaseClass arg0, jclass arg1);
		static QAndroidJniObject checkedSortedMap(__jni_impl::__JniBaseClass arg0, jclass arg1, jclass arg2);
		static QAndroidJniObject checkedSortedSet(__jni_impl::__JniBaseClass arg0, jclass arg1);
		static void copy(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		static jboolean disjoint(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject emptyEnumeration();
		static QAndroidJniObject emptyIterator();
		static QAndroidJniObject emptyList();
		static QAndroidJniObject emptyListIterator();
		static QAndroidJniObject emptyMap();
		static QAndroidJniObject emptyNavigableMap();
		static QAndroidJniObject emptyNavigableSet();
		static QAndroidJniObject emptySet();
		static QAndroidJniObject emptySortedMap();
		static QAndroidJniObject emptySortedSet();
		static QAndroidJniObject enumeration(__jni_impl::__JniBaseClass arg0);
		static void fill(__jni_impl::__JniBaseClass arg0, jobject arg1);
		static jint frequency(__jni_impl::__JniBaseClass arg0, jobject arg1);
		static jint indexOfSubList(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		static jint lastIndexOfSubList(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject list(__jni_impl::__JniBaseClass arg0);
		static jobject max(__jni_impl::__JniBaseClass arg0);
		static jobject max(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		static jobject min(__jni_impl::__JniBaseClass arg0);
		static jobject min(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject nCopies(jint arg0, jobject arg1);
		static QAndroidJniObject newSetFromMap(__jni_impl::__JniBaseClass arg0);
		static jboolean replaceAll(__jni_impl::__JniBaseClass arg0, jobject arg1, jobject arg2);
		static void reverse(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject reverseOrder();
		static QAndroidJniObject reverseOrder(__jni_impl::__JniBaseClass arg0);
		static void rotate(__jni_impl::__JniBaseClass arg0, jint arg1);
		static void shuffle(__jni_impl::__JniBaseClass arg0);
		static void shuffle(__jni_impl::__JniBaseClass arg0, __jni_impl::java::util::Random arg1);
		static QAndroidJniObject singleton(jobject arg0);
		static QAndroidJniObject singletonList(jobject arg0);
		static QAndroidJniObject singletonMap(jobject arg0, jobject arg1);
		static void sort(__jni_impl::__JniBaseClass arg0);
		static void sort(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		static void swap(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2);
		static QAndroidJniObject synchronizedCollection(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject synchronizedList(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject synchronizedMap(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject synchronizedNavigableMap(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject synchronizedNavigableSet(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject synchronizedSet(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject synchronizedSortedMap(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject synchronizedSortedSet(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject unmodifiableCollection(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject unmodifiableList(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject unmodifiableMap(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject unmodifiableNavigableMap(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject unmodifiableNavigableSet(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject unmodifiableSet(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject unmodifiableSortedMap(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject unmodifiableSortedSet(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::java::util

#include "ArrayList.hpp"
#include "Random.hpp"

namespace __jni_impl::java::util
{
	// Fields
	QAndroidJniObject Collections::EMPTY_LIST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.Collections",
			"EMPTY_LIST",
			"Ljava/util/List;"
		);
	}
	QAndroidJniObject Collections::EMPTY_MAP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.Collections",
			"EMPTY_MAP",
			"Ljava/util/Map;"
		);
	}
	QAndroidJniObject Collections::EMPTY_SET()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.Collections",
			"EMPTY_SET",
			"Ljava/util/Set;"
		);
	}
	
	// Constructors
	void Collections::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.Collections",
			"(V)V");
	}
	
	// Methods
	jboolean Collections::addAll(__jni_impl::__JniBaseClass arg0, jobjectArray arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.util.Collections",
			"addAll",
			"(Ljava/util/Collection;[Ljava/lang/Object;)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Collections::asLifoQueue(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"asLifoQueue",
			"(Ljava/util/Deque;)Ljava/util/Queue;",
			arg0.__jniObject().object()
		);
	}
	jint Collections::binarySearch(__jni_impl::__JniBaseClass arg0, jobject arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.util.Collections",
			"binarySearch",
			"(Ljava/util/List;Ljava/lang/Object;)I",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint Collections::binarySearch(__jni_impl::__JniBaseClass arg0, jobject arg1, __jni_impl::__JniBaseClass arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.util.Collections",
			"binarySearch",
			"(Ljava/util/List;Ljava/lang/Object;Ljava/util/Comparator;)I",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Collections::checkedCollection(__jni_impl::__JniBaseClass arg0, jclass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"checkedCollection",
			"(Ljava/util/Collection;Ljava/lang/Class;)Ljava/util/Collection;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Collections::checkedList(__jni_impl::__JniBaseClass arg0, jclass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"checkedList",
			"(Ljava/util/List;Ljava/lang/Class;)Ljava/util/List;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Collections::checkedMap(__jni_impl::__JniBaseClass arg0, jclass arg1, jclass arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"checkedMap",
			"(Ljava/util/Map;Ljava/lang/Class;Ljava/lang/Class;)Ljava/util/Map;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject Collections::checkedNavigableMap(__jni_impl::__JniBaseClass arg0, jclass arg1, jclass arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"checkedNavigableMap",
			"(Ljava/util/NavigableMap;Ljava/lang/Class;Ljava/lang/Class;)Ljava/util/NavigableMap;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject Collections::checkedNavigableSet(__jni_impl::__JniBaseClass arg0, jclass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"checkedNavigableSet",
			"(Ljava/util/NavigableSet;Ljava/lang/Class;)Ljava/util/NavigableSet;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Collections::checkedQueue(__jni_impl::__JniBaseClass arg0, jclass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"checkedQueue",
			"(Ljava/util/Queue;Ljava/lang/Class;)Ljava/util/Queue;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Collections::checkedSet(__jni_impl::__JniBaseClass arg0, jclass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"checkedSet",
			"(Ljava/util/Set;Ljava/lang/Class;)Ljava/util/Set;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Collections::checkedSortedMap(__jni_impl::__JniBaseClass arg0, jclass arg1, jclass arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"checkedSortedMap",
			"(Ljava/util/SortedMap;Ljava/lang/Class;Ljava/lang/Class;)Ljava/util/SortedMap;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject Collections::checkedSortedSet(__jni_impl::__JniBaseClass arg0, jclass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"checkedSortedSet",
			"(Ljava/util/SortedSet;Ljava/lang/Class;)Ljava/util/SortedSet;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Collections::copy(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.util.Collections",
			"copy",
			"(Ljava/util/List;Ljava/util/List;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean Collections::disjoint(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.util.Collections",
			"disjoint",
			"(Ljava/util/Collection;Ljava/util/Collection;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Collections::emptyEnumeration()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"emptyEnumeration",
			"()Ljava/util/Enumeration;"
		);
	}
	QAndroidJniObject Collections::emptyIterator()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"emptyIterator",
			"()Ljava/util/Iterator;"
		);
	}
	QAndroidJniObject Collections::emptyList()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"emptyList",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject Collections::emptyListIterator()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"emptyListIterator",
			"()Ljava/util/ListIterator;"
		);
	}
	QAndroidJniObject Collections::emptyMap()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"emptyMap",
			"()Ljava/util/Map;"
		);
	}
	QAndroidJniObject Collections::emptyNavigableMap()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"emptyNavigableMap",
			"()Ljava/util/NavigableMap;"
		);
	}
	QAndroidJniObject Collections::emptyNavigableSet()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"emptyNavigableSet",
			"()Ljava/util/NavigableSet;"
		);
	}
	QAndroidJniObject Collections::emptySet()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"emptySet",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject Collections::emptySortedMap()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"emptySortedMap",
			"()Ljava/util/SortedMap;"
		);
	}
	QAndroidJniObject Collections::emptySortedSet()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"emptySortedSet",
			"()Ljava/util/SortedSet;"
		);
	}
	QAndroidJniObject Collections::enumeration(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"enumeration",
			"(Ljava/util/Collection;)Ljava/util/Enumeration;",
			arg0.__jniObject().object()
		);
	}
	void Collections::fill(__jni_impl::__JniBaseClass arg0, jobject arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.util.Collections",
			"fill",
			"(Ljava/util/List;Ljava/lang/Object;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint Collections::frequency(__jni_impl::__JniBaseClass arg0, jobject arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.util.Collections",
			"frequency",
			"(Ljava/util/Collection;Ljava/lang/Object;)I",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint Collections::indexOfSubList(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.util.Collections",
			"indexOfSubList",
			"(Ljava/util/List;Ljava/util/List;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jint Collections::lastIndexOfSubList(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.util.Collections",
			"lastIndexOfSubList",
			"(Ljava/util/List;Ljava/util/List;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Collections::list(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"list",
			"(Ljava/util/Enumeration;)Ljava/util/ArrayList;",
			arg0.__jniObject().object()
		);
	}
	jobject Collections::max(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"max",
			"(Ljava/util/Collection;)Ljava/lang/Object;",
			arg0.__jniObject().object()
		).object<jobject>();
	}
	jobject Collections::max(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"max",
			"(Ljava/util/Collection;Ljava/util/Comparator;)Ljava/lang/Object;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		).object<jobject>();
	}
	jobject Collections::min(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"min",
			"(Ljava/util/Collection;)Ljava/lang/Object;",
			arg0.__jniObject().object()
		).object<jobject>();
	}
	jobject Collections::min(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"min",
			"(Ljava/util/Collection;Ljava/util/Comparator;)Ljava/lang/Object;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		).object<jobject>();
	}
	QAndroidJniObject Collections::nCopies(jint arg0, jobject arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"nCopies",
			"(ILjava/lang/Object;)Ljava/util/List;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Collections::newSetFromMap(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"newSetFromMap",
			"(Ljava/util/Map;)Ljava/util/Set;",
			arg0.__jniObject().object()
		);
	}
	jboolean Collections::replaceAll(__jni_impl::__JniBaseClass arg0, jobject arg1, jobject arg2)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.util.Collections",
			"replaceAll",
			"(Ljava/util/List;Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void Collections::reverse(__jni_impl::__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.util.Collections",
			"reverse",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Collections::reverseOrder()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"reverseOrder",
			"()Ljava/util/Comparator;"
		);
	}
	QAndroidJniObject Collections::reverseOrder(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"reverseOrder",
			"(Ljava/util/Comparator;)Ljava/util/Comparator;",
			arg0.__jniObject().object()
		);
	}
	void Collections::rotate(__jni_impl::__JniBaseClass arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.util.Collections",
			"rotate",
			"(Ljava/util/List;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Collections::shuffle(__jni_impl::__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.util.Collections",
			"shuffle",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	void Collections::shuffle(__jni_impl::__JniBaseClass arg0, __jni_impl::java::util::Random arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.util.Collections",
			"shuffle",
			"(Ljava/util/List;Ljava/util/Random;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Collections::singleton(jobject arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"singleton",
			"(Ljava/lang/Object;)Ljava/util/Set;",
			arg0
		);
	}
	QAndroidJniObject Collections::singletonList(jobject arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"singletonList",
			"(Ljava/lang/Object;)Ljava/util/List;",
			arg0
		);
	}
	QAndroidJniObject Collections::singletonMap(jobject arg0, jobject arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"singletonMap",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;",
			arg0,
			arg1
		);
	}
	void Collections::sort(__jni_impl::__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.util.Collections",
			"sort",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	void Collections::sort(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.util.Collections",
			"sort",
			"(Ljava/util/List;Ljava/util/Comparator;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Collections::swap(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.util.Collections",
			"swap",
			"(Ljava/util/List;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject Collections::synchronizedCollection(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"synchronizedCollection",
			"(Ljava/util/Collection;)Ljava/util/Collection;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Collections::synchronizedList(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"synchronizedList",
			"(Ljava/util/List;)Ljava/util/List;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Collections::synchronizedMap(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"synchronizedMap",
			"(Ljava/util/Map;)Ljava/util/Map;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Collections::synchronizedNavigableMap(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"synchronizedNavigableMap",
			"(Ljava/util/NavigableMap;)Ljava/util/NavigableMap;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Collections::synchronizedNavigableSet(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"synchronizedNavigableSet",
			"(Ljava/util/NavigableSet;)Ljava/util/NavigableSet;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Collections::synchronizedSet(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"synchronizedSet",
			"(Ljava/util/Set;)Ljava/util/Set;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Collections::synchronizedSortedMap(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"synchronizedSortedMap",
			"(Ljava/util/SortedMap;)Ljava/util/SortedMap;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Collections::synchronizedSortedSet(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"synchronizedSortedSet",
			"(Ljava/util/SortedSet;)Ljava/util/SortedSet;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Collections::unmodifiableCollection(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"unmodifiableCollection",
			"(Ljava/util/Collection;)Ljava/util/Collection;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Collections::unmodifiableList(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"unmodifiableList",
			"(Ljava/util/List;)Ljava/util/List;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Collections::unmodifiableMap(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"unmodifiableMap",
			"(Ljava/util/Map;)Ljava/util/Map;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Collections::unmodifiableNavigableMap(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"unmodifiableNavigableMap",
			"(Ljava/util/NavigableMap;)Ljava/util/NavigableMap;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Collections::unmodifiableNavigableSet(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"unmodifiableNavigableSet",
			"(Ljava/util/NavigableSet;)Ljava/util/NavigableSet;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Collections::unmodifiableSet(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"unmodifiableSet",
			"(Ljava/util/Set;)Ljava/util/Set;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Collections::unmodifiableSortedMap(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"unmodifiableSortedMap",
			"(Ljava/util/SortedMap;)Ljava/util/SortedMap;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Collections::unmodifiableSortedSet(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"unmodifiableSortedSet",
			"(Ljava/util/SortedSet;)Ljava/util/SortedSet;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class Collections : public __jni_impl::java::util::Collections
	{
	public:
		Collections(QAndroidJniObject obj) { __thiz = obj; }
		Collections()
		{
			__constructor();
		}
	};
} // namespace java::util

