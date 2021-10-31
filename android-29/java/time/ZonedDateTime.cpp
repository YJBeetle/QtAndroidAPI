#include "../io/ObjectInputStream.hpp"
#include "./Clock.hpp"
#include "./DayOfWeek.hpp"
#include "./Instant.hpp"
#include "./LocalDate.hpp"
#include "./LocalDateTime.hpp"
#include "./LocalTime.hpp"
#include "./Month.hpp"
#include "./OffsetDateTime.hpp"
#include "./ZoneId.hpp"
#include "./ZoneOffset.hpp"
#include "./format/DateTimeFormatter.hpp"
#include "./temporal/ValueRange.hpp"
#include "./ZonedDateTime.hpp"

namespace java::time
{
	// Fields
	
	// QAndroidJniObject forward
	ZonedDateTime::ZonedDateTime(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject ZonedDateTime::from(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.ZonedDateTime",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/ZonedDateTime;",
			arg0.object()
		);
	}
	QAndroidJniObject ZonedDateTime::now()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.ZonedDateTime",
			"now",
			"()Ljava/time/ZonedDateTime;"
		);
	}
	QAndroidJniObject ZonedDateTime::now(java::time::Clock arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.ZonedDateTime",
			"now",
			"(Ljava/time/Clock;)Ljava/time/ZonedDateTime;",
			arg0.object()
		);
	}
	QAndroidJniObject ZonedDateTime::now(java::time::ZoneId arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.ZonedDateTime",
			"now",
			"(Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;",
			arg0.object()
		);
	}
	QAndroidJniObject ZonedDateTime::of(java::time::LocalDateTime arg0, java::time::ZoneId arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.ZonedDateTime",
			"of",
			"(Ljava/time/LocalDateTime;Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject ZonedDateTime::of(java::time::LocalDate arg0, java::time::LocalTime arg1, java::time::ZoneId arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.ZonedDateTime",
			"of",
			"(Ljava/time/LocalDate;Ljava/time/LocalTime;Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	QAndroidJniObject ZonedDateTime::of(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, java::time::ZoneId arg7)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.ZonedDateTime",
			"of",
			"(IIIIIIILjava/time/ZoneId;)Ljava/time/ZonedDateTime;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7.object()
		);
	}
	QAndroidJniObject ZonedDateTime::ofInstant(java::time::Instant arg0, java::time::ZoneId arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.ZonedDateTime",
			"ofInstant",
			"(Ljava/time/Instant;Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject ZonedDateTime::ofInstant(java::time::LocalDateTime arg0, java::time::ZoneOffset arg1, java::time::ZoneId arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.ZonedDateTime",
			"ofInstant",
			"(Ljava/time/LocalDateTime;Ljava/time/ZoneOffset;Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	QAndroidJniObject ZonedDateTime::ofLocal(java::time::LocalDateTime arg0, java::time::ZoneId arg1, java::time::ZoneOffset arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.ZonedDateTime",
			"ofLocal",
			"(Ljava/time/LocalDateTime;Ljava/time/ZoneId;Ljava/time/ZoneOffset;)Ljava/time/ZonedDateTime;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	QAndroidJniObject ZonedDateTime::ofStrict(java::time::LocalDateTime arg0, java::time::ZoneOffset arg1, java::time::ZoneId arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.ZonedDateTime",
			"ofStrict",
			"(Ljava/time/LocalDateTime;Ljava/time/ZoneOffset;Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	QAndroidJniObject ZonedDateTime::parse(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.ZonedDateTime",
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	QAndroidJniObject ZonedDateTime::parse(jstring arg0, java::time::format::DateTimeFormatter arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.ZonedDateTime",
			"parse",
			"(Ljava/lang/CharSequence;Ljava/time/format/DateTimeFormatter;)Ljava/time/ZonedDateTime;",
			arg0,
			arg1.object()
		);
	}
	jboolean ZonedDateTime::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring ZonedDateTime::format(java::time::format::DateTimeFormatter arg0)
	{
		return callObjectMethod(
			"format",
			"(Ljava/time/format/DateTimeFormatter;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jint ZonedDateTime::get(__JniBaseClass arg0)
	{
		return callMethod<jint>(
			"get",
			"(Ljava/time/temporal/TemporalField;)I",
			arg0.object()
		);
	}
	jint ZonedDateTime::getDayOfMonth()
	{
		return callMethod<jint>(
			"getDayOfMonth",
			"()I"
		);
	}
	QAndroidJniObject ZonedDateTime::getDayOfWeek()
	{
		return callObjectMethod(
			"getDayOfWeek",
			"()Ljava/time/DayOfWeek;"
		);
	}
	jint ZonedDateTime::getDayOfYear()
	{
		return callMethod<jint>(
			"getDayOfYear",
			"()I"
		);
	}
	jint ZonedDateTime::getHour()
	{
		return callMethod<jint>(
			"getHour",
			"()I"
		);
	}
	jlong ZonedDateTime::getLong(__JniBaseClass arg0)
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.object()
		);
	}
	jint ZonedDateTime::getMinute()
	{
		return callMethod<jint>(
			"getMinute",
			"()I"
		);
	}
	QAndroidJniObject ZonedDateTime::getMonth()
	{
		return callObjectMethod(
			"getMonth",
			"()Ljava/time/Month;"
		);
	}
	jint ZonedDateTime::getMonthValue()
	{
		return callMethod<jint>(
			"getMonthValue",
			"()I"
		);
	}
	jint ZonedDateTime::getNano()
	{
		return callMethod<jint>(
			"getNano",
			"()I"
		);
	}
	QAndroidJniObject ZonedDateTime::getOffset()
	{
		return callObjectMethod(
			"getOffset",
			"()Ljava/time/ZoneOffset;"
		);
	}
	jint ZonedDateTime::getSecond()
	{
		return callMethod<jint>(
			"getSecond",
			"()I"
		);
	}
	jint ZonedDateTime::getYear()
	{
		return callMethod<jint>(
			"getYear",
			"()I"
		);
	}
	QAndroidJniObject ZonedDateTime::getZone()
	{
		return callObjectMethod(
			"getZone",
			"()Ljava/time/ZoneId;"
		);
	}
	jint ZonedDateTime::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean ZonedDateTime::isSupported(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"isSupported",
			"(Ljava/time/temporal/TemporalField;)Z",
			arg0.object()
		);
	}
	QAndroidJniObject ZonedDateTime::minus(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"minus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/ZonedDateTime;",
			arg0.object()
		);
	}
	QAndroidJniObject ZonedDateTime::minus(jlong arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"minus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/ZonedDateTime;",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject ZonedDateTime::minusDays(jlong arg0)
	{
		return callObjectMethod(
			"minusDays",
			"(J)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	QAndroidJniObject ZonedDateTime::minusHours(jlong arg0)
	{
		return callObjectMethod(
			"minusHours",
			"(J)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	QAndroidJniObject ZonedDateTime::minusMinutes(jlong arg0)
	{
		return callObjectMethod(
			"minusMinutes",
			"(J)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	QAndroidJniObject ZonedDateTime::minusMonths(jlong arg0)
	{
		return callObjectMethod(
			"minusMonths",
			"(J)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	QAndroidJniObject ZonedDateTime::minusNanos(jlong arg0)
	{
		return callObjectMethod(
			"minusNanos",
			"(J)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	QAndroidJniObject ZonedDateTime::minusSeconds(jlong arg0)
	{
		return callObjectMethod(
			"minusSeconds",
			"(J)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	QAndroidJniObject ZonedDateTime::minusWeeks(jlong arg0)
	{
		return callObjectMethod(
			"minusWeeks",
			"(J)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	QAndroidJniObject ZonedDateTime::minusYears(jlong arg0)
	{
		return callObjectMethod(
			"minusYears",
			"(J)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	QAndroidJniObject ZonedDateTime::plus(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"plus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/ZonedDateTime;",
			arg0.object()
		);
	}
	QAndroidJniObject ZonedDateTime::plus(jlong arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"plus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/ZonedDateTime;",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject ZonedDateTime::plusDays(jlong arg0)
	{
		return callObjectMethod(
			"plusDays",
			"(J)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	QAndroidJniObject ZonedDateTime::plusHours(jlong arg0)
	{
		return callObjectMethod(
			"plusHours",
			"(J)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	QAndroidJniObject ZonedDateTime::plusMinutes(jlong arg0)
	{
		return callObjectMethod(
			"plusMinutes",
			"(J)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	QAndroidJniObject ZonedDateTime::plusMonths(jlong arg0)
	{
		return callObjectMethod(
			"plusMonths",
			"(J)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	QAndroidJniObject ZonedDateTime::plusNanos(jlong arg0)
	{
		return callObjectMethod(
			"plusNanos",
			"(J)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	QAndroidJniObject ZonedDateTime::plusSeconds(jlong arg0)
	{
		return callObjectMethod(
			"plusSeconds",
			"(J)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	QAndroidJniObject ZonedDateTime::plusWeeks(jlong arg0)
	{
		return callObjectMethod(
			"plusWeeks",
			"(J)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	QAndroidJniObject ZonedDateTime::plusYears(jlong arg0)
	{
		return callObjectMethod(
			"plusYears",
			"(J)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	jobject ZonedDateTime::query(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"query",
			"(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;",
			arg0.object()
		).object<jobject>();
	}
	QAndroidJniObject ZonedDateTime::range(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
	QAndroidJniObject ZonedDateTime::toLocalDate()
	{
		return callObjectMethod(
			"toLocalDate",
			"()Ljava/time/LocalDate;"
		);
	}
	QAndroidJniObject ZonedDateTime::toLocalDateTime()
	{
		return callObjectMethod(
			"toLocalDateTime",
			"()Ljava/time/LocalDateTime;"
		);
	}
	QAndroidJniObject ZonedDateTime::toLocalTime()
	{
		return callObjectMethod(
			"toLocalTime",
			"()Ljava/time/LocalTime;"
		);
	}
	QAndroidJniObject ZonedDateTime::toOffsetDateTime()
	{
		return callObjectMethod(
			"toOffsetDateTime",
			"()Ljava/time/OffsetDateTime;"
		);
	}
	jstring ZonedDateTime::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ZonedDateTime::truncatedTo(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"truncatedTo",
			"(Ljava/time/temporal/TemporalUnit;)Ljava/time/ZonedDateTime;",
			arg0.object()
		);
	}
	jlong ZonedDateTime::until(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callMethod<jlong>(
			"until",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject ZonedDateTime::with(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/ZonedDateTime;",
			arg0.object()
		);
	}
	QAndroidJniObject ZonedDateTime::with(__JniBaseClass arg0, jlong arg1)
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalField;J)Ljava/time/ZonedDateTime;",
			arg0.object(),
			arg1
		);
	}
	QAndroidJniObject ZonedDateTime::withDayOfMonth(jint arg0)
	{
		return callObjectMethod(
			"withDayOfMonth",
			"(I)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	QAndroidJniObject ZonedDateTime::withDayOfYear(jint arg0)
	{
		return callObjectMethod(
			"withDayOfYear",
			"(I)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	QAndroidJniObject ZonedDateTime::withEarlierOffsetAtOverlap()
	{
		return callObjectMethod(
			"withEarlierOffsetAtOverlap",
			"()Ljava/time/ZonedDateTime;"
		);
	}
	QAndroidJniObject ZonedDateTime::withFixedOffsetZone()
	{
		return callObjectMethod(
			"withFixedOffsetZone",
			"()Ljava/time/ZonedDateTime;"
		);
	}
	QAndroidJniObject ZonedDateTime::withHour(jint arg0)
	{
		return callObjectMethod(
			"withHour",
			"(I)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	QAndroidJniObject ZonedDateTime::withLaterOffsetAtOverlap()
	{
		return callObjectMethod(
			"withLaterOffsetAtOverlap",
			"()Ljava/time/ZonedDateTime;"
		);
	}
	QAndroidJniObject ZonedDateTime::withMinute(jint arg0)
	{
		return callObjectMethod(
			"withMinute",
			"(I)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	QAndroidJniObject ZonedDateTime::withMonth(jint arg0)
	{
		return callObjectMethod(
			"withMonth",
			"(I)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	QAndroidJniObject ZonedDateTime::withNano(jint arg0)
	{
		return callObjectMethod(
			"withNano",
			"(I)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	QAndroidJniObject ZonedDateTime::withSecond(jint arg0)
	{
		return callObjectMethod(
			"withSecond",
			"(I)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	QAndroidJniObject ZonedDateTime::withYear(jint arg0)
	{
		return callObjectMethod(
			"withYear",
			"(I)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	QAndroidJniObject ZonedDateTime::withZoneSameInstant(java::time::ZoneId arg0)
	{
		return callObjectMethod(
			"withZoneSameInstant",
			"(Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;",
			arg0.object()
		);
	}
	QAndroidJniObject ZonedDateTime::withZoneSameLocal(java::time::ZoneId arg0)
	{
		return callObjectMethod(
			"withZoneSameLocal",
			"(Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;",
			arg0.object()
		);
	}
} // namespace java::time

