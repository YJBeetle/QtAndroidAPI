#include "../../../io/ObjectInputStream.hpp"
#include "./DoubleAdder.hpp"

namespace java::util::concurrent::atomic
{
	// Fields
	
	// QJniObject forward
	DoubleAdder::DoubleAdder(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	DoubleAdder::DoubleAdder()
		: __JniBaseClass(
			"java.util.concurrent.atomic.DoubleAdder",
			"()V"
		) {}
	
	// Methods
	void DoubleAdder::add(jdouble arg0)
	{
		callMethod<void>(
			"add",
			"(D)V",
			arg0
		);
	}
	jdouble DoubleAdder::doubleValue()
	{
		return callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	jfloat DoubleAdder::floatValue()
	{
		return callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	jint DoubleAdder::intValue()
	{
		return callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	jlong DoubleAdder::longValue()
	{
		return callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	void DoubleAdder::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	jdouble DoubleAdder::sum()
	{
		return callMethod<jdouble>(
			"sum",
			"()D"
		);
	}
	jdouble DoubleAdder::sumThenReset()
	{
		return callMethod<jdouble>(
			"sumThenReset",
			"()D"
		);
	}
	jstring DoubleAdder::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util::concurrent::atomic

