#include "./Duration.hpp"
#include "./Instant.hpp"
#include "./ZoneId.hpp"
#include "./Clock.hpp"

namespace java::time
{
	// Fields
	
	// QJniObject forward
	Clock::Clock(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	java::time::Clock Clock::fixed(java::time::Instant arg0, java::time::ZoneId arg1)
	{
		return callStaticObjectMethod(
			"java.time.Clock",
			"fixed",
			"(Ljava/time/Instant;Ljava/time/ZoneId;)Ljava/time/Clock;",
			arg0.object(),
			arg1.object()
		);
	}
	java::time::Clock Clock::offset(java::time::Clock arg0, java::time::Duration arg1)
	{
		return callStaticObjectMethod(
			"java.time.Clock",
			"offset",
			"(Ljava/time/Clock;Ljava/time/Duration;)Ljava/time/Clock;",
			arg0.object(),
			arg1.object()
		);
	}
	java::time::Clock Clock::system(java::time::ZoneId arg0)
	{
		return callStaticObjectMethod(
			"java.time.Clock",
			"system",
			"(Ljava/time/ZoneId;)Ljava/time/Clock;",
			arg0.object()
		);
	}
	java::time::Clock Clock::systemDefaultZone()
	{
		return callStaticObjectMethod(
			"java.time.Clock",
			"systemDefaultZone",
			"()Ljava/time/Clock;"
		);
	}
	java::time::Clock Clock::systemUTC()
	{
		return callStaticObjectMethod(
			"java.time.Clock",
			"systemUTC",
			"()Ljava/time/Clock;"
		);
	}
	java::time::Clock Clock::tick(java::time::Clock arg0, java::time::Duration arg1)
	{
		return callStaticObjectMethod(
			"java.time.Clock",
			"tick",
			"(Ljava/time/Clock;Ljava/time/Duration;)Ljava/time/Clock;",
			arg0.object(),
			arg1.object()
		);
	}
	java::time::Clock Clock::tickMillis(java::time::ZoneId arg0)
	{
		return callStaticObjectMethod(
			"java.time.Clock",
			"tickMillis",
			"(Ljava/time/ZoneId;)Ljava/time/Clock;",
			arg0.object()
		);
	}
	java::time::Clock Clock::tickMinutes(java::time::ZoneId arg0)
	{
		return callStaticObjectMethod(
			"java.time.Clock",
			"tickMinutes",
			"(Ljava/time/ZoneId;)Ljava/time/Clock;",
			arg0.object()
		);
	}
	java::time::Clock Clock::tickSeconds(java::time::ZoneId arg0)
	{
		return callStaticObjectMethod(
			"java.time.Clock",
			"tickSeconds",
			"(Ljava/time/ZoneId;)Ljava/time/Clock;",
			arg0.object()
		);
	}
	jboolean Clock::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	java::time::ZoneId Clock::getZone()
	{
		return callObjectMethod(
			"getZone",
			"()Ljava/time/ZoneId;"
		);
	}
	jint Clock::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	java::time::Instant Clock::instant()
	{
		return callObjectMethod(
			"instant",
			"()Ljava/time/Instant;"
		);
	}
	jlong Clock::millis()
	{
		return callMethod<jlong>(
			"millis",
			"()J"
		);
	}
	java::time::Clock Clock::withZone(java::time::ZoneId arg0)
	{
		return callObjectMethod(
			"withZone",
			"(Ljava/time/ZoneId;)Ljava/time/Clock;",
			arg0.object()
		);
	}
} // namespace java::time

