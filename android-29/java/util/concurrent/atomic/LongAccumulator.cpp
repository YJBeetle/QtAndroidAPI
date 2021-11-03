#include "../../../io/ObjectInputStream.hpp"
#include "./LongAccumulator.hpp"

namespace java::util::concurrent::atomic
{
	// Fields
	
	// QJniObject forward
	LongAccumulator::LongAccumulator(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	LongAccumulator::LongAccumulator(JObject arg0, jlong arg1)
		: JObject(
			"java.util.concurrent.atomic.LongAccumulator",
			"(Ljava/util/function/LongBinaryOperator;J)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	void LongAccumulator::accumulate(jlong arg0)
	{
		callMethod<void>(
			"accumulate",
			"(J)V",
			arg0
		);
	}
	jdouble LongAccumulator::doubleValue()
	{
		return callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	jfloat LongAccumulator::floatValue()
	{
		return callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	jlong LongAccumulator::get()
	{
		return callMethod<jlong>(
			"get",
			"()J"
		);
	}
	jlong LongAccumulator::getThenReset()
	{
		return callMethod<jlong>(
			"getThenReset",
			"()J"
		);
	}
	jint LongAccumulator::intValue()
	{
		return callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	jlong LongAccumulator::longValue()
	{
		return callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	void LongAccumulator::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	jstring LongAccumulator::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util::concurrent::atomic

