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
		static __JniBaseClass EMPTY_LIST();
		static __JniBaseClass EMPTY_MAP();
		static __JniBaseClass EMPTY_SET();
		
		// QJniObject forward
		template<typename ...Ts> explicit Collections(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Collections(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jboolean addAll(__JniBaseClass arg0, jobjectArray arg1);
		static __JniBaseClass asLifoQueue(__JniBaseClass arg0);
		static jint binarySearch(__JniBaseClass arg0, jobject arg1);
		static jint binarySearch(__JniBaseClass arg0, jobject arg1, __JniBaseClass arg2);
		static __JniBaseClass checkedCollection(__JniBaseClass arg0, jclass arg1);
		static __JniBaseClass checkedList(__JniBaseClass arg0, jclass arg1);
		static __JniBaseClass checkedMap(__JniBaseClass arg0, jclass arg1, jclass arg2);
		static __JniBaseClass checkedNavigableMap(__JniBaseClass arg0, jclass arg1, jclass arg2);
		static __JniBaseClass checkedNavigableSet(__JniBaseClass arg0, jclass arg1);
		static __JniBaseClass checkedQueue(__JniBaseClass arg0, jclass arg1);
		static __JniBaseClass checkedSet(__JniBaseClass arg0, jclass arg1);
		static __JniBaseClass checkedSortedMap(__JniBaseClass arg0, jclass arg1, jclass arg2);
		static __JniBaseClass checkedSortedSet(__JniBaseClass arg0, jclass arg1);
		static void copy(__JniBaseClass arg0, __JniBaseClass arg1);
		static jboolean disjoint(__JniBaseClass arg0, __JniBaseClass arg1);
		static __JniBaseClass emptyEnumeration();
		static __JniBaseClass emptyIterator();
		static __JniBaseClass emptyList();
		static __JniBaseClass emptyListIterator();
		static __JniBaseClass emptyMap();
		static __JniBaseClass emptyNavigableMap();
		static __JniBaseClass emptyNavigableSet();
		static __JniBaseClass emptySet();
		static __JniBaseClass emptySortedMap();
		static __JniBaseClass emptySortedSet();
		static __JniBaseClass enumeration(__JniBaseClass arg0);
		static void fill(__JniBaseClass arg0, jobject arg1);
		static jint frequency(__JniBaseClass arg0, jobject arg1);
		static jint indexOfSubList(__JniBaseClass arg0, __JniBaseClass arg1);
		static jint lastIndexOfSubList(__JniBaseClass arg0, __JniBaseClass arg1);
		static java::util::ArrayList list(__JniBaseClass arg0);
		static jobject max(__JniBaseClass arg0);
		static jobject max(__JniBaseClass arg0, __JniBaseClass arg1);
		static jobject min(__JniBaseClass arg0);
		static jobject min(__JniBaseClass arg0, __JniBaseClass arg1);
		static __JniBaseClass nCopies(jint arg0, jobject arg1);
		static __JniBaseClass newSetFromMap(__JniBaseClass arg0);
		static jboolean replaceAll(__JniBaseClass arg0, jobject arg1, jobject arg2);
		static void reverse(__JniBaseClass arg0);
		static __JniBaseClass reverseOrder();
		static __JniBaseClass reverseOrder(__JniBaseClass arg0);
		static void rotate(__JniBaseClass arg0, jint arg1);
		static void shuffle(__JniBaseClass arg0);
		static void shuffle(__JniBaseClass arg0, java::util::Random arg1);
		static __JniBaseClass singleton(jobject arg0);
		static __JniBaseClass singletonList(jobject arg0);
		static __JniBaseClass singletonMap(jobject arg0, jobject arg1);
		static void sort(__JniBaseClass arg0);
		static void sort(__JniBaseClass arg0, __JniBaseClass arg1);
		static void swap(__JniBaseClass arg0, jint arg1, jint arg2);
		static __JniBaseClass synchronizedCollection(__JniBaseClass arg0);
		static __JniBaseClass synchronizedList(__JniBaseClass arg0);
		static __JniBaseClass synchronizedMap(__JniBaseClass arg0);
		static __JniBaseClass synchronizedNavigableMap(__JniBaseClass arg0);
		static __JniBaseClass synchronizedNavigableSet(__JniBaseClass arg0);
		static __JniBaseClass synchronizedSet(__JniBaseClass arg0);
		static __JniBaseClass synchronizedSortedMap(__JniBaseClass arg0);
		static __JniBaseClass synchronizedSortedSet(__JniBaseClass arg0);
		static __JniBaseClass unmodifiableCollection(__JniBaseClass arg0);
		static __JniBaseClass unmodifiableList(__JniBaseClass arg0);
		static __JniBaseClass unmodifiableMap(__JniBaseClass arg0);
		static __JniBaseClass unmodifiableNavigableMap(__JniBaseClass arg0);
		static __JniBaseClass unmodifiableNavigableSet(__JniBaseClass arg0);
		static __JniBaseClass unmodifiableSet(__JniBaseClass arg0);
		static __JniBaseClass unmodifiableSortedMap(__JniBaseClass arg0);
		static __JniBaseClass unmodifiableSortedSet(__JniBaseClass arg0);
	};
} // namespace java::util

