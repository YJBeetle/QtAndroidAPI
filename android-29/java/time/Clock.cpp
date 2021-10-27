#include "./Duration.hpp"
#include "./Instant.hpp"
#include "./ZoneId.hpp"
#include "./Clock.hpp"

namespace java::time
{
	// Fields
	
	Clock::Clock(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject Clock::fixed(java::time::Instant arg0, java::time::ZoneId arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Clock",
			"fixed",
			"(Ljava/time/Instant;Ljava/time/ZoneId;)Ljava/time/Clock;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Clock::offset(java::time::Clock arg0, java::time::Duration arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Clock",
			"offset",
			"(Ljava/time/Clock;Ljava/time/Duration;)Ljava/time/Clock;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Clock::system(java::time::ZoneId arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Clock",
			"system",
			"(Ljava/time/ZoneId;)Ljava/time/Clock;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Clock::systemDefaultZone()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Clock",
			"systemDefaultZone",
			"()Ljava/time/Clock;"
		);
	}
	QAndroidJniObject Clock::systemUTC()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Clock",
			"systemUTC",
			"()Ljava/time/Clock;"
		);
	}
	QAndroidJniObject Clock::tick(java::time::Clock arg0, java::time::Duration arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Clock",
			"tick",
			"(Ljava/time/Clock;Ljava/time/Duration;)Ljava/time/Clock;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Clock::tickMillis(java::time::ZoneId arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Clock",
			"tickMillis",
			"(Ljava/time/ZoneId;)Ljava/time/Clock;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Clock::tickMinutes(java::time::ZoneId arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Clock",
			"tickMinutes",
			"(Ljava/time/ZoneId;)Ljava/time/Clock;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Clock::tickSeconds(java::time::ZoneId arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Clock",
			"tickSeconds",
			"(Ljava/time/ZoneId;)Ljava/time/Clock;",
			arg0.__jniObject().object()
		);
	}
	jboolean Clock::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject Clock::getZone()
	{
		return __thiz.callObjectMethod(
			"getZone",
			"()Ljava/time/ZoneId;"
		);
	}
	jint Clock::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject Clock::instant()
	{
		return __thiz.callObjectMethod(
			"instant",
			"()Ljava/time/Instant;"
		);
	}
	jlong Clock::millis()
	{
		return __thiz.callMethod<jlong>(
			"millis",
			"()J"
		);
	}
	QAndroidJniObject Clock::withZone(java::time::ZoneId arg0)
	{
		return __thiz.callObjectMethod(
			"withZone",
			"(Ljava/time/ZoneId;)Ljava/time/Clock;",
			arg0.__jniObject().object()
		);
	}
} // namespace java::time

