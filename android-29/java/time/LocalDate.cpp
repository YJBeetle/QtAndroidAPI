#include "../io/ObjectInputStream.hpp"
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
	QAndroidJniObject LocalDate::EPOCH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.LocalDate",
			"EPOCH",
			"Ljava/time/LocalDate;"
		);
	}
	QAndroidJniObject LocalDate::MAX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.LocalDate",
			"MAX",
			"Ljava/time/LocalDate;"
		);
	}
	QAndroidJniObject LocalDate::MIN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.LocalDate",
			"MIN",
			"Ljava/time/LocalDate;"
		);
	}
	
	// QAndroidJniObject forward
	LocalDate::LocalDate(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject LocalDate::from(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDate",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/LocalDate;",
			arg0.object()
		);
	}
	QAndroidJniObject LocalDate::now()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDate",
			"now",
			"()Ljava/time/LocalDate;"
		);
	}
	QAndroidJniObject LocalDate::now(java::time::Clock arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDate",
			"now",
			"(Ljava/time/Clock;)Ljava/time/LocalDate;",
			arg0.object()
		);
	}
	QAndroidJniObject LocalDate::now(java::time::ZoneId arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDate",
			"now",
			"(Ljava/time/ZoneId;)Ljava/time/LocalDate;",
			arg0.object()
		);
	}
	QAndroidJniObject LocalDate::of(jint arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDate",
			"of",
			"(III)Ljava/time/LocalDate;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject LocalDate::of(jint arg0, java::time::Month arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDate",
			"of",
			"(ILjava/time/Month;I)Ljava/time/LocalDate;",
			arg0,
			arg1.object(),
			arg2
		);
	}
	QAndroidJniObject LocalDate::ofEpochDay(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDate",
			"ofEpochDay",
			"(J)Ljava/time/LocalDate;",
			arg0
		);
	}
	QAndroidJniObject LocalDate::ofInstant(java::time::Instant arg0, java::time::ZoneId arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDate",
			"ofInstant",
			"(Ljava/time/Instant;Ljava/time/ZoneId;)Ljava/time/LocalDate;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject LocalDate::ofYearDay(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDate",
			"ofYearDay",
			"(II)Ljava/time/LocalDate;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject LocalDate::parse(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDate",
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/LocalDate;",
			arg0
		);
	}
	QAndroidJniObject LocalDate::parse(jstring arg0, java::time::format::DateTimeFormatter arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDate",
			"parse",
			"(Ljava/lang/CharSequence;Ljava/time/format/DateTimeFormatter;)Ljava/time/LocalDate;",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject LocalDate::adjustInto(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"adjustInto",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.object()
		);
	}
	QAndroidJniObject LocalDate::atStartOfDay()
	{
		return callObjectMethod(
			"atStartOfDay",
			"()Ljava/time/LocalDateTime;"
		);
	}
	QAndroidJniObject LocalDate::atStartOfDay(java::time::ZoneId arg0)
	{
		return callObjectMethod(
			"atStartOfDay",
			"(Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;",
			arg0.object()
		);
	}
	QAndroidJniObject LocalDate::atTime(java::time::LocalTime arg0)
	{
		return callObjectMethod(
			"atTime",
			"(Ljava/time/LocalTime;)Ljava/time/LocalDateTime;",
			arg0.object()
		);
	}
	QAndroidJniObject LocalDate::atTime(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"atTime",
			"(II)Ljava/time/LocalDateTime;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject LocalDate::atTime(jint arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"atTime",
			"(III)Ljava/time/LocalDateTime;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject LocalDate::atTime(jint arg0, jint arg1, jint arg2, jint arg3)
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
	QAndroidJniObject LocalDate::atTime(java::time::OffsetTime arg0)
	{
		return callObjectMethod(
			"atTime",
			"(Ljava/time/OffsetTime;)Ljava/time/OffsetDateTime;",
			arg0.object()
		);
	}
	jint LocalDate::compareTo(jobject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint LocalDate::compareTo(__JniBaseClass arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/time/chrono/ChronoLocalDate;)I",
			arg0.object()
		);
	}
	QAndroidJniObject LocalDate::datesUntil(java::time::LocalDate arg0)
	{
		return callObjectMethod(
			"datesUntil",
			"(Ljava/time/LocalDate;)Ljava/util/stream/Stream;",
			arg0.object()
		);
	}
	QAndroidJniObject LocalDate::datesUntil(java::time::LocalDate arg0, java::time::Period arg1)
	{
		return callObjectMethod(
			"datesUntil",
			"(Ljava/time/LocalDate;Ljava/time/Period;)Ljava/util/stream/Stream;",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean LocalDate::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring LocalDate::format(java::time::format::DateTimeFormatter arg0)
	{
		return callObjectMethod(
			"format",
			"(Ljava/time/format/DateTimeFormatter;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jint LocalDate::get(__JniBaseClass arg0)
	{
		return callMethod<jint>(
			"get",
			"(Ljava/time/temporal/TemporalField;)I",
			arg0.object()
		);
	}
	QAndroidJniObject LocalDate::getChronology()
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
	QAndroidJniObject LocalDate::getDayOfWeek()
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
	QAndroidJniObject LocalDate::getEra()
	{
		return callObjectMethod(
			"getEra",
			"()Ljava/time/chrono/IsoEra;"
		);
	}
	jlong LocalDate::getLong(__JniBaseClass arg0)
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.object()
		);
	}
	QAndroidJniObject LocalDate::getMonth()
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
	jboolean LocalDate::isAfter(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"isAfter",
			"(Ljava/time/chrono/ChronoLocalDate;)Z",
			arg0.object()
		);
	}
	jboolean LocalDate::isBefore(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"isBefore",
			"(Ljava/time/chrono/ChronoLocalDate;)Z",
			arg0.object()
		);
	}
	jboolean LocalDate::isEqual(__JniBaseClass arg0)
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
	jboolean LocalDate::isSupported(__JniBaseClass arg0)
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
	QAndroidJniObject LocalDate::minus(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"minus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/LocalDate;",
			arg0.object()
		);
	}
	QAndroidJniObject LocalDate::minus(jlong arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"minus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/LocalDate;",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject LocalDate::minusDays(jlong arg0)
	{
		return callObjectMethod(
			"minusDays",
			"(J)Ljava/time/LocalDate;",
			arg0
		);
	}
	QAndroidJniObject LocalDate::minusMonths(jlong arg0)
	{
		return callObjectMethod(
			"minusMonths",
			"(J)Ljava/time/LocalDate;",
			arg0
		);
	}
	QAndroidJniObject LocalDate::minusWeeks(jlong arg0)
	{
		return callObjectMethod(
			"minusWeeks",
			"(J)Ljava/time/LocalDate;",
			arg0
		);
	}
	QAndroidJniObject LocalDate::minusYears(jlong arg0)
	{
		return callObjectMethod(
			"minusYears",
			"(J)Ljava/time/LocalDate;",
			arg0
		);
	}
	QAndroidJniObject LocalDate::plus(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"plus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/LocalDate;",
			arg0.object()
		);
	}
	QAndroidJniObject LocalDate::plus(jlong arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"plus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/LocalDate;",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject LocalDate::plusDays(jlong arg0)
	{
		return callObjectMethod(
			"plusDays",
			"(J)Ljava/time/LocalDate;",
			arg0
		);
	}
	QAndroidJniObject LocalDate::plusMonths(jlong arg0)
	{
		return callObjectMethod(
			"plusMonths",
			"(J)Ljava/time/LocalDate;",
			arg0
		);
	}
	QAndroidJniObject LocalDate::plusWeeks(jlong arg0)
	{
		return callObjectMethod(
			"plusWeeks",
			"(J)Ljava/time/LocalDate;",
			arg0
		);
	}
	QAndroidJniObject LocalDate::plusYears(jlong arg0)
	{
		return callObjectMethod(
			"plusYears",
			"(J)Ljava/time/LocalDate;",
			arg0
		);
	}
	jobject LocalDate::query(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"query",
			"(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;",
			arg0.object()
		).object<jobject>();
	}
	QAndroidJniObject LocalDate::range(__JniBaseClass arg0)
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
	jstring LocalDate::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject LocalDate::until(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"until",
			"(Ljava/time/chrono/ChronoLocalDate;)Ljava/time/Period;",
			arg0.object()
		);
	}
	jlong LocalDate::until(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callMethod<jlong>(
			"until",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject LocalDate::with(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/LocalDate;",
			arg0.object()
		);
	}
	QAndroidJniObject LocalDate::with(__JniBaseClass arg0, jlong arg1)
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalField;J)Ljava/time/LocalDate;",
			arg0.object(),
			arg1
		);
	}
	QAndroidJniObject LocalDate::withDayOfMonth(jint arg0)
	{
		return callObjectMethod(
			"withDayOfMonth",
			"(I)Ljava/time/LocalDate;",
			arg0
		);
	}
	QAndroidJniObject LocalDate::withDayOfYear(jint arg0)
	{
		return callObjectMethod(
			"withDayOfYear",
			"(I)Ljava/time/LocalDate;",
			arg0
		);
	}
	QAndroidJniObject LocalDate::withMonth(jint arg0)
	{
		return callObjectMethod(
			"withMonth",
			"(I)Ljava/time/LocalDate;",
			arg0
		);
	}
	QAndroidJniObject LocalDate::withYear(jint arg0)
	{
		return callObjectMethod(
			"withYear",
			"(I)Ljava/time/LocalDate;",
			arg0
		);
	}
} // namespace java::time

