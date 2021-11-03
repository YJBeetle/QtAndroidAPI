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
	java::time::LocalTime LocalTime::MAX()
	{
		return getStaticObjectField(
			"java.time.LocalTime",
			"MAX",
			"Ljava/time/LocalTime;"
		);
	}
	java::time::LocalTime LocalTime::MIDNIGHT()
	{
		return getStaticObjectField(
			"java.time.LocalTime",
			"MIDNIGHT",
			"Ljava/time/LocalTime;"
		);
	}
	java::time::LocalTime LocalTime::MIN()
	{
		return getStaticObjectField(
			"java.time.LocalTime",
			"MIN",
			"Ljava/time/LocalTime;"
		);
	}
	java::time::LocalTime LocalTime::NOON()
	{
		return getStaticObjectField(
			"java.time.LocalTime",
			"NOON",
			"Ljava/time/LocalTime;"
		);
	}
	
	// QAndroidJniObject forward
	LocalTime::LocalTime(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::time::LocalTime LocalTime::from(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.time.LocalTime",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/LocalTime;",
			arg0.object()
		);
	}
	java::time::LocalTime LocalTime::now()
	{
		return callStaticObjectMethod(
			"java.time.LocalTime",
			"now",
			"()Ljava/time/LocalTime;"
		);
	}
	java::time::LocalTime LocalTime::now(java::time::Clock arg0)
	{
		return callStaticObjectMethod(
			"java.time.LocalTime",
			"now",
			"(Ljava/time/Clock;)Ljava/time/LocalTime;",
			arg0.object()
		);
	}
	java::time::LocalTime LocalTime::now(java::time::ZoneId arg0)
	{
		return callStaticObjectMethod(
			"java.time.LocalTime",
			"now",
			"(Ljava/time/ZoneId;)Ljava/time/LocalTime;",
			arg0.object()
		);
	}
	java::time::LocalTime LocalTime::of(jint arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.time.LocalTime",
			"of",
			"(II)Ljava/time/LocalTime;",
			arg0,
			arg1
		);
	}
	java::time::LocalTime LocalTime::of(jint arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.time.LocalTime",
			"of",
			"(III)Ljava/time/LocalTime;",
			arg0,
			arg1,
			arg2
		);
	}
	java::time::LocalTime LocalTime::of(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"java.time.LocalTime",
			"of",
			"(IIII)Ljava/time/LocalTime;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	java::time::LocalTime LocalTime::ofInstant(java::time::Instant arg0, java::time::ZoneId arg1)
	{
		return callStaticObjectMethod(
			"java.time.LocalTime",
			"ofInstant",
			"(Ljava/time/Instant;Ljava/time/ZoneId;)Ljava/time/LocalTime;",
			arg0.object(),
			arg1.object()
		);
	}
	java::time::LocalTime LocalTime::ofNanoOfDay(jlong arg0)
	{
		return callStaticObjectMethod(
			"java.time.LocalTime",
			"ofNanoOfDay",
			"(J)Ljava/time/LocalTime;",
			arg0
		);
	}
	java::time::LocalTime LocalTime::ofSecondOfDay(jlong arg0)
	{
		return callStaticObjectMethod(
			"java.time.LocalTime",
			"ofSecondOfDay",
			"(J)Ljava/time/LocalTime;",
			arg0
		);
	}
	java::time::LocalTime LocalTime::parse(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.time.LocalTime",
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/LocalTime;",
			arg0
		);
	}
	java::time::LocalTime LocalTime::parse(jstring arg0, java::time::format::DateTimeFormatter arg1)
	{
		return callStaticObjectMethod(
			"java.time.LocalTime",
			"parse",
			"(Ljava/lang/CharSequence;Ljava/time/format/DateTimeFormatter;)Ljava/time/LocalTime;",
			arg0,
			arg1.object()
		);
	}
	JObject LocalTime::adjustInto(JObject arg0)
	{
		return callObjectMethod(
			"adjustInto",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.object()
		);
	}
	java::time::LocalDateTime LocalTime::atDate(java::time::LocalDate arg0)
	{
		return callObjectMethod(
			"atDate",
			"(Ljava/time/LocalDate;)Ljava/time/LocalDateTime;",
			arg0.object()
		);
	}
	java::time::OffsetTime LocalTime::atOffset(java::time::ZoneOffset arg0)
	{
		return callObjectMethod(
			"atOffset",
			"(Ljava/time/ZoneOffset;)Ljava/time/OffsetTime;",
			arg0.object()
		);
	}
	jint LocalTime::compareTo(jobject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint LocalTime::compareTo(java::time::LocalTime arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/time/LocalTime;)I",
			arg0.object()
		);
	}
	jboolean LocalTime::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring LocalTime::format(java::time::format::DateTimeFormatter arg0)
	{
		return callObjectMethod(
			"format",
			"(Ljava/time/format/DateTimeFormatter;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jint LocalTime::get(JObject arg0)
	{
		return callMethod<jint>(
			"get",
			"(Ljava/time/temporal/TemporalField;)I",
			arg0.object()
		);
	}
	jint LocalTime::getHour()
	{
		return callMethod<jint>(
			"getHour",
			"()I"
		);
	}
	jlong LocalTime::getLong(JObject arg0)
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.object()
		);
	}
	jint LocalTime::getMinute()
	{
		return callMethod<jint>(
			"getMinute",
			"()I"
		);
	}
	jint LocalTime::getNano()
	{
		return callMethod<jint>(
			"getNano",
			"()I"
		);
	}
	jint LocalTime::getSecond()
	{
		return callMethod<jint>(
			"getSecond",
			"()I"
		);
	}
	jint LocalTime::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean LocalTime::isAfter(java::time::LocalTime arg0)
	{
		return callMethod<jboolean>(
			"isAfter",
			"(Ljava/time/LocalTime;)Z",
			arg0.object()
		);
	}
	jboolean LocalTime::isBefore(java::time::LocalTime arg0)
	{
		return callMethod<jboolean>(
			"isBefore",
			"(Ljava/time/LocalTime;)Z",
			arg0.object()
		);
	}
	jboolean LocalTime::isSupported(JObject arg0)
	{
		return callMethod<jboolean>(
			"isSupported",
			"(Ljava/time/temporal/TemporalField;)Z",
			arg0.object()
		);
	}
	java::time::LocalTime LocalTime::minus(JObject arg0)
	{
		return callObjectMethod(
			"minus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/LocalTime;",
			arg0.object()
		);
	}
	java::time::LocalTime LocalTime::minus(jlong arg0, JObject arg1)
	{
		return callObjectMethod(
			"minus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/LocalTime;",
			arg0,
			arg1.object()
		);
	}
	java::time::LocalTime LocalTime::minusHours(jlong arg0)
	{
		return callObjectMethod(
			"minusHours",
			"(J)Ljava/time/LocalTime;",
			arg0
		);
	}
	java::time::LocalTime LocalTime::minusMinutes(jlong arg0)
	{
		return callObjectMethod(
			"minusMinutes",
			"(J)Ljava/time/LocalTime;",
			arg0
		);
	}
	java::time::LocalTime LocalTime::minusNanos(jlong arg0)
	{
		return callObjectMethod(
			"minusNanos",
			"(J)Ljava/time/LocalTime;",
			arg0
		);
	}
	java::time::LocalTime LocalTime::minusSeconds(jlong arg0)
	{
		return callObjectMethod(
			"minusSeconds",
			"(J)Ljava/time/LocalTime;",
			arg0
		);
	}
	java::time::LocalTime LocalTime::plus(JObject arg0)
	{
		return callObjectMethod(
			"plus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/LocalTime;",
			arg0.object()
		);
	}
	java::time::LocalTime LocalTime::plus(jlong arg0, JObject arg1)
	{
		return callObjectMethod(
			"plus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/LocalTime;",
			arg0,
			arg1.object()
		);
	}
	java::time::LocalTime LocalTime::plusHours(jlong arg0)
	{
		return callObjectMethod(
			"plusHours",
			"(J)Ljava/time/LocalTime;",
			arg0
		);
	}
	java::time::LocalTime LocalTime::plusMinutes(jlong arg0)
	{
		return callObjectMethod(
			"plusMinutes",
			"(J)Ljava/time/LocalTime;",
			arg0
		);
	}
	java::time::LocalTime LocalTime::plusNanos(jlong arg0)
	{
		return callObjectMethod(
			"plusNanos",
			"(J)Ljava/time/LocalTime;",
			arg0
		);
	}
	java::time::LocalTime LocalTime::plusSeconds(jlong arg0)
	{
		return callObjectMethod(
			"plusSeconds",
			"(J)Ljava/time/LocalTime;",
			arg0
		);
	}
	jobject LocalTime::query(JObject arg0)
	{
		return callObjectMethod(
			"query",
			"(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;",
			arg0.object()
		).object<jobject>();
	}
	java::time::temporal::ValueRange LocalTime::range(JObject arg0)
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
	jlong LocalTime::toEpochSecond(java::time::LocalDate arg0, java::time::ZoneOffset arg1)
	{
		return callMethod<jlong>(
			"toEpochSecond",
			"(Ljava/time/LocalDate;Ljava/time/ZoneOffset;)J",
			arg0.object(),
			arg1.object()
		);
	}
	jlong LocalTime::toNanoOfDay()
	{
		return callMethod<jlong>(
			"toNanoOfDay",
			"()J"
		);
	}
	jint LocalTime::toSecondOfDay()
	{
		return callMethod<jint>(
			"toSecondOfDay",
			"()I"
		);
	}
	jstring LocalTime::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	java::time::LocalTime LocalTime::truncatedTo(JObject arg0)
	{
		return callObjectMethod(
			"truncatedTo",
			"(Ljava/time/temporal/TemporalUnit;)Ljava/time/LocalTime;",
			arg0.object()
		);
	}
	jlong LocalTime::until(JObject arg0, JObject arg1)
	{
		return callMethod<jlong>(
			"until",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J",
			arg0.object(),
			arg1.object()
		);
	}
	java::time::LocalTime LocalTime::with(JObject arg0)
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/LocalTime;",
			arg0.object()
		);
	}
	java::time::LocalTime LocalTime::with(JObject arg0, jlong arg1)
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalField;J)Ljava/time/LocalTime;",
			arg0.object(),
			arg1
		);
	}
	java::time::LocalTime LocalTime::withHour(jint arg0)
	{
		return callObjectMethod(
			"withHour",
			"(I)Ljava/time/LocalTime;",
			arg0
		);
	}
	java::time::LocalTime LocalTime::withMinute(jint arg0)
	{
		return callObjectMethod(
			"withMinute",
			"(I)Ljava/time/LocalTime;",
			arg0
		);
	}
	java::time::LocalTime LocalTime::withNano(jint arg0)
	{
		return callObjectMethod(
			"withNano",
			"(I)Ljava/time/LocalTime;",
			arg0
		);
	}
	java::time::LocalTime LocalTime::withSecond(jint arg0)
	{
		return callObjectMethod(
			"withSecond",
			"(I)Ljava/time/LocalTime;",
			arg0
		);
	}
} // namespace java::time

