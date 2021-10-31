#include "../../io/ObjectOutputStream.hpp"
#include "../../lang/Thread.hpp"
#include "../../lang/ThreadLocal.hpp"
#include "../../security/AccessControlContext.hpp"
#include "./atomic/AtomicInteger.hpp"
#include "./atomic/AtomicLong.hpp"
#include "./ThreadLocalRandom.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QAndroidJniObject forward
	ThreadLocalRandom::ThreadLocalRandom(QAndroidJniObject obj) : java::util::Random(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject ThreadLocalRandom::current()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.ThreadLocalRandom",
			"current",
			"()Ljava/util/concurrent/ThreadLocalRandom;"
		);
	}
	QAndroidJniObject ThreadLocalRandom::doubles()
	{
		return callObjectMethod(
			"doubles",
			"()Ljava/util/stream/DoubleStream;"
		);
	}
	QAndroidJniObject ThreadLocalRandom::doubles(jlong arg0)
	{
		return callObjectMethod(
			"doubles",
			"(J)Ljava/util/stream/DoubleStream;",
			arg0
		);
	}
	QAndroidJniObject ThreadLocalRandom::doubles(jdouble arg0, jdouble arg1)
	{
		return callObjectMethod(
			"doubles",
			"(DD)Ljava/util/stream/DoubleStream;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ThreadLocalRandom::doubles(jlong arg0, jdouble arg1, jdouble arg2)
	{
		return callObjectMethod(
			"doubles",
			"(JDD)Ljava/util/stream/DoubleStream;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject ThreadLocalRandom::ints()
	{
		return callObjectMethod(
			"ints",
			"()Ljava/util/stream/IntStream;"
		);
	}
	QAndroidJniObject ThreadLocalRandom::ints(jlong arg0)
	{
		return callObjectMethod(
			"ints",
			"(J)Ljava/util/stream/IntStream;",
			arg0
		);
	}
	QAndroidJniObject ThreadLocalRandom::ints(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"ints",
			"(II)Ljava/util/stream/IntStream;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ThreadLocalRandom::ints(jlong arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"ints",
			"(JII)Ljava/util/stream/IntStream;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject ThreadLocalRandom::longs()
	{
		return callObjectMethod(
			"longs",
			"()Ljava/util/stream/LongStream;"
		);
	}
	QAndroidJniObject ThreadLocalRandom::longs(jlong arg0)
	{
		return callObjectMethod(
			"longs",
			"(J)Ljava/util/stream/LongStream;",
			arg0
		);
	}
	QAndroidJniObject ThreadLocalRandom::longs(jlong arg0, jlong arg1)
	{
		return callObjectMethod(
			"longs",
			"(JJ)Ljava/util/stream/LongStream;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ThreadLocalRandom::longs(jlong arg0, jlong arg1, jlong arg2)
	{
		return callObjectMethod(
			"longs",
			"(JJJ)Ljava/util/stream/LongStream;",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean ThreadLocalRandom::nextBoolean()
	{
		return callMethod<jboolean>(
			"nextBoolean",
			"()Z"
		);
	}
	jdouble ThreadLocalRandom::nextDouble()
	{
		return callMethod<jdouble>(
			"nextDouble",
			"()D"
		);
	}
	jdouble ThreadLocalRandom::nextDouble(jdouble arg0)
	{
		return callMethod<jdouble>(
			"nextDouble",
			"(D)D",
			arg0
		);
	}
	jdouble ThreadLocalRandom::nextDouble(jdouble arg0, jdouble arg1)
	{
		return callMethod<jdouble>(
			"nextDouble",
			"(DD)D",
			arg0,
			arg1
		);
	}
	jfloat ThreadLocalRandom::nextFloat()
	{
		return callMethod<jfloat>(
			"nextFloat",
			"()F"
		);
	}
	jdouble ThreadLocalRandom::nextGaussian()
	{
		return callMethod<jdouble>(
			"nextGaussian",
			"()D"
		);
	}
	jint ThreadLocalRandom::nextInt()
	{
		return callMethod<jint>(
			"nextInt",
			"()I"
		);
	}
	jint ThreadLocalRandom::nextInt(jint arg0)
	{
		return callMethod<jint>(
			"nextInt",
			"(I)I",
			arg0
		);
	}
	jint ThreadLocalRandom::nextInt(jint arg0, jint arg1)
	{
		return callMethod<jint>(
			"nextInt",
			"(II)I",
			arg0,
			arg1
		);
	}
	jlong ThreadLocalRandom::nextLong()
	{
		return callMethod<jlong>(
			"nextLong",
			"()J"
		);
	}
	jlong ThreadLocalRandom::nextLong(jlong arg0)
	{
		return callMethod<jlong>(
			"nextLong",
			"(J)J",
			arg0
		);
	}
	jlong ThreadLocalRandom::nextLong(jlong arg0, jlong arg1)
	{
		return callMethod<jlong>(
			"nextLong",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	void ThreadLocalRandom::setSeed(jlong arg0)
	{
		callMethod<void>(
			"setSeed",
			"(J)V",
			arg0
		);
	}
} // namespace java::util::concurrent
