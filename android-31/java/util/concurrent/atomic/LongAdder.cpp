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
	void LongAdder::add(jlong arg0) const
	{
		callMethod<void>(
			"add",
			"(J)V",
			arg0
		);
	}
	void LongAdder::decrement() const
	{
		callMethod<void>(
			"decrement",
			"()V"
		);
	}
	jdouble LongAdder::doubleValue() const
	{
		return callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	jfloat LongAdder::floatValue() const
	{
		return callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	void LongAdder::increment() const
	{
		callMethod<void>(
			"increment",
			"()V"
		);
	}
	jint LongAdder::intValue() const
	{
		return callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	jlong LongAdder::longValue() const
	{
		return callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	void LongAdder::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	jlong LongAdder::sum() const
	{
		return callMethod<jlong>(
			"sum",
			"()J"
		);
	}
	jlong LongAdder::sumThenReset() const
	{
		return callMethod<jlong>(
			"sumThenReset",
			"()J"
		);
	}
	JString LongAdder::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util::concurrent::atomic

