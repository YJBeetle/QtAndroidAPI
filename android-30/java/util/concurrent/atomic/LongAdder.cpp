#include "../../../io/ObjectInputStream.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./LongAdder.hpp"

namespace java::util::concurrent::atomic
{
	// Fields
	
	// QAndroidJniObject forward
	LongAdder::LongAdder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	LongAdder::LongAdder()
		: JObject(
			"java.util.concurrent.atomic.LongAdder",
			"()V"
		) {}
	
	// Methods
	void LongAdder::add(jlong arg0)
	{
		callMethod<void>(
			"add",
			"(J)V",
			arg0
		);
	}
	void LongAdder::decrement()
	{
		callMethod<void>(
			"decrement",
			"()V"
		);
	}
	jdouble LongAdder::doubleValue()
	{
		return callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	jfloat LongAdder::floatValue()
	{
		return callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	void LongAdder::increment()
	{
		callMethod<void>(
			"increment",
			"()V"
		);
	}
	jint LongAdder::intValue()
	{
		return callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	jlong LongAdder::longValue()
	{
		return callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	void LongAdder::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	jlong LongAdder::sum()
	{
		return callMethod<jlong>(
			"sum",
			"()J"
		);
	}
	jlong LongAdder::sumThenReset()
	{
		return callMethod<jlong>(
			"sumThenReset",
			"()J"
		);
	}
	JString LongAdder::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util::concurrent::atomic

