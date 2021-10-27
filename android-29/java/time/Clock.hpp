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
	class Instant;
}
namespace __jni_impl::java::time
{
	class ZoneId;
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
		static QAndroidJniObject fixed(__jni_impl::java::time::Instant arg0, __jni_impl::java::time::ZoneId arg1);
		static QAndroidJniObject offset(__jni_impl::java::time::Clock arg0, __jni_impl::java::time::Duration arg1);
		static QAndroidJniObject system(__jni_impl::java::time::ZoneId arg0);
		static QAndroidJniObject systemDefaultZone();
		static QAndroidJniObject systemUTC();
		static QAndroidJniObject tick(__jni_impl::java::time::Clock arg0, __jni_impl::java::time::Duration arg1);
		static QAndroidJniObject tickMillis(__jni_impl::java::time::ZoneId arg0);
		static QAndroidJniObject tickMinutes(__jni_impl::java::time::ZoneId arg0);
		static QAndroidJniObject tickSeconds(__jni_impl::java::time::ZoneId arg0);
		jboolean equals(jobject arg0);
		QAndroidJniObject getZone();
		jint hashCode();
		QAndroidJniObject instant();
		jlong millis();
		QAndroidJniObject withZone(__jni_impl::java::time::ZoneId arg0);
	};
} // namespace __jni_impl::java::time

#include "Duration.hpp"
#include "Instant.hpp"
#include "ZoneId.hpp"

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
	QAndroidJniObject Clock::system(__jni_impl::java::time::ZoneId arg0)
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
	QAndroidJniObject Clock::tickMillis(__jni_impl::java::time::ZoneId arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Clock",
			"tickMillis",
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
	QAndroidJniObject Clock::tickSeconds(__jni_impl::java::time::ZoneId arg0)
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
	QAndroidJniObject Clock::withZone(__jni_impl::java::time::ZoneId arg0)
	{
		return __thiz.callObjectMethod(
			"withZone",
			"(Ljava/time/ZoneId;)Ljava/time/Clock;",
			arg0.__jniObject().object()
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

