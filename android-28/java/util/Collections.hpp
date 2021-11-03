#pragma once

#include "../../JObject.hpp"

namespace java::util
{
	class ArrayList;
}
namespace java::util
{
	class Random;
}

namespace java::util
{
	class Collections : public JObject
	{
	public:
		// Fields
		static JObject EMPTY_LIST();
		static JObject EMPTY_MAP();
		static JObject EMPTY_SET();
		
		// QJniObject forward
		template<typename ...Ts> explicit Collections(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Collections(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jboolean addAll(JObject arg0, jobjectArray arg1);
		static JObject asLifoQueue(JObject arg0);
		static jint binarySearch(JObject arg0, jobject arg1);
		static jint binarySearch(JObject arg0, jobject arg1, JObject arg2);
		static JObject checkedCollection(JObject arg0, jclass arg1);
		static JObject checkedList(JObject arg0, jclass arg1);
		static JObject checkedMap(JObject arg0, jclass arg1, jclass arg2);
		static JObject checkedNavigableMap(JObject arg0, jclass arg1, jclass arg2);
		static JObject checkedNavigableSet(JObject arg0, jclass arg1);
		static JObject checkedQueue(JObject arg0, jclass arg1);
		static JObject checkedSet(JObject arg0, jclass arg1);
		static JObject checkedSortedMap(JObject arg0, jclass arg1, jclass arg2);
		static JObject checkedSortedSet(JObject arg0, jclass arg1);
		static void copy(JObject arg0, JObject arg1);
		static jboolean disjoint(JObject arg0, JObject arg1);
		static JObject emptyEnumeration();
		static JObject emptyIterator();
		static JObject emptyList();
		static JObject emptyListIterator();
		static JObject emptyMap();
		static JObject emptyNavigableMap();
		static JObject emptyNavigableSet();
		static JObject emptySet();
		static JObject emptySortedMap();
		static JObject emptySortedSet();
		static JObject enumeration(JObject arg0);
		static void fill(JObject arg0, jobject arg1);
		static jint frequency(JObject arg0, jobject arg1);
		static jint indexOfSubList(JObject arg0, JObject arg1);
		static jint lastIndexOfSubList(JObject arg0, JObject arg1);
		static java::util::ArrayList list(JObject arg0);
		static jobject max(JObject arg0);
		static jobject max(JObject arg0, JObject arg1);
		static jobject min(JObject arg0);
		static jobject min(JObject arg0, JObject arg1);
		static JObject nCopies(jint arg0, jobject arg1);
		static JObject newSetFromMap(JObject arg0);
		static jboolean replaceAll(JObject arg0, jobject arg1, jobject arg2);
		static void reverse(JObject arg0);
		static JObject reverseOrder();
		static JObject reverseOrder(JObject arg0);
		static void rotate(JObject arg0, jint arg1);
		static void shuffle(JObject arg0);
		static void shuffle(JObject arg0, java::util::Random arg1);
		static JObject singleton(jobject arg0);
		static JObject singletonList(jobject arg0);
		static JObject singletonMap(jobject arg0, jobject arg1);
		static void sort(JObject arg0);
		static void sort(JObject arg0, JObject arg1);
		static void swap(JObject arg0, jint arg1, jint arg2);
		static JObject synchronizedCollection(JObject arg0);
		static JObject synchronizedList(JObject arg0);
		static JObject synchronizedMap(JObject arg0);
		static JObject synchronizedNavigableMap(JObject arg0);
		static JObject synchronizedNavigableSet(JObject arg0);
		static JObject synchronizedSet(JObject arg0);
		static JObject synchronizedSortedMap(JObject arg0);
		static JObject synchronizedSortedSet(JObject arg0);
		static JObject unmodifiableCollection(JObject arg0);
		static JObject unmodifiableList(JObject arg0);
		static JObject unmodifiableMap(JObject arg0);
		static JObject unmodifiableNavigableMap(JObject arg0);
		static JObject unmodifiableNavigableSet(JObject arg0);
		static JObject unmodifiableSet(JObject arg0);
		static JObject unmodifiableSortedMap(JObject arg0);
		static JObject unmodifiableSortedSet(JObject arg0);
	};
} // namespace java::util

