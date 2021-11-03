#include "./Spliterators.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	Spliterators::Spliterators(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject Spliterators::emptyDoubleSpliterator()
	{
		return callStaticObjectMethod(
			"java.util.Spliterators",
			"emptyDoubleSpliterator",
			"()Ljava/util/Spliterator$OfDouble;"
		);
	}
	JObject Spliterators::emptyIntSpliterator()
	{
		return callStaticObjectMethod(
			"java.util.Spliterators",
			"emptyIntSpliterator",
			"()Ljava/util/Spliterator$OfInt;"
		);
	}
	JObject Spliterators::emptyLongSpliterator()
	{
		return callStaticObjectMethod(
			"java.util.Spliterators",
			"emptyLongSpliterator",
			"()Ljava/util/Spliterator$OfLong;"
		);
	}
	JObject Spliterators::emptySpliterator()
	{
		return callStaticObjectMethod(
			"java.util.Spliterators",
			"emptySpliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	JObject Spliterators::iterator(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.Spliterators",
			"iterator",
			"(Ljava/util/Spliterator;)Ljava/util/Iterator;",
			arg0.object()
		);
	}
	JObject Spliterators::spliterator(jobjectArray arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.util.Spliterators",
			"spliterator",
			"([Ljava/lang/Object;I)Ljava/util/Spliterator;",
			arg0,
			arg1
		);
	}
	JObject Spliterators::spliterator(JObject arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.util.Spliterators",
			"spliterator",
			"(Ljava/util/Collection;I)Ljava/util/Spliterator;",
			arg0.object(),
			arg1
		);
	}
	JObject Spliterators::spliterator(JObject arg0, jlong arg1, jint arg2)
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
	JObject Spliterators::spliterator(jobjectArray arg0, jint arg1, jint arg2, jint arg3)
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
	JObject Spliterators::spliterator(jdoubleArray arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.util.Spliterators",
			"spliterator",
			"([DI)Ljava/util/Spliterator$OfDouble;",
			arg0,
			arg1
		);
	}
	JObject Spliterators::spliterator(jdoubleArray arg0, jint arg1, jint arg2, jint arg3)
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
	JObject Spliterators::spliterator(jintArray arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.util.Spliterators",
			"spliterator",
			"([II)Ljava/util/Spliterator$OfInt;",
			arg0,
			arg1
		);
	}
	JObject Spliterators::spliterator(jintArray arg0, jint arg1, jint arg2, jint arg3)
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
	JObject Spliterators::spliterator(jlongArray arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.util.Spliterators",
			"spliterator",
			"([JI)Ljava/util/Spliterator$OfLong;",
			arg0,
			arg1
		);
	}
	JObject Spliterators::spliterator(jlongArray arg0, jint arg1, jint arg2, jint arg3)
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
	JObject Spliterators::spliteratorUnknownSize(JObject arg0, jint arg1)
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

