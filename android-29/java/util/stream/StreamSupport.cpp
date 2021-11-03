#include "./StreamSupport.hpp"

namespace java::util::stream
{
	// Fields
	
	// QAndroidJniObject forward
	StreamSupport::StreamSupport(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject StreamSupport::doubleStream(JObject arg0, jboolean arg1)
	{
		return callStaticObjectMethod(
			"java.util.stream.StreamSupport",
			"doubleStream",
			"(Ljava/util/Spliterator$OfDouble;Z)Ljava/util/stream/DoubleStream;",
			arg0.object(),
			arg1
		);
	}
	JObject StreamSupport::doubleStream(JObject arg0, jint arg1, jboolean arg2)
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
	JObject StreamSupport::intStream(JObject arg0, jboolean arg1)
	{
		return callStaticObjectMethod(
			"java.util.stream.StreamSupport",
			"intStream",
			"(Ljava/util/Spliterator$OfInt;Z)Ljava/util/stream/IntStream;",
			arg0.object(),
			arg1
		);
	}
	JObject StreamSupport::intStream(JObject arg0, jint arg1, jboolean arg2)
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
	JObject StreamSupport::longStream(JObject arg0, jboolean arg1)
	{
		return callStaticObjectMethod(
			"java.util.stream.StreamSupport",
			"longStream",
			"(Ljava/util/Spliterator$OfLong;Z)Ljava/util/stream/LongStream;",
			arg0.object(),
			arg1
		);
	}
	JObject StreamSupport::longStream(JObject arg0, jint arg1, jboolean arg2)
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
	JObject StreamSupport::stream(JObject arg0, jboolean arg1)
	{
		return callStaticObjectMethod(
			"java.util.stream.StreamSupport",
			"stream",
			"(Ljava/util/Spliterator;Z)Ljava/util/stream/Stream;",
			arg0.object(),
			arg1
		);
	}
	JObject StreamSupport::stream(JObject arg0, jint arg1, jboolean arg2)
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

