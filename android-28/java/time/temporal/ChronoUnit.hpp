#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "../Duration.def.hpp"
#include "./ChronoUnit.def.hpp"

namespace java::time::temporal
{
	// Fields
	inline java::time::temporal::ChronoUnit ChronoUnit::CENTURIES()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"CENTURIES",
			"Ljava/time/temporal/ChronoUnit;"
		);
	}
	inline java::time::temporal::ChronoUnit ChronoUnit::DAYS()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"DAYS",
			"Ljava/time/temporal/ChronoUnit;"
		);
	}
	inline java::time::temporal::ChronoUnit ChronoUnit::DECADES()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"DECADES",
			"Ljava/time/temporal/ChronoUnit;"
		);
	}
	inline java::time::temporal::ChronoUnit ChronoUnit::ERAS()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"ERAS",
			"Ljava/time/temporal/ChronoUnit;"
		);
	}
	inline java::time::temporal::ChronoUnit ChronoUnit::FOREVER()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"FOREVER",
			"Ljava/time/temporal/ChronoUnit;"
		);
	}
	inline java::time::temporal::ChronoUnit ChronoUnit::HALF_DAYS()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"HALF_DAYS",
			"Ljava/time/temporal/ChronoUnit;"
		);
	}
	inline java::time::temporal::ChronoUnit ChronoUnit::HOURS()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"HOURS",
			"Ljava/time/temporal/ChronoUnit;"
		);
	}
	inline java::time::temporal::ChronoUnit ChronoUnit::MICROS()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"MICROS",
			"Ljava/time/temporal/ChronoUnit;"
		);
	}
	inline java::time::temporal::ChronoUnit ChronoUnit::MILLENNIA()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"MILLENNIA",
			"Ljava/time/temporal/ChronoUnit;"
		);
	}
	inline java::time::temporal::ChronoUnit ChronoUnit::MILLIS()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"MILLIS",
			"Ljava/time/temporal/ChronoUnit;"
		);
	}
	inline java::time::temporal::ChronoUnit ChronoUnit::MINUTES()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"MINUTES",
			"Ljava/time/temporal/ChronoUnit;"
		);
	}
	inline java::time::temporal::ChronoUnit ChronoUnit::MONTHS()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"MONTHS",
			"Ljava/time/temporal/ChronoUnit;"
		);
	}
	inline java::time::temporal::ChronoUnit ChronoUnit::NANOS()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"NANOS",
			"Ljava/time/temporal/ChronoUnit;"
		);
	}
	inline java::time::temporal::ChronoUnit ChronoUnit::SECONDS()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"SECONDS",
			"Ljava/time/temporal/ChronoUnit;"
		);
	}
	inline java::time::temporal::ChronoUnit ChronoUnit::WEEKS()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"WEEKS",
			"Ljava/time/temporal/ChronoUnit;"
		);
	}
	inline java::time::temporal::ChronoUnit ChronoUnit::YEARS()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoUnit",
			"YEARS",
			"Ljava/time/temporal/ChronoUnit;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::time::temporal::ChronoUnit ChronoUnit::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.time.temporal.ChronoUnit",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/temporal/ChronoUnit;",
			arg0.object<jstring>()
		);
	}
	inline JArray ChronoUnit::values()
	{
		return callStaticObjectMethod(
			"java.time.temporal.ChronoUnit",
			"values",
			"()[Ljava/time/temporal/ChronoUnit;"
		);
	}
	inline JObject ChronoUnit::addTo(JObject arg0, jlong arg1) const
	{
		return callObjectMethod(
			"addTo",
			"(Ljava/time/temporal/Temporal;J)Ljava/time/temporal/Temporal;",
			arg0.object(),
			arg1
		);
	}
	inline jlong ChronoUnit::between(JObject arg0, JObject arg1) const
	{
		return callMethod<jlong>(
			"between",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/Temporal;)J",
			arg0.object(),
			arg1.object()
		);
	}
	inline java::time::Duration ChronoUnit::getDuration() const
	{
		return callObjectMethod(
			"getDuration",
			"()Ljava/time/Duration;"
		);
	}
	inline jboolean ChronoUnit::isDateBased() const
	{
		return callMethod<jboolean>(
			"isDateBased",
			"()Z"
		);
	}
	inline jboolean ChronoUnit::isDurationEstimated() const
	{
		return callMethod<jboolean>(
			"isDurationEstimated",
			"()Z"
		);
	}
	inline jboolean ChronoUnit::isSupportedBy(JObject arg0) const
	{
		return callMethod<jboolean>(
			"isSupportedBy",
			"(Ljava/time/temporal/Temporal;)Z",
			arg0.object()
		);
	}
	inline jboolean ChronoUnit::isTimeBased() const
	{
		return callMethod<jboolean>(
			"isTimeBased",
			"()Z"
		);
	}
	inline JString ChronoUnit::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::time::temporal

// Base class headers
#include "../../lang/Enum.hpp"

