#include "./concurrent/atomic/AtomicLong.hpp"
#include "./SplittableRandom.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	SplittableRandom::SplittableRandom(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	SplittableRandom::SplittableRandom()
		: JObject(
			"java.util.SplittableRandom",
			"()V"
		) {}
	SplittableRandom::SplittableRandom(jlong arg0)
		: JObject(
			"java.util.SplittableRandom",
			"(J)V",
			arg0
		) {}
	
	// Methods
	JObject SplittableRandom::doubles()
	{
		return callObjectMethod(
			"doubles",
			"()Ljava/util/stream/DoubleStream;"
		);
	}
	JObject SplittableRandom::doubles(jlong arg0)
	{
		return callObjectMethod(
			"doubles",
			"(J)Ljava/util/stream/DoubleStream;",
			arg0
		);
	}
	JObject SplittableRandom::doubles(jdouble arg0, jdouble arg1)
	{
		return callObjectMethod(
			"doubles",
			"(DD)Ljava/util/stream/DoubleStream;",
			arg0,
			arg1
		);
	}
	JObject SplittableRandom::doubles(jlong arg0, jdouble arg1, jdouble arg2)
	{
		return callObjectMethod(
			"doubles",
			"(JDD)Ljava/util/stream/DoubleStream;",
			arg0,
			arg1,
			arg2
		);
	}
	JObject SplittableRandom::ints()
	{
		return callObjectMethod(
			"ints",
			"()Ljava/util/stream/IntStream;"
		);
	}
	JObject SplittableRandom::ints(jlong arg0)
	{
		return callObjectMethod(
			"ints",
			"(J)Ljava/util/stream/IntStream;",
			arg0
		);
	}
	JObject SplittableRandom::ints(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"ints",
			"(II)Ljava/util/stream/IntStream;",
			arg0,
			arg1
		);
	}
	JObject SplittableRandom::ints(jlong arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"ints",
			"(JII)Ljava/util/stream/IntStream;",
			arg0,
			arg1,
			arg2
		);
	}
	JObject SplittableRandom::longs()
	{
		return callObjectMethod(
			"longs",
			"()Ljava/util/stream/LongStream;"
		);
	}
	JObject SplittableRandom::longs(jlong arg0)
	{
		return callObjectMethod(
			"longs",
			"(J)Ljava/util/stream/LongStream;",
			arg0
		);
	}
	JObject SplittableRandom::longs(jlong arg0, jlong arg1)
	{
		return callObjectMethod(
			"longs",
			"(JJ)Ljava/util/stream/LongStream;",
			arg0,
			arg1
		);
	}
	JObject SplittableRandom::longs(jlong arg0, jlong arg1, jlong arg2)
	{
		return callObjectMethod(
			"longs",
			"(JJJ)Ljava/util/stream/LongStream;",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean SplittableRandom::nextBoolean()
	{
		return callMethod<jboolean>(
			"nextBoolean",
			"()Z"
		);
	}
	void SplittableRandom::nextBytes(jbyteArray arg0)
	{
		callMethod<void>(
			"nextBytes",
			"([B)V",
			arg0
		);
	}
	jdouble SplittableRandom::nextDouble()
	{
		return callMethod<jdouble>(
			"nextDouble",
			"()D"
		);
	}
	jdouble SplittableRandom::nextDouble(jdouble arg0)
	{
		return callMethod<jdouble>(
			"nextDouble",
			"(D)D",
			arg0
		);
	}
	jdouble SplittableRandom::nextDouble(jdouble arg0, jdouble arg1)
	{
		return callMethod<jdouble>(
			"nextDouble",
			"(DD)D",
			arg0,
			arg1
		);
	}
	jint SplittableRandom::nextInt()
	{
		return callMethod<jint>(
			"nextInt",
			"()I"
		);
	}
	jint SplittableRandom::nextInt(jint arg0)
	{
		return callMethod<jint>(
			"nextInt",
			"(I)I",
			arg0
		);
	}
	jint SplittableRandom::nextInt(jint arg0, jint arg1)
	{
		return callMethod<jint>(
			"nextInt",
			"(II)I",
			arg0,
			arg1
		);
	}
	jlong SplittableRandom::nextLong()
	{
		return callMethod<jlong>(
			"nextLong",
			"()J"
		);
	}
	jlong SplittableRandom::nextLong(jlong arg0)
	{
		return callMethod<jlong>(
			"nextLong",
			"(J)J",
			arg0
		);
	}
	jlong SplittableRandom::nextLong(jlong arg0, jlong arg1)
	{
		return callMethod<jlong>(
			"nextLong",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	java::util::SplittableRandom SplittableRandom::split()
	{
		return callObjectMethod(
			"split",
			"()Ljava/util/SplittableRandom;"
		);
	}
} // namespace java::util

