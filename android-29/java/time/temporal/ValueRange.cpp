#include "../../io/ObjectInputStream.hpp"
#include "./ValueRange.hpp"

namespace java::time::temporal
{
	// Fields
	
	// QJniObject forward
	ValueRange::ValueRange(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	java::time::temporal::ValueRange ValueRange::of(jlong arg0, jlong arg1)
	{
		return callStaticObjectMethod(
			"java.time.temporal.ValueRange",
			"of",
			"(JJ)Ljava/time/temporal/ValueRange;",
			arg0,
			arg1
		);
	}
	java::time::temporal::ValueRange ValueRange::of(jlong arg0, jlong arg1, jlong arg2)
	{
		return callStaticObjectMethod(
			"java.time.temporal.ValueRange",
			"of",
			"(JJJ)Ljava/time/temporal/ValueRange;",
			arg0,
			arg1,
			arg2
		);
	}
	java::time::temporal::ValueRange ValueRange::of(jlong arg0, jlong arg1, jlong arg2, jlong arg3)
	{
		return callStaticObjectMethod(
			"java.time.temporal.ValueRange",
			"of",
			"(JJJJ)Ljava/time/temporal/ValueRange;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jint ValueRange::checkValidIntValue(jlong arg0, __JniBaseClass arg1)
	{
		return callMethod<jint>(
			"checkValidIntValue",
			"(JLjava/time/temporal/TemporalField;)I",
			arg0,
			arg1.object()
		);
	}
	jlong ValueRange::checkValidValue(jlong arg0, __JniBaseClass arg1)
	{
		return callMethod<jlong>(
			"checkValidValue",
			"(JLjava/time/temporal/TemporalField;)J",
			arg0,
			arg1.object()
		);
	}
	jboolean ValueRange::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jlong ValueRange::getLargestMinimum()
	{
		return callMethod<jlong>(
			"getLargestMinimum",
			"()J"
		);
	}
	jlong ValueRange::getMaximum()
	{
		return callMethod<jlong>(
			"getMaximum",
			"()J"
		);
	}
	jlong ValueRange::getMinimum()
	{
		return callMethod<jlong>(
			"getMinimum",
			"()J"
		);
	}
	jlong ValueRange::getSmallestMaximum()
	{
		return callMethod<jlong>(
			"getSmallestMaximum",
			"()J"
		);
	}
	jint ValueRange::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean ValueRange::isFixed()
	{
		return callMethod<jboolean>(
			"isFixed",
			"()Z"
		);
	}
	jboolean ValueRange::isIntValue()
	{
		return callMethod<jboolean>(
			"isIntValue",
			"()Z"
		);
	}
	jboolean ValueRange::isValidIntValue(jlong arg0)
	{
		return callMethod<jboolean>(
			"isValidIntValue",
			"(J)Z",
			arg0
		);
	}
	jboolean ValueRange::isValidValue(jlong arg0)
	{
		return callMethod<jboolean>(
			"isValidValue",
			"(J)Z",
			arg0
		);
	}
	jstring ValueRange::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::time::temporal

