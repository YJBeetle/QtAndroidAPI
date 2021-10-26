#pragma once

#ifndef JAVA_UTIL_CONCURRENT_TIMEUNIT
#define JAVA_UTIL_CONCURRENT_TIMEUNIT

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"

namespace __jni_impl::java::time::temporal
{
	class ChronoUnit;
}
namespace __jni_impl::java::time
{
	class Duration;
}
namespace __jni_impl::java::lang
{
	class Thread;
}

namespace __jni_impl::java::util::concurrent
{
	class TimeUnit : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject NANOSECONDS();
		static QAndroidJniObject MICROSECONDS();
		static QAndroidJniObject MILLISECONDS();
		static QAndroidJniObject SECONDS();
		static QAndroidJniObject MINUTES();
		static QAndroidJniObject HOURS();
		static QAndroidJniObject DAYS();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jarray values();
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static QAndroidJniObject of(__jni_impl::java::time::temporal::ChronoUnit arg0);
		void sleep(jlong arg0);
		jlong toMillis(jlong arg0);
		jlong toNanos(jlong arg0);
		jlong toMicros(jlong arg0);
		jlong toSeconds(jlong arg0);
		jlong convert(__jni_impl::java::time::Duration arg0);
		jlong convert(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1);
		jlong toMinutes(jlong arg0);
		jlong toHours(jlong arg0);
		jlong toDays(jlong arg0);
		void timedWait(jobject arg0, jlong arg1);
		void timedJoin(__jni_impl::java::lang::Thread arg0, jlong arg1);
		QAndroidJniObject toChronoUnit();
	};
} // namespace __jni_impl::java::util::concurrent

#include "../../time/temporal/ChronoUnit.hpp"
#include "../../time/Duration.hpp"
#include "../../lang/Thread.hpp"

namespace __jni_impl::java::util::concurrent
{
	// Fields
	QAndroidJniObject TimeUnit::NANOSECONDS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.concurrent.TimeUnit",
			"NANOSECONDS",
			"Ljava/util/concurrent/TimeUnit;"
		);
	}
	QAndroidJniObject TimeUnit::MICROSECONDS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.concurrent.TimeUnit",
			"MICROSECONDS",
			"Ljava/util/concurrent/TimeUnit;"
		);
	}
	QAndroidJniObject TimeUnit::MILLISECONDS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.concurrent.TimeUnit",
			"MILLISECONDS",
			"Ljava/util/concurrent/TimeUnit;"
		);
	}
	QAndroidJniObject TimeUnit::SECONDS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.concurrent.TimeUnit",
			"SECONDS",
			"Ljava/util/concurrent/TimeUnit;"
		);
	}
	QAndroidJniObject TimeUnit::MINUTES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.concurrent.TimeUnit",
			"MINUTES",
			"Ljava/util/concurrent/TimeUnit;"
		);
	}
	QAndroidJniObject TimeUnit::HOURS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.concurrent.TimeUnit",
			"HOURS",
			"Ljava/util/concurrent/TimeUnit;"
		);
	}
	QAndroidJniObject TimeUnit::DAYS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.concurrent.TimeUnit",
			"DAYS",
			"Ljava/util/concurrent/TimeUnit;"
		);
	}
	
	// Constructors
	void TimeUnit::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.TimeUnit",
			"(V)V");
	}
	
	// Methods
	jarray TimeUnit::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.TimeUnit",
			"values",
			"()[Ljava/util/concurrent/TimeUnit;"
		).object<jarray>();
	}
	QAndroidJniObject TimeUnit::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.TimeUnit",
			"valueOf",
			"(Ljava/lang/String;)Ljava/util/concurrent/TimeUnit;",
			arg0
		);
	}
	QAndroidJniObject TimeUnit::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.TimeUnit",
			"valueOf",
			"(Ljava/lang/String;)Ljava/util/concurrent/TimeUnit;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject TimeUnit::of(__jni_impl::java::time::temporal::ChronoUnit arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.TimeUnit",
			"of",
			"(Ljava/time/temporal/ChronoUnit;)Ljava/util/concurrent/TimeUnit;",
			arg0.__jniObject().object()
		);
	}
	void TimeUnit::sleep(jlong arg0)
	{
		__thiz.callMethod<void>(
			"sleep",
			"(J)V",
			arg0
		);
	}
	jlong TimeUnit::toMillis(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"toMillis",
			"(J)J",
			arg0
		);
	}
	jlong TimeUnit::toNanos(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"toNanos",
			"(J)J",
			arg0
		);
	}
	jlong TimeUnit::toMicros(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"toMicros",
			"(J)J",
			arg0
		);
	}
	jlong TimeUnit::toSeconds(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"toSeconds",
			"(J)J",
			arg0
		);
	}
	jlong TimeUnit::convert(__jni_impl::java::time::Duration arg0)
	{
		return __thiz.callMethod<jlong>(
			"convert",
			"(Ljava/time/Duration;)J",
			arg0.__jniObject().object()
		);
	}
	jlong TimeUnit::convert(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1)
	{
		return __thiz.callMethod<jlong>(
			"convert",
			"(JLjava/util/concurrent/TimeUnit;)J",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jlong TimeUnit::toMinutes(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"toMinutes",
			"(J)J",
			arg0
		);
	}
	jlong TimeUnit::toHours(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"toHours",
			"(J)J",
			arg0
		);
	}
	jlong TimeUnit::toDays(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"toDays",
			"(J)J",
			arg0
		);
	}
	void TimeUnit::timedWait(jobject arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"timedWait",
			"(Ljava/lang/Object;J)V",
			arg0,
			arg1
		);
	}
	void TimeUnit::timedJoin(__jni_impl::java::lang::Thread arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"timedJoin",
			"(Ljava/lang/Thread;J)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject TimeUnit::toChronoUnit()
	{
		return __thiz.callObjectMethod(
			"toChronoUnit",
			"()Ljava/time/temporal/ChronoUnit;"
		);
	}
} // namespace __jni_impl::java::util::concurrent

namespace java::util::concurrent
{
	class TimeUnit : public __jni_impl::java::util::concurrent::TimeUnit
	{
	public:
		TimeUnit(QAndroidJniObject obj) { __thiz = obj; }
		TimeUnit()
		{
			__constructor();
		}
	};
} // namespace java::util::concurrent

#endif // JAVA_UTIL_CONCURRENT_TIMEUNIT

