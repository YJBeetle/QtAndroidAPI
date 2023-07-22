#pragma once

#include "../../JArray.hpp"
#include "../io/ObjectInputStream.def.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Clock.def.hpp"
#include "./Instant.def.hpp"
#include "./LocalDate.def.hpp"
#include "./LocalDateTime.def.hpp"
#include "./OffsetTime.def.hpp"
#include "./ZoneId.def.hpp"
#include "./ZoneOffset.def.hpp"
#include "./format/DateTimeFormatter.def.hpp"
#include "./temporal/ValueRange.def.hpp"
#include "./LocalTime.def.hpp"

namespace java::time
{
	// Fields
	inline java::time::LocalTime LocalTime::MAX()
	{
		return getStaticObjectField(
			"java.time.LocalTime",
			"MAX",
			"Ljava/time/LocalTime;"
		);
	}
	inline java::time::LocalTime LocalTime::MIDNIGHT()
	{
		return getStaticObjectField(
			"java.time.LocalTime",
			"MIDNIGHT",
			"Ljava/time/LocalTime;"
		);
	}
	inline java::time::LocalTime LocalTime::MIN()
	{
		return getStaticObjectField(
			"java.time.LocalTime",
			"MIN",
			"Ljava/time/LocalTime;"
		);
	}
	inline java::time::LocalTime LocalTime::NOON()
	{
		return getStaticObjectField(
			"java.time.LocalTime",
			"NOON",
			"Ljava/time/LocalTime;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::time::LocalTime LocalTime::from(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.time.LocalTime",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/LocalTime;",
			arg0.object()
		);
	}
	inline java::time::LocalTime LocalTime::now()
	{
		return callStaticObjectMethod(
			"java.time.LocalTime",
			"now",
			"()Ljava/time/LocalTime;"
		);
	}
	inline java::time::LocalTime LocalTime::now(java::time::Clock arg0)
	{
		return callStaticObjectMethod(
			"java.time.LocalTime",
			"now",
			"(Ljava/time/Clock;)Ljava/time/LocalTime;",
			arg0.object()
		);
	}
	inline java::time::LocalTime LocalTime::now(java::time::ZoneId arg0)
	{
		return callStaticObjectMethod(
			"java.time.LocalTime",
			"now",
			"(Ljava/time/ZoneId;)Ljava/time/LocalTime;",
			arg0.object()
		);
	}
	inline java::time::LocalTime LocalTime::of(jint arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.time.LocalTime",
			"of",
			"(II)Ljava/time/LocalTime;",
			arg0,
			arg1
		);
	}
	inline java::time::LocalTime LocalTime::of(jint arg0, jint arg1, jint arg2)
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
	inline java::time::LocalTime LocalTime::of(jint arg0, jint arg1, jint arg2, jint arg3)
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
	inline java::time::LocalTime LocalTime::ofInstant(java::time::Instant arg0, java::time::ZoneId arg1)
	{
		return callStaticObjectMethod(
			"java.time.LocalTime",
			"ofInstant",
			"(Ljava/time/Instant;Ljava/time/ZoneId;)Ljava/time/LocalTime;",
			arg0.object(),
			arg1.object()
		);
	}
	inline java::time::LocalTime LocalTime::ofNanoOfDay(jlong arg0)
	{
		return callStaticObjectMethod(
			"java.time.LocalTime",
			"ofNanoOfDay",
			"(J)Ljava/time/LocalTime;",
			arg0
		);
	}
	inline java::time::LocalTime LocalTime::ofSecondOfDay(jlong arg0)
	{
		return callStaticObjectMethod(
			"java.time.LocalTime",
			"ofSecondOfDay",
			"(J)Ljava/time/LocalTime;",
			arg0
		);
	}
	inline java::time::LocalTime LocalTime::parse(JString arg0)
	{
		return callStaticObjectMethod(
			"java.time.LocalTime",
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/LocalTime;",
			arg0.object<jstring>()
		);
	}
	inline java::time::LocalTime LocalTime::parse(JString arg0, java::time::format::DateTimeFormatter arg1)
	{
		return callStaticObjectMethod(
			"java.time.LocalTime",
			"parse",
			"(Ljava/lang/CharSequence;Ljava/time/format/DateTimeFormatter;)Ljava/time/LocalTime;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JObject LocalTime::adjustInto(JObject arg0) const
	{
		return callObjectMethod(
			"adjustInto",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.object()
		);
	}
	inline java::time::LocalDateTime LocalTime::atDate(java::time::LocalDate arg0) const
	{
		return callObjectMethod(
			"atDate",
			"(Ljava/time/LocalDate;)Ljava/time/LocalDateTime;",
			arg0.object()
		);
	}
	inline java::time::OffsetTime LocalTime::atOffset(java::time::ZoneOffset arg0) const
	{
		return callObjectMethod(
			"atOffset",
			"(Ljava/time/ZoneOffset;)Ljava/time/OffsetTime;",
			arg0.object()
		);
	}
	inline jint LocalTime::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jint LocalTime::compareTo(java::time::LocalTime arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/time/LocalTime;)I",
			arg0.object()
		);
	}
	inline jboolean LocalTime::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString LocalTime::format(java::time::format::DateTimeFormatter arg0) const
	{
		return callObjectMethod(
			"format",
			"(Ljava/time/format/DateTimeFormatter;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline jint LocalTime::get(JObject arg0) const
	{
		return callMethod<jint>(
			"get",
			"(Ljava/time/temporal/TemporalField;)I",
			arg0.object()
		);
	}
	inline jint LocalTime::getHour() const
	{
		return callMethod<jint>(
			"getHour",
			"()I"
		);
	}
	inline jlong LocalTime::getLong(JObject arg0) const
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.object()
		);
	}
	inline jint LocalTime::getMinute() const
	{
		return callMethod<jint>(
			"getMinute",
			"()I"
		);
	}
	inline jint LocalTime::getNano() const
	{
		return callMethod<jint>(
			"getNano",
			"()I"
		);
	}
	inline jint LocalTime::getSecond() const
	{
		return callMethod<jint>(
			"getSecond",
			"()I"
		);
	}
	inline jint LocalTime::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean LocalTime::isAfter(java::time::LocalTime arg0) const
	{
		return callMethod<jboolean>(
			"isAfter",
			"(Ljava/time/LocalTime;)Z",
			arg0.object()
		);
	}
	inline jboolean LocalTime::isBefore(java::time::LocalTime arg0) const
	{
		return callMethod<jboolean>(
			"isBefore",
			"(Ljava/time/LocalTime;)Z",
			arg0.object()
		);
	}
	inline jboolean LocalTime::isSupported(JObject arg0) const
	{
		return callMethod<jboolean>(
			"isSupported",
			"(Ljava/time/temporal/TemporalField;)Z",
			arg0.object()
		);
	}
	inline java::time::LocalTime LocalTime::minus(JObject arg0) const
	{
		return callObjectMethod(
			"minus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/LocalTime;",
			arg0.object()
		);
	}
	inline java::time::LocalTime LocalTime::minus(jlong arg0, JObject arg1) const
	{
		return callObjectMethod(
			"minus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/LocalTime;",
			arg0,
			arg1.object()
		);
	}
	inline java::time::LocalTime LocalTime::minusHours(jlong arg0) const
	{
		return callObjectMethod(
			"minusHours",
			"(J)Ljava/time/LocalTime;",
			arg0
		);
	}
	inline java::time::LocalTime LocalTime::minusMinutes(jlong arg0) const
	{
		return callObjectMethod(
			"minusMinutes",
			"(J)Ljava/time/LocalTime;",
			arg0
		);
	}
	inline java::time::LocalTime LocalTime::minusNanos(jlong arg0) const
	{
		return callObjectMethod(
			"minusNanos",
			"(J)Ljava/time/LocalTime;",
			arg0
		);
	}
	inline java::time::LocalTime LocalTime::minusSeconds(jlong arg0) const
	{
		return callObjectMethod(
			"minusSeconds",
			"(J)Ljava/time/LocalTime;",
			arg0
		);
	}
	inline java::time::LocalTime LocalTime::plus(JObject arg0) const
	{
		return callObjectMethod(
			"plus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/LocalTime;",
			arg0.object()
		);
	}
	inline java::time::LocalTime LocalTime::plus(jlong arg0, JObject arg1) const
	{
		return callObjectMethod(
			"plus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/LocalTime;",
			arg0,
			arg1.object()
		);
	}
	inline java::time::LocalTime LocalTime::plusHours(jlong arg0) const
	{
		return callObjectMethod(
			"plusHours",
			"(J)Ljava/time/LocalTime;",
			arg0
		);
	}
	inline java::time::LocalTime LocalTime::plusMinutes(jlong arg0) const
	{
		return callObjectMethod(
			"plusMinutes",
			"(J)Ljava/time/LocalTime;",
			arg0
		);
	}
	inline java::time::LocalTime LocalTime::plusNanos(jlong arg0) const
	{
		return callObjectMethod(
			"plusNanos",
			"(J)Ljava/time/LocalTime;",
			arg0
		);
	}
	inline java::time::LocalTime LocalTime::plusSeconds(jlong arg0) const
	{
		return callObjectMethod(
			"plusSeconds",
			"(J)Ljava/time/LocalTime;",
			arg0
		);
	}
	inline JObject LocalTime::query(JObject arg0) const
	{
		return callObjectMethod(
			"query",
			"(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	inline java::time::temporal::ValueRange LocalTime::range(JObject arg0) const
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
	inline jlong LocalTime::toEpochSecond(java::time::LocalDate arg0, java::time::ZoneOffset arg1) const
	{
		return callMethod<jlong>(
			"toEpochSecond",
			"(Ljava/time/LocalDate;Ljava/time/ZoneOffset;)J",
			arg0.object(),
			arg1.object()
		);
	}
	inline jlong LocalTime::toNanoOfDay() const
	{
		return callMethod<jlong>(
			"toNanoOfDay",
			"()J"
		);
	}
	inline jint LocalTime::toSecondOfDay() const
	{
		return callMethod<jint>(
			"toSecondOfDay",
			"()I"
		);
	}
	inline JString LocalTime::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline java::time::LocalTime LocalTime::truncatedTo(JObject arg0) const
	{
		return callObjectMethod(
			"truncatedTo",
			"(Ljava/time/temporal/TemporalUnit;)Ljava/time/LocalTime;",
			arg0.object()
		);
	}
	inline jlong LocalTime::until(JObject arg0, JObject arg1) const
	{
		return callMethod<jlong>(
			"until",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J",
			arg0.object(),
			arg1.object()
		);
	}
	inline java::time::LocalTime LocalTime::with(JObject arg0) const
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/LocalTime;",
			arg0.object()
		);
	}
	inline java::time::LocalTime LocalTime::with(JObject arg0, jlong arg1) const
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalField;J)Ljava/time/LocalTime;",
			arg0.object(),
			arg1
		);
	}
	inline java::time::LocalTime LocalTime::withHour(jint arg0) const
	{
		return callObjectMethod(
			"withHour",
			"(I)Ljava/time/LocalTime;",
			arg0
		);
	}
	inline java::time::LocalTime LocalTime::withMinute(jint arg0) const
	{
		return callObjectMethod(
			"withMinute",
			"(I)Ljava/time/LocalTime;",
			arg0
		);
	}
	inline java::time::LocalTime LocalTime::withNano(jint arg0) const
	{
		return callObjectMethod(
			"withNano",
			"(I)Ljava/time/LocalTime;",
			arg0
		);
	}
	inline java::time::LocalTime LocalTime::withSecond(jint arg0) const
	{
		return callObjectMethod(
			"withSecond",
			"(I)Ljava/time/LocalTime;",
			arg0
		);
	}
} // namespace java::time

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::time;
#endif
