#pragma once

#include "../../io/ObjectInputStream.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../Clock.def.hpp"
#include "../LocalDate.def.hpp"
#include "../LocalTime.def.hpp"
#include "../ZoneId.def.hpp"
#include "./MinguoChronology.def.hpp"
#include "./MinguoEra.def.hpp"
#include "../temporal/ValueRange.def.hpp"
#include "./MinguoDate.def.hpp"

namespace java::time::chrono
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::time::chrono::MinguoDate MinguoDate::from(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.time.chrono.MinguoDate",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/MinguoDate;",
			arg0.object()
		);
	}
	inline java::time::chrono::MinguoDate MinguoDate::now()
	{
		return callStaticObjectMethod(
			"java.time.chrono.MinguoDate",
			"now",
			"()Ljava/time/chrono/MinguoDate;"
		);
	}
	inline java::time::chrono::MinguoDate MinguoDate::now(java::time::Clock arg0)
	{
		return callStaticObjectMethod(
			"java.time.chrono.MinguoDate",
			"now",
			"(Ljava/time/Clock;)Ljava/time/chrono/MinguoDate;",
			arg0.object()
		);
	}
	inline java::time::chrono::MinguoDate MinguoDate::now(java::time::ZoneId arg0)
	{
		return callStaticObjectMethod(
			"java.time.chrono.MinguoDate",
			"now",
			"(Ljava/time/ZoneId;)Ljava/time/chrono/MinguoDate;",
			arg0.object()
		);
	}
	inline java::time::chrono::MinguoDate MinguoDate::of(jint arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.time.chrono.MinguoDate",
			"of",
			"(III)Ljava/time/chrono/MinguoDate;",
			arg0,
			arg1,
			arg2
		);
	}
	inline JObject MinguoDate::atTime(java::time::LocalTime arg0) const
	{
		return callObjectMethod(
			"atTime",
			"(Ljava/time/LocalTime;)Ljava/time/chrono/ChronoLocalDateTime;",
			arg0.object()
		);
	}
	inline jboolean MinguoDate::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::time::chrono::MinguoChronology MinguoDate::getChronology() const
	{
		return callObjectMethod(
			"getChronology",
			"()Ljava/time/chrono/MinguoChronology;"
		);
	}
	inline java::time::chrono::MinguoEra MinguoDate::getEra() const
	{
		return callObjectMethod(
			"getEra",
			"()Ljava/time/chrono/MinguoEra;"
		);
	}
	inline jlong MinguoDate::getLong(JObject arg0) const
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.object()
		);
	}
	inline jint MinguoDate::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jint MinguoDate::lengthOfMonth() const
	{
		return callMethod<jint>(
			"lengthOfMonth",
			"()I"
		);
	}
	inline java::time::chrono::MinguoDate MinguoDate::minus(JObject arg0) const
	{
		return callObjectMethod(
			"minus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/MinguoDate;",
			arg0.object()
		);
	}
	inline java::time::chrono::MinguoDate MinguoDate::minus(jlong arg0, JObject arg1) const
	{
		return callObjectMethod(
			"minus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/chrono/MinguoDate;",
			arg0,
			arg1.object()
		);
	}
	inline java::time::chrono::MinguoDate MinguoDate::plus(JObject arg0) const
	{
		return callObjectMethod(
			"plus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/MinguoDate;",
			arg0.object()
		);
	}
	inline java::time::chrono::MinguoDate MinguoDate::plus(jlong arg0, JObject arg1) const
	{
		return callObjectMethod(
			"plus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/chrono/MinguoDate;",
			arg0,
			arg1.object()
		);
	}
	inline java::time::temporal::ValueRange MinguoDate::range(JObject arg0) const
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
	inline jlong MinguoDate::toEpochDay() const
	{
		return callMethod<jlong>(
			"toEpochDay",
			"()J"
		);
	}
	inline JString MinguoDate::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline JObject MinguoDate::until(JObject arg0) const
	{
		return callObjectMethod(
			"until",
			"(Ljava/time/chrono/ChronoLocalDate;)Ljava/time/chrono/ChronoPeriod;",
			arg0.object()
		);
	}
	inline jlong MinguoDate::until(JObject arg0, JObject arg1) const
	{
		return callMethod<jlong>(
			"until",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J",
			arg0.object(),
			arg1.object()
		);
	}
	inline java::time::chrono::MinguoDate MinguoDate::with(JObject arg0) const
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/chrono/MinguoDate;",
			arg0.object()
		);
	}
	inline java::time::chrono::MinguoDate MinguoDate::with(JObject arg0, jlong arg1) const
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalField;J)Ljava/time/chrono/MinguoDate;",
			arg0.object(),
			arg1
		);
	}
} // namespace java::time::chrono

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::time::chrono;
#endif
