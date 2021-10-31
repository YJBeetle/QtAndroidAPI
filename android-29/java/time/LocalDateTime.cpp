#include "../io/ObjectInputStream.hpp"
#include "./Clock.hpp"
#include "./DayOfWeek.hpp"
#include "./Instant.hpp"
#include "./LocalDate.hpp"
#include "./LocalTime.hpp"
#include "./Month.hpp"
#include "./OffsetDateTime.hpp"
#include "./ZoneId.hpp"
#include "./ZoneOffset.hpp"
#include "./ZonedDateTime.hpp"
#include "./format/DateTimeFormatter.hpp"
#include "./temporal/ValueRange.hpp"
#include "./LocalDateTime.hpp"

namespace java::time
{
	// Fields
	QAndroidJniObject LocalDateTime::MAX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.LocalDateTime",
			"MAX",
			"Ljava/time/LocalDateTime;"
		);
	}
	QAndroidJniObject LocalDateTime::MIN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.LocalDateTime",
			"MIN",
			"Ljava/time/LocalDateTime;"
		);
	}
	
	// QAndroidJniObject forward
	LocalDateTime::LocalDateTime(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject LocalDateTime::from(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDateTime",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/LocalDateTime;",
			arg0.object()
		);
	}
	QAndroidJniObject LocalDateTime::now()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDateTime",
			"now",
			"()Ljava/time/LocalDateTime;"
		);
	}
	QAndroidJniObject LocalDateTime::now(java::time::Clock arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDateTime",
			"now",
			"(Ljava/time/Clock;)Ljava/time/LocalDateTime;",
			arg0.object()
		);
	}
	QAndroidJniObject LocalDateTime::now(java::time::ZoneId arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDateTime",
			"now",
			"(Ljava/time/ZoneId;)Ljava/time/LocalDateTime;",
			arg0.object()
		);
	}
	QAndroidJniObject LocalDateTime::of(java::time::LocalDate arg0, java::time::LocalTime arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDateTime",
			"of",
			"(Ljava/time/LocalDate;Ljava/time/LocalTime;)Ljava/time/LocalDateTime;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject LocalDateTime::of(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDateTime",
			"of",
			"(IIIII)Ljava/time/LocalDateTime;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	QAndroidJniObject LocalDateTime::of(jint arg0, java::time::Month arg1, jint arg2, jint arg3, jint arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDateTime",
			"of",
			"(ILjava/time/Month;III)Ljava/time/LocalDateTime;",
			arg0,
			arg1.object(),
			arg2,
			arg3,
			arg4
		);
	}
	QAndroidJniObject LocalDateTime::of(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDateTime",
			"of",
			"(IIIIII)Ljava/time/LocalDateTime;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	QAndroidJniObject LocalDateTime::of(jint arg0, java::time::Month arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDateTime",
			"of",
			"(ILjava/time/Month;IIII)Ljava/time/LocalDateTime;",
			arg0,
			arg1.object(),
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	QAndroidJniObject LocalDateTime::of(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDateTime",
			"of",
			"(IIIIIII)Ljava/time/LocalDateTime;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	QAndroidJniObject LocalDateTime::of(jint arg0, java::time::Month arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDateTime",
			"of",
			"(ILjava/time/Month;IIIII)Ljava/time/LocalDateTime;",
			arg0,
			arg1.object(),
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	QAndroidJniObject LocalDateTime::ofEpochSecond(jlong arg0, jint arg1, java::time::ZoneOffset arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDateTime",
			"ofEpochSecond",
			"(JILjava/time/ZoneOffset;)Ljava/time/LocalDateTime;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	QAndroidJniObject LocalDateTime::ofInstant(java::time::Instant arg0, java::time::ZoneId arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDateTime",
			"ofInstant",
			"(Ljava/time/Instant;Ljava/time/ZoneId;)Ljava/time/LocalDateTime;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject LocalDateTime::parse(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDateTime",
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	QAndroidJniObject LocalDateTime::parse(jstring arg0, java::time::format::DateTimeFormatter arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDateTime",
			"parse",
			"(Ljava/lang/CharSequence;Ljava/time/format/DateTimeFormatter;)Ljava/time/LocalDateTime;",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject LocalDateTime::adjustInto(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"adjustInto",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.object()
		);
	}
	QAndroidJniObject LocalDateTime::atOffset(java::time::ZoneOffset arg0)
	{
		return callObjectMethod(
			"atOffset",
			"(Ljava/time/ZoneOffset;)Ljava/time/OffsetDateTime;",
			arg0.object()
		);
	}
	QAndroidJniObject LocalDateTime::atZone(java::time::ZoneId arg0)
	{
		return callObjectMethod(
			"atZone",
			"(Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;",
			arg0.object()
		);
	}
	jint LocalDateTime::compareTo(jobject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint LocalDateTime::compareTo(__JniBaseClass arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/time/chrono/ChronoLocalDateTime;)I",
			arg0.object()
		);
	}
	jboolean LocalDateTime::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring LocalDateTime::format(java::time::format::DateTimeFormatter arg0)
	{
		return callObjectMethod(
			"format",
			"(Ljava/time/format/DateTimeFormatter;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jint LocalDateTime::get(__JniBaseClass arg0)
	{
		return callMethod<jint>(
			"get",
			"(Ljava/time/temporal/TemporalField;)I",
			arg0.object()
		);
	}
	jint LocalDateTime::getDayOfMonth()
	{
		return callMethod<jint>(
			"getDayOfMonth",
			"()I"
		);
	}
	QAndroidJniObject LocalDateTime::getDayOfWeek()
	{
		return callObjectMethod(
			"getDayOfWeek",
			"()Ljava/time/DayOfWeek;"
		);
	}
	jint LocalDateTime::getDayOfYear()
	{
		return callMethod<jint>(
			"getDayOfYear",
			"()I"
		);
	}
	jint LocalDateTime::getHour()
	{
		return callMethod<jint>(
			"getHour",
			"()I"
		);
	}
	jlong LocalDateTime::getLong(__JniBaseClass arg0)
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.object()
		);
	}
	jint LocalDateTime::getMinute()
	{
		return callMethod<jint>(
			"getMinute",
			"()I"
		);
	}
	QAndroidJniObject LocalDateTime::getMonth()
	{
		return callObjectMethod(
			"getMonth",
			"()Ljava/time/Month;"
		);
	}
	jint LocalDateTime::getMonthValue()
	{
		return callMethod<jint>(
			"getMonthValue",
			"()I"
		);
	}
	jint LocalDateTime::getNano()
	{
		return callMethod<jint>(
			"getNano",
			"()I"
		);
	}
	jint LocalDateTime::getSecond()
	{
		return callMethod<jint>(
			"getSecond",
			"()I"
		);
	}
	jint LocalDateTime::getYear()
	{
		return callMethod<jint>(
			"getYear",
			"()I"
		);
	}
	jint LocalDateTime::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean LocalDateTime::isAfter(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"isAfter",
			"(Ljava/time/chrono/ChronoLocalDateTime;)Z",
			arg0.object()
		);
	}
	jboolean LocalDateTime::isBefore(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"isBefore",
			"(Ljava/time/chrono/ChronoLocalDateTime;)Z",
			arg0.object()
		);
	}
	jboolean LocalDateTime::isEqual(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"isEqual",
			"(Ljava/time/chrono/ChronoLocalDateTime;)Z",
			arg0.object()
		);
	}
	jboolean LocalDateTime::isSupported(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"isSupported",
			"(Ljava/time/temporal/TemporalField;)Z",
			arg0.object()
		);
	}
	QAndroidJniObject LocalDateTime::minus(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"minus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/LocalDateTime;",
			arg0.object()
		);
	}
	QAndroidJniObject LocalDateTime::minus(jlong arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"minus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/LocalDateTime;",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject LocalDateTime::minusDays(jlong arg0)
	{
		return callObjectMethod(
			"minusDays",
			"(J)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	QAndroidJniObject LocalDateTime::minusHours(jlong arg0)
	{
		return callObjectMethod(
			"minusHours",
			"(J)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	QAndroidJniObject LocalDateTime::minusMinutes(jlong arg0)
	{
		return callObjectMethod(
			"minusMinutes",
			"(J)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	QAndroidJniObject LocalDateTime::minusMonths(jlong arg0)
	{
		return callObjectMethod(
			"minusMonths",
			"(J)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	QAndroidJniObject LocalDateTime::minusNanos(jlong arg0)
	{
		return callObjectMethod(
			"minusNanos",
			"(J)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	QAndroidJniObject LocalDateTime::minusSeconds(jlong arg0)
	{
		return callObjectMethod(
			"minusSeconds",
			"(J)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	QAndroidJniObject LocalDateTime::minusWeeks(jlong arg0)
	{
		return callObjectMethod(
			"minusWeeks",
			"(J)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	QAndroidJniObject LocalDateTime::minusYears(jlong arg0)
	{
		return callObjectMethod(
			"minusYears",
			"(J)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	QAndroidJniObject LocalDateTime::plus(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"plus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/LocalDateTime;",
			arg0.object()
		);
	}
	QAndroidJniObject LocalDateTime::plus(jlong arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"plus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/LocalDateTime;",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject LocalDateTime::plusDays(jlong arg0)
	{
		return callObjectMethod(
			"plusDays",
			"(J)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	QAndroidJniObject LocalDateTime::plusHours(jlong arg0)
	{
		return callObjectMethod(
			"plusHours",
			"(J)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	QAndroidJniObject LocalDateTime::plusMinutes(jlong arg0)
	{
		return callObjectMethod(
			"plusMinutes",
			"(J)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	QAndroidJniObject LocalDateTime::plusMonths(jlong arg0)
	{
		return callObjectMethod(
			"plusMonths",
			"(J)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	QAndroidJniObject LocalDateTime::plusNanos(jlong arg0)
	{
		return callObjectMethod(
			"plusNanos",
			"(J)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	QAndroidJniObject LocalDateTime::plusSeconds(jlong arg0)
	{
		return callObjectMethod(
			"plusSeconds",
			"(J)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	QAndroidJniObject LocalDateTime::plusWeeks(jlong arg0)
	{
		return callObjectMethod(
			"plusWeeks",
			"(J)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	QAndroidJniObject LocalDateTime::plusYears(jlong arg0)
	{
		return callObjectMethod(
			"plusYears",
			"(J)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	jobject LocalDateTime::query(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"query",
			"(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;",
			arg0.object()
		).object<jobject>();
	}
	QAndroidJniObject LocalDateTime::range(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
	QAndroidJniObject LocalDateTime::toLocalDate()
	{
		return callObjectMethod(
			"toLocalDate",
			"()Ljava/time/LocalDate;"
		);
	}
	QAndroidJniObject LocalDateTime::toLocalTime()
	{
		return callObjectMethod(
			"toLocalTime",
			"()Ljava/time/LocalTime;"
		);
	}
	jstring LocalDateTime::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject LocalDateTime::truncatedTo(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"truncatedTo",
			"(Ljava/time/temporal/TemporalUnit;)Ljava/time/LocalDateTime;",
			arg0.object()
		);
	}
	jlong LocalDateTime::until(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callMethod<jlong>(
			"until",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject LocalDateTime::with(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/LocalDateTime;",
			arg0.object()
		);
	}
	QAndroidJniObject LocalDateTime::with(__JniBaseClass arg0, jlong arg1)
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalField;J)Ljava/time/LocalDateTime;",
			arg0.object(),
			arg1
		);
	}
	QAndroidJniObject LocalDateTime::withDayOfMonth(jint arg0)
	{
		return callObjectMethod(
			"withDayOfMonth",
			"(I)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	QAndroidJniObject LocalDateTime::withDayOfYear(jint arg0)
	{
		return callObjectMethod(
			"withDayOfYear",
			"(I)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	QAndroidJniObject LocalDateTime::withHour(jint arg0)
	{
		return callObjectMethod(
			"withHour",
			"(I)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	QAndroidJniObject LocalDateTime::withMinute(jint arg0)
	{
		return callObjectMethod(
			"withMinute",
			"(I)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	QAndroidJniObject LocalDateTime::withMonth(jint arg0)
	{
		return callObjectMethod(
			"withMonth",
			"(I)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	QAndroidJniObject LocalDateTime::withNano(jint arg0)
	{
		return callObjectMethod(
			"withNano",
			"(I)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	QAndroidJniObject LocalDateTime::withSecond(jint arg0)
	{
		return callObjectMethod(
			"withSecond",
			"(I)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	QAndroidJniObject LocalDateTime::withYear(jint arg0)
	{
		return callObjectMethod(
			"withYear",
			"(I)Ljava/time/LocalDateTime;",
			arg0
		);
	}
} // namespace java::time

