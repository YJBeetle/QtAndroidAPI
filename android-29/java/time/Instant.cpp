#include "../io/ObjectInputStream.hpp"
#include "./Clock.hpp"
#include "./OffsetDateTime.hpp"
#include "./ZoneId.hpp"
#include "./ZoneOffset.hpp"
#include "./ZonedDateTime.hpp"
#include "./temporal/ValueRange.hpp"
#include "./Instant.hpp"

namespace java::time
{
	// Fields
	java::time::Instant Instant::EPOCH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.Instant",
			"EPOCH",
			"Ljava/time/Instant;"
		);
	}
	java::time::Instant Instant::MAX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.Instant",
			"MAX",
			"Ljava/time/Instant;"
		);
	}
	java::time::Instant Instant::MIN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.Instant",
			"MIN",
			"Ljava/time/Instant;"
		);
	}
	
	// QAndroidJniObject forward
	Instant::Instant(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	java::time::Instant Instant::from(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Instant",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/Instant;",
			arg0.object()
		);
	}
	java::time::Instant Instant::now()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Instant",
			"now",
			"()Ljava/time/Instant;"
		);
	}
	java::time::Instant Instant::now(java::time::Clock arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Instant",
			"now",
			"(Ljava/time/Clock;)Ljava/time/Instant;",
			arg0.object()
		);
	}
	java::time::Instant Instant::ofEpochMilli(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Instant",
			"ofEpochMilli",
			"(J)Ljava/time/Instant;",
			arg0
		);
	}
	java::time::Instant Instant::ofEpochSecond(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Instant",
			"ofEpochSecond",
			"(J)Ljava/time/Instant;",
			arg0
		);
	}
	java::time::Instant Instant::ofEpochSecond(jlong arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Instant",
			"ofEpochSecond",
			"(JJ)Ljava/time/Instant;",
			arg0,
			arg1
		);
	}
	java::time::Instant Instant::parse(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Instant",
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/Instant;",
			arg0
		);
	}
	__JniBaseClass Instant::adjustInto(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"adjustInto",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.object()
		);
	}
	java::time::OffsetDateTime Instant::atOffset(java::time::ZoneOffset arg0)
	{
		return callObjectMethod(
			"atOffset",
			"(Ljava/time/ZoneOffset;)Ljava/time/OffsetDateTime;",
			arg0.object()
		);
	}
	java::time::ZonedDateTime Instant::atZone(java::time::ZoneId arg0)
	{
		return callObjectMethod(
			"atZone",
			"(Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;",
			arg0.object()
		);
	}
	jint Instant::compareTo(jobject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint Instant::compareTo(java::time::Instant arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/time/Instant;)I",
			arg0.object()
		);
	}
	jboolean Instant::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint Instant::get(__JniBaseClass arg0)
	{
		return callMethod<jint>(
			"get",
			"(Ljava/time/temporal/TemporalField;)I",
			arg0.object()
		);
	}
	jlong Instant::getEpochSecond()
	{
		return callMethod<jlong>(
			"getEpochSecond",
			"()J"
		);
	}
	jlong Instant::getLong(__JniBaseClass arg0)
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.object()
		);
	}
	jint Instant::getNano()
	{
		return callMethod<jint>(
			"getNano",
			"()I"
		);
	}
	jint Instant::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Instant::isAfter(java::time::Instant arg0)
	{
		return callMethod<jboolean>(
			"isAfter",
			"(Ljava/time/Instant;)Z",
			arg0.object()
		);
	}
	jboolean Instant::isBefore(java::time::Instant arg0)
	{
		return callMethod<jboolean>(
			"isBefore",
			"(Ljava/time/Instant;)Z",
			arg0.object()
		);
	}
	jboolean Instant::isSupported(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"isSupported",
			"(Ljava/time/temporal/TemporalField;)Z",
			arg0.object()
		);
	}
	java::time::Instant Instant::minus(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"minus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/Instant;",
			arg0.object()
		);
	}
	java::time::Instant Instant::minus(jlong arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"minus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/Instant;",
			arg0,
			arg1.object()
		);
	}
	java::time::Instant Instant::minusMillis(jlong arg0)
	{
		return callObjectMethod(
			"minusMillis",
			"(J)Ljava/time/Instant;",
			arg0
		);
	}
	java::time::Instant Instant::minusNanos(jlong arg0)
	{
		return callObjectMethod(
			"minusNanos",
			"(J)Ljava/time/Instant;",
			arg0
		);
	}
	java::time::Instant Instant::minusSeconds(jlong arg0)
	{
		return callObjectMethod(
			"minusSeconds",
			"(J)Ljava/time/Instant;",
			arg0
		);
	}
	java::time::Instant Instant::plus(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"plus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/Instant;",
			arg0.object()
		);
	}
	java::time::Instant Instant::plus(jlong arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"plus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/Instant;",
			arg0,
			arg1.object()
		);
	}
	java::time::Instant Instant::plusMillis(jlong arg0)
	{
		return callObjectMethod(
			"plusMillis",
			"(J)Ljava/time/Instant;",
			arg0
		);
	}
	java::time::Instant Instant::plusNanos(jlong arg0)
	{
		return callObjectMethod(
			"plusNanos",
			"(J)Ljava/time/Instant;",
			arg0
		);
	}
	java::time::Instant Instant::plusSeconds(jlong arg0)
	{
		return callObjectMethod(
			"plusSeconds",
			"(J)Ljava/time/Instant;",
			arg0
		);
	}
	jobject Instant::query(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"query",
			"(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;",
			arg0.object()
		).object<jobject>();
	}
	java::time::temporal::ValueRange Instant::range(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
	jlong Instant::toEpochMilli()
	{
		return callMethod<jlong>(
			"toEpochMilli",
			"()J"
		);
	}
	jstring Instant::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	java::time::Instant Instant::truncatedTo(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"truncatedTo",
			"(Ljava/time/temporal/TemporalUnit;)Ljava/time/Instant;",
			arg0.object()
		);
	}
	jlong Instant::until(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callMethod<jlong>(
			"until",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J",
			arg0.object(),
			arg1.object()
		);
	}
	java::time::Instant Instant::with(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/Instant;",
			arg0.object()
		);
	}
	java::time::Instant Instant::with(__JniBaseClass arg0, jlong arg1)
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalField;J)Ljava/time/Instant;",
			arg0.object(),
			arg1
		);
	}
} // namespace java::time

