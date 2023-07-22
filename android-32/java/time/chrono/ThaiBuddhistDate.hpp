#pragma once

#include "../../io/ObjectInputStream.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../Clock.def.hpp"
#include "../LocalDate.def.hpp"
#include "../LocalTime.def.hpp"
#include "../ZoneId.def.hpp"
#include "./ThaiBuddhistChronology.def.hpp"
#include "./ThaiBuddhistEra.def.hpp"
#include "../temporal/ValueRange.def.hpp"
#include "./ThaiBuddhistDate.def.hpp"

namespace java::time::chrono
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::time::chrono::ThaiBuddhistDate ThaiBuddhistDate::from(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.time.chrono.ThaiBuddhistDate",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.object()
		);
	}
	inline java::time::chrono::ThaiBuddhistDate ThaiBuddhistDate::now()
	{
		return callStaticObjectMethod(
			"java.time.chrono.ThaiBuddhistDate",
			"now",
			"()Ljava/time/chrono/ThaiBuddhistDate;"
		);
	}
	inline java::time::chrono::ThaiBuddhistDate ThaiBuddhistDate::now(java::time::Clock arg0)
	{
		return callStaticObjectMethod(
			"java.time.chrono.ThaiBuddhistDate",
			"now",
			"(Ljava/time/Clock;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.object()
		);
	}
	inline java::time::chrono::ThaiBuddhistDate ThaiBuddhistDate::now(java::time::ZoneId arg0)
	{
		return callStaticObjectMethod(
			"java.time.chrono.ThaiBuddhistDate",
			"now",
			"(Ljava/time/ZoneId;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.object()
		);
	}
	inline java::time::chrono::ThaiBuddhistDate ThaiBuddhistDate::of(jint arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.time.chrono.ThaiBuddhistDate",
			"of",
			"(III)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0,
			arg1,
			arg2
		);
	}
	inline JObject ThaiBuddhistDate::atTime(java::time::LocalTime arg0) const
	{
		return callObjectMethod(
			"atTime",
			"(Ljava/time/LocalTime;)Ljava/time/chrono/ChronoLocalDateTime;",
			arg0.object()
		);
	}
	inline jboolean ThaiBuddhistDate::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::time::chrono::ThaiBuddhistChronology ThaiBuddhistDate::getChronology() const
	{
		return callObjectMethod(
			"getChronology",
			"()Ljava/time/chrono/ThaiBuddhistChronology;"
		);
	}
	inline java::time::chrono::ThaiBuddhistEra ThaiBuddhistDate::getEra() const
	{
		return callObjectMethod(
			"getEra",
			"()Ljava/time/chrono/ThaiBuddhistEra;"
		);
	}
	inline jlong ThaiBuddhistDate::getLong(JObject arg0) const
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.object()
		);
	}
	inline jint ThaiBuddhistDate::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jint ThaiBuddhistDate::lengthOfMonth() const
	{
		return callMethod<jint>(
			"lengthOfMonth",
			"()I"
		);
	}
	inline java::time::chrono::ThaiBuddhistDate ThaiBuddhistDate::minus(JObject arg0) const
	{
		return callObjectMethod(
			"minus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.object()
		);
	}
	inline java::time::chrono::ThaiBuddhistDate ThaiBuddhistDate::minus(jlong arg0, JObject arg1) const
	{
		return callObjectMethod(
			"minus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0,
			arg1.object()
		);
	}
	inline java::time::chrono::ThaiBuddhistDate ThaiBuddhistDate::plus(JObject arg0) const
	{
		return callObjectMethod(
			"plus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.object()
		);
	}
	inline java::time::chrono::ThaiBuddhistDate ThaiBuddhistDate::plus(jlong arg0, JObject arg1) const
	{
		return callObjectMethod(
			"plus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0,
			arg1.object()
		);
	}
	inline java::time::temporal::ValueRange ThaiBuddhistDate::range(JObject arg0) const
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
	inline jlong ThaiBuddhistDate::toEpochDay() const
	{
		return callMethod<jlong>(
			"toEpochDay",
			"()J"
		);
	}
	inline JString ThaiBuddhistDate::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline JObject ThaiBuddhistDate::until(JObject arg0) const
	{
		return callObjectMethod(
			"until",
			"(Ljava/time/chrono/ChronoLocalDate;)Ljava/time/chrono/ChronoPeriod;",
			arg0.object()
		);
	}
	inline jlong ThaiBuddhistDate::until(JObject arg0, JObject arg1) const
	{
		return callMethod<jlong>(
			"until",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J",
			arg0.object(),
			arg1.object()
		);
	}
	inline java::time::chrono::ThaiBuddhistDate ThaiBuddhistDate::with(JObject arg0) const
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.object()
		);
	}
	inline java::time::chrono::ThaiBuddhistDate ThaiBuddhistDate::with(JObject arg0, jlong arg1) const
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalField;J)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.object(),
			arg1
		);
	}
} // namespace java::time::chrono

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::time::chrono;
#endif
