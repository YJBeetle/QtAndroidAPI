#include "../../../io/ObjectInputStream.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./DoubleAccumulator.hpp"

namespace java::util::concurrent::atomic
{
	// Fields
	
	// Constructors
	DoubleAccumulator::DoubleAccumulator(JObject arg0, jdouble arg1)
		: JObject(
			"java.util.concurrent.atomic.DoubleAccumulator",
			"(Ljava/util/function/DoubleBinaryOperator;D)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	void DoubleAccumulator::accumulate(jdouble arg0) const
	{
		callMethod<void>(
			"accumulate",
			"(D)V",
			arg0
		);
	}
	jdouble DoubleAccumulator::doubleValue() const
	{
		return callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	jfloat DoubleAccumulator::floatValue() const
	{
		return callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	jdouble DoubleAccumulator::get() const
	{
		return callMethod<jdouble>(
			"get",
			"()D"
		);
	}
	jdouble DoubleAccumulator::getThenReset() const
	{
		return callMethod<jdouble>(
			"getThenReset",
			"()D"
		);
	}
	jint DoubleAccumulator::intValue() const
	{
		return callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	jlong DoubleAccumulator::longValue() const
	{
		return callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	void DoubleAccumulator::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	JString DoubleAccumulator::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util::concurrent::atomic

