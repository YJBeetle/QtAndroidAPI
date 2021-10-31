#include "../io/ObjectInputStream.hpp"
#include "./Clock.hpp"
#include "./Instant.hpp"
#include "./LocalDate.hpp"
#include "./LocalTime.hpp"
#include "./OffsetDateTime.hpp"
#include "./ZoneId.hpp"
#include "./ZoneOffset.hpp"
#include "./format/DateTimeFormatter.hpp"
#include "./temporal/ValueRange.hpp"
#include "./OffsetTime.hpp"

namespace java::time
{
	// Fields
	QAndroidJniObject OffsetTime::MAX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.OffsetTime",
			"MAX",
			"Ljava/time/OffsetTime;"
		);
	}
	QAndroidJniObject OffsetTime::MIN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.OffsetTime",
			"MIN",
			"Ljava/time/OffsetTime;"
		);
	}
	
	// QAndroidJniObject forward
	OffsetTime::OffsetTime(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject OffsetTime::from(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.OffsetTime",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/OffsetTime;",
			arg0.object()
		);
	}
	QAndroidJniObject OffsetTime::now()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.OffsetTime",
			"now",
			"()Ljava/time/OffsetTime;"
		);
	}
	QAndroidJniObject OffsetTime::now(java::time::Clock arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.OffsetTime",
			"now",
			"(Ljava/time/Clock;)Ljava/time/OffsetTime;",
			arg0.object()
		);
	}
	QAndroidJniObject OffsetTime::now(java::time::ZoneId arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.OffsetTime",
			"now",
			"(Ljava/time/ZoneId;)Ljava/time/OffsetTime;",
			arg0.object()
		);
	}
	QAndroidJniObject OffsetTime::of(java::time::LocalTime arg0, java::time::ZoneOffset arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.OffsetTime",
			"of",
			"(Ljava/time/LocalTime;Ljava/time/ZoneOffset;)Ljava/time/OffsetTime;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject OffsetTime::of(jint arg0, jint arg1, jint arg2, jint arg3, java::time::ZoneOffset arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.OffsetTime",
			"of",
			"(IIIILjava/time/ZoneOffset;)Ljava/time/OffsetTime;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
	QAndroidJniObject OffsetTime::ofInstant(java::time::Instant arg0, java::time::ZoneId arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.OffsetTime",
			"ofInstant",
			"(Ljava/time/Instant;Ljava/time/ZoneId;)Ljava/time/OffsetTime;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject OffsetTime::parse(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.OffsetTime",
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/OffsetTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetTime::parse(jstring arg0, java::time::format::DateTimeFormatter arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.OffsetTime",
			"parse",
			"(Ljava/lang/CharSequence;Ljava/time/format/DateTimeFormatter;)Ljava/time/OffsetTime;",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject OffsetTime::adjustInto(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"adjustInto",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.object()
		);
	}
	QAndroidJniObject OffsetTime::atDate(java::time::LocalDate arg0)
	{
		return callObjectMethod(
			"atDate",
			"(Ljava/time/LocalDate;)Ljava/time/OffsetDateTime;",
			arg0.object()
		);
	}
	jint OffsetTime::compareTo(jobject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint OffsetTime::compareTo(java::time::OffsetTime arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/time/OffsetTime;)I",
			arg0.object()
		);
	}
	jboolean OffsetTime::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring OffsetTime::format(java::time::format::DateTimeFormatter arg0)
	{
		return callObjectMethod(
			"format",
			"(Ljava/time/format/DateTimeFormatter;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jint OffsetTime::get(__JniBaseClass arg0)
	{
		return callMethod<jint>(
			"get",
			"(Ljava/time/temporal/TemporalField;)I",
			arg0.object()
		);
	}
	jint OffsetTime::getHour()
	{
		return callMethod<jint>(
			"getHour",
			"()I"
		);
	}
	jlong OffsetTime::getLong(__JniBaseClass arg0)
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.object()
		);
	}
	jint OffsetTime::getMinute()
	{
		return callMethod<jint>(
			"getMinute",
			"()I"
		);
	}
	jint OffsetTime::getNano()
	{
		return callMethod<jint>(
			"getNano",
			"()I"
		);
	}
	QAndroidJniObject OffsetTime::getOffset()
	{
		return callObjectMethod(
			"getOffset",
			"()Ljava/time/ZoneOffset;"
		);
	}
	jint OffsetTime::getSecond()
	{
		return callMethod<jint>(
			"getSecond",
			"()I"
		);
	}
	jint OffsetTime::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean OffsetTime::isAfter(java::time::OffsetTime arg0)
	{
		return callMethod<jboolean>(
			"isAfter",
			"(Ljava/time/OffsetTime;)Z",
			arg0.object()
		);
	}
	jboolean OffsetTime::isBefore(java::time::OffsetTime arg0)
	{
		return callMethod<jboolean>(
			"isBefore",
			"(Ljava/time/OffsetTime;)Z",
			arg0.object()
		);
	}
	jboolean OffsetTime::isEqual(java::time::OffsetTime arg0)
	{
		return callMethod<jboolean>(
			"isEqual",
			"(Ljava/time/OffsetTime;)Z",
			arg0.object()
		);
	}
	jboolean OffsetTime::isSupported(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"isSupported",
			"(Ljava/time/temporal/TemporalField;)Z",
			arg0.object()
		);
	}
	QAndroidJniObject OffsetTime::minus(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"minus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/OffsetTime;",
			arg0.object()
		);
	}
	QAndroidJniObject OffsetTime::minus(jlong arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"minus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/OffsetTime;",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject OffsetTime::minusHours(jlong arg0)
	{
		return callObjectMethod(
			"minusHours",
			"(J)Ljava/time/OffsetTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetTime::minusMinutes(jlong arg0)
	{
		return callObjectMethod(
			"minusMinutes",
			"(J)Ljava/time/OffsetTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetTime::minusNanos(jlong arg0)
	{
		return callObjectMethod(
			"minusNanos",
			"(J)Ljava/time/OffsetTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetTime::minusSeconds(jlong arg0)
	{
		return callObjectMethod(
			"minusSeconds",
			"(J)Ljava/time/OffsetTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetTime::plus(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"plus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/OffsetTime;",
			arg0.object()
		);
	}
	QAndroidJniObject OffsetTime::plus(jlong arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"plus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/OffsetTime;",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject OffsetTime::plusHours(jlong arg0)
	{
		return callObjectMethod(
			"plusHours",
			"(J)Ljava/time/OffsetTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetTime::plusMinutes(jlong arg0)
	{
		return callObjectMethod(
			"plusMinutes",
			"(J)Ljava/time/OffsetTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetTime::plusNanos(jlong arg0)
	{
		return callObjectMethod(
			"plusNanos",
			"(J)Ljava/time/OffsetTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetTime::plusSeconds(jlong arg0)
	{
		return callObjectMethod(
			"plusSeconds",
			"(J)Ljava/time/OffsetTime;",
			arg0
		);
	}
	jobject OffsetTime::query(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"query",
			"(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;",
			arg0.object()
		).object<jobject>();
	}
	QAndroidJniObject OffsetTime::range(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
	jlong OffsetTime::toEpochSecond(java::time::LocalDate arg0)
	{
		return callMethod<jlong>(
			"toEpochSecond",
			"(Ljava/time/LocalDate;)J",
			arg0.object()
		);
	}
	QAndroidJniObject OffsetTime::toLocalTime()
	{
		return callObjectMethod(
			"toLocalTime",
			"()Ljava/time/LocalTime;"
		);
	}
	jstring OffsetTime::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject OffsetTime::truncatedTo(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"truncatedTo",
			"(Ljava/time/temporal/TemporalUnit;)Ljava/time/OffsetTime;",
			arg0.object()
		);
	}
	jlong OffsetTime::until(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callMethod<jlong>(
			"until",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject OffsetTime::with(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/OffsetTime;",
			arg0.object()
		);
	}
	QAndroidJniObject OffsetTime::with(__JniBaseClass arg0, jlong arg1)
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalField;J)Ljava/time/OffsetTime;",
			arg0.object(),
			arg1
		);
	}
	QAndroidJniObject OffsetTime::withHour(jint arg0)
	{
		return callObjectMethod(
			"withHour",
			"(I)Ljava/time/OffsetTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetTime::withMinute(jint arg0)
	{
		return callObjectMethod(
			"withMinute",
			"(I)Ljava/time/OffsetTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetTime::withNano(jint arg0)
	{
		return callObjectMethod(
			"withNano",
			"(I)Ljava/time/OffsetTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetTime::withOffsetSameInstant(java::time::ZoneOffset arg0)
	{
		return callObjectMethod(
			"withOffsetSameInstant",
			"(Ljava/time/ZoneOffset;)Ljava/time/OffsetTime;",
			arg0.object()
		);
	}
	QAndroidJniObject OffsetTime::withOffsetSameLocal(java::time::ZoneOffset arg0)
	{
		return callObjectMethod(
			"withOffsetSameLocal",
			"(Ljava/time/ZoneOffset;)Ljava/time/OffsetTime;",
			arg0.object()
		);
	}
	QAndroidJniObject OffsetTime::withSecond(jint arg0)
	{
		return callObjectMethod(
			"withSecond",
			"(I)Ljava/time/OffsetTime;",
			arg0
		);
	}
} // namespace java::time

