#include "./StreamSupport.hpp"

namespace java::util::stream
{
	// Fields
	
	// QJniObject forward
	StreamSupport::StreamSupport(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass StreamSupport::doubleStream(__JniBaseClass arg0, jboolean arg1)
	{
		return callStaticObjectMethod(
			"java.util.stream.StreamSupport",
			"doubleStream",
			"(Ljava/util/Spliterator$OfDouble;Z)Ljava/util/stream/DoubleStream;",
			arg0.object(),
			arg1
		);
	}
	__JniBaseClass StreamSupport::doubleStream(__JniBaseClass arg0, jint arg1, jboolean arg2)
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
	__JniBaseClass StreamSupport::intStream(__JniBaseClass arg0, jboolean arg1)
	{
		return callStaticObjectMethod(
			"java.util.stream.StreamSupport",
			"intStream",
			"(Ljava/util/Spliterator$OfInt;Z)Ljava/util/stream/IntStream;",
			arg0.object(),
			arg1
		);
	}
	__JniBaseClass StreamSupport::intStream(__JniBaseClass arg0, jint arg1, jboolean arg2)
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
	__JniBaseClass StreamSupport::longStream(__JniBaseClass arg0, jboolean arg1)
	{
		return callStaticObjectMethod(
			"java.util.stream.StreamSupport",
			"longStream",
			"(Ljava/util/Spliterator$OfLong;Z)Ljava/util/stream/LongStream;",
			arg0.object(),
			arg1
		);
	}
	__JniBaseClass StreamSupport::longStream(__JniBaseClass arg0, jint arg1, jboolean arg2)
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
	__JniBaseClass StreamSupport::stream(__JniBaseClass arg0, jboolean arg1)
	{
		return callStaticObjectMethod(
			"java.util.stream.StreamSupport",
			"stream",
			"(Ljava/util/Spliterator;Z)Ljava/util/stream/Stream;",
			arg0.object(),
			arg1
		);
	}
	__JniBaseClass StreamSupport::stream(__JniBaseClass arg0, jint arg1, jboolean arg2)
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

