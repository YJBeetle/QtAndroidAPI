#include "../io/ObjectInputStream.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../math/BigDecimal.hpp"
#include "../math/BigInteger.hpp"
#include "./Duration.hpp"

namespace java::time
{
	// Fields
	java::time::Duration Duration::ZERO()
	{
		return getStaticObjectField(
			"java.time.Duration",
			"ZERO",
			"Ljava/time/Duration;"
		);
	}
	
	// Constructors
	
	// Methods
	java::time::Duration Duration::between(JObject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.time.Duration",
			"between",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/Temporal;)Ljava/time/Duration;",
			arg0.object(),
			arg1.object()
		);
	}
	java::time::Duration Duration::from(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.time.Duration",
			"from",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/Duration;",
			arg0.object()
		);
	}
	java::time::Duration Duration::of(jlong arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.time.Duration",
			"of",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/Duration;",
			arg0,
			arg1.object()
		);
	}
	java::time::Duration Duration::ofDays(jlong arg0)
	{
		return callStaticObjectMethod(
			"java.time.Duration",
			"ofDays",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	java::time::Duration Duration::ofHours(jlong arg0)
	{
		return callStaticObjectMethod(
			"java.time.Duration",
			"ofHours",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	java::time::Duration Duration::ofMillis(jlong arg0)
	{
		return callStaticObjectMethod(
			"java.time.Duration",
			"ofMillis",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	java::time::Duration Duration::ofMinutes(jlong arg0)
	{
		return callStaticObjectMethod(
			"java.time.Duration",
			"ofMinutes",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	java::time::Duration Duration::ofNanos(jlong arg0)
	{
		return callStaticObjectMethod(
			"java.time.Duration",
			"ofNanos",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	java::time::Duration Duration::ofSeconds(jlong arg0)
	{
		return callStaticObjectMethod(
			"java.time.Duration",
			"ofSeconds",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	java::time::Duration Duration::ofSeconds(jlong arg0, jlong arg1)
	{
		return callStaticObjectMethod(
			"java.time.Duration",
			"ofSeconds",
			"(JJ)Ljava/time/Duration;",
			arg0,
			arg1
		);
	}
	java::time::Duration Duration::parse(JString arg0)
	{
		return callStaticObjectMethod(
			"java.time.Duration",
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/Duration;",
			arg0.object<jstring>()
		);
	}
	java::time::Duration Duration::abs() const
	{
		return callObjectMethod(
			"abs",
			"()Ljava/time/Duration;"
		);
	}
	JObject Duration::addTo(JObject arg0) const
	{
		return callObjectMethod(
			"addTo",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.object()
		);
	}
	jint Duration::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jint Duration::compareTo(java::time::Duration arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/time/Duration;)I",
			arg0.object()
		);
	}
	java::time::Duration Duration::dividedBy(jlong arg0) const
	{
		return callObjectMethod(
			"dividedBy",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	jlong Duration::dividedBy(java::time::Duration arg0) const
	{
		return callMethod<jlong>(
			"dividedBy",
			"(Ljava/time/Duration;)J",
			arg0.object()
		);
	}
	jboolean Duration::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jlong Duration::get(JObject arg0) const
	{
		return callMethod<jlong>(
			"get",
			"(Ljava/time/temporal/TemporalUnit;)J",
			arg0.object()
		);
	}
	jint Duration::getNano() const
	{
		return callMethod<jint>(
			"getNano",
			"()I"
		);
	}
	jlong Duration::getSeconds() const
	{
		return callMethod<jlong>(
			"getSeconds",
			"()J"
		);
	}
	JObject Duration::getUnits() const
	{
		return callObjectMethod(
			"getUnits",
			"()Ljava/util/List;"
		);
	}
	jint Duration::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Duration::isNegative() const
	{
		return callMethod<jboolean>(
			"isNegative",
			"()Z"
		);
	}
	jboolean Duration::isZero() const
	{
		return callMethod<jboolean>(
			"isZero",
			"()Z"
		);
	}
	java::time::Duration Duration::minus(java::time::Duration arg0) const
	{
		return callObjectMethod(
			"minus",
			"(Ljava/time/Duration;)Ljava/time/Duration;",
			arg0.object()
		);
	}
	java::time::Duration Duration::minus(jlong arg0, JObject arg1) const
	{
		return callObjectMethod(
			"minus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/Duration;",
			arg0,
			arg1.object()
		);
	}
	java::time::Duration Duration::minusDays(jlong arg0) const
	{
		return callObjectMethod(
			"minusDays",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	java::time::Duration Duration::minusHours(jlong arg0) const
	{
		return callObjectMethod(
			"minusHours",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	java::time::Duration Duration::minusMillis(jlong arg0) const
	{
		return callObjectMethod(
			"minusMillis",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	java::time::Duration Duration::minusMinutes(jlong arg0) const
	{
		return callObjectMethod(
			"minusMinutes",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	java::time::Duration Duration::minusNanos(jlong arg0) const
	{
		return callObjectMethod(
			"minusNanos",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	java::time::Duration Duration::minusSeconds(jlong arg0) const
	{
		return callObjectMethod(
			"minusSeconds",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	java::time::Duration Duration::multipliedBy(jlong arg0) const
	{
		return callObjectMethod(
			"multipliedBy",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	java::time::Duration Duration::negated() const
	{
		return callObjectMethod(
			"negated",
			"()Ljava/time/Duration;"
		);
	}
	java::time::Duration Duration::plus(java::time::Duration arg0) const
	{
		return callObjectMethod(
			"plus",
			"(Ljava/time/Duration;)Ljava/time/Duration;",
			arg0.object()
		);
	}
	java::time::Duration Duration::plus(jlong arg0, JObject arg1) const
	{
		return callObjectMethod(
			"plus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/Duration;",
			arg0,
			arg1.object()
		);
	}
	java::time::Duration Duration::plusDays(jlong arg0) const
	{
		return callObjectMethod(
			"plusDays",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	java::time::Duration Duration::plusHours(jlong arg0) const
	{
		return callObjectMethod(
			"plusHours",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	java::time::Duration Duration::plusMillis(jlong arg0) const
	{
		return callObjectMethod(
			"plusMillis",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	java::time::Duration Duration::plusMinutes(jlong arg0) const
	{
		return callObjectMethod(
			"plusMinutes",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	java::time::Duration Duration::plusNanos(jlong arg0) const
	{
		return callObjectMethod(
			"plusNanos",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	java::time::Duration Duration::plusSeconds(jlong arg0) const
	{
		return callObjectMethod(
			"plusSeconds",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
	JObject Duration::subtractFrom(JObject arg0) const
	{
		return callObjectMethod(
			"subtractFrom",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.object()
		);
	}
	jlong Duration::toDays() const
	{
		return callMethod<jlong>(
			"toDays",
			"()J"
		);
	}
	jlong Duration::toDaysPart() const
	{
		return callMethod<jlong>(
			"toDaysPart",
			"()J"
		);
	}
	jlong Duration::toHours() const
	{
		return callMethod<jlong>(
			"toHours",
			"()J"
		);
	}
	jint Duration::toHoursPart() const
	{
		return callMethod<jint>(
			"toHoursPart",
			"()I"
		);
	}
	jlong Duration::toMillis() const
	{
		return callMethod<jlong>(
			"toMillis",
			"()J"
		);
	}
	jint Duration::toMillisPart() const
	{
		return callMethod<jint>(
			"toMillisPart",
			"()I"
		);
	}
	jlong Duration::toMinutes() const
	{
		return callMethod<jlong>(
			"toMinutes",
			"()J"
		);
	}
	jint Duration::toMinutesPart() const
	{
		return callMethod<jint>(
			"toMinutesPart",
			"()I"
		);
	}
	jlong Duration::toNanos() const
	{
		return callMethod<jlong>(
			"toNanos",
			"()J"
		);
	}
	jint Duration::toNanosPart() const
	{
		return callMethod<jint>(
			"toNanosPart",
			"()I"
		);
	}
	jlong Duration::toSeconds() const
	{
		return callMethod<jlong>(
			"toSeconds",
			"()J"
		);
	}
	jint Duration::toSecondsPart() const
	{
		return callMethod<jint>(
			"toSecondsPart",
			"()I"
		);
	}
	JString Duration::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	java::time::Duration Duration::truncatedTo(JObject arg0) const
	{
		return callObjectMethod(
			"truncatedTo",
			"(Ljava/time/temporal/TemporalUnit;)Ljava/time/Duration;",
			arg0.object()
		);
	}
	java::time::Duration Duration::withNanos(jint arg0) const
	{
		return callObjectMethod(
			"withNanos",
			"(I)Ljava/time/Duration;",
			arg0
		);
	}
	java::time::Duration Duration::withSeconds(jlong arg0) const
	{
		return callObjectMethod(
			"withSeconds",
			"(J)Ljava/time/Duration;",
			arg0
		);
	}
} // namespace java::time

