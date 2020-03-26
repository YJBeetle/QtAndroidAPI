#pragma once

#ifndef JAVA_TIME_LOCALTIME
#define JAVA_TIME_LOCALTIME

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::time::format
{
	class DateTimeFormatter;
}
namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::time::temporal
{
	class ValueRange;
}
namespace __jni_impl::java::time
{
	class LocalDate;
}
namespace __jni_impl::java::time
{
	class ZoneOffset;
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
	class OffsetTime;
}
namespace __jni_impl::java::time
{
	class LocalDateTime;
}
namespace __jni_impl::java::time
{
	class Clock;
}

namespace __jni_impl::java::time
{
	class LocalTime : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject MIN();
		static QAndroidJniObject MAX();
		static QAndroidJniObject MIDNIGHT();
		static QAndroidJniObject NOON();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint get(__jni_impl::__JniBaseClass arg0);
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jint compareTo(jobject arg0);
		jint compareTo(__jni_impl::java::time::LocalTime arg0);
		jlong getLong(__jni_impl::__JniBaseClass arg0);
		jstring format(__jni_impl::java::time::format::DateTimeFormatter arg0);
		static QAndroidJniObject of(jint arg0, jint arg1);
		static QAndroidJniObject of(jint arg0, jint arg1, jint arg2, jint arg3);
		static QAndroidJniObject of(jint arg0, jint arg1, jint arg2);
		static QAndroidJniObject from(__jni_impl::__JniBaseClass arg0);
		jobject query(__jni_impl::__JniBaseClass arg0);
		jboolean isSupported(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject parse(jstring arg0);
		static QAndroidJniObject parse(jstring arg0, __jni_impl::java::time::format::DateTimeFormatter arg1);
		QAndroidJniObject range(__jni_impl::__JniBaseClass arg0);
		jint getNano();
		jint getHour();
		jint getMinute();
		jint getSecond();
		jlong toEpochSecond(__jni_impl::java::time::LocalDate arg0, __jni_impl::java::time::ZoneOffset arg1);
		static QAndroidJniObject ofInstant(__jni_impl::java::time::Instant arg0, __jni_impl::java::time::ZoneId arg1);
		QAndroidJniObject adjustInto(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject plus(jlong arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject plus(__jni_impl::__JniBaseClass arg0);
		jlong until(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject plusNanos(jlong arg0);
		QAndroidJniObject plusSeconds(jlong arg0);
		QAndroidJniObject plusHours(jlong arg0);
		QAndroidJniObject plusMinutes(jlong arg0);
		QAndroidJniObject minus(jlong arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject minus(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject minusHours(jlong arg0);
		QAndroidJniObject minusMinutes(jlong arg0);
		QAndroidJniObject minusSeconds(jlong arg0);
		QAndroidJniObject minusNanos(jlong arg0);
		QAndroidJniObject truncatedTo(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject with(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject with(__jni_impl::__JniBaseClass arg0, jlong arg1);
		jboolean isAfter(__jni_impl::java::time::LocalTime arg0);
		jboolean isBefore(__jni_impl::java::time::LocalTime arg0);
		jint toSecondOfDay();
		static QAndroidJniObject ofSecondOfDay(jlong arg0);
		static QAndroidJniObject ofNanoOfDay(jlong arg0);
		QAndroidJniObject withHour(jint arg0);
		QAndroidJniObject withMinute(jint arg0);
		QAndroidJniObject withSecond(jint arg0);
		QAndroidJniObject withNano(jint arg0);
		jlong toNanoOfDay();
		QAndroidJniObject atOffset(__jni_impl::java::time::ZoneOffset arg0);
		QAndroidJniObject atDate(__jni_impl::java::time::LocalDate arg0);
		static QAndroidJniObject now();
		static QAndroidJniObject now(__jni_impl::java::time::ZoneId arg0);
		static QAndroidJniObject now(__jni_impl::java::time::Clock arg0);
	};
} // namespace __jni_impl::java::time

#include "format/DateTimeFormatter.hpp"
#include "../io/ObjectInputStream.hpp"
#include "temporal/ValueRange.hpp"
#include "LocalDate.hpp"
#include "ZoneOffset.hpp"
#include "Instant.hpp"
#include "ZoneId.hpp"
#include "OffsetTime.hpp"
#include "LocalDateTime.hpp"
#include "Clock.hpp"

namespace __jni_impl::java::time
{
	// Fields
	QAndroidJniObject LocalTime::MIN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.LocalTime",
			"MIN",
			"Ljava/time/LocalTime;"
		);
	}
	QAndroidJniObject LocalTime::MAX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.LocalTime",
			"MAX",
			"Ljava/time/LocalTime;"
		);
	}
	QAndroidJniObject LocalTime::MIDNIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.LocalTime",
			"MIDNIGHT",
			"Ljava/time/LocalTime;"
		);
	}
	QAndroidJniObject LocalTime::NOON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.LocalTime",
			"NOON",
			"Ljava/time/LocalTime;"
		);
	}
	
	// Constructors
	void LocalTime::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.time.LocalTime",
			"(V)V");
	}
	
	// Methods
	jint LocalTime::get(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jint>(
			"get",
			"(Ljava/time/temporal/TemporalField;)I",
			arg0.__jniObject().object()
		);
	}
	jboolean LocalTime::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring LocalTime::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint LocalTime::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint LocalTime::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint LocalTime::compareTo(__jni_impl::java::time::LocalTime arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/time/LocalTime;)I",
			arg0.__jniObject().object()
		);
	}
	jlong LocalTime::getLong(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.__jniObject().object()
		);
	}
	jstring LocalTime::format(__jni_impl::java::time::format::DateTimeFormatter arg0)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/time/format/DateTimeFormatter;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject LocalTime::of(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalTime",
			"of",
			"(II)Ljava/time/LocalTime;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject LocalTime::of(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalTime",
			"of",
			"(IIII)Ljava/time/LocalTime;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject LocalTime::of(jint arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalTime",
			"of",
			"(III)Ljava/time/LocalTime;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject LocalTime::from(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalTime",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/LocalTime;",
			arg0.__jniObject().object()
		);
	}
	jobject LocalTime::query(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"query",
			"(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;",
			arg0.__jniObject().object()
		).object<jobject>();
	}
	jboolean LocalTime::isSupported(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isSupported",
			"(Ljava/time/temporal/TemporalField;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LocalTime::parse(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalTime",
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/LocalTime;",
			arg0
		);
	}
	QAndroidJniObject LocalTime::parse(jstring arg0, __jni_impl::java::time::format::DateTimeFormatter arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalTime",
			"parse",
			"(Ljava/lang/CharSequence;Ljava/time/format/DateTimeFormatter;)Ljava/time/LocalTime;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject LocalTime::range(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.__jniObject().object()
		);
	}
	jint LocalTime::getNano()
	{
		return __thiz.callMethod<jint>(
			"getNano",
			"()I"
		);
	}
	jint LocalTime::getHour()
	{
		return __thiz.callMethod<jint>(
			"getHour",
			"()I"
		);
	}
	jint LocalTime::getMinute()
	{
		return __thiz.callMethod<jint>(
			"getMinute",
			"()I"
		);
	}
	jint LocalTime::getSecond()
	{
		return __thiz.callMethod<jint>(
			"getSecond",
			"()I"
		);
	}
	jlong LocalTime::toEpochSecond(__jni_impl::java::time::LocalDate arg0, __jni_impl::java::time::ZoneOffset arg1)
	{
		return __thiz.callMethod<jlong>(
			"toEpochSecond",
			"(Ljava/time/LocalDate;Ljava/time/ZoneOffset;)J",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject LocalTime::ofInstant(__jni_impl::java::time::Instant arg0, __jni_impl::java::time::ZoneId arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalTime",
			"ofInstant",
			"(Ljava/time/Instant;Ljava/time/ZoneId;)Ljava/time/LocalTime;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject LocalTime::adjustInto(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"adjustInto",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LocalTime::plus(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"plus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/LocalTime;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject LocalTime::plus(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"plus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/LocalTime;",
			arg0.__jniObject().object()
		);
	}
	jlong LocalTime::until(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jlong>(
			"until",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject LocalTime::plusNanos(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusNanos",
			"(J)Ljava/time/LocalTime;",
			arg0
		);
	}
	QAndroidJniObject LocalTime::plusSeconds(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusSeconds",
			"(J)Ljava/time/LocalTime;",
			arg0
		);
	}
	QAndroidJniObject LocalTime::plusHours(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusHours",
			"(J)Ljava/time/LocalTime;",
			arg0
		);
	}
	QAndroidJniObject LocalTime::plusMinutes(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusMinutes",
			"(J)Ljava/time/LocalTime;",
			arg0
		);
	}
	QAndroidJniObject LocalTime::minus(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"minus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/LocalTime;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject LocalTime::minus(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"minus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/LocalTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LocalTime::minusHours(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusHours",
			"(J)Ljava/time/LocalTime;",
			arg0
		);
	}
	QAndroidJniObject LocalTime::minusMinutes(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusMinutes",
			"(J)Ljava/time/LocalTime;",
			arg0
		);
	}
	QAndroidJniObject LocalTime::minusSeconds(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusSeconds",
			"(J)Ljava/time/LocalTime;",
			arg0
		);
	}
	QAndroidJniObject LocalTime::minusNanos(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusNanos",
			"(J)Ljava/time/LocalTime;",
			arg0
		);
	}
	QAndroidJniObject LocalTime::truncatedTo(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"truncatedTo",
			"(Ljava/time/temporal/TemporalUnit;)Ljava/time/LocalTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LocalTime::with(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/LocalTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LocalTime::with(__jni_impl::__JniBaseClass arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalField;J)Ljava/time/LocalTime;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean LocalTime::isAfter(__jni_impl::java::time::LocalTime arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isAfter",
			"(Ljava/time/LocalTime;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean LocalTime::isBefore(__jni_impl::java::time::LocalTime arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isBefore",
			"(Ljava/time/LocalTime;)Z",
			arg0.__jniObject().object()
		);
	}
	jint LocalTime::toSecondOfDay()
	{
		return __thiz.callMethod<jint>(
			"toSecondOfDay",
			"()I"
		);
	}
	QAndroidJniObject LocalTime::ofSecondOfDay(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalTime",
			"ofSecondOfDay",
			"(J)Ljava/time/LocalTime;",
			arg0
		);
	}
	QAndroidJniObject LocalTime::ofNanoOfDay(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalTime",
			"ofNanoOfDay",
			"(J)Ljava/time/LocalTime;",
			arg0
		);
	}
	QAndroidJniObject LocalTime::withHour(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withHour",
			"(I)Ljava/time/LocalTime;",
			arg0
		);
	}
	QAndroidJniObject LocalTime::withMinute(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withMinute",
			"(I)Ljava/time/LocalTime;",
			arg0
		);
	}
	QAndroidJniObject LocalTime::withSecond(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withSecond",
			"(I)Ljava/time/LocalTime;",
			arg0
		);
	}
	QAndroidJniObject LocalTime::withNano(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withNano",
			"(I)Ljava/time/LocalTime;",
			arg0
		);
	}
	jlong LocalTime::toNanoOfDay()
	{
		return __thiz.callMethod<jlong>(
			"toNanoOfDay",
			"()J"
		);
	}
	QAndroidJniObject LocalTime::atOffset(__jni_impl::java::time::ZoneOffset arg0)
	{
		return __thiz.callObjectMethod(
			"atOffset",
			"(Ljava/time/ZoneOffset;)Ljava/time/OffsetTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LocalTime::atDate(__jni_impl::java::time::LocalDate arg0)
	{
		return __thiz.callObjectMethod(
			"atDate",
			"(Ljava/time/LocalDate;)Ljava/time/LocalDateTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LocalTime::now()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalTime",
			"now",
			"()Ljava/time/LocalTime;"
		);
	}
	QAndroidJniObject LocalTime::now(__jni_impl::java::time::ZoneId arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalTime",
			"now",
			"(Ljava/time/ZoneId;)Ljava/time/LocalTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LocalTime::now(__jni_impl::java::time::Clock arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalTime",
			"now",
			"(Ljava/time/Clock;)Ljava/time/LocalTime;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::time

namespace java::time
{
	class LocalTime : public __jni_impl::java::time::LocalTime
	{
	public:
		LocalTime(QAndroidJniObject obj) { __thiz = obj; }
		LocalTime()
		{
			__constructor();
		}
	};
} // namespace java::time

#endif // JAVA_TIME_LOCALTIME

