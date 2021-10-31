#include "../io/ObjectInputStream.hpp"
#include "../math/BigDecimal.hpp"
#include "../math/BigInteger.hpp"
#include "./Duration.hpp"

namespace java::time
{
	// Fields
	QAndroidJniObject Duration::ZERO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.Duration",
			"ZERO",
			"Ljava/time/Duration;"
		);
	}
	
	// QAndroidJniObject forward
	Duration::Duration(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject Duration::between(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Duration",
			"between",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/Temporal;)Ljava/time/Duration;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject Duration::from(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Duration",
			"from",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/Duration;",
			arg0.object()
		);
	}
	QAndroidJniObject Duration::of(jlong arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Duration",
			"of",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/Duration;",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject Duration::ofDays(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Duration",
			"ofDays",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	QAndroidJniObject Duration::ofHours(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Duration",
			"ofHours",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	QAndroidJniObject Duration::ofMillis(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Duration",
			"ofMillis",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	QAndroidJniObject Duration::ofMinutes(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Duration",
			"ofMinutes",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	QAndroidJniObject Duration::ofNanos(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Duration",
			"ofNanos",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	QAndroidJniObject Duration::ofSeconds(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Duration",
			"ofSeconds",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	QAndroidJniObject Duration::ofSeconds(jlong arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Duration",
			"ofSeconds",
			"(JJ)Ljava/time/Duration;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Duration::parse(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Duration",
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/Duration;",
			arg0
		);
	}
	QAndroidJniObject Duration::abs()
	{
		return callObjectMethod(
			"abs",
			"()Ljava/time/Duration;"
		);
	}
	QAndroidJniObject Duration::addTo(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"addTo",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.object()
		);
	}
	jint Duration::compareTo(jobject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint Duration::compareTo(java::time::Duration arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/time/Duration;)I",
			arg0.object()
		);
	}
	QAndroidJniObject Duration::dividedBy(jlong arg0)
	{
		return callObjectMethod(
			"dividedBy",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	jlong Duration::dividedBy(java::time::Duration arg0)
	{
		return callMethod<jlong>(
			"dividedBy",
			"(Ljava/time/Duration;)J",
			arg0.object()
		);
	}
	jboolean Duration::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jlong Duration::get(__JniBaseClass arg0)
	{
		return callMethod<jlong>(
			"get",
			"(Ljava/time/temporal/TemporalUnit;)J",
			arg0.object()
		);
	}
	jint Duration::getNano()
	{
		return callMethod<jint>(
			"getNano",
			"()I"
		);
	}
	jlong Duration::getSeconds()
	{
		return callMethod<jlong>(
			"getSeconds",
			"()J"
		);
	}
	QAndroidJniObject Duration::getUnits()
	{
		return callObjectMethod(
			"getUnits",
			"()Ljava/util/List;"
		);
	}
	jint Duration::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Duration::isNegative()
	{
		return callMethod<jboolean>(
			"isNegative",
			"()Z"
		);
	}
	jboolean Duration::isZero()
	{
		return callMethod<jboolean>(
			"isZero",
			"()Z"
		);
	}
	QAndroidJniObject Duration::minus(java::time::Duration arg0)
	{
		return callObjectMethod(
			"minus",
			"(Ljava/time/Duration;)Ljava/time/Duration;",
			arg0.object()
		);
	}
	QAndroidJniObject Duration::minus(jlong arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"minus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/Duration;",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject Duration::minusDays(jlong arg0)
	{
		return callObjectMethod(
			"minusDays",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	QAndroidJniObject Duration::minusHours(jlong arg0)
	{
		return callObjectMethod(
			"minusHours",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	QAndroidJniObject Duration::minusMillis(jlong arg0)
	{
		return callObjectMethod(
			"minusMillis",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	QAndroidJniObject Duration::minusMinutes(jlong arg0)
	{
		return callObjectMethod(
			"minusMinutes",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	QAndroidJniObject Duration::minusNanos(jlong arg0)
	{
		return callObjectMethod(
			"minusNanos",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	QAndroidJniObject Duration::minusSeconds(jlong arg0)
	{
		return callObjectMethod(
			"minusSeconds",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	QAndroidJniObject Duration::multipliedBy(jlong arg0)
	{
		return callObjectMethod(
			"multipliedBy",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	QAndroidJniObject Duration::negated()
	{
		return callObjectMethod(
			"negated",
			"()Ljava/time/Duration;"
		);
	}
	QAndroidJniObject Duration::plus(java::time::Duration arg0)
	{
		return callObjectMethod(
			"plus",
			"(Ljava/time/Duration;)Ljava/time/Duration;",
			arg0.object()
		);
	}
	QAndroidJniObject Duration::plus(jlong arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"plus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/Duration;",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject Duration::plusDays(jlong arg0)
	{
		return callObjectMethod(
			"plusDays",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	QAndroidJniObject Duration::plusHours(jlong arg0)
	{
		return callObjectMethod(
			"plusHours",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	QAndroidJniObject Duration::plusMillis(jlong arg0)
	{
		return callObjectMethod(
			"plusMillis",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	QAndroidJniObject Duration::plusMinutes(jlong arg0)
	{
		return callObjectMethod(
			"plusMinutes",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	QAndroidJniObject Duration::plusNanos(jlong arg0)
	{
		return callObjectMethod(
			"plusNanos",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	QAndroidJniObject Duration::plusSeconds(jlong arg0)
	{
		return callObjectMethod(
			"plusSeconds",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	QAndroidJniObject Duration::subtractFrom(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"subtractFrom",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.object()
		);
	}
	jlong Duration::toDays()
	{
		return callMethod<jlong>(
			"toDays",
			"()J"
		);
	}
	jlong Duration::toDaysPart()
	{
		return callMethod<jlong>(
			"toDaysPart",
			"()J"
		);
	}
	jlong Duration::toHours()
	{
		return callMethod<jlong>(
			"toHours",
			"()J"
		);
	}
	jint Duration::toHoursPart()
	{
		return callMethod<jint>(
			"toHoursPart",
			"()I"
		);
	}
	jlong Duration::toMillis()
	{
		return callMethod<jlong>(
			"toMillis",
			"()J"
		);
	}
	jint Duration::toMillisPart()
	{
		return callMethod<jint>(
			"toMillisPart",
			"()I"
		);
	}
	jlong Duration::toMinutes()
	{
		return callMethod<jlong>(
			"toMinutes",
			"()J"
		);
	}
	jint Duration::toMinutesPart()
	{
		return callMethod<jint>(
			"toMinutesPart",
			"()I"
		);
	}
	jlong Duration::toNanos()
	{
		return callMethod<jlong>(
			"toNanos",
			"()J"
		);
	}
	jint Duration::toNanosPart()
	{
		return callMethod<jint>(
			"toNanosPart",
			"()I"
		);
	}
	jlong Duration::toSeconds()
	{
		return callMethod<jlong>(
			"toSeconds",
			"()J"
		);
	}
	jint Duration::toSecondsPart()
	{
		return callMethod<jint>(
			"toSecondsPart",
			"()I"
		);
	}
	jstring Duration::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Duration::truncatedTo(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"truncatedTo",
			"(Ljava/time/temporal/TemporalUnit;)Ljava/time/Duration;",
			arg0.object()
		);
	}
	QAndroidJniObject Duration::withNanos(jint arg0)
	{
		return callObjectMethod(
			"withNanos",
			"(I)Ljava/time/Duration;",
			arg0
		);
	}
	QAndroidJniObject Duration::withSeconds(jlong arg0)
	{
		return callObjectMethod(
			"withSeconds",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
} // namespace java::time

