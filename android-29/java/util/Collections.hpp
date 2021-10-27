#pragma once

#include "../../__JniBaseClass.hpp"

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
	class Collections : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject EMPTY_LIST();
		static QAndroidJniObject EMPTY_MAP();
		static QAndroidJniObject EMPTY_SET();
		
		Collections(QAndroidJniObject obj);
		// Constructors
		Collections() = default;
		
		// Methods
		static jboolean addAll(__JniBaseClass arg0, jobjectArray arg1);
		static QAndroidJniObject asLifoQueue(__JniBaseClass arg0);
		static jint binarySearch(__JniBaseClass arg0, jobject arg1);
		static jint binarySearch(__JniBaseClass arg0, jobject arg1, __JniBaseClass arg2);
		static QAndroidJniObject checkedCollection(__JniBaseClass arg0, jclass arg1);
		static QAndroidJniObject checkedList(__JniBaseClass arg0, jclass arg1);
		static QAndroidJniObject checkedMap(__JniBaseClass arg0, jclass arg1, jclass arg2);
		static QAndroidJniObject checkedNavigableMap(__JniBaseClass arg0, jclass arg1, jclass arg2);
		static QAndroidJniObject checkedNavigableSet(__JniBaseClass arg0, jclass arg1);
		static QAndroidJniObject checkedQueue(__JniBaseClass arg0, jclass arg1);
		static QAndroidJniObject checkedSet(__JniBaseClass arg0, jclass arg1);
		static QAndroidJniObject checkedSortedMap(__JniBaseClass arg0, jclass arg1, jclass arg2);
		static QAndroidJniObject checkedSortedSet(__JniBaseClass arg0, jclass arg1);
		static void copy(__JniBaseClass arg0, __JniBaseClass arg1);
		static jboolean disjoint(__JniBaseClass arg0, __JniBaseClass arg1);
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
		static QAndroidJniObject enumeration(__JniBaseClass arg0);
		static void fill(__JniBaseClass arg0, jobject arg1);
		static jint frequency(__JniBaseClass arg0, jobject arg1);
		static jint indexOfSubList(__JniBaseClass arg0, __JniBaseClass arg1);
		static jint lastIndexOfSubList(__JniBaseClass arg0, __JniBaseClass arg1);
		static QAndroidJniObject list(__JniBaseClass arg0);
		static jobject max(__JniBaseClass arg0);
		static jobject max(__JniBaseClass arg0, __JniBaseClass arg1);
		static jobject min(__JniBaseClass arg0);
		static jobject min(__JniBaseClass arg0, __JniBaseClass arg1);
		static QAndroidJniObject nCopies(jint arg0, jobject arg1);
		static QAndroidJniObject newSetFromMap(__JniBaseClass arg0);
		static jboolean replaceAll(__JniBaseClass arg0, jobject arg1, jobject arg2);
		static void reverse(__JniBaseClass arg0);
		static QAndroidJniObject reverseOrder();
		static QAndroidJniObject reverseOrder(__JniBaseClass arg0);
		static void rotate(__JniBaseClass arg0, jint arg1);
		static void shuffle(__JniBaseClass arg0);
		static void shuffle(__JniBaseClass arg0, java::util::Random arg1);
		static QAndroidJniObject singleton(jobject arg0);
		static QAndroidJniObject singletonList(jobject arg0);
		static QAndroidJniObject singletonMap(jobject arg0, jobject arg1);
		static void sort(__JniBaseClass arg0);
		static void sort(__JniBaseClass arg0, __JniBaseClass arg1);
		static void swap(__JniBaseClass arg0, jint arg1, jint arg2);
		static QAndroidJniObject synchronizedCollection(__JniBaseClass arg0);
		static QAndroidJniObject synchronizedList(__JniBaseClass arg0);
		static QAndroidJniObject synchronizedMap(__JniBaseClass arg0);
		static QAndroidJniObject synchronizedNavigableMap(__JniBaseClass arg0);
		static QAndroidJniObject synchronizedNavigableSet(__JniBaseClass arg0);
		static QAndroidJniObject synchronizedSet(__JniBaseClass arg0);
		static QAndroidJniObject synchronizedSortedMap(__JniBaseClass arg0);
		static QAndroidJniObject synchronizedSortedSet(__JniBaseClass arg0);
		static QAndroidJniObject unmodifiableCollection(__JniBaseClass arg0);
		static QAndroidJniObject unmodifiableList(__JniBaseClass arg0);
		static QAndroidJniObject unmodifiableMap(__JniBaseClass arg0);
		static QAndroidJniObject unmodifiableNavigableMap(__JniBaseClass arg0);
		static QAndroidJniObject unmodifiableNavigableSet(__JniBaseClass arg0);
		static QAndroidJniObject unmodifiableSet(__JniBaseClass arg0);
		static QAndroidJniObject unmodifiableSortedMap(__JniBaseClass arg0);
		static QAndroidJniObject unmodifiableSortedSet(__JniBaseClass arg0);
	};
} // namespace java::util

