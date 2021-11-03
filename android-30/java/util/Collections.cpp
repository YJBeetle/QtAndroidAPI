#include "./ArrayList.hpp"
#include "./Random.hpp"
#include "./Collections.hpp"

namespace java::util
{
	// Fields
	JObject Collections::EMPTY_LIST()
	{
		return getStaticObjectField(
			"java.util.Collections",
			"EMPTY_LIST",
			"Ljava/util/List;"
		);
	}
	JObject Collections::EMPTY_MAP()
	{
		return getStaticObjectField(
			"java.util.Collections",
			"EMPTY_MAP",
			"Ljava/util/Map;"
		);
	}
	JObject Collections::EMPTY_SET()
	{
		return getStaticObjectField(
			"java.util.Collections",
			"EMPTY_SET",
			"Ljava/util/Set;"
		);
	}
	
	// QAndroidJniObject forward
	Collections::Collections(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean Collections::addAll(JObject arg0, jobjectArray arg1)
	{
		return callStaticMethod<jboolean>(
			"java.util.Collections",
			"addAll",
			"(Ljava/util/Collection;[Ljava/lang/Object;)Z",
			arg0.object(),
			arg1
		);
	}
	JObject Collections::asLifoQueue(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"asLifoQueue",
			"(Ljava/util/Deque;)Ljava/util/Queue;",
			arg0.object()
		);
	}
	jint Collections::binarySearch(JObject arg0, jobject arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Collections",
			"binarySearch",
			"(Ljava/util/List;Ljava/lang/Object;)I",
			arg0.object(),
			arg1
		);
	}
	jint Collections::binarySearch(JObject arg0, jobject arg1, JObject arg2)
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
	JObject Collections::checkedCollection(JObject arg0, jclass arg1)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"checkedCollection",
			"(Ljava/util/Collection;Ljava/lang/Class;)Ljava/util/Collection;",
			arg0.object(),
			arg1
		);
	}
	JObject Collections::checkedList(JObject arg0, jclass arg1)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"checkedList",
			"(Ljava/util/List;Ljava/lang/Class;)Ljava/util/List;",
			arg0.object(),
			arg1
		);
	}
	JObject Collections::checkedMap(JObject arg0, jclass arg1, jclass arg2)
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
	JObject Collections::checkedNavigableMap(JObject arg0, jclass arg1, jclass arg2)
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
	JObject Collections::checkedNavigableSet(JObject arg0, jclass arg1)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"checkedNavigableSet",
			"(Ljava/util/NavigableSet;Ljava/lang/Class;)Ljava/util/NavigableSet;",
			arg0.object(),
			arg1
		);
	}
	JObject Collections::checkedQueue(JObject arg0, jclass arg1)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"checkedQueue",
			"(Ljava/util/Queue;Ljava/lang/Class;)Ljava/util/Queue;",
			arg0.object(),
			arg1
		);
	}
	JObject Collections::checkedSet(JObject arg0, jclass arg1)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"checkedSet",
			"(Ljava/util/Set;Ljava/lang/Class;)Ljava/util/Set;",
			arg0.object(),
			arg1
		);
	}
	JObject Collections::checkedSortedMap(JObject arg0, jclass arg1, jclass arg2)
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
	JObject Collections::checkedSortedSet(JObject arg0, jclass arg1)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"checkedSortedSet",
			"(Ljava/util/SortedSet;Ljava/lang/Class;)Ljava/util/SortedSet;",
			arg0.object(),
			arg1
		);
	}
	void Collections::copy(JObject arg0, JObject arg1)
	{
		callStaticMethod<void>(
			"java.util.Collections",
			"copy",
			"(Ljava/util/List;Ljava/util/List;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean Collections::disjoint(JObject arg0, JObject arg1)
	{
		return callStaticMethod<jboolean>(
			"java.util.Collections",
			"disjoint",
			"(Ljava/util/Collection;Ljava/util/Collection;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	JObject Collections::emptyEnumeration()
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"emptyEnumeration",
			"()Ljava/util/Enumeration;"
		);
	}
	JObject Collections::emptyIterator()
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"emptyIterator",
			"()Ljava/util/Iterator;"
		);
	}
	JObject Collections::emptyList()
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"emptyList",
			"()Ljava/util/List;"
		);
	}
	JObject Collections::emptyListIterator()
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"emptyListIterator",
			"()Ljava/util/ListIterator;"
		);
	}
	JObject Collections::emptyMap()
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"emptyMap",
			"()Ljava/util/Map;"
		);
	}
	JObject Collections::emptyNavigableMap()
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"emptyNavigableMap",
			"()Ljava/util/NavigableMap;"
		);
	}
	JObject Collections::emptyNavigableSet()
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"emptyNavigableSet",
			"()Ljava/util/NavigableSet;"
		);
	}
	JObject Collections::emptySet()
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"emptySet",
			"()Ljava/util/Set;"
		);
	}
	JObject Collections::emptySortedMap()
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"emptySortedMap",
			"()Ljava/util/SortedMap;"
		);
	}
	JObject Collections::emptySortedSet()
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"emptySortedSet",
			"()Ljava/util/SortedSet;"
		);
	}
	JObject Collections::enumeration(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"enumeration",
			"(Ljava/util/Collection;)Ljava/util/Enumeration;",
			arg0.object()
		);
	}
	void Collections::fill(JObject arg0, jobject arg1)
	{
		callStaticMethod<void>(
			"java.util.Collections",
			"fill",
			"(Ljava/util/List;Ljava/lang/Object;)V",
			arg0.object(),
			arg1
		);
	}
	jint Collections::frequency(JObject arg0, jobject arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Collections",
			"frequency",
			"(Ljava/util/Collection;Ljava/lang/Object;)I",
			arg0.object(),
			arg1
		);
	}
	jint Collections::indexOfSubList(JObject arg0, JObject arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Collections",
			"indexOfSubList",
			"(Ljava/util/List;Ljava/util/List;)I",
			arg0.object(),
			arg1.object()
		);
	}
	jint Collections::lastIndexOfSubList(JObject arg0, JObject arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Collections",
			"lastIndexOfSubList",
			"(Ljava/util/List;Ljava/util/List;)I",
			arg0.object(),
			arg1.object()
		);
	}
	java::util::ArrayList Collections::list(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"list",
			"(Ljava/util/Enumeration;)Ljava/util/ArrayList;",
			arg0.object()
		);
	}
	jobject Collections::max(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"max",
			"(Ljava/util/Collection;)Ljava/lang/Object;",
			arg0.object()
		).object<jobject>();
	}
	jobject Collections::max(JObject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"max",
			"(Ljava/util/Collection;Ljava/util/Comparator;)Ljava/lang/Object;",
			arg0.object(),
			arg1.object()
		).object<jobject>();
	}
	jobject Collections::min(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"min",
			"(Ljava/util/Collection;)Ljava/lang/Object;",
			arg0.object()
		).object<jobject>();
	}
	jobject Collections::min(JObject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"min",
			"(Ljava/util/Collection;Ljava/util/Comparator;)Ljava/lang/Object;",
			arg0.object(),
			arg1.object()
		).object<jobject>();
	}
	JObject Collections::nCopies(jint arg0, jobject arg1)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"nCopies",
			"(ILjava/lang/Object;)Ljava/util/List;",
			arg0,
			arg1
		);
	}
	JObject Collections::newSetFromMap(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"newSetFromMap",
			"(Ljava/util/Map;)Ljava/util/Set;",
			arg0.object()
		);
	}
	jboolean Collections::replaceAll(JObject arg0, jobject arg1, jobject arg2)
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
	void Collections::reverse(JObject arg0)
	{
		callStaticMethod<void>(
			"java.util.Collections",
			"reverse",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	JObject Collections::reverseOrder()
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"reverseOrder",
			"()Ljava/util/Comparator;"
		);
	}
	JObject Collections::reverseOrder(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"reverseOrder",
			"(Ljava/util/Comparator;)Ljava/util/Comparator;",
			arg0.object()
		);
	}
	void Collections::rotate(JObject arg0, jint arg1)
	{
		callStaticMethod<void>(
			"java.util.Collections",
			"rotate",
			"(Ljava/util/List;I)V",
			arg0.object(),
			arg1
		);
	}
	void Collections::shuffle(JObject arg0)
	{
		callStaticMethod<void>(
			"java.util.Collections",
			"shuffle",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void Collections::shuffle(JObject arg0, java::util::Random arg1)
	{
		callStaticMethod<void>(
			"java.util.Collections",
			"shuffle",
			"(Ljava/util/List;Ljava/util/Random;)V",
			arg0.object(),
			arg1.object()
		);
	}
	JObject Collections::singleton(jobject arg0)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"singleton",
			"(Ljava/lang/Object;)Ljava/util/Set;",
			arg0
		);
	}
	JObject Collections::singletonList(jobject arg0)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"singletonList",
			"(Ljava/lang/Object;)Ljava/util/List;",
			arg0
		);
	}
	JObject Collections::singletonMap(jobject arg0, jobject arg1)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"singletonMap",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;",
			arg0,
			arg1
		);
	}
	void Collections::sort(JObject arg0)
	{
		callStaticMethod<void>(
			"java.util.Collections",
			"sort",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void Collections::sort(JObject arg0, JObject arg1)
	{
		callStaticMethod<void>(
			"java.util.Collections",
			"sort",
			"(Ljava/util/List;Ljava/util/Comparator;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Collections::swap(JObject arg0, jint arg1, jint arg2)
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
	JObject Collections::synchronizedCollection(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"synchronizedCollection",
			"(Ljava/util/Collection;)Ljava/util/Collection;",
			arg0.object()
		);
	}
	JObject Collections::synchronizedList(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"synchronizedList",
			"(Ljava/util/List;)Ljava/util/List;",
			arg0.object()
		);
	}
	JObject Collections::synchronizedMap(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"synchronizedMap",
			"(Ljava/util/Map;)Ljava/util/Map;",
			arg0.object()
		);
	}
	JObject Collections::synchronizedNavigableMap(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"synchronizedNavigableMap",
			"(Ljava/util/NavigableMap;)Ljava/util/NavigableMap;",
			arg0.object()
		);
	}
	JObject Collections::synchronizedNavigableSet(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"synchronizedNavigableSet",
			"(Ljava/util/NavigableSet;)Ljava/util/NavigableSet;",
			arg0.object()
		);
	}
	JObject Collections::synchronizedSet(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"synchronizedSet",
			"(Ljava/util/Set;)Ljava/util/Set;",
			arg0.object()
		);
	}
	JObject Collections::synchronizedSortedMap(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"synchronizedSortedMap",
			"(Ljava/util/SortedMap;)Ljava/util/SortedMap;",
			arg0.object()
		);
	}
	JObject Collections::synchronizedSortedSet(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"synchronizedSortedSet",
			"(Ljava/util/SortedSet;)Ljava/util/SortedSet;",
			arg0.object()
		);
	}
	JObject Collections::unmodifiableCollection(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"unmodifiableCollection",
			"(Ljava/util/Collection;)Ljava/util/Collection;",
			arg0.object()
		);
	}
	JObject Collections::unmodifiableList(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"unmodifiableList",
			"(Ljava/util/List;)Ljava/util/List;",
			arg0.object()
		);
	}
	JObject Collections::unmodifiableMap(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"unmodifiableMap",
			"(Ljava/util/Map;)Ljava/util/Map;",
			arg0.object()
		);
	}
	JObject Collections::unmodifiableNavigableMap(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"unmodifiableNavigableMap",
			"(Ljava/util/NavigableMap;)Ljava/util/NavigableMap;",
			arg0.object()
		);
	}
	JObject Collections::unmodifiableNavigableSet(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"unmodifiableNavigableSet",
			"(Ljava/util/NavigableSet;)Ljava/util/NavigableSet;",
			arg0.object()
		);
	}
	JObject Collections::unmodifiableSet(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"unmodifiableSet",
			"(Ljava/util/Set;)Ljava/util/Set;",
			arg0.object()
		);
	}
	JObject Collections::unmodifiableSortedMap(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"unmodifiableSortedMap",
			"(Ljava/util/SortedMap;)Ljava/util/SortedMap;",
			arg0.object()
		);
	}
	JObject Collections::unmodifiableSortedSet(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.Collections",
			"unmodifiableSortedSet",
			"(Ljava/util/SortedSet;)Ljava/util/SortedSet;",
			arg0.object()
		);
	}
} // namespace java::util

