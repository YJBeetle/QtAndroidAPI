#pragma once

#include "../io/ObjectInputStream.def.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Clock.def.hpp"
#include "./OffsetDateTime.def.hpp"
#include "./ZoneId.def.hpp"
#include "./ZoneOffset.def.hpp"
#include "./ZonedDateTime.def.hpp"
#include "./temporal/ValueRange.def.hpp"
#include "./Instant.def.hpp"

namespace java::time
{
	// Fields
	inline java::time::Instant Instant::EPOCH()
	{
		return getStaticObjectField(
			"java.time.Instant",
			"EPOCH",
			"Ljava/time/Instant;"
		);
	}
	inline java::time::Instant Instant::MAX()
	{
		return getStaticObjectField(
			"java.time.Instant",
			"MAX",
			"Ljava/time/Instant;"
		);
	}
	inline java::time::Instant Instant::MIN()
	{
		return getStaticObjectField(
			"java.time.Instant",
			"MIN",
			"Ljava/time/Instant;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::time::Instant Instant::from(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.time.Instant",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/Instant;",
			arg0.object()
		);
	}
	inline java::time::Instant Instant::now()
	{
		return callStaticObjectMethod(
			"java.time.Instant",
			"now",
			"()Ljava/time/Instant;"
		);
	}
	inline java::time::Instant Instant::now(java::time::Clock arg0)
	{
		return callStaticObjectMethod(
			"java.time.Instant",
			"now",
			"(Ljava/time/Clock;)Ljava/time/Instant;",
			arg0.object()
		);
	}
	inline java::time::Instant Instant::ofEpochMilli(jlong arg0)
	{
		return callStaticObjectMethod(
			"java.time.Instant",
			"ofEpochMilli",
			"(J)Ljava/time/Instant;",
			arg0
		);
	}
	inline java::time::Instant Instant::ofEpochSecond(jlong arg0)
	{
		return callStaticObjectMethod(
			"java.time.Instant",
			"ofEpochSecond",
			"(J)Ljava/time/Instant;",
			arg0
		);
	}
	inline java::time::Instant Instant::ofEpochSecond(jlong arg0, jlong arg1)
	{
		return callStaticObjectMethod(
			"java.time.Instant",
			"ofEpochSecond",
			"(JJ)Ljava/time/Instant;",
			arg0,
			arg1
		);
	}
	inline java::time::Instant Instant::parse(JString arg0)
	{
		return callStaticObjectMethod(
			"java.time.Instant",
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/Instant;",
			arg0.object<jstring>()
		);
	}
	inline JObject Instant::adjustInto(JObject arg0) const
	{
		return callObjectMethod(
			"adjustInto",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.object()
		);
	}
	inline java::time::OffsetDateTime Instant::atOffset(java::time::ZoneOffset arg0) const
	{
		return callObjectMethod(
			"atOffset",
			"(Ljava/time/ZoneOffset;)Ljava/time/OffsetDateTime;",
			arg0.object()
		);
	}
	inline java::time::ZonedDateTime Instant::atZone(java::time::ZoneId arg0) const
	{
		return callObjectMethod(
			"atZone",
			"(Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;",
			arg0.object()
		);
	}
	inline jint Instant::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jint Instant::compareTo(java::time::Instant arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/time/Instant;)I",
			arg0.object()
		);
	}
	inline jboolean Instant::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint Instant::get(JObject arg0) const
	{
		return callMethod<jint>(
			"get",
			"(Ljava/time/temporal/TemporalField;)I",
			arg0.object()
		);
	}
	inline jlong Instant::getEpochSecond() const
	{
		return callMethod<jlong>(
			"getEpochSecond",
			"()J"
		);
	}
	inline jlong Instant::getLong(JObject arg0) const
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.object()
		);
	}
	inline jint Instant::getNano() const
	{
		return callMethod<jint>(
			"getNano",
			"()I"
		);
	}
	inline jint Instant::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean Instant::isAfter(java::time::Instant arg0) const
	{
		return callMethod<jboolean>(
			"isAfter",
			"(Ljava/time/Instant;)Z",
			arg0.object()
		);
	}
	inline jboolean Instant::isBefore(java::time::Instant arg0) const
	{
		return callMethod<jboolean>(
			"isBefore",
			"(Ljava/time/Instant;)Z",
			arg0.object()
		);
	}
	inline jboolean Instant::isSupported(JObject arg0) const
	{
		return callMethod<jboolean>(
			"isSupported",
			"(Ljava/time/temporal/TemporalField;)Z",
			arg0.object()
		);
	}
	inline java::time::Instant Instant::minus(JObject arg0) const
	{
		return callObjectMethod(
			"minus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/Instant;",
			arg0.object()
		);
	}
	inline java::time::Instant Instant::minus(jlong arg0, JObject arg1) const
	{
		return callObjectMethod(
			"minus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/Instant;",
			arg0,
			arg1.object()
		);
	}
	inline java::time::Instant Instant::minusMillis(jlong arg0) const
	{
		return callObjectMethod(
			"minusMillis",
			"(J)Ljava/time/Instant;",
			arg0
		);
	}
	inline java::time::Instant Instant::minusNanos(jlong arg0) const
	{
		return callObjectMethod(
			"minusNanos",
			"(J)Ljava/time/Instant;",
			arg0
		);
	}
	inline java::time::Instant Instant::minusSeconds(jlong arg0) const
	{
		return callObjectMethod(
			"minusSeconds",
			"(J)Ljava/time/Instant;",
			arg0
		);
	}
	inline java::time::Instant Instant::plus(JObject arg0) const
	{
		return callObjectMethod(
			"plus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/Instant;",
			arg0.object()
		);
	}
	inline java::time::Instant Instant::plus(jlong arg0, JObject arg1) const
	{
		return callObjectMethod(
			"plus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/Instant;",
			arg0,
			arg1.object()
		);
	}
	inline java::time::Instant Instant::plusMillis(jlong arg0) const
	{
		return callObjectMethod(
			"plusMillis",
			"(J)Ljava/time/Instant;",
			arg0
		);
	}
	inline java::time::Instant Instant::plusNanos(jlong arg0) const
	{
		return callObjectMethod(
			"plusNanos",
			"(J)Ljava/time/Instant;",
			arg0
		);
	}
	inline java::time::Instant Instant::plusSeconds(jlong arg0) const
	{
		return callObjectMethod(
			"plusSeconds",
			"(J)Ljava/time/Instant;",
			arg0
		);
	}
	inline JObject Instant::query(JObject arg0) const
	{
		return callObjectMethod(
			"query",
			"(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	inline java::time::temporal::ValueRange Instant::range(JObject arg0) const
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
	inline jlong Instant::toEpochMilli() const
	{
		return callMethod<jlong>(
			"toEpochMilli",
			"()J"
		);
	}
	inline JString Instant::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline java::time::Instant Instant::truncatedTo(JObject arg0) const
	{
		return callObjectMethod(
			"truncatedTo",
			"(Ljava/time/temporal/TemporalUnit;)Ljava/time/Instant;",
			arg0.object()
		);
	}
	inline jlong Instant::until(JObject arg0, JObject arg1) const
	{
		return callMethod<jlong>(
			"until",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J",
			arg0.object(),
			arg1.object()
		);
	}
	inline java::time::Instant Instant::with(JObject arg0) const
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/Instant;",
			arg0.object()
		);
	}
	inline java::time::Instant Instant::with(JObject arg0, jlong arg1) const
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalField;J)Ljava/time/Instant;",
			arg0.object(),
			arg1
		);
	}
} // namespace java::time

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::time;
#endif
