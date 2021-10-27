#include "../../../io/ObjectInputStream.hpp"
#include "./DoubleAdder.hpp"

namespace java::util::concurrent::atomic
{
	// Fields
	
	DoubleAdder::DoubleAdder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DoubleAdder::DoubleAdder()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.atomic.DoubleAdder",
			"()V"
		);
	}
	
	// Methods
	void DoubleAdder::add(jdouble arg0)
	{
		__thiz.callMethod<void>(
			"add",
			"(D)V",
			arg0
		);
	}
	jdouble DoubleAdder::doubleValue()
	{
		return __thiz.callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	jfloat DoubleAdder::floatValue()
	{
		return __thiz.callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	jint DoubleAdder::intValue()
	{
		return __thiz.callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	jlong DoubleAdder::longValue()
	{
		return __thiz.callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	void DoubleAdder::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	jdouble DoubleAdder::sum()
	{
		return __thiz.callMethod<jdouble>(
			"sum",
			"()D"
		);
	}
	jdouble DoubleAdder::sumThenReset()
	{
		return __thiz.callMethod<jdouble>(
			"sumThenReset",
			"()D"
		);
	}
	jstring DoubleAdder::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util::concurrent::atomic

