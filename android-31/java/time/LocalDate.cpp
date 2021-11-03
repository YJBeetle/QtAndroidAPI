#include "../io/ObjectInputStream.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Clock.hpp"
#include "./DayOfWeek.hpp"
#include "./Instant.hpp"
#include "./LocalDateTime.hpp"
#include "./LocalTime.hpp"
#include "./Month.hpp"
#include "./OffsetDateTime.hpp"
#include "./OffsetTime.hpp"
#include "./Period.hpp"
#include "./ZoneId.hpp"
#include "./ZoneOffset.hpp"
#include "./ZonedDateTime.hpp"
#include "./chrono/IsoChronology.hpp"
#include "./chrono/IsoEra.hpp"
#include "./format/DateTimeFormatter.hpp"
#include "./temporal/ValueRange.hpp"
#include "./LocalDate.hpp"

namespace java::time
{
	// Fields
	java::time::LocalDate LocalDate::EPOCH()
	{
		return getStaticObjectField(
			"java.time.LocalDate",
			"EPOCH",
			"Ljava/time/LocalDate;"
		);
	}
	java::time::LocalDate LocalDate::MAX()
	{
		return getStaticObjectField(
			"java.time.LocalDate",
			"MAX",
			"Ljava/time/LocalDate;"
		);
	}
	java::time::LocalDate LocalDate::MIN()
	{
		return getStaticObjectField(
			"java.time.LocalDate",
			"MIN",
			"Ljava/time/LocalDate;"
		);
	}
	
	// QJniObject forward
	LocalDate::LocalDate(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::time::LocalDate LocalDate::from(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.time.LocalDate",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/LocalDate;",
			arg0.object()
		);
	}
	java::time::LocalDate LocalDate::now()
	{
		return callStaticObjectMethod(
			"java.time.LocalDate",
			"now",
			"()Ljava/time/LocalDate;"
		);
	}
	java::time::LocalDate LocalDate::now(java::time::Clock arg0)
	{
		return callStaticObjectMethod(
			"java.time.LocalDate",
			"now",
			"(Ljava/time/Clock;)Ljava/time/LocalDate;",
			arg0.object()
		);
	}
	java::time::LocalDate LocalDate::now(java::time::ZoneId arg0)
	{
		return callStaticObjectMethod(
			"java.time.LocalDate",
			"now",
			"(Ljava/time/ZoneId;)Ljava/time/LocalDate;",
			arg0.object()
		);
	}
	java::time::LocalDate LocalDate::of(jint arg0, jint arg1, jint arg2)
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
	java::time::LocalDate LocalDate::of(jint arg0, java::time::Month arg1, jint arg2)
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
	java::time::LocalDate LocalDate::ofEpochDay(jlong arg0)
	{
		return callStaticObjectMethod(
			"java.time.LocalDate",
			"ofEpochDay",
			"(J)Ljava/time/LocalDate;",
			arg0
		);
	}
	java::time::LocalDate LocalDate::ofInstant(java::time::Instant arg0, java::time::ZoneId arg1)
	{
		return callStaticObjectMethod(
			"java.time.LocalDate",
			"ofInstant",
			"(Ljava/time/Instant;Ljava/time/ZoneId;)Ljava/time/LocalDate;",
			arg0.object(),
			arg1.object()
		);
	}
	java::time::LocalDate LocalDate::ofYearDay(jint arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.time.LocalDate",
			"ofYearDay",
			"(II)Ljava/time/LocalDate;",
			arg0,
			arg1
		);
	}
	java::time::LocalDate LocalDate::parse(JString arg0)
	{
		return callStaticObjectMethod(
			"java.time.LocalDate",
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/LocalDate;",
			arg0.object<jstring>()
		);
	}
	java::time::LocalDate LocalDate::parse(JString arg0, java::time::format::DateTimeFormatter arg1)
	{
		return callStaticObjectMethod(
			"java.time.LocalDate",
			"parse",
			"(Ljava/lang/CharSequence;Ljava/time/format/DateTimeFormatter;)Ljava/time/LocalDate;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	JObject LocalDate::adjustInto(JObject arg0)
	{
		return callObjectMethod(
			"adjustInto",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.object()
		);
	}
	java::time::LocalDateTime LocalDate::atStartOfDay()
	{
		return callObjectMethod(
			"atStartOfDay",
			"()Ljava/time/LocalDateTime;"
		);
	}
	java::time::ZonedDateTime LocalDate::atStartOfDay(java::time::ZoneId arg0)
	{
		return callObjectMethod(
			"atStartOfDay",
			"(Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;",
			arg0.object()
		);
	}
	java::time::LocalDateTime LocalDate::atTime(java::time::LocalTime arg0)
	{
		return callObjectMethod(
			"atTime",
			"(Ljava/time/LocalTime;)Ljava/time/LocalDateTime;",
			arg0.object()
		);
	}
	java::time::LocalDateTime LocalDate::atTime(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"atTime",
			"(II)Ljava/time/LocalDateTime;",
			arg0,
			arg1
		);
	}
	java::time::LocalDateTime LocalDate::atTime(jint arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"atTime",
			"(III)Ljava/time/LocalDateTime;",
			arg0,
			arg1,
			arg2
		);
	}
	java::time::LocalDateTime LocalDate::atTime(jint arg0, jint arg1, jint arg2, jint arg3)
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
	java::time::OffsetDateTime LocalDate::atTime(java::time::OffsetTime arg0)
	{
		return callObjectMethod(
			"atTime",
			"(Ljava/time/OffsetTime;)Ljava/time/OffsetDateTime;",
			arg0.object()
		);
	}
	jint LocalDate::compareTo(JObject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	JObject LocalDate::datesUntil(java::time::LocalDate arg0)
	{
		return callObjectMethod(
			"datesUntil",
			"(Ljava/time/LocalDate;)Ljava/util/stream/Stream;",
			arg0.object()
		);
	}
	JObject LocalDate::datesUntil(java::time::LocalDate arg0, java::time::Period arg1)
	{
		return callObjectMethod(
			"datesUntil",
			"(Ljava/time/LocalDate;Ljava/time/Period;)Ljava/util/stream/Stream;",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean LocalDate::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString LocalDate::format(java::time::format::DateTimeFormatter arg0)
	{
		return callObjectMethod(
			"format",
			"(Ljava/time/format/DateTimeFormatter;)Ljava/lang/String;",
			arg0.object()
		);
	}
	jint LocalDate::get(JObject arg0)
	{
		return callMethod<jint>(
			"get",
			"(Ljava/time/temporal/TemporalField;)I",
			arg0.object()
		);
	}
	java::time::chrono::IsoChronology LocalDate::getChronology()
	{
		return callObjectMethod(
			"getChronology",
			"()Ljava/time/chrono/IsoChronology;"
		);
	}
	jint LocalDate::getDayOfMonth()
	{
		return callMethod<jint>(
			"getDayOfMonth",
			"()I"
		);
	}
	java::time::DayOfWeek LocalDate::getDayOfWeek()
	{
		return callObjectMethod(
			"getDayOfWeek",
			"()Ljava/time/DayOfWeek;"
		);
	}
	jint LocalDate::getDayOfYear()
	{
		return callMethod<jint>(
			"getDayOfYear",
			"()I"
		);
	}
	java::time::chrono::IsoEra LocalDate::getEra()
	{
		return callObjectMethod(
			"getEra",
			"()Ljava/time/chrono/IsoEra;"
		);
	}
	jlong LocalDate::getLong(JObject arg0)
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.object()
		);
	}
	java::time::Month LocalDate::getMonth()
	{
		return callObjectMethod(
			"getMonth",
			"()Ljava/time/Month;"
		);
	}
	jint LocalDate::getMonthValue()
	{
		return callMethod<jint>(
			"getMonthValue",
			"()I"
		);
	}
	jint LocalDate::getYear()
	{
		return callMethod<jint>(
			"getYear",
			"()I"
		);
	}
	jint LocalDate::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean LocalDate::isAfter(JObject arg0)
	{
		return callMethod<jboolean>(
			"isAfter",
			"(Ljava/time/chrono/ChronoLocalDate;)Z",
			arg0.object()
		);
	}
	jboolean LocalDate::isBefore(JObject arg0)
	{
		return callMethod<jboolean>(
			"isBefore",
			"(Ljava/time/chrono/ChronoLocalDate;)Z",
			arg0.object()
		);
	}
	jboolean LocalDate::isEqual(JObject arg0)
	{
		return callMethod<jboolean>(
			"isEqual",
			"(Ljava/time/chrono/ChronoLocalDate;)Z",
			arg0.object()
		);
	}
	jboolean LocalDate::isLeapYear()
	{
		return callMethod<jboolean>(
			"isLeapYear",
			"()Z"
		);
	}
	jboolean LocalDate::isSupported(JObject arg0)
	{
		return callMethod<jboolean>(
			"isSupported",
			"(Ljava/time/temporal/TemporalField;)Z",
			arg0.object()
		);
	}
	jint LocalDate::lengthOfMonth()
	{
		return callMethod<jint>(
			"lengthOfMonth",
			"()I"
		);
	}
	jint LocalDate::lengthOfYear()
	{
		return callMethod<jint>(
			"lengthOfYear",
			"()I"
		);
	}
	java::time::LocalDate LocalDate::minus(JObject arg0)
	{
		return callObjectMethod(
			"minus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/LocalDate;",
			arg0.object()
		);
	}
	java::time::LocalDate LocalDate::minus(jlong arg0, JObject arg1)
	{
		return callObjectMethod(
			"minus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/LocalDate;",
			arg0,
			arg1.object()
		);
	}
	java::time::LocalDate LocalDate::minusDays(jlong arg0)
	{
		return callObjectMethod(
			"minusDays",
			"(J)Ljava/time/LocalDate;",
			arg0
		);
	}
	java::time::LocalDate LocalDate::minusMonths(jlong arg0)
	{
		return callObjectMethod(
			"minusMonths",
			"(J)Ljava/time/LocalDate;",
			arg0
		);
	}
	java::time::LocalDate LocalDate::minusWeeks(jlong arg0)
	{
		return callObjectMethod(
			"minusWeeks",
			"(J)Ljava/time/LocalDate;",
			arg0
		);
	}
	java::time::LocalDate LocalDate::minusYears(jlong arg0)
	{
		return callObjectMethod(
			"minusYears",
			"(J)Ljava/time/LocalDate;",
			arg0
		);
	}
	java::time::LocalDate LocalDate::plus(JObject arg0)
	{
		return callObjectMethod(
			"plus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/LocalDate;",
			arg0.object()
		);
	}
	java::time::LocalDate LocalDate::plus(jlong arg0, JObject arg1)
	{
		return callObjectMethod(
			"plus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/LocalDate;",
			arg0,
			arg1.object()
		);
	}
	java::time::LocalDate LocalDate::plusDays(jlong arg0)
	{
		return callObjectMethod(
			"plusDays",
			"(J)Ljava/time/LocalDate;",
			arg0
		);
	}
	java::time::LocalDate LocalDate::plusMonths(jlong arg0)
	{
		return callObjectMethod(
			"plusMonths",
			"(J)Ljava/time/LocalDate;",
			arg0
		);
	}
	java::time::LocalDate LocalDate::plusWeeks(jlong arg0)
	{
		return callObjectMethod(
			"plusWeeks",
			"(J)Ljava/time/LocalDate;",
			arg0
		);
	}
	java::time::LocalDate LocalDate::plusYears(jlong arg0)
	{
		return callObjectMethod(
			"plusYears",
			"(J)Ljava/time/LocalDate;",
			arg0
		);
	}
	JObject LocalDate::query(JObject arg0)
	{
		return callObjectMethod(
			"query",
			"(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	java::time::temporal::ValueRange LocalDate::range(JObject arg0)
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
	jlong LocalDate::toEpochDay()
	{
		return callMethod<jlong>(
			"toEpochDay",
			"()J"
		);
	}
	jlong LocalDate::toEpochSecond(java::time::LocalTime arg0, java::time::ZoneOffset arg1)
	{
		return callMethod<jlong>(
			"toEpochSecond",
			"(Ljava/time/LocalTime;Ljava/time/ZoneOffset;)J",
			arg0.object(),
			arg1.object()
		);
	}
	JString LocalDate::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	java::time::Period LocalDate::until(JObject arg0)
	{
		return callObjectMethod(
			"until",
			"(Ljava/time/chrono/ChronoLocalDate;)Ljava/time/Period;",
			arg0.object()
		);
	}
	jlong LocalDate::until(JObject arg0, JObject arg1)
	{
		return callMethod<jlong>(
			"until",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J",
			arg0.object(),
			arg1.object()
		);
	}
	java::time::LocalDate LocalDate::with(JObject arg0)
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/LocalDate;",
			arg0.object()
		);
	}
	java::time::LocalDate LocalDate::with(JObject arg0, jlong arg1)
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalField;J)Ljava/time/LocalDate;",
			arg0.object(),
			arg1
		);
	}
	java::time::LocalDate LocalDate::withDayOfMonth(jint arg0)
	{
		return callObjectMethod(
			"withDayOfMonth",
			"(I)Ljava/time/LocalDate;",
			arg0
		);
	}
	java::time::LocalDate LocalDate::withDayOfYear(jint arg0)
	{
		return callObjectMethod(
			"withDayOfYear",
			"(I)Ljava/time/LocalDate;",
			arg0
		);
	}
	java::time::LocalDate LocalDate::withMonth(jint arg0)
	{
		return callObjectMethod(
			"withMonth",
			"(I)Ljava/time/LocalDate;",
			arg0
		);
	}
	java::time::LocalDate LocalDate::withYear(jint arg0)
	{
		return callObjectMethod(
			"withYear",
			"(I)Ljava/time/LocalDate;",
			arg0
		);
	}
} // namespace java::time

