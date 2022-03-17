#pragma once

#include "../../JByteArray.hpp"
#include "../../JString.hpp"
#include "./concurrent/atomic/AtomicLong.def.hpp"
#include "./SplittableRandom.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	inline SplittableRandom::SplittableRandom()
		: JObject(
			"java.util.SplittableRandom",
			"()V"
		) {}
	inline SplittableRandom::SplittableRandom(jlong arg0)
		: JObject(
			"java.util.SplittableRandom",
			"(J)V",
			arg0
		) {}
	
	// Methods
	inline JObject SplittableRandom::doubles() const
	{
		return callObjectMethod(
			"doubles",
			"()Ljava/util/stream/DoubleStream;"
		);
	}
	inline JObject SplittableRandom::doubles(jlong arg0) const
	{
		return callObjectMethod(
			"doubles",
			"(J)Ljava/util/stream/DoubleStream;",
			arg0
		);
	}
	inline JObject SplittableRandom::doubles(jdouble arg0, jdouble arg1) const
	{
		return callObjectMethod(
			"doubles",
			"(DD)Ljava/util/stream/DoubleStream;",
			arg0,
			arg1
		);
	}
	inline JObject SplittableRandom::doubles(jlong arg0, jdouble arg1, jdouble arg2) const
	{
		return callObjectMethod(
			"doubles",
			"(JDD)Ljava/util/stream/DoubleStream;",
			arg0,
			arg1,
			arg2
		);
	}
	inline JObject SplittableRandom::ints() const
	{
		return callObjectMethod(
			"ints",
			"()Ljava/util/stream/IntStream;"
		);
	}
	inline JObject SplittableRandom::ints(jlong arg0) const
	{
		return callObjectMethod(
			"ints",
			"(J)Ljava/util/stream/IntStream;",
			arg0
		);
	}
	inline JObject SplittableRandom::ints(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"ints",
			"(II)Ljava/util/stream/IntStream;",
			arg0,
			arg1
		);
	}
	inline JObject SplittableRandom::ints(jlong arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"ints",
			"(JII)Ljava/util/stream/IntStream;",
			arg0,
			arg1,
			arg2
		);
	}
	inline JObject SplittableRandom::longs() const
	{
		return callObjectMethod(
			"longs",
			"()Ljava/util/stream/LongStream;"
		);
	}
	inline JObject SplittableRandom::longs(jlong arg0) const
	{
		return callObjectMethod(
			"longs",
			"(J)Ljava/util/stream/LongStream;",
			arg0
		);
	}
	inline JObject SplittableRandom::longs(jlong arg0, jlong arg1) const
	{
		return callObjectMethod(
			"longs",
			"(JJ)Ljava/util/stream/LongStream;",
			arg0,
			arg1
		);
	}
	inline JObject SplittableRandom::longs(jlong arg0, jlong arg1, jlong arg2) const
	{
		return callObjectMethod(
			"longs",
			"(JJJ)Ljava/util/stream/LongStream;",
			arg0,
			arg1,
			arg2
		);
	}
	inline jboolean SplittableRandom::nextBoolean() const
	{
		return callMethod<jboolean>(
			"nextBoolean",
			"()Z"
		);
	}
	inline void SplittableRandom::nextBytes(JByteArray arg0) const
	{
		callMethod<void>(
			"nextBytes",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	inline jdouble SplittableRandom::nextDouble() const
	{
		return callMethod<jdouble>(
			"nextDouble",
			"()D"
		);
	}
	inline jdouble SplittableRandom::nextDouble(jdouble arg0) const
	{
		return callMethod<jdouble>(
			"nextDouble",
			"(D)D",
			arg0
		);
	}
	inline jdouble SplittableRandom::nextDouble(jdouble arg0, jdouble arg1) const
	{
		return callMethod<jdouble>(
			"nextDouble",
			"(DD)D",
			arg0,
			arg1
		);
	}
	inline jint SplittableRandom::nextInt() const
	{
		return callMethod<jint>(
			"nextInt",
			"()I"
		);
	}
	inline jint SplittableRandom::nextInt(jint arg0) const
	{
		return callMethod<jint>(
			"nextInt",
			"(I)I",
			arg0
		);
	}
	inline jint SplittableRandom::nextInt(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"nextInt",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jlong SplittableRandom::nextLong() const
	{
		return callMethod<jlong>(
			"nextLong",
			"()J"
		);
	}
	inline jlong SplittableRandom::nextLong(jlong arg0) const
	{
		return callMethod<jlong>(
			"nextLong",
			"(J)J",
			arg0
		);
	}
	inline jlong SplittableRandom::nextLong(jlong arg0, jlong arg1) const
	{
		return callMethod<jlong>(
			"nextLong",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	inline java::util::SplittableRandom SplittableRandom::split() const
	{
		return callObjectMethod(
			"split",
			"()Ljava/util/SplittableRandom;"
		);
	}
} // namespace java::util

// Base class headers

