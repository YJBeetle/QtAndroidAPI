#pragma once

#include "../../JByteArray.hpp"
#include "../../JArray.hpp"
#include "../io/ObjectInputStream.def.hpp"
#include "../io/ObjectOutputStream.def.hpp"
#include "../../JString.hpp"
#include "./concurrent/atomic/AtomicLong.def.hpp"
#include "./Random.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	inline Random::Random()
		: JObject(
			"java.util.Random",
			"()V"
		) {}
	inline Random::Random(jlong arg0)
		: JObject(
			"java.util.Random",
			"(J)V",
			arg0
		) {}
	
	// Methods
	inline JObject Random::doubles() const
	{
		return callObjectMethod(
			"doubles",
			"()Ljava/util/stream/DoubleStream;"
		);
	}
	inline JObject Random::doubles(jlong arg0) const
	{
		return callObjectMethod(
			"doubles",
			"(J)Ljava/util/stream/DoubleStream;",
			arg0
		);
	}
	inline JObject Random::doubles(jdouble arg0, jdouble arg1) const
	{
		return callObjectMethod(
			"doubles",
			"(DD)Ljava/util/stream/DoubleStream;",
			arg0,
			arg1
		);
	}
	inline JObject Random::doubles(jlong arg0, jdouble arg1, jdouble arg2) const
	{
		return callObjectMethod(
			"doubles",
			"(JDD)Ljava/util/stream/DoubleStream;",
			arg0,
			arg1,
			arg2
		);
	}
	inline JObject Random::ints() const
	{
		return callObjectMethod(
			"ints",
			"()Ljava/util/stream/IntStream;"
		);
	}
	inline JObject Random::ints(jlong arg0) const
	{
		return callObjectMethod(
			"ints",
			"(J)Ljava/util/stream/IntStream;",
			arg0
		);
	}
	inline JObject Random::ints(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"ints",
			"(II)Ljava/util/stream/IntStream;",
			arg0,
			arg1
		);
	}
	inline JObject Random::ints(jlong arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"ints",
			"(JII)Ljava/util/stream/IntStream;",
			arg0,
			arg1,
			arg2
		);
	}
	inline JObject Random::longs() const
	{
		return callObjectMethod(
			"longs",
			"()Ljava/util/stream/LongStream;"
		);
	}
	inline JObject Random::longs(jlong arg0) const
	{
		return callObjectMethod(
			"longs",
			"(J)Ljava/util/stream/LongStream;",
			arg0
		);
	}
	inline JObject Random::longs(jlong arg0, jlong arg1) const
	{
		return callObjectMethod(
			"longs",
			"(JJ)Ljava/util/stream/LongStream;",
			arg0,
			arg1
		);
	}
	inline JObject Random::longs(jlong arg0, jlong arg1, jlong arg2) const
	{
		return callObjectMethod(
			"longs",
			"(JJJ)Ljava/util/stream/LongStream;",
			arg0,
			arg1,
			arg2
		);
	}
	inline jboolean Random::nextBoolean() const
	{
		return callMethod<jboolean>(
			"nextBoolean",
			"()Z"
		);
	}
	inline void Random::nextBytes(JByteArray arg0) const
	{
		callMethod<void>(
			"nextBytes",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	inline jdouble Random::nextDouble() const
	{
		return callMethod<jdouble>(
			"nextDouble",
			"()D"
		);
	}
	inline jfloat Random::nextFloat() const
	{
		return callMethod<jfloat>(
			"nextFloat",
			"()F"
		);
	}
	inline jdouble Random::nextGaussian() const
	{
		return callMethod<jdouble>(
			"nextGaussian",
			"()D"
		);
	}
	inline jint Random::nextInt() const
	{
		return callMethod<jint>(
			"nextInt",
			"()I"
		);
	}
	inline jint Random::nextInt(jint arg0) const
	{
		return callMethod<jint>(
			"nextInt",
			"(I)I",
			arg0
		);
	}
	inline jlong Random::nextLong() const
	{
		return callMethod<jlong>(
			"nextLong",
			"()J"
		);
	}
	inline void Random::setSeed(jlong arg0) const
	{
		callMethod<void>(
			"setSeed",
			"(J)V",
			arg0
		);
	}
} // namespace java::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util;
#endif
