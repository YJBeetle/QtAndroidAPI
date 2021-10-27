#include "../../../io/ObjectInputStream.hpp"
#include "./LongAdder.hpp"

namespace java::util::concurrent::atomic
{
	// Fields
	
	LongAdder::LongAdder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LongAdder::LongAdder()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.atomic.LongAdder",
			"()V"
		);
	}
	
	// Methods
	void LongAdder::add(jlong arg0)
	{
		__thiz.callMethod<void>(
			"add",
			"(J)V",
			arg0
		);
	}
	void LongAdder::decrement()
	{
		__thiz.callMethod<void>(
			"decrement",
			"()V"
		);
	}
	jdouble LongAdder::doubleValue()
	{
		return __thiz.callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	jfloat LongAdder::floatValue()
	{
		return __thiz.callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	void LongAdder::increment()
	{
		__thiz.callMethod<void>(
			"increment",
			"()V"
		);
	}
	jint LongAdder::intValue()
	{
		return __thiz.callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	jlong LongAdder::longValue()
	{
		return __thiz.callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	void LongAdder::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	jlong LongAdder::sum()
	{
		return __thiz.callMethod<jlong>(
			"sum",
			"()J"
		);
	}
	jlong LongAdder::sumThenReset()
	{
		return __thiz.callMethod<jlong>(
			"sumThenReset",
			"()J"
		);
	}
	jstring LongAdder::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util::concurrent::atomic

