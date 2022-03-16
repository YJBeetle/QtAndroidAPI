#pragma once

#include "../../../JArray.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../lang/Thread.def.hpp"
#include "../../time/Duration.def.hpp"
#include "../../time/temporal/ChronoUnit.def.hpp"
#include "./TimeUnit.def.hpp"

namespace java::util::concurrent
{
	// Fields
	inline java::util::concurrent::TimeUnit TimeUnit::DAYS()
	{
		return getStaticObjectField(
			"java.util.concurrent.TimeUnit",
			"DAYS",
			"Ljava/util/concurrent/TimeUnit;"
		);
	}
	inline java::util::concurrent::TimeUnit TimeUnit::HOURS()
	{
		return getStaticObjectField(
			"java.util.concurrent.TimeUnit",
			"HOURS",
			"Ljava/util/concurrent/TimeUnit;"
		);
	}
	inline java::util::concurrent::TimeUnit TimeUnit::MICROSECONDS()
	{
		return getStaticObjectField(
			"java.util.concurrent.TimeUnit",
			"MICROSECONDS",
			"Ljava/util/concurrent/TimeUnit;"
		);
	}
	inline java::util::concurrent::TimeUnit TimeUnit::MILLISECONDS()
	{
		return getStaticObjectField(
			"java.util.concurrent.TimeUnit",
			"MILLISECONDS",
			"Ljava/util/concurrent/TimeUnit;"
		);
	}
	inline java::util::concurrent::TimeUnit TimeUnit::MINUTES()
	{
		return getStaticObjectField(
			"java.util.concurrent.TimeUnit",
			"MINUTES",
			"Ljava/util/concurrent/TimeUnit;"
		);
	}
	inline java::util::concurrent::TimeUnit TimeUnit::NANOSECONDS()
	{
		return getStaticObjectField(
			"java.util.concurrent.TimeUnit",
			"NANOSECONDS",
			"Ljava/util/concurrent/TimeUnit;"
		);
	}
	inline java::util::concurrent::TimeUnit TimeUnit::SECONDS()
	{
		return getStaticObjectField(
			"java.util.concurrent.TimeUnit",
			"SECONDS",
			"Ljava/util/concurrent/TimeUnit;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::util::concurrent::TimeUnit TimeUnit::of(java::time::temporal::ChronoUnit arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.TimeUnit",
			"of",
			"(Ljava/time/temporal/ChronoUnit;)Ljava/util/concurrent/TimeUnit;",
			arg0.object()
		);
	}
	inline java::util::concurrent::TimeUnit TimeUnit::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.TimeUnit",
			"valueOf",
			"(Ljava/lang/String;)Ljava/util/concurrent/TimeUnit;",
			arg0.object<jstring>()
		);
	}
	inline JArray TimeUnit::values()
	{
		return callStaticObjectMethod(
			"java.util.concurrent.TimeUnit",
			"values",
			"()[Ljava/util/concurrent/TimeUnit;"
		);
	}
	inline jlong TimeUnit::convert(java::time::Duration arg0) const
	{
		return callMethod<jlong>(
			"convert",
			"(Ljava/time/Duration;)J",
			arg0.object()
		);
	}
	inline jlong TimeUnit::convert(jlong arg0, java::util::concurrent::TimeUnit arg1) const
	{
		return callMethod<jlong>(
			"convert",
			"(JLjava/util/concurrent/TimeUnit;)J",
			arg0,
			arg1.object()
		);
	}
	inline void TimeUnit::sleep(jlong arg0) const
	{
		callMethod<void>(
			"sleep",
			"(J)V",
			arg0
		);
	}
	inline void TimeUnit::timedJoin(java::lang::Thread arg0, jlong arg1) const
	{
		callMethod<void>(
			"timedJoin",
			"(Ljava/lang/Thread;J)V",
			arg0.object(),
			arg1
		);
	}
	inline void TimeUnit::timedWait(JObject arg0, jlong arg1) const
	{
		callMethod<void>(
			"timedWait",
			"(Ljava/lang/Object;J)V",
			arg0.object<jobject>(),
			arg1
		);
	}
	inline java::time::temporal::ChronoUnit TimeUnit::toChronoUnit() const
	{
		return callObjectMethod(
			"toChronoUnit",
			"()Ljava/time/temporal/ChronoUnit;"
		);
	}
	inline jlong TimeUnit::toDays(jlong arg0) const
	{
		return callMethod<jlong>(
			"toDays",
			"(J)J",
			arg0
		);
	}
	inline jlong TimeUnit::toHours(jlong arg0) const
	{
		return callMethod<jlong>(
			"toHours",
			"(J)J",
			arg0
		);
	}
	inline jlong TimeUnit::toMicros(jlong arg0) const
	{
		return callMethod<jlong>(
			"toMicros",
			"(J)J",
			arg0
		);
	}
	inline jlong TimeUnit::toMillis(jlong arg0) const
	{
		return callMethod<jlong>(
			"toMillis",
			"(J)J",
			arg0
		);
	}
	inline jlong TimeUnit::toMinutes(jlong arg0) const
	{
		return callMethod<jlong>(
			"toMinutes",
			"(J)J",
			arg0
		);
	}
	inline jlong TimeUnit::toNanos(jlong arg0) const
	{
		return callMethod<jlong>(
			"toNanos",
			"(J)J",
			arg0
		);
	}
	inline jlong TimeUnit::toSeconds(jlong arg0) const
	{
		return callMethod<jlong>(
			"toSeconds",
			"(J)J",
			arg0
		);
	}
} // namespace java::util::concurrent

// Base class headers
#include "../../lang/Enum.hpp"

