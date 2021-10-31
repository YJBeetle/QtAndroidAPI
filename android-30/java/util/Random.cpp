#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "./concurrent/atomic/AtomicLong.hpp"
#include "./Random.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	Random::Random(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Random::Random()
		: __JniBaseClass(
			"java.util.Random",
			"()V"
		) {}
	Random::Random(jlong arg0)
		: __JniBaseClass(
			"java.util.Random",
			"(J)V",
			arg0
		) {}
	
	// Methods
	__JniBaseClass Random::doubles()
	{
		return callObjectMethod(
			"doubles",
			"()Ljava/util/stream/DoubleStream;"
		);
	}
	__JniBaseClass Random::doubles(jlong arg0)
	{
		return callObjectMethod(
			"doubles",
			"(J)Ljava/util/stream/DoubleStream;",
			arg0
		);
	}
	__JniBaseClass Random::doubles(jdouble arg0, jdouble arg1)
	{
		return callObjectMethod(
			"doubles",
			"(DD)Ljava/util/stream/DoubleStream;",
			arg0,
			arg1
		);
	}
	__JniBaseClass Random::doubles(jlong arg0, jdouble arg1, jdouble arg2)
	{
		return callObjectMethod(
			"doubles",
			"(JDD)Ljava/util/stream/DoubleStream;",
			arg0,
			arg1,
			arg2
		);
	}
	__JniBaseClass Random::ints()
	{
		return callObjectMethod(
			"ints",
			"()Ljava/util/stream/IntStream;"
		);
	}
	__JniBaseClass Random::ints(jlong arg0)
	{
		return callObjectMethod(
			"ints",
			"(J)Ljava/util/stream/IntStream;",
			arg0
		);
	}
	__JniBaseClass Random::ints(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"ints",
			"(II)Ljava/util/stream/IntStream;",
			arg0,
			arg1
		);
	}
	__JniBaseClass Random::ints(jlong arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"ints",
			"(JII)Ljava/util/stream/IntStream;",
			arg0,
			arg1,
			arg2
		);
	}
	__JniBaseClass Random::longs()
	{
		return callObjectMethod(
			"longs",
			"()Ljava/util/stream/LongStream;"
		);
	}
	__JniBaseClass Random::longs(jlong arg0)
	{
		return callObjectMethod(
			"longs",
			"(J)Ljava/util/stream/LongStream;",
			arg0
		);
	}
	__JniBaseClass Random::longs(jlong arg0, jlong arg1)
	{
		return callObjectMethod(
			"longs",
			"(JJ)Ljava/util/stream/LongStream;",
			arg0,
			arg1
		);
	}
	__JniBaseClass Random::longs(jlong arg0, jlong arg1, jlong arg2)
	{
		return callObjectMethod(
			"longs",
			"(JJJ)Ljava/util/stream/LongStream;",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean Random::nextBoolean()
	{
		return callMethod<jboolean>(
			"nextBoolean",
			"()Z"
		);
	}
	void Random::nextBytes(jbyteArray arg0)
	{
		callMethod<void>(
			"nextBytes",
			"([B)V",
			arg0
		);
	}
	jdouble Random::nextDouble()
	{
		return callMethod<jdouble>(
			"nextDouble",
			"()D"
		);
	}
	jfloat Random::nextFloat()
	{
		return callMethod<jfloat>(
			"nextFloat",
			"()F"
		);
	}
	jdouble Random::nextGaussian()
	{
		return callMethod<jdouble>(
			"nextGaussian",
			"()D"
		);
	}
	jint Random::nextInt()
	{
		return callMethod<jint>(
			"nextInt",
			"()I"
		);
	}
	jint Random::nextInt(jint arg0)
	{
		return callMethod<jint>(
			"nextInt",
			"(I)I",
			arg0
		);
	}
	jlong Random::nextLong()
	{
		return callMethod<jlong>(
			"nextLong",
			"()J"
		);
	}
	void Random::setSeed(jlong arg0)
	{
		callMethod<void>(
			"setSeed",
			"(J)V",
			arg0
		);
	}
} // namespace java::util

