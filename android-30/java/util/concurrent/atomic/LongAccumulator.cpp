#include "../../../io/ObjectInputStream.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./LongAccumulator.hpp"

namespace java::util::concurrent::atomic
{
	// Fields
	
	// QAndroidJniObject forward
	LongAccumulator::LongAccumulator(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	LongAccumulator::LongAccumulator(JObject arg0, jlong arg1)
		: JObject(
			"java.util.concurrent.atomic.LongAccumulator",
			"(Ljava/util/function/LongBinaryOperator;J)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	void LongAccumulator::accumulate(jlong arg0) const
	{
		callMethod<void>(
			"accumulate",
			"(J)V",
			arg0
		);
	}
	jdouble LongAccumulator::doubleValue() const
	{
		return callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	jfloat LongAccumulator::floatValue() const
	{
		return callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	jlong LongAccumulator::get() const
	{
		return callMethod<jlong>(
			"get",
			"()J"
		);
	}
	jlong LongAccumulator::getThenReset() const
	{
		return callMethod<jlong>(
			"getThenReset",
			"()J"
		);
	}
	jint LongAccumulator::intValue() const
	{
		return callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	jlong LongAccumulator::longValue() const
	{
		return callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	void LongAccumulator::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	JString LongAccumulator::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util::concurrent::atomic

