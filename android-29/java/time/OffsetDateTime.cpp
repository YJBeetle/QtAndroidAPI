#include "../io/ObjectInputStream.hpp"
#include "./Clock.hpp"
#include "./DayOfWeek.hpp"
#include "./Instant.hpp"
#include "./LocalDate.hpp"
#include "./LocalDateTime.hpp"
#include "./LocalTime.hpp"
#include "./Month.hpp"
#include "./OffsetTime.hpp"
#include "./ZoneId.hpp"
#include "./ZoneOffset.hpp"
#include "./ZonedDateTime.hpp"
#include "./format/DateTimeFormatter.hpp"
#include "./temporal/ValueRange.hpp"
#include "./OffsetDateTime.hpp"

namespace java::time
{
	// Fields
	QAndroidJniObject OffsetDateTime::MAX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.OffsetDateTime",
			"MAX",
			"Ljava/time/OffsetDateTime;"
		);
	}
	QAndroidJniObject OffsetDateTime::MIN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.OffsetDateTime",
			"MIN",
			"Ljava/time/OffsetDateTime;"
		);
	}
	
	// QAndroidJniObject forward
	OffsetDateTime::OffsetDateTime(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject OffsetDateTime::from(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.OffsetDateTime",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/OffsetDateTime;",
			arg0.object()
		);
	}
	QAndroidJniObject OffsetDateTime::now()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.OffsetDateTime",
			"now",
			"()Ljava/time/OffsetDateTime;"
		);
	}
	QAndroidJniObject OffsetDateTime::now(java::time::Clock arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.OffsetDateTime",
			"now",
			"(Ljava/time/Clock;)Ljava/time/OffsetDateTime;",
			arg0.object()
		);
	}
	QAndroidJniObject OffsetDateTime::now(java::time::ZoneId arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.OffsetDateTime",
			"now",
			"(Ljava/time/ZoneId;)Ljava/time/OffsetDateTime;",
			arg0.object()
		);
	}
	QAndroidJniObject OffsetDateTime::of(java::time::LocalDateTime arg0, java::time::ZoneOffset arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.OffsetDateTime",
			"of",
			"(Ljava/time/LocalDateTime;Ljava/time/ZoneOffset;)Ljava/time/OffsetDateTime;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject OffsetDateTime::of(java::time::LocalDate arg0, java::time::LocalTime arg1, java::time::ZoneOffset arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.OffsetDateTime",
			"of",
			"(Ljava/time/LocalDate;Ljava/time/LocalTime;Ljava/time/ZoneOffset;)Ljava/time/OffsetDateTime;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	QAndroidJniObject OffsetDateTime::of(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, java::time::ZoneOffset arg7)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.OffsetDateTime",
			"of",
			"(IIIIIIILjava/time/ZoneOffset;)Ljava/time/OffsetDateTime;",
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
	QAndroidJniObject OffsetDateTime::ofInstant(java::time::Instant arg0, java::time::ZoneId arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.OffsetDateTime",
			"ofInstant",
			"(Ljava/time/Instant;Ljava/time/ZoneId;)Ljava/time/OffsetDateTime;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject OffsetDateTime::parse(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.OffsetDateTime",
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetDateTime::parse(jstring arg0, java::time::format::DateTimeFormatter arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.OffsetDateTime",
			"parse",
			"(Ljava/lang/CharSequence;Ljava/time/format/DateTimeFormatter;)Ljava/time/OffsetDateTime;",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject OffsetDateTime::timeLineOrder()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.OffsetDateTime",
			"timeLineOrder",
			"()Ljava/util/Comparator;"
		);
	}
	QAndroidJniObject OffsetDateTime::adjustInto(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"adjustInto",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.object()
		);
	}
	QAndroidJniObject OffsetDateTime::atZoneSameInstant(java::time::ZoneId arg0)
	{
		return callObjectMethod(
			"atZoneSameInstant",
			"(Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;",
			arg0.object()
		);
	}
	QAndroidJniObject OffsetDateTime::atZoneSimilarLocal(java::time::ZoneId arg0)
	{
		return callObjectMethod(
			"atZoneSimilarLocal",
			"(Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;",
			arg0.object()
		);
	}
	jint OffsetDateTime::compareTo(jobject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint OffsetDateTime::compareTo(java::time::OffsetDateTime arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/time/OffsetDateTime;)I",
			arg0.object()
		);
	}
	jboolean OffsetDateTime::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring OffsetDateTime::format(java::time::format::DateTimeFormatter arg0)
	{
		return callObjectMethod(
			"format",
			"(Ljava/time/format/DateTimeFormatter;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jint OffsetDateTime::get(__JniBaseClass arg0)
	{
		return callMethod<jint>(
			"get",
			"(Ljava/time/temporal/TemporalField;)I",
			arg0.object()
		);
	}
	jint OffsetDateTime::getDayOfMonth()
	{
		return callMethod<jint>(
			"getDayOfMonth",
			"()I"
		);
	}
	QAndroidJniObject OffsetDateTime::getDayOfWeek()
	{
		return callObjectMethod(
			"getDayOfWeek",
			"()Ljava/time/DayOfWeek;"
		);
	}
	jint OffsetDateTime::getDayOfYear()
	{
		return callMethod<jint>(
			"getDayOfYear",
			"()I"
		);
	}
	jint OffsetDateTime::getHour()
	{
		return callMethod<jint>(
			"getHour",
			"()I"
		);
	}
	jlong OffsetDateTime::getLong(__JniBaseClass arg0)
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.object()
		);
	}
	jint OffsetDateTime::getMinute()
	{
		return callMethod<jint>(
			"getMinute",
			"()I"
		);
	}
	QAndroidJniObject OffsetDateTime::getMonth()
	{
		return callObjectMethod(
			"getMonth",
			"()Ljava/time/Month;"
		);
	}
	jint OffsetDateTime::getMonthValue()
	{
		return callMethod<jint>(
			"getMonthValue",
			"()I"
		);
	}
	jint OffsetDateTime::getNano()
	{
		return callMethod<jint>(
			"getNano",
			"()I"
		);
	}
	QAndroidJniObject OffsetDateTime::getOffset()
	{
		return callObjectMethod(
			"getOffset",
			"()Ljava/time/ZoneOffset;"
		);
	}
	jint OffsetDateTime::getSecond()
	{
		return callMethod<jint>(
			"getSecond",
			"()I"
		);
	}
	jint OffsetDateTime::getYear()
	{
		return callMethod<jint>(
			"getYear",
			"()I"
		);
	}
	jint OffsetDateTime::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean OffsetDateTime::isAfter(java::time::OffsetDateTime arg0)
	{
		return callMethod<jboolean>(
			"isAfter",
			"(Ljava/time/OffsetDateTime;)Z",
			arg0.object()
		);
	}
	jboolean OffsetDateTime::isBefore(java::time::OffsetDateTime arg0)
	{
		return callMethod<jboolean>(
			"isBefore",
			"(Ljava/time/OffsetDateTime;)Z",
			arg0.object()
		);
	}
	jboolean OffsetDateTime::isEqual(java::time::OffsetDateTime arg0)
	{
		return callMethod<jboolean>(
			"isEqual",
			"(Ljava/time/OffsetDateTime;)Z",
			arg0.object()
		);
	}
	jboolean OffsetDateTime::isSupported(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"isSupported",
			"(Ljava/time/temporal/TemporalField;)Z",
			arg0.object()
		);
	}
	QAndroidJniObject OffsetDateTime::minus(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"minus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/OffsetDateTime;",
			arg0.object()
		);
	}
	QAndroidJniObject OffsetDateTime::minus(jlong arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"minus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/OffsetDateTime;",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject OffsetDateTime::minusDays(jlong arg0)
	{
		return callObjectMethod(
			"minusDays",
			"(J)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetDateTime::minusHours(jlong arg0)
	{
		return callObjectMethod(
			"minusHours",
			"(J)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetDateTime::minusMinutes(jlong arg0)
	{
		return callObjectMethod(
			"minusMinutes",
			"(J)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetDateTime::minusMonths(jlong arg0)
	{
		return callObjectMethod(
			"minusMonths",
			"(J)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetDateTime::minusNanos(jlong arg0)
	{
		return callObjectMethod(
			"minusNanos",
			"(J)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetDateTime::minusSeconds(jlong arg0)
	{
		return callObjectMethod(
			"minusSeconds",
			"(J)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetDateTime::minusWeeks(jlong arg0)
	{
		return callObjectMethod(
			"minusWeeks",
			"(J)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetDateTime::minusYears(jlong arg0)
	{
		return callObjectMethod(
			"minusYears",
			"(J)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetDateTime::plus(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"plus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/OffsetDateTime;",
			arg0.object()
		);
	}
	QAndroidJniObject OffsetDateTime::plus(jlong arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"plus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/OffsetDateTime;",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject OffsetDateTime::plusDays(jlong arg0)
	{
		return callObjectMethod(
			"plusDays",
			"(J)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetDateTime::plusHours(jlong arg0)
	{
		return callObjectMethod(
			"plusHours",
			"(J)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetDateTime::plusMinutes(jlong arg0)
	{
		return callObjectMethod(
			"plusMinutes",
			"(J)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetDateTime::plusMonths(jlong arg0)
	{
		return callObjectMethod(
			"plusMonths",
			"(J)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetDateTime::plusNanos(jlong arg0)
	{
		return callObjectMethod(
			"plusNanos",
			"(J)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetDateTime::plusSeconds(jlong arg0)
	{
		return callObjectMethod(
			"plusSeconds",
			"(J)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetDateTime::plusWeeks(jlong arg0)
	{
		return callObjectMethod(
			"plusWeeks",
			"(J)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetDateTime::plusYears(jlong arg0)
	{
		return callObjectMethod(
			"plusYears",
			"(J)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	jobject OffsetDateTime::query(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"query",
			"(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;",
			arg0.object()
		).object<jobject>();
	}
	QAndroidJniObject OffsetDateTime::range(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
	jlong OffsetDateTime::toEpochSecond()
	{
		return callMethod<jlong>(
			"toEpochSecond",
			"()J"
		);
	}
	QAndroidJniObject OffsetDateTime::toInstant()
	{
		return callObjectMethod(
			"toInstant",
			"()Ljava/time/Instant;"
		);
	}
	QAndroidJniObject OffsetDateTime::toLocalDate()
	{
		return callObjectMethod(
			"toLocalDate",
			"()Ljava/time/LocalDate;"
		);
	}
	QAndroidJniObject OffsetDateTime::toLocalDateTime()
	{
		return callObjectMethod(
			"toLocalDateTime",
			"()Ljava/time/LocalDateTime;"
		);
	}
	QAndroidJniObject OffsetDateTime::toLocalTime()
	{
		return callObjectMethod(
			"toLocalTime",
			"()Ljava/time/LocalTime;"
		);
	}
	QAndroidJniObject OffsetDateTime::toOffsetTime()
	{
		return callObjectMethod(
			"toOffsetTime",
			"()Ljava/time/OffsetTime;"
		);
	}
	jstring OffsetDateTime::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject OffsetDateTime::toZonedDateTime()
	{
		return callObjectMethod(
			"toZonedDateTime",
			"()Ljava/time/ZonedDateTime;"
		);
	}
	QAndroidJniObject OffsetDateTime::truncatedTo(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"truncatedTo",
			"(Ljava/time/temporal/TemporalUnit;)Ljava/time/OffsetDateTime;",
			arg0.object()
		);
	}
	jlong OffsetDateTime::until(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callMethod<jlong>(
			"until",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject OffsetDateTime::with(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/OffsetDateTime;",
			arg0.object()
		);
	}
	QAndroidJniObject OffsetDateTime::with(__JniBaseClass arg0, jlong arg1)
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalField;J)Ljava/time/OffsetDateTime;",
			arg0.object(),
			arg1
		);
	}
	QAndroidJniObject OffsetDateTime::withDayOfMonth(jint arg0)
	{
		return callObjectMethod(
			"withDayOfMonth",
			"(I)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetDateTime::withDayOfYear(jint arg0)
	{
		return callObjectMethod(
			"withDayOfYear",
			"(I)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetDateTime::withHour(jint arg0)
	{
		return callObjectMethod(
			"withHour",
			"(I)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetDateTime::withMinute(jint arg0)
	{
		return callObjectMethod(
			"withMinute",
			"(I)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetDateTime::withMonth(jint arg0)
	{
		return callObjectMethod(
			"withMonth",
			"(I)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetDateTime::withNano(jint arg0)
	{
		return callObjectMethod(
			"withNano",
			"(I)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetDateTime::withOffsetSameInstant(java::time::ZoneOffset arg0)
	{
		return callObjectMethod(
			"withOffsetSameInstant",
			"(Ljava/time/ZoneOffset;)Ljava/time/OffsetDateTime;",
			arg0.object()
		);
	}
	QAndroidJniObject OffsetDateTime::withOffsetSameLocal(java::time::ZoneOffset arg0)
	{
		return callObjectMethod(
			"withOffsetSameLocal",
			"(Ljava/time/ZoneOffset;)Ljava/time/OffsetDateTime;",
			arg0.object()
		);
	}
	QAndroidJniObject OffsetDateTime::withSecond(jint arg0)
	{
		return callObjectMethod(
			"withSecond",
			"(I)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetDateTime::withYear(jint arg0)
	{
		return callObjectMethod(
			"withYear",
			"(I)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
} // namespace java::time

