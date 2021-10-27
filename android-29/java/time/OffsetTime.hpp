#pragma once

#ifndef JAVA_TIME_OFFSETTIME
#define JAVA_TIME_OFFSETTIME

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::time
{
	class Clock;
}
namespace __jni_impl::java::time
{
	class Instant;
}
namespace __jni_impl::java::time
{
	class LocalDate;
}
namespace __jni_impl::java::time
{
	class LocalTime;
}
namespace __jni_impl::java::time
{
	class OffsetDateTime;
}
namespace __jni_impl::java::time
{
	class ZoneId;
}
namespace __jni_impl::java::time
{
	class ZoneOffset;
}
namespace __jni_impl::java::time::format
{
	class DateTimeFormatter;
}
namespace __jni_impl::java::time::temporal
{
	class ValueRange;
}

namespace __jni_impl::java::time
{
	class OffsetTime : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject MAX();
		static QAndroidJniObject MIN();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject from(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject now();
		static QAndroidJniObject now(__jni_impl::java::time::Clock arg0);
		static QAndroidJniObject now(__jni_impl::java::time::ZoneId arg0);
		static QAndroidJniObject of(__jni_impl::java::time::LocalTime arg0, __jni_impl::java::time::ZoneOffset arg1);
		static QAndroidJniObject of(jint arg0, jint arg1, jint arg2, jint arg3, __jni_impl::java::time::ZoneOffset arg4);
		static QAndroidJniObject ofInstant(__jni_impl::java::time::Instant arg0, __jni_impl::java::time::ZoneId arg1);
		static QAndroidJniObject parse(jstring arg0);
		static QAndroidJniObject parse(const QString &arg0);
		static QAndroidJniObject parse(jstring arg0, __jni_impl::java::time::format::DateTimeFormatter arg1);
		static QAndroidJniObject parse(const QString &arg0, __jni_impl::java::time::format::DateTimeFormatter arg1);
		QAndroidJniObject adjustInto(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject atDate(__jni_impl::java::time::LocalDate arg0);
		jint compareTo(jobject arg0);
		jint compareTo(__jni_impl::java::time::OffsetTime arg0);
		jboolean equals(jobject arg0);
		jstring format(__jni_impl::java::time::format::DateTimeFormatter arg0);
		jint get(__jni_impl::__JniBaseClass arg0);
		jint getHour();
		jlong getLong(__jni_impl::__JniBaseClass arg0);
		jint getMinute();
		jint getNano();
		QAndroidJniObject getOffset();
		jint getSecond();
		jint hashCode();
		jboolean isAfter(__jni_impl::java::time::OffsetTime arg0);
		jboolean isBefore(__jni_impl::java::time::OffsetTime arg0);
		jboolean isEqual(__jni_impl::java::time::OffsetTime arg0);
		jboolean isSupported(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject minus(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject minus(jlong arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject minusHours(jlong arg0);
		QAndroidJniObject minusMinutes(jlong arg0);
		QAndroidJniObject minusNanos(jlong arg0);
		QAndroidJniObject minusSeconds(jlong arg0);
		QAndroidJniObject plus(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject plus(jlong arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject plusHours(jlong arg0);
		QAndroidJniObject plusMinutes(jlong arg0);
		QAndroidJniObject plusNanos(jlong arg0);
		QAndroidJniObject plusSeconds(jlong arg0);
		jobject query(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject range(__jni_impl::__JniBaseClass arg0);
		jlong toEpochSecond(__jni_impl::java::time::LocalDate arg0);
		QAndroidJniObject toLocalTime();
		jstring toString();
		QAndroidJniObject truncatedTo(__jni_impl::__JniBaseClass arg0);
		jlong until(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject with(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject with(__jni_impl::__JniBaseClass arg0, jlong arg1);
		QAndroidJniObject withHour(jint arg0);
		QAndroidJniObject withMinute(jint arg0);
		QAndroidJniObject withNano(jint arg0);
		QAndroidJniObject withOffsetSameInstant(__jni_impl::java::time::ZoneOffset arg0);
		QAndroidJniObject withOffsetSameLocal(__jni_impl::java::time::ZoneOffset arg0);
		QAndroidJniObject withSecond(jint arg0);
	};
} // namespace __jni_impl::java::time

#include "../io/ObjectInputStream.hpp"
#include "Clock.hpp"
#include "Instant.hpp"
#include "LocalDate.hpp"
#include "LocalTime.hpp"
#include "OffsetDateTime.hpp"
#include "ZoneId.hpp"
#include "ZoneOffset.hpp"
#include "format/DateTimeFormatter.hpp"
#include "temporal/ValueRange.hpp"

namespace __jni_impl::java::time
{
	// Fields
	QAndroidJniObject OffsetTime::MAX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.OffsetTime",
			"MAX",
			"Ljava/time/OffsetTime;"
		);
	}
	QAndroidJniObject OffsetTime::MIN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.OffsetTime",
			"MIN",
			"Ljava/time/OffsetTime;"
		);
	}
	
	// Constructors
	void OffsetTime::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.time.OffsetTime",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject OffsetTime::from(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.OffsetTime",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/OffsetTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject OffsetTime::now()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.OffsetTime",
			"now",
			"()Ljava/time/OffsetTime;"
		);
	}
	QAndroidJniObject OffsetTime::now(__jni_impl::java::time::Clock arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.OffsetTime",
			"now",
			"(Ljava/time/Clock;)Ljava/time/OffsetTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject OffsetTime::now(__jni_impl::java::time::ZoneId arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.OffsetTime",
			"now",
			"(Ljava/time/ZoneId;)Ljava/time/OffsetTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject OffsetTime::of(__jni_impl::java::time::LocalTime arg0, __jni_impl::java::time::ZoneOffset arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.OffsetTime",
			"of",
			"(Ljava/time/LocalTime;Ljava/time/ZoneOffset;)Ljava/time/OffsetTime;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject OffsetTime::of(jint arg0, jint arg1, jint arg2, jint arg3, __jni_impl::java::time::ZoneOffset arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.OffsetTime",
			"of",
			"(IIIILjava/time/ZoneOffset;)Ljava/time/OffsetTime;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	QAndroidJniObject OffsetTime::ofInstant(__jni_impl::java::time::Instant arg0, __jni_impl::java::time::ZoneId arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.OffsetTime",
			"ofInstant",
			"(Ljava/time/Instant;Ljava/time/ZoneId;)Ljava/time/OffsetTime;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject OffsetTime::parse(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.OffsetTime",
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/OffsetTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetTime::parse(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.OffsetTime",
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/OffsetTime;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject OffsetTime::parse(jstring arg0, __jni_impl::java::time::format::DateTimeFormatter arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.OffsetTime",
			"parse",
			"(Ljava/lang/CharSequence;Ljava/time/format/DateTimeFormatter;)Ljava/time/OffsetTime;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject OffsetTime::parse(const QString &arg0, __jni_impl::java::time::format::DateTimeFormatter arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.OffsetTime",
			"parse",
			"(Ljava/lang/CharSequence;Ljava/time/format/DateTimeFormatter;)Ljava/time/OffsetTime;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject OffsetTime::adjustInto(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"adjustInto",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject OffsetTime::atDate(__jni_impl::java::time::LocalDate arg0)
	{
		return __thiz.callObjectMethod(
			"atDate",
			"(Ljava/time/LocalDate;)Ljava/time/OffsetDateTime;",
			arg0.__jniObject().object()
		);
	}
	jint OffsetTime::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint OffsetTime::compareTo(__jni_impl::java::time::OffsetTime arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/time/OffsetTime;)I",
			arg0.__jniObject().object()
		);
	}
	jboolean OffsetTime::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring OffsetTime::format(__jni_impl::java::time::format::DateTimeFormatter arg0)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/time/format/DateTimeFormatter;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jint OffsetTime::get(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jint>(
			"get",
			"(Ljava/time/temporal/TemporalField;)I",
			arg0.__jniObject().object()
		);
	}
	jint OffsetTime::getHour()
	{
		return __thiz.callMethod<jint>(
			"getHour",
			"()I"
		);
	}
	jlong OffsetTime::getLong(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.__jniObject().object()
		);
	}
	jint OffsetTime::getMinute()
	{
		return __thiz.callMethod<jint>(
			"getMinute",
			"()I"
		);
	}
	jint OffsetTime::getNano()
	{
		return __thiz.callMethod<jint>(
			"getNano",
			"()I"
		);
	}
	QAndroidJniObject OffsetTime::getOffset()
	{
		return __thiz.callObjectMethod(
			"getOffset",
			"()Ljava/time/ZoneOffset;"
		);
	}
	jint OffsetTime::getSecond()
	{
		return __thiz.callMethod<jint>(
			"getSecond",
			"()I"
		);
	}
	jint OffsetTime::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean OffsetTime::isAfter(__jni_impl::java::time::OffsetTime arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isAfter",
			"(Ljava/time/OffsetTime;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean OffsetTime::isBefore(__jni_impl::java::time::OffsetTime arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isBefore",
			"(Ljava/time/OffsetTime;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean OffsetTime::isEqual(__jni_impl::java::time::OffsetTime arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isEqual",
			"(Ljava/time/OffsetTime;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean OffsetTime::isSupported(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isSupported",
			"(Ljava/time/temporal/TemporalField;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject OffsetTime::minus(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"minus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/OffsetTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject OffsetTime::minus(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"minus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/OffsetTime;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject OffsetTime::minusHours(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusHours",
			"(J)Ljava/time/OffsetTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetTime::minusMinutes(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusMinutes",
			"(J)Ljava/time/OffsetTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetTime::minusNanos(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusNanos",
			"(J)Ljava/time/OffsetTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetTime::minusSeconds(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusSeconds",
			"(J)Ljava/time/OffsetTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetTime::plus(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"plus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/OffsetTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject OffsetTime::plus(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"plus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/OffsetTime;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject OffsetTime::plusHours(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusHours",
			"(J)Ljava/time/OffsetTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetTime::plusMinutes(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusMinutes",
			"(J)Ljava/time/OffsetTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetTime::plusNanos(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusNanos",
			"(J)Ljava/time/OffsetTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetTime::plusSeconds(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusSeconds",
			"(J)Ljava/time/OffsetTime;",
			arg0
		);
	}
	jobject OffsetTime::query(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"query",
			"(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;",
			arg0.__jniObject().object()
		).object<jobject>();
	}
	QAndroidJniObject OffsetTime::range(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.__jniObject().object()
		);
	}
	jlong OffsetTime::toEpochSecond(__jni_impl::java::time::LocalDate arg0)
	{
		return __thiz.callMethod<jlong>(
			"toEpochSecond",
			"(Ljava/time/LocalDate;)J",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject OffsetTime::toLocalTime()
	{
		return __thiz.callObjectMethod(
			"toLocalTime",
			"()Ljava/time/LocalTime;"
		);
	}
	jstring OffsetTime::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject OffsetTime::truncatedTo(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"truncatedTo",
			"(Ljava/time/temporal/TemporalUnit;)Ljava/time/OffsetTime;",
			arg0.__jniObject().object()
		);
	}
	jlong OffsetTime::until(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jlong>(
			"until",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject OffsetTime::with(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/OffsetTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject OffsetTime::with(__jni_impl::__JniBaseClass arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalField;J)Ljava/time/OffsetTime;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject OffsetTime::withHour(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withHour",
			"(I)Ljava/time/OffsetTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetTime::withMinute(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withMinute",
			"(I)Ljava/time/OffsetTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetTime::withNano(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withNano",
			"(I)Ljava/time/OffsetTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetTime::withOffsetSameInstant(__jni_impl::java::time::ZoneOffset arg0)
	{
		return __thiz.callObjectMethod(
			"withOffsetSameInstant",
			"(Ljava/time/ZoneOffset;)Ljava/time/OffsetTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject OffsetTime::withOffsetSameLocal(__jni_impl::java::time::ZoneOffset arg0)
	{
		return __thiz.callObjectMethod(
			"withOffsetSameLocal",
			"(Ljava/time/ZoneOffset;)Ljava/time/OffsetTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject OffsetTime::withSecond(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withSecond",
			"(I)Ljava/time/OffsetTime;",
			arg0
		);
	}
} // namespace __jni_impl::java::time

namespace java::time
{
	class OffsetTime : public __jni_impl::java::time::OffsetTime
	{
	public:
		OffsetTime(QAndroidJniObject obj) { __thiz = obj; }
		OffsetTime()
		{
			__constructor();
		}
	};
} // namespace java::time

#endif // JAVA_TIME_OFFSETTIME

