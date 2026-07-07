#pragma once

#include "../../JObject.hpp"
#include "./Duration.def.hpp"
#include "./Instant.def.hpp"
#include "./ZoneId.def.hpp"
#include "./Clock.def.hpp"

namespace java::time
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::time::Clock Clock::fixed(java::time::Instant arg0, java::time::ZoneId arg1)
	{
		return callStaticObjectMethod(
			"java.time.Clock",
			"fixed",
			"(Ljava/time/Instant;Ljava/time/ZoneId;)Ljava/time/Clock;",
			arg0.object(),
			arg1.object()
		);
	}
	inline java::time::Clock Clock::offset(java::time::Clock arg0, java::time::Duration arg1)
	{
		return callStaticObjectMethod(
			"java.time.Clock",
			"offset",
			"(Ljava/time/Clock;Ljava/time/Duration;)Ljava/time/Clock;",
			arg0.object(),
			arg1.object()
		);
	}
	inline java::time::Clock Clock::system(java::time::ZoneId arg0)
	{
		return callStaticObjectMethod(
			"java.time.Clock",
			"system",
			"(Ljava/time/ZoneId;)Ljava/time/Clock;",
			arg0.object()
		);
	}
	inline java::time::Clock Clock::systemDefaultZone()
	{
		return callStaticObjectMethod(
			"java.time.Clock",
			"systemDefaultZone",
			"()Ljava/time/Clock;"
		);
	}
	inline java::time::Clock Clock::systemUTC()
	{
		return callStaticObjectMethod(
			"java.time.Clock",
			"systemUTC",
			"()Ljava/time/Clock;"
		);
	}
	inline java::time::Clock Clock::tick(java::time::Clock arg0, java::time::Duration arg1)
	{
		return callStaticObjectMethod(
			"java.time.Clock",
			"tick",
			"(Ljava/time/Clock;Ljava/time/Duration;)Ljava/time/Clock;",
			arg0.object(),
			arg1.object()
		);
	}
	inline java::time::Clock Clock::tickMillis(java::time::ZoneId arg0)
	{
		return callStaticObjectMethod(
			"java.time.Clock",
			"tickMillis",
			"(Ljava/time/ZoneId;)Ljava/time/Clock;",
			arg0.object()
		);
	}
	inline java::time::Clock Clock::tickMinutes(java::time::ZoneId arg0)
	{
		return callStaticObjectMethod(
			"java.time.Clock",
			"tickMinutes",
			"(Ljava/time/ZoneId;)Ljava/time/Clock;",
			arg0.object()
		);
	}
	inline java::time::Clock Clock::tickSeconds(java::time::ZoneId arg0)
	{
		return callStaticObjectMethod(
			"java.time.Clock",
			"tickSeconds",
			"(Ljava/time/ZoneId;)Ljava/time/Clock;",
			arg0.object()
		);
	}
	inline jboolean Clock::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::time::ZoneId Clock::getZone() const
	{
		return callObjectMethod(
			"getZone",
			"()Ljava/time/ZoneId;"
		);
	}
	inline jint Clock::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline java::time::Instant Clock::instant() const
	{
		return callObjectMethod(
			"instant",
			"()Ljava/time/Instant;"
		);
	}
	inline jlong Clock::millis() const
	{
		return callMethod<jlong>(
			"millis",
			"()J"
		);
	}
	inline java::time::Clock Clock::withZone(java::time::ZoneId arg0) const
	{
		return callObjectMethod(
			"withZone",
			"(Ljava/time/ZoneId;)Ljava/time/Clock;",
			arg0.object()
		);
	}
} // namespace java::time

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::time;
#endif
