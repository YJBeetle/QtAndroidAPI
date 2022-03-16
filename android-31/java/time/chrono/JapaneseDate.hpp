#pragma once

#include "../../io/ObjectInputStream.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../Clock.def.hpp"
#include "../LocalDate.def.hpp"
#include "../LocalTime.def.hpp"
#include "../ZoneId.def.hpp"
#include "./JapaneseChronology.def.hpp"
#include "./JapaneseEra.def.hpp"
#include "../temporal/ValueRange.def.hpp"
#include "./JapaneseDate.def.hpp"

namespace java::time::chrono
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::time::chrono::JapaneseDate JapaneseDate::from(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.time.chrono.JapaneseDate",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/JapaneseDate;",
			arg0.object()
		);
	}
	inline java::time::chrono::JapaneseDate JapaneseDate::now()
	{
		return callStaticObjectMethod(
			"java.time.chrono.JapaneseDate",
			"now",
			"()Ljava/time/chrono/JapaneseDate;"
		);
	}
	inline java::time::chrono::JapaneseDate JapaneseDate::now(java::time::Clock arg0)
	{
		return callStaticObjectMethod(
			"java.time.chrono.JapaneseDate",
			"now",
			"(Ljava/time/Clock;)Ljava/time/chrono/JapaneseDate;",
			arg0.object()
		);
	}
	inline java::time::chrono::JapaneseDate JapaneseDate::now(java::time::ZoneId arg0)
	{
		return callStaticObjectMethod(
			"java.time.chrono.JapaneseDate",
			"now",
			"(Ljava/time/ZoneId;)Ljava/time/chrono/JapaneseDate;",
			arg0.object()
		);
	}
	inline java::time::chrono::JapaneseDate JapaneseDate::of(jint arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.time.chrono.JapaneseDate",
			"of",
			"(III)Ljava/time/chrono/JapaneseDate;",
			arg0,
			arg1,
			arg2
		);
	}
	inline java::time::chrono::JapaneseDate JapaneseDate::of(java::time::chrono::JapaneseEra arg0, jint arg1, jint arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"java.time.chrono.JapaneseDate",
			"of",
			"(Ljava/time/chrono/JapaneseEra;III)Ljava/time/chrono/JapaneseDate;",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	inline JObject JapaneseDate::atTime(java::time::LocalTime arg0) const
	{
		return callObjectMethod(
			"atTime",
			"(Ljava/time/LocalTime;)Ljava/time/chrono/ChronoLocalDateTime;",
			arg0.object()
		);
	}
	inline jboolean JapaneseDate::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::time::chrono::JapaneseChronology JapaneseDate::getChronology() const
	{
		return callObjectMethod(
			"getChronology",
			"()Ljava/time/chrono/JapaneseChronology;"
		);
	}
	inline java::time::chrono::JapaneseEra JapaneseDate::getEra() const
	{
		return callObjectMethod(
			"getEra",
			"()Ljava/time/chrono/JapaneseEra;"
		);
	}
	inline jlong JapaneseDate::getLong(JObject arg0) const
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.object()
		);
	}
	inline jint JapaneseDate::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean JapaneseDate::isSupported(JObject arg0) const
	{
		return callMethod<jboolean>(
			"isSupported",
			"(Ljava/time/temporal/TemporalField;)Z",
			arg0.object()
		);
	}
	inline jint JapaneseDate::lengthOfMonth() const
	{
		return callMethod<jint>(
			"lengthOfMonth",
			"()I"
		);
	}
	inline jint JapaneseDate::lengthOfYear() const
	{
		return callMethod<jint>(
			"lengthOfYear",
			"()I"
		);
	}
	inline java::time::chrono::JapaneseDate JapaneseDate::minus(JObject arg0) const
	{
		return callObjectMethod(
			"minus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/JapaneseDate;",
			arg0.object()
		);
	}
	inline java::time::chrono::JapaneseDate JapaneseDate::minus(jlong arg0, JObject arg1) const
	{
		return callObjectMethod(
			"minus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/chrono/JapaneseDate;",
			arg0,
			arg1.object()
		);
	}
	inline java::time::chrono::JapaneseDate JapaneseDate::plus(JObject arg0) const
	{
		return callObjectMethod(
			"plus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/JapaneseDate;",
			arg0.object()
		);
	}
	inline java::time::chrono::JapaneseDate JapaneseDate::plus(jlong arg0, JObject arg1) const
	{
		return callObjectMethod(
			"plus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/chrono/JapaneseDate;",
			arg0,
			arg1.object()
		);
	}
	inline java::time::temporal::ValueRange JapaneseDate::range(JObject arg0) const
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
	inline jlong JapaneseDate::toEpochDay() const
	{
		return callMethod<jlong>(
			"toEpochDay",
			"()J"
		);
	}
	inline JString JapaneseDate::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline JObject JapaneseDate::until(JObject arg0) const
	{
		return callObjectMethod(
			"until",
			"(Ljava/time/chrono/ChronoLocalDate;)Ljava/time/chrono/ChronoPeriod;",
			arg0.object()
		);
	}
	inline jlong JapaneseDate::until(JObject arg0, JObject arg1) const
	{
		return callMethod<jlong>(
			"until",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J",
			arg0.object(),
			arg1.object()
		);
	}
	inline java::time::chrono::JapaneseDate JapaneseDate::with(JObject arg0) const
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/chrono/JapaneseDate;",
			arg0.object()
		);
	}
	inline java::time::chrono::JapaneseDate JapaneseDate::with(JObject arg0, jlong arg1) const
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalField;J)Ljava/time/chrono/JapaneseDate;",
			arg0.object(),
			arg1
		);
	}
} // namespace java::time::chrono

// Base class headers

