#pragma once

#include "../../../JArray.hpp"
#include "../../io/ObjectOutputStream.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../lang/Thread.def.hpp"
#include "../../security/AccessControlContext.def.hpp"
#include "./atomic/AtomicInteger.def.hpp"
#include "./atomic/AtomicLong.def.hpp"
#include "./ThreadLocalRandom.def.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::util::concurrent::ThreadLocalRandom ThreadLocalRandom::current()
	{
		return callStaticObjectMethod(
			"java.util.concurrent.ThreadLocalRandom",
			"current",
			"()Ljava/util/concurrent/ThreadLocalRandom;"
		);
	}
	inline JObject ThreadLocalRandom::doubles() const
	{
		return callObjectMethod(
			"doubles",
			"()Ljava/util/stream/DoubleStream;"
		);
	}
	inline JObject ThreadLocalRandom::doubles(jlong arg0) const
	{
		return callObjectMethod(
			"doubles",
			"(J)Ljava/util/stream/DoubleStream;",
			arg0
		);
	}
	inline JObject ThreadLocalRandom::doubles(jdouble arg0, jdouble arg1) const
	{
		return callObjectMethod(
			"doubles",
			"(DD)Ljava/util/stream/DoubleStream;",
			arg0,
			arg1
		);
	}
	inline JObject ThreadLocalRandom::doubles(jlong arg0, jdouble arg1, jdouble arg2) const
	{
		return callObjectMethod(
			"doubles",
			"(JDD)Ljava/util/stream/DoubleStream;",
			arg0,
			arg1,
			arg2
		);
	}
	inline JObject ThreadLocalRandom::ints() const
	{
		return callObjectMethod(
			"ints",
			"()Ljava/util/stream/IntStream;"
		);
	}
	inline JObject ThreadLocalRandom::ints(jlong arg0) const
	{
		return callObjectMethod(
			"ints",
			"(J)Ljava/util/stream/IntStream;",
			arg0
		);
	}
	inline JObject ThreadLocalRandom::ints(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"ints",
			"(II)Ljava/util/stream/IntStream;",
			arg0,
			arg1
		);
	}
	inline JObject ThreadLocalRandom::ints(jlong arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"ints",
			"(JII)Ljava/util/stream/IntStream;",
			arg0,
			arg1,
			arg2
		);
	}
	inline JObject ThreadLocalRandom::longs() const
	{
		return callObjectMethod(
			"longs",
			"()Ljava/util/stream/LongStream;"
		);
	}
	inline JObject ThreadLocalRandom::longs(jlong arg0) const
	{
		return callObjectMethod(
			"longs",
			"(J)Ljava/util/stream/LongStream;",
			arg0
		);
	}
	inline JObject ThreadLocalRandom::longs(jlong arg0, jlong arg1) const
	{
		return callObjectMethod(
			"longs",
			"(JJ)Ljava/util/stream/LongStream;",
			arg0,
			arg1
		);
	}
	inline JObject ThreadLocalRandom::longs(jlong arg0, jlong arg1, jlong arg2) const
	{
		return callObjectMethod(
			"longs",
			"(JJJ)Ljava/util/stream/LongStream;",
			arg0,
			arg1,
			arg2
		);
	}
	inline jboolean ThreadLocalRandom::nextBoolean() const
	{
		return callMethod<jboolean>(
			"nextBoolean",
			"()Z"
		);
	}
	inline jdouble ThreadLocalRandom::nextDouble() const
	{
		return callMethod<jdouble>(
			"nextDouble",
			"()D"
		);
	}
	inline jdouble ThreadLocalRandom::nextDouble(jdouble arg0) const
	{
		return callMethod<jdouble>(
			"nextDouble",
			"(D)D",
			arg0
		);
	}
	inline jdouble ThreadLocalRandom::nextDouble(jdouble arg0, jdouble arg1) const
	{
		return callMethod<jdouble>(
			"nextDouble",
			"(DD)D",
			arg0,
			arg1
		);
	}
	inline jfloat ThreadLocalRandom::nextFloat() const
	{
		return callMethod<jfloat>(
			"nextFloat",
			"()F"
		);
	}
	inline jfloat ThreadLocalRandom::nextFloat(jfloat arg0) const
	{
		return callMethod<jfloat>(
			"nextFloat",
			"(F)F",
			arg0
		);
	}
	inline jfloat ThreadLocalRandom::nextFloat(jfloat arg0, jfloat arg1) const
	{
		return callMethod<jfloat>(
			"nextFloat",
			"(FF)F",
			arg0,
			arg1
		);
	}
	inline jint ThreadLocalRandom::nextInt() const
	{
		return callMethod<jint>(
			"nextInt",
			"()I"
		);
	}
	inline jint ThreadLocalRandom::nextInt(jint arg0) const
	{
		return callMethod<jint>(
			"nextInt",
			"(I)I",
			arg0
		);
	}
	inline jint ThreadLocalRandom::nextInt(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"nextInt",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jlong ThreadLocalRandom::nextLong() const
	{
		return callMethod<jlong>(
			"nextLong",
			"()J"
		);
	}
	inline jlong ThreadLocalRandom::nextLong(jlong arg0) const
	{
		return callMethod<jlong>(
			"nextLong",
			"(J)J",
			arg0
		);
	}
	inline jlong ThreadLocalRandom::nextLong(jlong arg0, jlong arg1) const
	{
		return callMethod<jlong>(
			"nextLong",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	inline void ThreadLocalRandom::setSeed(jlong arg0) const
	{
		callMethod<void>(
			"setSeed",
			"(J)V",
			arg0
		);
	}
} // namespace java::util::concurrent

// Base class headers
#include "../Random.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::concurrent;
#endif
