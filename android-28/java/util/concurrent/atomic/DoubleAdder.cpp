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
	void DoubleAdder::add(jdouble arg0) const
	{
		callMethod<void>(
			"add",
			"(D)V",
			arg0
		);
	}
	jdouble DoubleAdder::doubleValue() const
	{
		return callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	jfloat DoubleAdder::floatValue() const
	{
		return callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	jint DoubleAdder::intValue() const
	{
		return callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	jlong DoubleAdder::longValue() const
	{
		return callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	void DoubleAdder::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	jdouble DoubleAdder::sum() const
	{
		return callMethod<jdouble>(
			"sum",
			"()D"
		);
	}
	jdouble DoubleAdder::sumThenReset() const
	{
		return callMethod<jdouble>(
			"sumThenReset",
			"()D"
		);
	}
	JString DoubleAdder::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util::concurrent::atomic

