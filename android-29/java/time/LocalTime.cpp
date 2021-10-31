#include "../io/ObjectInputStream.hpp"
#include "./Clock.hpp"
#include "./Instant.hpp"
#include "./LocalDate.hpp"
#include "./LocalDateTime.hpp"
#include "./OffsetTime.hpp"
#include "./ZoneId.hpp"
#include "./ZoneOffset.hpp"
#include "./format/DateTimeFormatter.hpp"
#include "./temporal/ValueRange.hpp"
#include "./LocalTime.hpp"

namespace java::time
{
	// Fields
	QAndroidJniObject LocalTime::MAX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.LocalTime",
			"MAX",
			"Ljava/time/LocalTime;"
		);
	}
	QAndroidJniObject LocalTime::MIDNIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.LocalTime",
			"MIDNIGHT",
			"Ljava/time/LocalTime;"
		);
	}
	QAndroidJniObject LocalTime::MIN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.LocalTime",
			"MIN",
			"Ljava/time/LocalTime;"
		);
	}
	QAndroidJniObject LocalTime::NOON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.LocalTime",
			"NOON",
			"Ljava/time/LocalTime;"
		);
	}
	
	LocalTime::LocalTime(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject LocalTime::from(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalTime",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/LocalTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LocalTime::now()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalTime",
			"now",
			"()Ljava/time/LocalTime;"
		);
	}
	QAndroidJniObject LocalTime::now(java::time::Clock arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalTime",
			"now",
			"(Ljava/time/Clock;)Ljava/time/LocalTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LocalTime::now(java::time::ZoneId arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalTime",
			"now",
			"(Ljava/time/ZoneId;)Ljava/time/LocalTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LocalTime::of(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalTime",
			"of",
			"(II)Ljava/time/LocalTime;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject LocalTime::of(jint arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalTime",
			"of",
			"(III)Ljava/time/LocalTime;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject LocalTime::of(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalTime",
			"of",
			"(IIII)Ljava/time/LocalTime;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject LocalTime::ofInstant(java::time::Instant arg0, java::time::ZoneId arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalTime",
			"ofInstant",
			"(Ljava/time/Instant;Ljava/time/ZoneId;)Ljava/time/LocalTime;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject LocalTime::ofNanoOfDay(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalTime",
			"ofNanoOfDay",
			"(J)Ljava/time/LocalTime;",
			arg0
		);
	}
	QAndroidJniObject LocalTime::ofSecondOfDay(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalTime",
			"ofSecondOfDay",
			"(J)Ljava/time/LocalTime;",
			arg0
		);
	}
	QAndroidJniObject LocalTime::parse(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalTime",
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/LocalTime;",
			arg0
		);
	}
	QAndroidJniObject LocalTime::parse(jstring arg0, java::time::format::DateTimeFormatter arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalTime",
			"parse",
			"(Ljava/lang/CharSequence;Ljava/time/format/DateTimeFormatter;)Ljava/time/LocalTime;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject LocalTime::adjustInto(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"adjustInto",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LocalTime::atDate(java::time::LocalDate arg0)
	{
		return __thiz.callObjectMethod(
			"atDate",
			"(Ljava/time/LocalDate;)Ljava/time/LocalDateTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LocalTime::atOffset(java::time::ZoneOffset arg0)
	{
		return __thiz.callObjectMethod(
			"atOffset",
			"(Ljava/time/ZoneOffset;)Ljava/time/OffsetTime;",
			arg0.__jniObject().object()
		);
	}
	jint LocalTime::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint LocalTime::compareTo(java::time::LocalTime arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/time/LocalTime;)I",
			arg0.__jniObject().object()
		);
	}
	jboolean LocalTime::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring LocalTime::format(java::time::format::DateTimeFormatter arg0)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/time/format/DateTimeFormatter;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jint LocalTime::get(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jint>(
			"get",
			"(Ljava/time/temporal/TemporalField;)I",
			arg0.__jniObject().object()
		);
	}
	jint LocalTime::getHour()
	{
		return __thiz.callMethod<jint>(
			"getHour",
			"()I"
		);
	}
	jlong LocalTime::getLong(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.__jniObject().object()
		);
	}
	jint LocalTime::getMinute()
	{
		return __thiz.callMethod<jint>(
			"getMinute",
			"()I"
		);
	}
	jint LocalTime::getNano()
	{
		return __thiz.callMethod<jint>(
			"getNano",
			"()I"
		);
	}
	jint LocalTime::getSecond()
	{
		return __thiz.callMethod<jint>(
			"getSecond",
			"()I"
		);
	}
	jint LocalTime::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean LocalTime::isAfter(java::time::LocalTime arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isAfter",
			"(Ljava/time/LocalTime;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean LocalTime::isBefore(java::time::LocalTime arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isBefore",
			"(Ljava/time/LocalTime;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean LocalTime::isSupported(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isSupported",
			"(Ljava/time/temporal/TemporalField;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LocalTime::minus(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"minus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/LocalTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LocalTime::minus(jlong arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"minus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/LocalTime;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject LocalTime::minusHours(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusHours",
			"(J)Ljava/time/LocalTime;",
			arg0
		);
	}
	QAndroidJniObject LocalTime::minusMinutes(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusMinutes",
			"(J)Ljava/time/LocalTime;",
			arg0
		);
	}
	QAndroidJniObject LocalTime::minusNanos(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusNanos",
			"(J)Ljava/time/LocalTime;",
			arg0
		);
	}
	QAndroidJniObject LocalTime::minusSeconds(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusSeconds",
			"(J)Ljava/time/LocalTime;",
			arg0
		);
	}
	QAndroidJniObject LocalTime::plus(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"plus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/LocalTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LocalTime::plus(jlong arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"plus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/LocalTime;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject LocalTime::plusHours(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusHours",
			"(J)Ljava/time/LocalTime;",
			arg0
		);
	}
	QAndroidJniObject LocalTime::plusMinutes(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusMinutes",
			"(J)Ljava/time/LocalTime;",
			arg0
		);
	}
	QAndroidJniObject LocalTime::plusNanos(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusNanos",
			"(J)Ljava/time/LocalTime;",
			arg0
		);
	}
	QAndroidJniObject LocalTime::plusSeconds(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusSeconds",
			"(J)Ljava/time/LocalTime;",
			arg0
		);
	}
	jobject LocalTime::query(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"query",
			"(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;",
			arg0.__jniObject().object()
		).object<jobject>();
	}
	QAndroidJniObject LocalTime::range(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.__jniObject().object()
		);
	}
	jlong LocalTime::toEpochSecond(java::time::LocalDate arg0, java::time::ZoneOffset arg1)
	{
		return __thiz.callMethod<jlong>(
			"toEpochSecond",
			"(Ljava/time/LocalDate;Ljava/time/ZoneOffset;)J",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jlong LocalTime::toNanoOfDay()
	{
		return __thiz.callMethod<jlong>(
			"toNanoOfDay",
			"()J"
		);
	}
	jint LocalTime::toSecondOfDay()
	{
		return __thiz.callMethod<jint>(
			"toSecondOfDay",
			"()I"
		);
	}
	jstring LocalTime::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject LocalTime::truncatedTo(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"truncatedTo",
			"(Ljava/time/temporal/TemporalUnit;)Ljava/time/LocalTime;",
			arg0.__jniObject().object()
		);
	}
	jlong LocalTime::until(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return __thiz.callMethod<jlong>(
			"until",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject LocalTime::with(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/LocalTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LocalTime::with(__JniBaseClass arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalField;J)Ljava/time/LocalTime;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject LocalTime::withHour(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withHour",
			"(I)Ljava/time/LocalTime;",
			arg0
		);
	}
	QAndroidJniObject LocalTime::withMinute(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withMinute",
			"(I)Ljava/time/LocalTime;",
			arg0
		);
	}
	QAndroidJniObject LocalTime::withNano(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withNano",
			"(I)Ljava/time/LocalTime;",
			arg0
		);
	}
	QAndroidJniObject LocalTime::withSecond(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withSecond",
			"(I)Ljava/time/LocalTime;",
			arg0
		);
	}
} // namespace java::time

