#pragma once

#include "../../JByteArray.hpp"
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
	inline void SplittableRandom::nextBytes(JByteArray arg0) const
	{
		callMethod<void>(
			"nextBytes",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	inline jint SplittableRandom::nextInt() const
	{
		return callMethod<jint>(
			"nextInt",
			"()I"
		);
	}
	inline jlong SplittableRandom::nextLong() const
	{
		return callMethod<jlong>(
			"nextLong",
			"()J"
		);
	}
	inline java::util::SplittableRandom SplittableRandom::split() const
	{
		return callObjectMethod(
			"split",
			"()Ljava/util/SplittableRandom;"
		);
	}
	inline java::util::SplittableRandom SplittableRandom::split(JObject arg0) const
	{
		return callObjectMethod(
			"split",
			"(Ljava/util/random/RandomGenerator$SplittableGenerator;)Ljava/util/SplittableRandom;",
			arg0.object()
		);
	}
	inline JObject SplittableRandom::splits() const
	{
		return callObjectMethod(
			"splits",
			"()Ljava/util/stream/Stream;"
		);
	}
	inline JObject SplittableRandom::splits(JObject arg0) const
	{
		return callObjectMethod(
			"splits",
			"(Ljava/util/random/RandomGenerator$SplittableGenerator;)Ljava/util/stream/Stream;",
			arg0.object()
		);
	}
	inline JObject SplittableRandom::splits(jlong arg0) const
	{
		return callObjectMethod(
			"splits",
			"(J)Ljava/util/stream/Stream;",
			arg0
		);
	}
	inline JObject SplittableRandom::splits(jlong arg0, JObject arg1) const
	{
		return callObjectMethod(
			"splits",
			"(JLjava/util/random/RandomGenerator$SplittableGenerator;)Ljava/util/stream/Stream;",
			arg0,
			arg1.object()
		);
	}
} // namespace java::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util;
#endif
