#include "../../../io/ObjectInputStream.hpp"
#include "./DoubleAccumulator.hpp"

namespace java::util::concurrent::atomic
{
	// Fields
	
	// QJniObject forward
	DoubleAccumulator::DoubleAccumulator(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	DoubleAccumulator::DoubleAccumulator(__JniBaseClass arg0, jdouble arg1)
		: __JniBaseClass(
			"java.util.concurrent.atomic.DoubleAccumulator",
			"(Ljava/util/function/DoubleBinaryOperator;D)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	void DoubleAccumulator::accumulate(jdouble arg0)
	{
		callMethod<void>(
			"accumulate",
			"(D)V",
			arg0
		);
	}
	jdouble DoubleAccumulator::doubleValue()
	{
		return callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	jfloat DoubleAccumulator::floatValue()
	{
		return callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	jdouble DoubleAccumulator::get()
	{
		return callMethod<jdouble>(
			"get",
			"()D"
		);
	}
	jdouble DoubleAccumulator::getThenReset()
	{
		return callMethod<jdouble>(
			"getThenReset",
			"()D"
		);
	}
	jint DoubleAccumulator::intValue()
	{
		return callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	jlong DoubleAccumulator::longValue()
	{
		return callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	void DoubleAccumulator::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	jstring DoubleAccumulator::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util::concurrent::atomic

