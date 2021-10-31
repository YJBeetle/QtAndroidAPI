#include "../../../io/ObjectInputStream.hpp"
#include "./DoubleAccumulator.hpp"

namespace java::util::concurrent::atomic
{
	// Fields
	
	DoubleAccumulator::DoubleAccumulator(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DoubleAccumulator::DoubleAccumulator(__JniBaseClass arg0, jdouble arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.atomic.DoubleAccumulator",
			"(Ljava/util/function/DoubleBinaryOperator;D)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	void DoubleAccumulator::accumulate(jdouble arg0)
	{
		__thiz.callMethod<void>(
			"accumulate",
			"(D)V",
			arg0
		);
	}
	jdouble DoubleAccumulator::doubleValue()
	{
		return __thiz.callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	jfloat DoubleAccumulator::floatValue()
	{
		return __thiz.callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	jdouble DoubleAccumulator::get()
	{
		return __thiz.callMethod<jdouble>(
			"get",
			"()D"
		);
	}
	jdouble DoubleAccumulator::getThenReset()
	{
		return __thiz.callMethod<jdouble>(
			"getThenReset",
			"()D"
		);
	}
	jint DoubleAccumulator::intValue()
	{
		return __thiz.callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	jlong DoubleAccumulator::longValue()
	{
		return __thiz.callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	void DoubleAccumulator::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	jstring DoubleAccumulator::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util::concurrent::atomic

