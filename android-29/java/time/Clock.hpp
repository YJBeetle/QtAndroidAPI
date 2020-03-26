#pragma once

#ifndef JAVA_TIME_CLOCK
#define JAVA_TIME_CLOCK

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::time
{
	class Duration;
}
namespace __jni_impl::java::time
{
	class ZoneId;
}
namespace __jni_impl::java::time
{
	class Instant;
}

namespace __jni_impl::java::time
{
	class Clock : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		static QAndroidJniObject offset(__jni_impl::java::time::Clock arg0, __jni_impl::java::time::Duration arg1);
		jlong millis();
		static QAndroidJniObject system(__jni_impl::java::time::ZoneId arg0);
		static QAndroidJniObject fixed(__jni_impl::java::time::Instant arg0, __jni_impl::java::time::ZoneId arg1);
		QAndroidJniObject instant();
		QAndroidJniObject getZone();
		QAndroidJniObject withZone(__jni_impl::java::time::ZoneId arg0);
		static QAndroidJniObject systemUTC();
		static QAndroidJniObject tickMillis(__jni_impl::java::time::ZoneId arg0);
		static QAndroidJniObject tickSeconds(__jni_impl::java::time::ZoneId arg0);
		static QAndroidJniObject tickMinutes(__jni_impl::java::time::ZoneId arg0);
		static QAndroidJniObject tick(__jni_impl::java::time::Clock arg0, __jni_impl::java::time::Duration arg1);
		static QAndroidJniObject systemDefaultZone();
	};
} // namespace __jni_impl::java::time

#include "Duration.hpp"
#include "ZoneId.hpp"
#include "Instant.hpp"

namespace __jni_impl::java::time
{
	// Fields
	
	// Constructors
	void Clock::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.time.Clock",
			"(V)V");
	}
	
	// Methods
	jboolean Clock::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint Clock::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject Clock::offset(__jni_impl::java::time::Clock arg0, __jni_impl::java::time::Duration arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Clock",
			"offset",
			"(Ljava/time/Clock;Ljava/time/Duration;)Ljava/time/Clock;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jlong Clock::millis()
	{
		return __thiz.callMethod<jlong>(
			"millis",
			"()J"
		);
	}
	QAndroidJniObject Clock::system(__jni_impl::java::time::ZoneId arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Clock",
			"system",
			"(Ljava/time/ZoneId;)Ljava/time/Clock;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Clock::fixed(__jni_impl::java::time::Instant arg0, __jni_impl::java::time::ZoneId arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Clock",
			"fixed",
			"(Ljava/time/Instant;Ljava/time/ZoneId;)Ljava/time/Clock;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Clock::instant()
	{
		return __thiz.callObjectMethod(
			"instant",
			"()Ljava/time/Instant;"
		);
	}
	QAndroidJniObject Clock::getZone()
	{
		return __thiz.callObjectMethod(
			"getZone",
			"()Ljava/time/ZoneId;"
		);
	}
	QAndroidJniObject Clock::withZone(__jni_impl::java::time::ZoneId arg0)
	{
		return __thiz.callObjectMethod(
			"withZone",
			"(Ljava/time/ZoneId;)Ljava/time/Clock;",
			arg0.__jniObject().object()
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
	QAndroidJniObject Clock::tickMillis(__jni_impl::java::time::ZoneId arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Clock",
			"tickMillis",
			"(Ljava/time/ZoneId;)Ljava/time/Clock;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Clock::tickSeconds(__jni_impl::java::time::ZoneId arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Clock",
			"tickSeconds",
			"(Ljava/time/ZoneId;)Ljava/time/Clock;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Clock::tickMinutes(__jni_impl::java::time::ZoneId arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Clock",
			"tickMinutes",
			"(Ljava/time/ZoneId;)Ljava/time/Clock;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Clock::tick(__jni_impl::java::time::Clock arg0, __jni_impl::java::time::Duration arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Clock",
			"tick",
			"(Ljava/time/Clock;Ljava/time/Duration;)Ljava/time/Clock;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
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
} // namespace __jni_impl::java::time

namespace java::time
{
	class Clock : public __jni_impl::java::time::Clock
	{
	public:
		Clock(QAndroidJniObject obj) { __thiz = obj; }
		Clock()
		{
			__constructor();
		}
	};
} // namespace java::time

#endif // JAVA_TIME_CLOCK

