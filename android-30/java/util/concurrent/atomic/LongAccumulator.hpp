#pragma once

#include "../../../io/ObjectInputStream.def.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./LongAccumulator.def.hpp"

namespace java::util::concurrent::atomic
{
	// Fields
	
	// Constructors
	inline LongAccumulator::LongAccumulator(JObject arg0, jlong arg1)
		: JObject(
			"java.util.concurrent.atomic.LongAccumulator",
			"(Ljava/util/function/LongBinaryOperator;J)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	inline void LongAccumulator::accumulate(jlong arg0) const
	{
		callMethod<void>(
			"accumulate",
			"(J)V",
			arg0
		);
	}
	inline jdouble LongAccumulator::doubleValue() const
	{
		return callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	inline jfloat LongAccumulator::floatValue() const
	{
		return callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	inline jlong LongAccumulator::get() const
	{
		return callMethod<jlong>(
			"get",
			"()J"
		);
	}
	inline jlong LongAccumulator::getThenReset() const
	{
		return callMethod<jlong>(
			"getThenReset",
			"()J"
		);
	}
	inline jint LongAccumulator::intValue() const
	{
		return callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	inline jlong LongAccumulator::longValue() const
	{
		return callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	inline void LongAccumulator::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline JString LongAccumulator::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util::concurrent::atomic

// Base class headers
#include "../../../lang/Number.hpp"

