#pragma once

#include "../io/ObjectInputStream.def.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Clock.def.hpp"
#include "./DayOfWeek.def.hpp"
#include "./Instant.def.hpp"
#include "./LocalDateTime.def.hpp"
#include "./LocalTime.def.hpp"
#include "./Month.def.hpp"
#include "./OffsetDateTime.def.hpp"
#include "./OffsetTime.def.hpp"
#include "./Period.def.hpp"
#include "./ZoneId.def.hpp"
#include "./ZoneOffset.def.hpp"
#include "./ZonedDateTime.def.hpp"
#include "./chrono/IsoChronology.def.hpp"
#include "./chrono/IsoEra.def.hpp"
#include "./format/DateTimeFormatter.def.hpp"
#include "./temporal/ValueRange.def.hpp"
#include "./LocalDate.def.hpp"

namespace java::time
{
	// Fields
	inline java::time::LocalDate LocalDate::EPOCH()
	{
		return getStaticObjectField(
			"java.time.LocalDate",
			"EPOCH",
			"Ljava/time/LocalDate;"
		);
	}
	inline java::time::LocalDate LocalDate::MAX()
	{
		return getStaticObjectField(
			"java.time.LocalDate",
			"MAX",
			"Ljava/time/LocalDate;"
		);
	}
	inline java::time::LocalDate LocalDate::MIN()
	{
		return getStaticObjectField(
			"java.time.LocalDate",
			"MIN",
			"Ljava/time/LocalDate;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::time::LocalDate LocalDate::from(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.time.LocalDate",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/LocalDate;",
			arg0.object()
		);
	}
	inline java::time::LocalDate LocalDate::now()
	{
		return callStaticObjectMethod(
			"java.time.LocalDate",
			"now",
			"()Ljava/time/LocalDate;"
		);
	}
	inline java::time::LocalDate LocalDate::now(java::time::Clock arg0)
	{
		return callStaticObjectMethod(
			"java.time.LocalDate",
			"now",
			"(Ljava/time/Clock;)Ljava/time/LocalDate;",
			arg0.object()
		);
	}
	inline java::time::LocalDate LocalDate::now(java::time::ZoneId arg0)
	{
		return callStaticObjectMethod(
			"java.time.LocalDate",
			"now",
			"(Ljava/time/ZoneId;)Ljava/time/LocalDate;",
			arg0.object()
		);
	}
	inline java::time::LocalDate LocalDate::of(jint arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.time.LocalDate",
			"of",
			"(III)Ljava/time/LocalDate;",
			arg0,
			arg1,
			arg2
		);
	}
	inline java::time::LocalDate LocalDate::of(jint arg0, java::time::Month arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.time.LocalDate",
			"of",
			"(ILjava/time/Month;I)Ljava/time/LocalDate;",
			arg0,
			arg1.object(),
			arg2
		);
	}
	inline java::time::LocalDate LocalDate::ofEpochDay(jlong arg0)
	{
		return callStaticObjectMethod(
			"java.time.LocalDate",
			"ofEpochDay",
			"(J)Ljava/time/LocalDate;",
			arg0
		);
	}
	inline java::time::LocalDate LocalDate::ofInstant(java::time::Instant arg0, java::time::ZoneId arg1)
	{
		return callStaticObjectMethod(
			"java.time.LocalDate",
			"ofInstant",
			"(Ljava/time/Instant;Ljava/time/ZoneId;)Ljava/time/LocalDate;",
			arg0.object(),
			arg1.object()
		);
	}
	inline java::time::LocalDate LocalDate::ofYearDay(jint arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.time.LocalDate",
			"ofYearDay",
			"(II)Ljava/time/LocalDate;",
			arg0,
			arg1
		);
	}
	inline java::time::LocalDate LocalDate::parse(JString arg0)
	{
		return callStaticObjectMethod(
			"java.time.LocalDate",
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/LocalDate;",
			arg0.object<jstring>()
		);
	}
	inline java::time::LocalDate LocalDate::parse(JString arg0, java::time::format::DateTimeFormatter arg1)
	{
		return callStaticObjectMethod(
			"java.time.LocalDate",
			"parse",
			"(Ljava/lang/CharSequence;Ljava/time/format/DateTimeFormatter;)Ljava/time/LocalDate;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JObject LocalDate::adjustInto(JObject arg0) const
	{
		return callObjectMethod(
			"adjustInto",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.object()
		);
	}
	inline java::time::LocalDateTime LocalDate::atStartOfDay() const
	{
		return callObjectMethod(
			"atStartOfDay",
			"()Ljava/time/LocalDateTime;"
		);
	}
	inline java::time::ZonedDateTime LocalDate::atStartOfDay(java::time::ZoneId arg0) const
	{
		return callObjectMethod(
			"atStartOfDay",
			"(Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;",
			arg0.object()
		);
	}
	inline java::time::LocalDateTime LocalDate::atTime(java::time::LocalTime arg0) const
	{
		return callObjectMethod(
			"atTime",
			"(Ljava/time/LocalTime;)Ljava/time/LocalDateTime;",
			arg0.object()
		);
	}
	inline java::time::LocalDateTime LocalDate::atTime(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"atTime",
			"(II)Ljava/time/LocalDateTime;",
			arg0,
			arg1
		);
	}
	inline java::time::LocalDateTime LocalDate::atTime(jint arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"atTime",
			"(III)Ljava/time/LocalDateTime;",
			arg0,
			arg1,
			arg2
		);
	}
	inline java::time::LocalDateTime LocalDate::atTime(jint arg0, jint arg1, jint arg2, jint arg3) const
	{
		return callObjectMethod(
			"atTime",
			"(IIII)Ljava/time/LocalDateTime;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline java::time::OffsetDateTime LocalDate::atTime(java::time::OffsetTime arg0) const
	{
		return callObjectMethod(
			"atTime",
			"(Ljava/time/OffsetTime;)Ljava/time/OffsetDateTime;",
			arg0.object()
		);
	}
	inline jint LocalDate::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline JObject LocalDate::datesUntil(java::time::LocalDate arg0) const
	{
		return callObjectMethod(
			"datesUntil",
			"(Ljava/time/LocalDate;)Ljava/util/stream/Stream;",
			arg0.object()
		);
	}
	inline JObject LocalDate::datesUntil(java::time::LocalDate arg0, java::time::Period arg1) const
	{
		return callObjectMethod(
			"datesUntil",
			"(Ljava/time/LocalDate;Ljava/time/Period;)Ljava/util/stream/Stream;",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean LocalDate::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString LocalDate::format(java::time::format::DateTimeFormatter arg0) const
	{
		return callObjectMethod(
			"format",
			"(Ljava/time/format/DateTimeFormatter;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline jint LocalDate::get(JObject arg0) const
	{
		return callMethod<jint>(
			"get",
			"(Ljava/time/temporal/TemporalField;)I",
			arg0.object()
		);
	}
	inline java::time::chrono::IsoChronology LocalDate::getChronology() const
	{
		return callObjectMethod(
			"getChronology",
			"()Ljava/time/chrono/IsoChronology;"
		);
	}
	inline jint LocalDate::getDayOfMonth() const
	{
		return callMethod<jint>(
			"getDayOfMonth",
			"()I"
		);
	}
	inline java::time::DayOfWeek LocalDate::getDayOfWeek() const
	{
		return callObjectMethod(
			"getDayOfWeek",
			"()Ljava/time/DayOfWeek;"
		);
	}
	inline jint LocalDate::getDayOfYear() const
	{
		return callMethod<jint>(
			"getDayOfYear",
			"()I"
		);
	}
	inline java::time::chrono::IsoEra LocalDate::getEra() const
	{
		return callObjectMethod(
			"getEra",
			"()Ljava/time/chrono/IsoEra;"
		);
	}
	inline jlong LocalDate::getLong(JObject arg0) const
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.object()
		);
	}
	inline java::time::Month LocalDate::getMonth() const
	{
		return callObjectMethod(
			"getMonth",
			"()Ljava/time/Month;"
		);
	}
	inline jint LocalDate::getMonthValue() const
	{
		return callMethod<jint>(
			"getMonthValue",
			"()I"
		);
	}
	inline jint LocalDate::getYear() const
	{
		return callMethod<jint>(
			"getYear",
			"()I"
		);
	}
	inline jint LocalDate::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean LocalDate::isAfter(JObject arg0) const
	{
		return callMethod<jboolean>(
			"isAfter",
			"(Ljava/time/chrono/ChronoLocalDate;)Z",
			arg0.object()
		);
	}
	inline jboolean LocalDate::isBefore(JObject arg0) const
	{
		return callMethod<jboolean>(
			"isBefore",
			"(Ljava/time/chrono/ChronoLocalDate;)Z",
			arg0.object()
		);
	}
	inline jboolean LocalDate::isEqual(JObject arg0) const
	{
		return callMethod<jboolean>(
			"isEqual",
			"(Ljava/time/chrono/ChronoLocalDate;)Z",
			arg0.object()
		);
	}
	inline jboolean LocalDate::isLeapYear() const
	{
		return callMethod<jboolean>(
			"isLeapYear",
			"()Z"
		);
	}
	inline jboolean LocalDate::isSupported(JObject arg0) const
	{
		return callMethod<jboolean>(
			"isSupported",
			"(Ljava/time/temporal/TemporalField;)Z",
			arg0.object()
		);
	}
	inline jint LocalDate::lengthOfMonth() const
	{
		return callMethod<jint>(
			"lengthOfMonth",
			"()I"
		);
	}
	inline jint LocalDate::lengthOfYear() const
	{
		return callMethod<jint>(
			"lengthOfYear",
			"()I"
		);
	}
	inline java::time::LocalDate LocalDate::minus(JObject arg0) const
	{
		return callObjectMethod(
			"minus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/LocalDate;",
			arg0.object()
		);
	}
	inline java::time::LocalDate LocalDate::minus(jlong arg0, JObject arg1) const
	{
		return callObjectMethod(
			"minus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/LocalDate;",
			arg0,
			arg1.object()
		);
	}
	inline java::time::LocalDate LocalDate::minusDays(jlong arg0) const
	{
		return callObjectMethod(
			"minusDays",
			"(J)Ljava/time/LocalDate;",
			arg0
		);
	}
	inline java::time::LocalDate LocalDate::minusMonths(jlong arg0) const
	{
		return callObjectMethod(
			"minusMonths",
			"(J)Ljava/time/LocalDate;",
			arg0
		);
	}
	inline java::time::LocalDate LocalDate::minusWeeks(jlong arg0) const
	{
		return callObjectMethod(
			"minusWeeks",
			"(J)Ljava/time/LocalDate;",
			arg0
		);
	}
	inline java::time::LocalDate LocalDate::minusYears(jlong arg0) const
	{
		return callObjectMethod(
			"minusYears",
			"(J)Ljava/time/LocalDate;",
			arg0
		);
	}
	inline java::time::LocalDate LocalDate::plus(JObject arg0) const
	{
		return callObjectMethod(
			"plus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/LocalDate;",
			arg0.object()
		);
	}
	inline java::time::LocalDate LocalDate::plus(jlong arg0, JObject arg1) const
	{
		return callObjectMethod(
			"plus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/LocalDate;",
			arg0,
			arg1.object()
		);
	}
	inline java::time::LocalDate LocalDate::plusDays(jlong arg0) const
	{
		return callObjectMethod(
			"plusDays",
			"(J)Ljava/time/LocalDate;",
			arg0
		);
	}
	inline java::time::LocalDate LocalDate::plusMonths(jlong arg0) const
	{
		return callObjectMethod(
			"plusMonths",
			"(J)Ljava/time/LocalDate;",
			arg0
		);
	}
	inline java::time::LocalDate LocalDate::plusWeeks(jlong arg0) const
	{
		return callObjectMethod(
			"plusWeeks",
			"(J)Ljava/time/LocalDate;",
			arg0
		);
	}
	inline java::time::LocalDate LocalDate::plusYears(jlong arg0) const
	{
		return callObjectMethod(
			"plusYears",
			"(J)Ljava/time/LocalDate;",
			arg0
		);
	}
	inline JObject LocalDate::query(JObject arg0) const
	{
		return callObjectMethod(
			"query",
			"(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	inline java::time::temporal::ValueRange LocalDate::range(JObject arg0) const
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
	inline jlong LocalDate::toEpochDay() const
	{
		return callMethod<jlong>(
			"toEpochDay",
			"()J"
		);
	}
	inline jlong LocalDate::toEpochSecond(java::time::LocalTime arg0, java::time::ZoneOffset arg1) const
	{
		return callMethod<jlong>(
			"toEpochSecond",
			"(Ljava/time/LocalTime;Ljava/time/ZoneOffset;)J",
			arg0.object(),
			arg1.object()
		);
	}
	inline JString LocalDate::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline java::time::Period LocalDate::until(JObject arg0) const
	{
		return callObjectMethod(
			"until",
			"(Ljava/time/chrono/ChronoLocalDate;)Ljava/time/Period;",
			arg0.object()
		);
	}
	inline jlong LocalDate::until(JObject arg0, JObject arg1) const
	{
		return callMethod<jlong>(
			"until",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J",
			arg0.object(),
			arg1.object()
		);
	}
	inline java::time::LocalDate LocalDate::with(JObject arg0) const
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/LocalDate;",
			arg0.object()
		);
	}
	inline java::time::LocalDate LocalDate::with(JObject arg0, jlong arg1) const
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalField;J)Ljava/time/LocalDate;",
			arg0.object(),
			arg1
		);
	}
	inline java::time::LocalDate LocalDate::withDayOfMonth(jint arg0) const
	{
		return callObjectMethod(
			"withDayOfMonth",
			"(I)Ljava/time/LocalDate;",
			arg0
		);
	}
	inline java::time::LocalDate LocalDate::withDayOfYear(jint arg0) const
	{
		return callObjectMethod(
			"withDayOfYear",
			"(I)Ljava/time/LocalDate;",
			arg0
		);
	}
	inline java::time::LocalDate LocalDate::withMonth(jint arg0) const
	{
		return callObjectMethod(
			"withMonth",
			"(I)Ljava/time/LocalDate;",
			arg0
		);
	}
	inline java::time::LocalDate LocalDate::withYear(jint arg0) const
	{
		return callObjectMethod(
			"withYear",
			"(I)Ljava/time/LocalDate;",
			arg0
		);
	}
} // namespace java::time

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::time;
#endif
