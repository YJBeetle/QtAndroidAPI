#include "./ArrayList.hpp"
#include "./Random.hpp"
#include "./Collections.hpp"

namespace java::util
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
	
	Collections::Collections(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean Collections::addAll(__JniBaseClass arg0, jobjectArray arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.util.Collections",
			"addAll",
			"(Ljava/util/Collection;[Ljava/lang/Object;)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Collections::asLifoQueue(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"asLifoQueue",
			"(Ljava/util/Deque;)Ljava/util/Queue;",
			arg0.__jniObject().object()
		);
	}
	jint Collections::binarySearch(__JniBaseClass arg0, jobject arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.util.Collections",
			"binarySearch",
			"(Ljava/util/List;Ljava/lang/Object;)I",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint Collections::binarySearch(__JniBaseClass arg0, jobject arg1, __JniBaseClass arg2)
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
	QAndroidJniObject Collections::checkedCollection(__JniBaseClass arg0, jclass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"checkedCollection",
			"(Ljava/util/Collection;Ljava/lang/Class;)Ljava/util/Collection;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Collections::checkedList(__JniBaseClass arg0, jclass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"checkedList",
			"(Ljava/util/List;Ljava/lang/Class;)Ljava/util/List;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Collections::checkedMap(__JniBaseClass arg0, jclass arg1, jclass arg2)
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
	QAndroidJniObject Collections::checkedNavigableMap(__JniBaseClass arg0, jclass arg1, jclass arg2)
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
	QAndroidJniObject Collections::checkedNavigableSet(__JniBaseClass arg0, jclass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"checkedNavigableSet",
			"(Ljava/util/NavigableSet;Ljava/lang/Class;)Ljava/util/NavigableSet;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Collections::checkedQueue(__JniBaseClass arg0, jclass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"checkedQueue",
			"(Ljava/util/Queue;Ljava/lang/Class;)Ljava/util/Queue;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Collections::checkedSet(__JniBaseClass arg0, jclass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"checkedSet",
			"(Ljava/util/Set;Ljava/lang/Class;)Ljava/util/Set;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Collections::checkedSortedMap(__JniBaseClass arg0, jclass arg1, jclass arg2)
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
	QAndroidJniObject Collections::checkedSortedSet(__JniBaseClass arg0, jclass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"checkedSortedSet",
			"(Ljava/util/SortedSet;Ljava/lang/Class;)Ljava/util/SortedSet;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Collections::copy(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.util.Collections",
			"copy",
			"(Ljava/util/List;Ljava/util/List;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean Collections::disjoint(__JniBaseClass arg0, __JniBaseClass arg1)
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
	QAndroidJniObject Collections::enumeration(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"enumeration",
			"(Ljava/util/Collection;)Ljava/util/Enumeration;",
			arg0.__jniObject().object()
		);
	}
	void Collections::fill(__JniBaseClass arg0, jobject arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.util.Collections",
			"fill",
			"(Ljava/util/List;Ljava/lang/Object;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint Collections::frequency(__JniBaseClass arg0, jobject arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.util.Collections",
			"frequency",
			"(Ljava/util/Collection;Ljava/lang/Object;)I",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint Collections::indexOfSubList(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.util.Collections",
			"indexOfSubList",
			"(Ljava/util/List;Ljava/util/List;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jint Collections::lastIndexOfSubList(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.util.Collections",
			"lastIndexOfSubList",
			"(Ljava/util/List;Ljava/util/List;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Collections::list(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"list",
			"(Ljava/util/Enumeration;)Ljava/util/ArrayList;",
			arg0.__jniObject().object()
		);
	}
	jobject Collections::max(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"max",
			"(Ljava/util/Collection;)Ljava/lang/Object;",
			arg0.__jniObject().object()
		).object<jobject>();
	}
	jobject Collections::max(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"max",
			"(Ljava/util/Collection;Ljava/util/Comparator;)Ljava/lang/Object;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		).object<jobject>();
	}
	jobject Collections::min(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"min",
			"(Ljava/util/Collection;)Ljava/lang/Object;",
			arg0.__jniObject().object()
		).object<jobject>();
	}
	jobject Collections::min(__JniBaseClass arg0, __JniBaseClass arg1)
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
	QAndroidJniObject Collections::newSetFromMap(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"newSetFromMap",
			"(Ljava/util/Map;)Ljava/util/Set;",
			arg0.__jniObject().object()
		);
	}
	jboolean Collections::replaceAll(__JniBaseClass arg0, jobject arg1, jobject arg2)
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
	void Collections::reverse(__JniBaseClass arg0)
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
	QAndroidJniObject Collections::reverseOrder(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"reverseOrder",
			"(Ljava/util/Comparator;)Ljava/util/Comparator;",
			arg0.__jniObject().object()
		);
	}
	void Collections::rotate(__JniBaseClass arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.util.Collections",
			"rotate",
			"(Ljava/util/List;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Collections::shuffle(__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.util.Collections",
			"shuffle",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	void Collections::shuffle(__JniBaseClass arg0, java::util::Random arg1)
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
	void Collections::sort(__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.util.Collections",
			"sort",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	void Collections::sort(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.util.Collections",
			"sort",
			"(Ljava/util/List;Ljava/util/Comparator;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Collections::swap(__JniBaseClass arg0, jint arg1, jint arg2)
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
	QAndroidJniObject Collections::synchronizedCollection(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"synchronizedCollection",
			"(Ljava/util/Collection;)Ljava/util/Collection;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Collections::synchronizedList(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"synchronizedList",
			"(Ljava/util/List;)Ljava/util/List;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Collections::synchronizedMap(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"synchronizedMap",
			"(Ljava/util/Map;)Ljava/util/Map;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Collections::synchronizedNavigableMap(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"synchronizedNavigableMap",
			"(Ljava/util/NavigableMap;)Ljava/util/NavigableMap;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Collections::synchronizedNavigableSet(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"synchronizedNavigableSet",
			"(Ljava/util/NavigableSet;)Ljava/util/NavigableSet;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Collections::synchronizedSet(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"synchronizedSet",
			"(Ljava/util/Set;)Ljava/util/Set;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Collections::synchronizedSortedMap(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"synchronizedSortedMap",
			"(Ljava/util/SortedMap;)Ljava/util/SortedMap;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Collections::synchronizedSortedSet(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"synchronizedSortedSet",
			"(Ljava/util/SortedSet;)Ljava/util/SortedSet;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Collections::unmodifiableCollection(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"unmodifiableCollection",
			"(Ljava/util/Collection;)Ljava/util/Collection;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Collections::unmodifiableList(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"unmodifiableList",
			"(Ljava/util/List;)Ljava/util/List;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Collections::unmodifiableMap(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"unmodifiableMap",
			"(Ljava/util/Map;)Ljava/util/Map;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Collections::unmodifiableNavigableMap(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"unmodifiableNavigableMap",
			"(Ljava/util/NavigableMap;)Ljava/util/NavigableMap;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Collections::unmodifiableNavigableSet(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"unmodifiableNavigableSet",
			"(Ljava/util/NavigableSet;)Ljava/util/NavigableSet;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Collections::unmodifiableSet(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"unmodifiableSet",
			"(Ljava/util/Set;)Ljava/util/Set;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Collections::unmodifiableSortedMap(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"unmodifiableSortedMap",
			"(Ljava/util/SortedMap;)Ljava/util/SortedMap;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Collections::unmodifiableSortedSet(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Collections",
			"unmodifiableSortedSet",
			"(Ljava/util/SortedSet;)Ljava/util/SortedSet;",
			arg0.__jniObject().object()
		);
	}
} // namespace java::util

