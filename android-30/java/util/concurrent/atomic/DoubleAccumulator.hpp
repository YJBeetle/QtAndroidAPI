#pragma once

#include "../../../io/ObjectInputStream.def.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./DoubleAccumulator.def.hpp"

namespace java::util::concurrent::atomic
{
	// Fields
	
	// Constructors
	inline DoubleAccumulator::DoubleAccumulator(JObject arg0, jdouble arg1)
		: JObject(
			"java.util.concurrent.atomic.DoubleAccumulator",
			"(Ljava/util/function/DoubleBinaryOperator;D)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	inline void DoubleAccumulator::accumulate(jdouble arg0) const
	{
		callMethod<void>(
			"accumulate",
			"(D)V",
			arg0
		);
	}
	inline jdouble DoubleAccumulator::doubleValue() const
	{
		return callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	inline jfloat DoubleAccumulator::floatValue() const
	{
		return callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	inline jdouble DoubleAccumulator::get() const
	{
		return callMethod<jdouble>(
			"get",
			"()D"
		);
	}
	inline jdouble DoubleAccumulator::getThenReset() const
	{
		return callMethod<jdouble>(
			"getThenReset",
			"()D"
		);
	}
	inline jint DoubleAccumulator::intValue() const
	{
		return callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	inline jlong DoubleAccumulator::longValue() const
	{
		return callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	inline void DoubleAccumulator::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline JString DoubleAccumulator::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util::concurrent::atomic

// Base class headers
#include "../../../lang/Number.hpp"

