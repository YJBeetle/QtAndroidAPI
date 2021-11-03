#include "../../../io/ObjectInputStream.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./DoubleAdder.hpp"

namespace java::util::concurrent::atomic
{
	// Fields
	
	// QAndroidJniObject forward
	DoubleAdder::DoubleAdder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	DoubleAdder::DoubleAdder()
		: JObject(
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
	JString DoubleAdder::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util::concurrent::atomic

