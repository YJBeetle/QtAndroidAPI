#pragma once

#include "../../io/ObjectInputStream.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./ValueRange.def.hpp"

namespace java::time::temporal
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::time::temporal::ValueRange ValueRange::of(jlong arg0, jlong arg1)
	{
		return callStaticObjectMethod(
			"java.time.temporal.ValueRange",
			"of",
			"(JJ)Ljava/time/temporal/ValueRange;",
			arg0,
			arg1
		);
	}
	inline java::time::temporal::ValueRange ValueRange::of(jlong arg0, jlong arg1, jlong arg2)
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
	inline java::time::temporal::ValueRange ValueRange::of(jlong arg0, jlong arg1, jlong arg2, jlong arg3)
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
	inline jint ValueRange::checkValidIntValue(jlong arg0, JObject arg1) const
	{
		return callMethod<jint>(
			"checkValidIntValue",
			"(JLjava/time/temporal/TemporalField;)I",
			arg0,
			arg1.object()
		);
	}
	inline jlong ValueRange::checkValidValue(jlong arg0, JObject arg1) const
	{
		return callMethod<jlong>(
			"checkValidValue",
			"(JLjava/time/temporal/TemporalField;)J",
			arg0,
			arg1.object()
		);
	}
	inline jboolean ValueRange::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jlong ValueRange::getLargestMinimum() const
	{
		return callMethod<jlong>(
			"getLargestMinimum",
			"()J"
		);
	}
	inline jlong ValueRange::getMaximum() const
	{
		return callMethod<jlong>(
			"getMaximum",
			"()J"
		);
	}
	inline jlong ValueRange::getMinimum() const
	{
		return callMethod<jlong>(
			"getMinimum",
			"()J"
		);
	}
	inline jlong ValueRange::getSmallestMaximum() const
	{
		return callMethod<jlong>(
			"getSmallestMaximum",
			"()J"
		);
	}
	inline jint ValueRange::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean ValueRange::isFixed() const
	{
		return callMethod<jboolean>(
			"isFixed",
			"()Z"
		);
	}
	inline jboolean ValueRange::isIntValue() const
	{
		return callMethod<jboolean>(
			"isIntValue",
			"()Z"
		);
	}
	inline jboolean ValueRange::isValidIntValue(jlong arg0) const
	{
		return callMethod<jboolean>(
			"isValidIntValue",
			"(J)Z",
			arg0
		);
	}
	inline jboolean ValueRange::isValidValue(jlong arg0) const
	{
		return callMethod<jboolean>(
			"isValidValue",
			"(J)Z",
			arg0
		);
	}
	inline JString ValueRange::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::time::temporal

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::time::temporal;
#endif
