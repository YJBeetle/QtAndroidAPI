#pragma once

#include "../../io/ObjectInputStream.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../Clock.def.hpp"
#include "../LocalTime.def.hpp"
#include "../ZoneId.def.hpp"
#include "./HijrahChronology.def.hpp"
#include "./HijrahEra.def.hpp"
#include "../temporal/ValueRange.def.hpp"
#include "./HijrahDate.def.hpp"

namespace java::time::chrono
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::time::chrono::HijrahDate HijrahDate::from(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.time.chrono.HijrahDate",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/HijrahDate;",
			arg0.object()
		);
	}
	inline java::time::chrono::HijrahDate HijrahDate::now()
	{
		return callStaticObjectMethod(
			"java.time.chrono.HijrahDate",
			"now",
			"()Ljava/time/chrono/HijrahDate;"
		);
	}
	inline java::time::chrono::HijrahDate HijrahDate::now(java::time::Clock arg0)
	{
		return callStaticObjectMethod(
			"java.time.chrono.HijrahDate",
			"now",
			"(Ljava/time/Clock;)Ljava/time/chrono/HijrahDate;",
			arg0.object()
		);
	}
	inline java::time::chrono::HijrahDate HijrahDate::now(java::time::ZoneId arg0)
	{
		return callStaticObjectMethod(
			"java.time.chrono.HijrahDate",
			"now",
			"(Ljava/time/ZoneId;)Ljava/time/chrono/HijrahDate;",
			arg0.object()
		);
	}
	inline java::time::chrono::HijrahDate HijrahDate::of(jint arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.time.chrono.HijrahDate",
			"of",
			"(III)Ljava/time/chrono/HijrahDate;",
			arg0,
			arg1,
			arg2
		);
	}
	inline JObject HijrahDate::atTime(java::time::LocalTime arg0) const
	{
		return callObjectMethod(
			"atTime",
			"(Ljava/time/LocalTime;)Ljava/time/chrono/ChronoLocalDateTime;",
			arg0.object()
		);
	}
	inline jboolean HijrahDate::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::time::chrono::HijrahChronology HijrahDate::getChronology() const
	{
		return callObjectMethod(
			"getChronology",
			"()Ljava/time/chrono/HijrahChronology;"
		);
	}
	inline java::time::chrono::HijrahEra HijrahDate::getEra() const
	{
		return callObjectMethod(
			"getEra",
			"()Ljava/time/chrono/HijrahEra;"
		);
	}
	inline jlong HijrahDate::getLong(JObject arg0) const
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.object()
		);
	}
	inline jint HijrahDate::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean HijrahDate::isLeapYear() const
	{
		return callMethod<jboolean>(
			"isLeapYear",
			"()Z"
		);
	}
	inline jint HijrahDate::lengthOfMonth() const
	{
		return callMethod<jint>(
			"lengthOfMonth",
			"()I"
		);
	}
	inline jint HijrahDate::lengthOfYear() const
	{
		return callMethod<jint>(
			"lengthOfYear",
			"()I"
		);
	}
	inline java::time::chrono::HijrahDate HijrahDate::minus(JObject arg0) const
	{
		return callObjectMethod(
			"minus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/HijrahDate;",
			arg0.object()
		);
	}
	inline java::time::chrono::HijrahDate HijrahDate::minus(jlong arg0, JObject arg1) const
	{
		return callObjectMethod(
			"minus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/chrono/HijrahDate;",
			arg0,
			arg1.object()
		);
	}
	inline java::time::chrono::HijrahDate HijrahDate::plus(JObject arg0) const
	{
		return callObjectMethod(
			"plus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/HijrahDate;",
			arg0.object()
		);
	}
	inline java::time::chrono::HijrahDate HijrahDate::plus(jlong arg0, JObject arg1) const
	{
		return callObjectMethod(
			"plus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/chrono/HijrahDate;",
			arg0,
			arg1.object()
		);
	}
	inline java::time::temporal::ValueRange HijrahDate::range(JObject arg0) const
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
	inline jlong HijrahDate::toEpochDay() const
	{
		return callMethod<jlong>(
			"toEpochDay",
			"()J"
		);
	}
	inline JString HijrahDate::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline JObject HijrahDate::until(JObject arg0) const
	{
		return callObjectMethod(
			"until",
			"(Ljava/time/chrono/ChronoLocalDate;)Ljava/time/chrono/ChronoPeriod;",
			arg0.object()
		);
	}
	inline jlong HijrahDate::until(JObject arg0, JObject arg1) const
	{
		return callMethod<jlong>(
			"until",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J",
			arg0.object(),
			arg1.object()
		);
	}
	inline java::time::chrono::HijrahDate HijrahDate::with(JObject arg0) const
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/chrono/HijrahDate;",
			arg0.object()
		);
	}
	inline java::time::chrono::HijrahDate HijrahDate::with(JObject arg0, jlong arg1) const
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalField;J)Ljava/time/chrono/HijrahDate;",
			arg0.object(),
			arg1
		);
	}
	inline java::time::chrono::HijrahDate HijrahDate::withVariant(java::time::chrono::HijrahChronology arg0) const
	{
		return callObjectMethod(
			"withVariant",
			"(Ljava/time/chrono/HijrahChronology;)Ljava/time/chrono/HijrahDate;",
			arg0.object()
		);
	}
} // namespace java::time::chrono

// Base class headers

