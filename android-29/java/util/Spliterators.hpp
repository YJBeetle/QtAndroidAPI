#pragma once

#include "../../JDoubleArray.hpp"
#include "../../JIntArray.hpp"
#include "../../JLongArray.hpp"
#include "../../JObjectArray.hpp"
#include "./Spliterators.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject Spliterators::emptyDoubleSpliterator()
	{
		return callStaticObjectMethod(
			"java.util.Spliterators",
			"emptyDoubleSpliterator",
			"()Ljava/util/Spliterator$OfDouble;"
		);
	}
	inline JObject Spliterators::emptyIntSpliterator()
	{
		return callStaticObjectMethod(
			"java.util.Spliterators",
			"emptyIntSpliterator",
			"()Ljava/util/Spliterator$OfInt;"
		);
	}
	inline JObject Spliterators::emptyLongSpliterator()
	{
		return callStaticObjectMethod(
			"java.util.Spliterators",
			"emptyLongSpliterator",
			"()Ljava/util/Spliterator$OfLong;"
		);
	}
	inline JObject Spliterators::emptySpliterator()
	{
		return callStaticObjectMethod(
			"java.util.Spliterators",
			"emptySpliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	inline JObject Spliterators::iterator(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.Spliterators",
			"iterator",
			"(Ljava/util/Spliterator;)Ljava/util/Iterator;",
			arg0.object()
		);
	}
	inline JObject Spliterators::spliterator(JObjectArray arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.util.Spliterators",
			"spliterator",
			"([Ljava/lang/Object;I)Ljava/util/Spliterator;",
			arg0.object<jobjectArray>(),
			arg1
		);
	}
	inline JObject Spliterators::spliterator(JObject arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.util.Spliterators",
			"spliterator",
			"(Ljava/util/Collection;I)Ljava/util/Spliterator;",
			arg0.object(),
			arg1
		);
	}
	inline JObject Spliterators::spliterator(JObject arg0, jlong arg1, jint arg2)
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
	inline JObject Spliterators::spliterator(JObjectArray arg0, jint arg1, jint arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"java.util.Spliterators",
			"spliterator",
			"([Ljava/lang/Object;III)Ljava/util/Spliterator;",
			arg0.object<jobjectArray>(),
			arg1,
			arg2,
			arg3
		);
	}
	inline JObject Spliterators::spliterator(JDoubleArray arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.util.Spliterators",
			"spliterator",
			"([DI)Ljava/util/Spliterator$OfDouble;",
			arg0.object<jdoubleArray>(),
			arg1
		);
	}
	inline JObject Spliterators::spliterator(JDoubleArray arg0, jint arg1, jint arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"java.util.Spliterators",
			"spliterator",
			"([DIII)Ljava/util/Spliterator$OfDouble;",
			arg0.object<jdoubleArray>(),
			arg1,
			arg2,
			arg3
		);
	}
	inline JObject Spliterators::spliterator(JIntArray arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.util.Spliterators",
			"spliterator",
			"([II)Ljava/util/Spliterator$OfInt;",
			arg0.object<jintArray>(),
			arg1
		);
	}
	inline JObject Spliterators::spliterator(JIntArray arg0, jint arg1, jint arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"java.util.Spliterators",
			"spliterator",
			"([IIII)Ljava/util/Spliterator$OfInt;",
			arg0.object<jintArray>(),
			arg1,
			arg2,
			arg3
		);
	}
	inline JObject Spliterators::spliterator(JLongArray arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.util.Spliterators",
			"spliterator",
			"([JI)Ljava/util/Spliterator$OfLong;",
			arg0.object<jlongArray>(),
			arg1
		);
	}
	inline JObject Spliterators::spliterator(JLongArray arg0, jint arg1, jint arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"java.util.Spliterators",
			"spliterator",
			"([JIII)Ljava/util/Spliterator$OfLong;",
			arg0.object<jlongArray>(),
			arg1,
			arg2,
			arg3
		);
	}
	inline JObject Spliterators::spliteratorUnknownSize(JObject arg0, jint arg1)
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

// Base class headers

