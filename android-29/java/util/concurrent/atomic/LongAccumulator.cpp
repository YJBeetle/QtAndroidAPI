#include "../../../io/ObjectInputStream.hpp"
#include "./LongAccumulator.hpp"

namespace java::util::concurrent::atomic
{
	// Fields
	
	LongAccumulator::LongAccumulator(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LongAccumulator::LongAccumulator(__JniBaseClass arg0, jlong arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.atomic.LongAccumulator",
			"(Ljava/util/function/LongBinaryOperator;J)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	void LongAccumulator::accumulate(jlong arg0)
	{
		__thiz.callMethod<void>(
			"accumulate",
			"(J)V",
			arg0
		);
	}
	jdouble LongAccumulator::doubleValue()
	{
		return __thiz.callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	jfloat LongAccumulator::floatValue()
	{
		return __thiz.callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	jlong LongAccumulator::get()
	{
		return __thiz.callMethod<jlong>(
			"get",
			"()J"
		);
	}
	jlong LongAccumulator::getThenReset()
	{
		return __thiz.callMethod<jlong>(
			"getThenReset",
			"()J"
		);
	}
	jint LongAccumulator::intValue()
	{
		return __thiz.callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	jlong LongAccumulator::longValue()
	{
		return __thiz.callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	void LongAccumulator::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	jstring LongAccumulator::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util::concurrent::atomic

