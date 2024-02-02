#pragma once

#include "./StreamSupport.def.hpp"

namespace java::util::stream
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject StreamSupport::doubleStream(JObject arg0, jboolean arg1)
	{
		return callStaticObjectMethod(
			"java.util.stream.StreamSupport",
			"doubleStream",
			"(Ljava/util/Spliterator$OfDouble;Z)Ljava/util/stream/DoubleStream;",
			arg0.object(),
			arg1
		);
	}
	inline JObject StreamSupport::doubleStream(JObject arg0, jint arg1, jboolean arg2)
	{
		return callStaticObjectMethod(
			"java.util.stream.StreamSupport",
			"doubleStream",
			"(Ljava/util/function/Supplier;IZ)Ljava/util/stream/DoubleStream;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline JObject StreamSupport::intStream(JObject arg0, jboolean arg1)
	{
		return callStaticObjectMethod(
			"java.util.stream.StreamSupport",
			"intStream",
			"(Ljava/util/Spliterator$OfInt;Z)Ljava/util/stream/IntStream;",
			arg0.object(),
			arg1
		);
	}
	inline JObject StreamSupport::intStream(JObject arg0, jint arg1, jboolean arg2)
	{
		return callStaticObjectMethod(
			"java.util.stream.StreamSupport",
			"intStream",
			"(Ljava/util/function/Supplier;IZ)Ljava/util/stream/IntStream;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline JObject StreamSupport::longStream(JObject arg0, jboolean arg1)
	{
		return callStaticObjectMethod(
			"java.util.stream.StreamSupport",
			"longStream",
			"(Ljava/util/Spliterator$OfLong;Z)Ljava/util/stream/LongStream;",
			arg0.object(),
			arg1
		);
	}
	inline JObject StreamSupport::longStream(JObject arg0, jint arg1, jboolean arg2)
	{
		return callStaticObjectMethod(
			"java.util.stream.StreamSupport",
			"longStream",
			"(Ljava/util/function/Supplier;IZ)Ljava/util/stream/LongStream;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline JObject StreamSupport::stream(JObject arg0, jboolean arg1)
	{
		return callStaticObjectMethod(
			"java.util.stream.StreamSupport",
			"stream",
			"(Ljava/util/Spliterator;Z)Ljava/util/stream/Stream;",
			arg0.object(),
			arg1
		);
	}
	inline JObject StreamSupport::stream(JObject arg0, jint arg1, jboolean arg2)
	{
		return callStaticObjectMethod(
			"java.util.stream.StreamSupport",
			"stream",
			"(Ljava/util/function/Supplier;IZ)Ljava/util/stream/Stream;",
			arg0.object(),
			arg1,
			arg2
		);
	}
} // namespace java::util::stream

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::stream;
#endif
