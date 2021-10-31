#include "./ArrayList.hpp"
#include "./Random.hpp"
#include "./Collections.hpp"

namespace java::util
{
	// Fields
	__JniBaseClass Collections::EMPTY_LIST()
	{
		return getStaticObjectField(
			"java.util.Collections",
			"EMPTY_LIST",
			"Ljava/util/List;"
		);
	}
	__JniBaseClass Collections::EMPTY_MAP()
	{
		return getStaticObjectField(
			"java.util.Collections",
			"EMPTY_MAP",
			"Ljava/util/Map;"
		);
	}
	__JniBaseClass Collections::EMPTY_SET()
	{
		return getStaticObjectField(
			"java.util.Collections",
			"EMPTY_SET",
			"Ljava/util/Set;"
		);
	}
	
	// QJniObject forward
	Collections::Collections(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean Collections::addAll(__JniBaseClass arg0, jobjectArray arg1)
	{
		return callStaticMethod<jboolean>(
			"java.util.Collections",
			"addAll",
			"(Ljava/util/Collection;[Ljava/lang/Object;)Z",
			arg0.object(),
			arg1
		);
	}
	__JniBaseClass Collections::asLifoQueue(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"asLifoQueue",
			"(Ljava/util/Deque;)Ljava/util/Queue;",
			arg0.object()
		);
	}
	jint Collections::binarySearch(__JniBaseClass arg0, jobject arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Collections",
			"binarySearch",
			"(Ljava/util/List;Ljava/lang/Object;)I",
			arg0.object(),
			arg1
		);
	}
	jint Collections::binarySearch(__JniBaseClass arg0, jobject arg1, __JniBaseClass arg2)
	{
		return callStaticMethod<jint>(
			"java.util.Collections",
			"binarySearch",
			"(Ljava/util/List;Ljava/lang/Object;Ljava/util/Comparator;)I",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	__JniBaseClass Collections::checkedCollection(__JniBaseClass arg0, jclass arg1)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"checkedCollection",
			"(Ljava/util/Collection;Ljava/lang/Class;)Ljava/util/Collection;",
			arg0.object(),
			arg1
		);
	}
	__JniBaseClass Collections::checkedList(__JniBaseClass arg0, jclass arg1)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"checkedList",
			"(Ljava/util/List;Ljava/lang/Class;)Ljava/util/List;",
			arg0.object(),
			arg1
		);
	}
	__JniBaseClass Collections::checkedMap(__JniBaseClass arg0, jclass arg1, jclass arg2)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"checkedMap",
			"(Ljava/util/Map;Ljava/lang/Class;Ljava/lang/Class;)Ljava/util/Map;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	__JniBaseClass Collections::checkedNavigableMap(__JniBaseClass arg0, jclass arg1, jclass arg2)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"checkedNavigableMap",
			"(Ljava/util/NavigableMap;Ljava/lang/Class;Ljava/lang/Class;)Ljava/util/NavigableMap;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	__JniBaseClass Collections::checkedNavigableSet(__JniBaseClass arg0, jclass arg1)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"checkedNavigableSet",
			"(Ljava/util/NavigableSet;Ljava/lang/Class;)Ljava/util/NavigableSet;",
			arg0.object(),
			arg1
		);
	}
	__JniBaseClass Collections::checkedQueue(__JniBaseClass arg0, jclass arg1)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"checkedQueue",
			"(Ljava/util/Queue;Ljava/lang/Class;)Ljava/util/Queue;",
			arg0.object(),
			arg1
		);
	}
	__JniBaseClass Collections::checkedSet(__JniBaseClass arg0, jclass arg1)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"checkedSet",
			"(Ljava/util/Set;Ljava/lang/Class;)Ljava/util/Set;",
			arg0.object(),
			arg1
		);
	}
	__JniBaseClass Collections::checkedSortedMap(__JniBaseClass arg0, jclass arg1, jclass arg2)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"checkedSortedMap",
			"(Ljava/util/SortedMap;Ljava/lang/Class;Ljava/lang/Class;)Ljava/util/SortedMap;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	__JniBaseClass Collections::checkedSortedSet(__JniBaseClass arg0, jclass arg1)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"checkedSortedSet",
			"(Ljava/util/SortedSet;Ljava/lang/Class;)Ljava/util/SortedSet;",
			arg0.object(),
			arg1
		);
	}
	void Collections::copy(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		callStaticMethod<void>(
			"java.util.Collections",
			"copy",
			"(Ljava/util/List;Ljava/util/List;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean Collections::disjoint(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callStaticMethod<jboolean>(
			"java.util.Collections",
			"disjoint",
			"(Ljava/util/Collection;Ljava/util/Collection;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	__JniBaseClass Collections::emptyEnumeration()
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"emptyEnumeration",
			"()Ljava/util/Enumeration;"
		);
	}
	__JniBaseClass Collections::emptyIterator()
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"emptyIterator",
			"()Ljava/util/Iterator;"
		);
	}
	__JniBaseClass Collections::emptyList()
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"emptyList",
			"()Ljava/util/List;"
		);
	}
	__JniBaseClass Collections::emptyListIterator()
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"emptyListIterator",
			"()Ljava/util/ListIterator;"
		);
	}
	__JniBaseClass Collections::emptyMap()
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"emptyMap",
			"()Ljava/util/Map;"
		);
	}
	__JniBaseClass Collections::emptyNavigableMap()
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"emptyNavigableMap",
			"()Ljava/util/NavigableMap;"
		);
	}
	__JniBaseClass Collections::emptyNavigableSet()
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"emptyNavigableSet",
			"()Ljava/util/NavigableSet;"
		);
	}
	__JniBaseClass Collections::emptySet()
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"emptySet",
			"()Ljava/util/Set;"
		);
	}
	__JniBaseClass Collections::emptySortedMap()
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"emptySortedMap",
			"()Ljava/util/SortedMap;"
		);
	}
	__JniBaseClass Collections::emptySortedSet()
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"emptySortedSet",
			"()Ljava/util/SortedSet;"
		);
	}
	__JniBaseClass Collections::enumeration(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"enumeration",
			"(Ljava/util/Collection;)Ljava/util/Enumeration;",
			arg0.object()
		);
	}
	void Collections::fill(__JniBaseClass arg0, jobject arg1)
	{
		callStaticMethod<void>(
			"java.util.Collections",
			"fill",
			"(Ljava/util/List;Ljava/lang/Object;)V",
			arg0.object(),
			arg1
		);
	}
	jint Collections::frequency(__JniBaseClass arg0, jobject arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Collections",
			"frequency",
			"(Ljava/util/Collection;Ljava/lang/Object;)I",
			arg0.object(),
			arg1
		);
	}
	jint Collections::indexOfSubList(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Collections",
			"indexOfSubList",
			"(Ljava/util/List;Ljava/util/List;)I",
			arg0.object(),
			arg1.object()
		);
	}
	jint Collections::lastIndexOfSubList(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Collections",
			"lastIndexOfSubList",
			"(Ljava/util/List;Ljava/util/List;)I",
			arg0.object(),
			arg1.object()
		);
	}
	java::util::ArrayList Collections::list(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"list",
			"(Ljava/util/Enumeration;)Ljava/util/ArrayList;",
			arg0.object()
		);
	}
	jobject Collections::max(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"max",
			"(Ljava/util/Collection;)Ljava/lang/Object;",
			arg0.object()
		).object<jobject>();
	}
	jobject Collections::max(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"max",
			"(Ljava/util/Collection;Ljava/util/Comparator;)Ljava/lang/Object;",
			arg0.object(),
			arg1.object()
		).object<jobject>();
	}
	jobject Collections::min(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"min",
			"(Ljava/util/Collection;)Ljava/lang/Object;",
			arg0.object()
		).object<jobject>();
	}
	jobject Collections::min(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"min",
			"(Ljava/util/Collection;Ljava/util/Comparator;)Ljava/lang/Object;",
			arg0.object(),
			arg1.object()
		).object<jobject>();
	}
	__JniBaseClass Collections::nCopies(jint arg0, jobject arg1)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"nCopies",
			"(ILjava/lang/Object;)Ljava/util/List;",
			arg0,
			arg1
		);
	}
	__JniBaseClass Collections::newSetFromMap(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"newSetFromMap",
			"(Ljava/util/Map;)Ljava/util/Set;",
			arg0.object()
		);
	}
	jboolean Collections::replaceAll(__JniBaseClass arg0, jobject arg1, jobject arg2)
	{
		return callStaticMethod<jboolean>(
			"java.util.Collections",
			"replaceAll",
			"(Ljava/util/List;Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void Collections::reverse(__JniBaseClass arg0)
	{
		callStaticMethod<void>(
			"java.util.Collections",
			"reverse",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	__JniBaseClass Collections::reverseOrder()
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"reverseOrder",
			"()Ljava/util/Comparator;"
		);
	}
	__JniBaseClass Collections::reverseOrder(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"reverseOrder",
			"(Ljava/util/Comparator;)Ljava/util/Comparator;",
			arg0.object()
		);
	}
	void Collections::rotate(__JniBaseClass arg0, jint arg1)
	{
		callStaticMethod<void>(
			"java.util.Collections",
			"rotate",
			"(Ljava/util/List;I)V",
			arg0.object(),
			arg1
		);
	}
	void Collections::shuffle(__JniBaseClass arg0)
	{
		callStaticMethod<void>(
			"java.util.Collections",
			"shuffle",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void Collections::shuffle(__JniBaseClass arg0, java::util::Random arg1)
	{
		callStaticMethod<void>(
			"java.util.Collections",
			"shuffle",
			"(Ljava/util/List;Ljava/util/Random;)V",
			arg0.object(),
			arg1.object()
		);
	}
	__JniBaseClass Collections::singleton(jobject arg0)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"singleton",
			"(Ljava/lang/Object;)Ljava/util/Set;",
			arg0
		);
	}
	__JniBaseClass Collections::singletonList(jobject arg0)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"singletonList",
			"(Ljava/lang/Object;)Ljava/util/List;",
			arg0
		);
	}
	__JniBaseClass Collections::singletonMap(jobject arg0, jobject arg1)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"singletonMap",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;",
			arg0,
			arg1
		);
	}
	void Collections::sort(__JniBaseClass arg0)
	{
		callStaticMethod<void>(
			"java.util.Collections",
			"sort",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void Collections::sort(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		callStaticMethod<void>(
			"java.util.Collections",
			"sort",
			"(Ljava/util/List;Ljava/util/Comparator;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Collections::swap(__JniBaseClass arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"java.util.Collections",
			"swap",
			"(Ljava/util/List;II)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	__JniBaseClass Collections::synchronizedCollection(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"synchronizedCollection",
			"(Ljava/util/Collection;)Ljava/util/Collection;",
			arg0.object()
		);
	}
	__JniBaseClass Collections::synchronizedList(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"synchronizedList",
			"(Ljava/util/List;)Ljava/util/List;",
			arg0.object()
		);
	}
	__JniBaseClass Collections::synchronizedMap(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"synchronizedMap",
			"(Ljava/util/Map;)Ljava/util/Map;",
			arg0.object()
		);
	}
	__JniBaseClass Collections::synchronizedNavigableMap(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"synchronizedNavigableMap",
			"(Ljava/util/NavigableMap;)Ljava/util/NavigableMap;",
			arg0.object()
		);
	}
	__JniBaseClass Collections::synchronizedNavigableSet(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"synchronizedNavigableSet",
			"(Ljava/util/NavigableSet;)Ljava/util/NavigableSet;",
			arg0.object()
		);
	}
	__JniBaseClass Collections::synchronizedSet(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"synchronizedSet",
			"(Ljava/util/Set;)Ljava/util/Set;",
			arg0.object()
		);
	}
	__JniBaseClass Collections::synchronizedSortedMap(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"synchronizedSortedMap",
			"(Ljava/util/SortedMap;)Ljava/util/SortedMap;",
			arg0.object()
		);
	}
	__JniBaseClass Collections::synchronizedSortedSet(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"synchronizedSortedSet",
			"(Ljava/util/SortedSet;)Ljava/util/SortedSet;",
			arg0.object()
		);
	}
	__JniBaseClass Collections::unmodifiableCollection(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"unmodifiableCollection",
			"(Ljava/util/Collection;)Ljava/util/Collection;",
			arg0.object()
		);
	}
	__JniBaseClass Collections::unmodifiableList(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"unmodifiableList",
			"(Ljava/util/List;)Ljava/util/List;",
			arg0.object()
		);
	}
	__JniBaseClass Collections::unmodifiableMap(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"unmodifiableMap",
			"(Ljava/util/Map;)Ljava/util/Map;",
			arg0.object()
		);
	}
	__JniBaseClass Collections::unmodifiableNavigableMap(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"unmodifiableNavigableMap",
			"(Ljava/util/NavigableMap;)Ljava/util/NavigableMap;",
			arg0.object()
		);
	}
	__JniBaseClass Collections::unmodifiableNavigableSet(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"unmodifiableNavigableSet",
			"(Ljava/util/NavigableSet;)Ljava/util/NavigableSet;",
			arg0.object()
		);
	}
	__JniBaseClass Collections::unmodifiableSet(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"unmodifiableSet",
			"(Ljava/util/Set;)Ljava/util/Set;",
			arg0.object()
		);
	}
	__JniBaseClass Collections::unmodifiableSortedMap(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"unmodifiableSortedMap",
			"(Ljava/util/SortedMap;)Ljava/util/SortedMap;",
			arg0.object()
		);
	}
	__JniBaseClass Collections::unmodifiableSortedSet(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"unmodifiableSortedSet",
			"(Ljava/util/SortedSet;)Ljava/util/SortedSet;",
			arg0.object()
		);
	}
} // namespace java::util

