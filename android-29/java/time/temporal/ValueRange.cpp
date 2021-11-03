#include "../../io/ObjectInputStream.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./ValueRange.hpp"

namespace java::time::temporal
{
	// Fields
	
	// QAndroidJniObject forward
	ValueRange::ValueRange(QAndroidJniObject obj) : JObject(obj) {}
	
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
	jint ValueRange::checkValidIntValue(jlong arg0, JObject arg1) const
	{
		return callMethod<jint>(
			"checkValidIntValue",
			"(JLjava/time/temporal/TemporalField;)I",
			arg0,
			arg1.object()
		);
	}
	jlong ValueRange::checkValidValue(jlong arg0, JObject arg1) const
	{
		return callMethod<jlong>(
			"checkValidValue",
			"(JLjava/time/temporal/TemporalField;)J",
			arg0,
			arg1.object()
		);
	}
	jboolean ValueRange::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jlong ValueRange::getLargestMinimum() const
	{
		return callMethod<jlong>(
			"getLargestMinimum",
			"()J"
		);
	}
	jlong ValueRange::getMaximum() const
	{
		return callMethod<jlong>(
			"getMaximum",
			"()J"
		);
	}
	jlong ValueRange::getMinimum() const
	{
		return callMethod<jlong>(
			"getMinimum",
			"()J"
		);
	}
	jlong ValueRange::getSmallestMaximum() const
	{
		return callMethod<jlong>(
			"getSmallestMaximum",
			"()J"
		);
	}
	jint ValueRange::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean ValueRange::isFixed() const
	{
		return callMethod<jboolean>(
			"isFixed",
			"()Z"
		);
	}
	jboolean ValueRange::isIntValue() const
	{
		return callMethod<jboolean>(
			"isIntValue",
			"()Z"
		);
	}
	jboolean ValueRange::isValidIntValue(jlong arg0) const
	{
		return callMethod<jboolean>(
			"isValidIntValue",
			"(J)Z",
			arg0
		);
	}
	jboolean ValueRange::isValidValue(jlong arg0) const
	{
		return callMethod<jboolean>(
			"isValidValue",
			"(J)Z",
			arg0
		);
	}
	JString ValueRange::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::time::temporal

