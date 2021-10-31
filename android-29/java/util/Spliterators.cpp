#include "./Spliterators.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	Spliterators::Spliterators(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass Spliterators::emptyDoubleSpliterator()
	{
		return callStaticObjectMethod(
			"java.util.Spliterators",
			"emptyDoubleSpliterator",
			"()Ljava/util/Spliterator$OfDouble;"
		);
	}
	__JniBaseClass Spliterators::emptyIntSpliterator()
	{
		return callStaticObjectMethod(
			"java.util.Spliterators",
			"emptyIntSpliterator",
			"()Ljava/util/Spliterator$OfInt;"
		);
	}
	__JniBaseClass Spliterators::emptyLongSpliterator()
	{
		return callStaticObjectMethod(
			"java.util.Spliterators",
			"emptyLongSpliterator",
			"()Ljava/util/Spliterator$OfLong;"
		);
	}
	__JniBaseClass Spliterators::emptySpliterator()
	{
		return callStaticObjectMethod(
			"java.util.Spliterators",
			"emptySpliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	__JniBaseClass Spliterators::iterator(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.Spliterators",
			"iterator",
			"(Ljava/util/Spliterator;)Ljava/util/Iterator;",
			arg0.object()
		);
	}
	__JniBaseClass Spliterators::spliterator(jobjectArray arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.util.Spliterators",
			"spliterator",
			"([Ljava/lang/Object;I)Ljava/util/Spliterator;",
			arg0,
			arg1
		);
	}
	__JniBaseClass Spliterators::spliterator(__JniBaseClass arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.util.Spliterators",
			"spliterator",
			"(Ljava/util/Collection;I)Ljava/util/Spliterator;",
			arg0.object(),
			arg1
		);
	}
	__JniBaseClass Spliterators::spliterator(__JniBaseClass arg0, jlong arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.util.Spliterators",
			"spliterator",
			"(Ljava/util/Iterator;JI)Ljava/util/Spliterator;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	__JniBaseClass Spliterators::spliterator(jobjectArray arg0, jint arg1, jint arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"java.util.Spliterators",
			"spliterator",
			"([Ljava/lang/Object;III)Ljava/util/Spliterator;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	__JniBaseClass Spliterators::spliterator(jdoubleArray arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.util.Spliterators",
			"spliterator",
			"([DI)Ljava/util/Spliterator$OfDouble;",
			arg0,
			arg1
		);
	}
	__JniBaseClass Spliterators::spliterator(jdoubleArray arg0, jint arg1, jint arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"java.util.Spliterators",
			"spliterator",
			"([DIII)Ljava/util/Spliterator$OfDouble;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	__JniBaseClass Spliterators::spliterator(jintArray arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.util.Spliterators",
			"spliterator",
			"([II)Ljava/util/Spliterator$OfInt;",
			arg0,
			arg1
		);
	}
	__JniBaseClass Spliterators::spliterator(jintArray arg0, jint arg1, jint arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"java.util.Spliterators",
			"spliterator",
			"([IIII)Ljava/util/Spliterator$OfInt;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	__JniBaseClass Spliterators::spliterator(jlongArray arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.util.Spliterators",
			"spliterator",
			"([JI)Ljava/util/Spliterator$OfLong;",
			arg0,
			arg1
		);
	}
	__JniBaseClass Spliterators::spliterator(jlongArray arg0, jint arg1, jint arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"java.util.Spliterators",
			"spliterator",
			"([JIII)Ljava/util/Spliterator$OfLong;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	__JniBaseClass Spliterators::spliteratorUnknownSize(__JniBaseClass arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.util.Spliterators",
			"spliteratorUnknownSize",
			"(Ljava/util/Iterator;I)Ljava/util/Spliterator;",
			arg0.object(),
			arg1
		);
	}
} // namespace java::util

