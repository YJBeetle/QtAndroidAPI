#include "./StreamSupport.hpp"

namespace java::util::stream
{
	// Fields
	
	StreamSupport::StreamSupport(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject StreamSupport::doubleStream(__JniBaseClass arg0, jboolean arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.StreamSupport",
			"doubleStream",
			"(Ljava/util/Spliterator$OfDouble;Z)Ljava/util/stream/DoubleStream;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject StreamSupport::doubleStream(__JniBaseClass arg0, jint arg1, jboolean arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.StreamSupport",
			"doubleStream",
			"(Ljava/util/function/Supplier;IZ)Ljava/util/stream/DoubleStream;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject StreamSupport::intStream(__JniBaseClass arg0, jboolean arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.StreamSupport",
			"intStream",
			"(Ljava/util/Spliterator$OfInt;Z)Ljava/util/stream/IntStream;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject StreamSupport::intStream(__JniBaseClass arg0, jint arg1, jboolean arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.StreamSupport",
			"intStream",
			"(Ljava/util/function/Supplier;IZ)Ljava/util/stream/IntStream;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject StreamSupport::longStream(__JniBaseClass arg0, jboolean arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.StreamSupport",
			"longStream",
			"(Ljava/util/Spliterator$OfLong;Z)Ljava/util/stream/LongStream;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject StreamSupport::longStream(__JniBaseClass arg0, jint arg1, jboolean arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.StreamSupport",
			"longStream",
			"(Ljava/util/function/Supplier;IZ)Ljava/util/stream/LongStream;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject StreamSupport::stream(__JniBaseClass arg0, jboolean arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.StreamSupport",
			"stream",
			"(Ljava/util/Spliterator;Z)Ljava/util/stream/Stream;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject StreamSupport::stream(__JniBaseClass arg0, jint arg1, jboolean arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.stream.StreamSupport",
			"stream",
			"(Ljava/util/function/Supplier;IZ)Ljava/util/stream/Stream;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
} // namespace java::util::stream

