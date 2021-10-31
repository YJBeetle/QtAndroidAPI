#include "../../../io/ObjectInputStream.hpp"
#include "./LongAdder.hpp"

namespace java::util::concurrent::atomic
{
	// Fields
	
	// QJniObject forward
	LongAdder::LongAdder(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	LongAdder::LongAdder()
		: __JniBaseClass(
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
	jstring LongAdder::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util::concurrent::atomic

