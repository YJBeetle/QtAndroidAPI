#pragma once

#ifndef JAVA_TIME_OFFSETTIME
#define JAVA_TIME_OFFSETTIME

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::time
{
	class LocalTime;
}
namespace __jni_impl::java::time
{
	class ZoneOffset;
}
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
	class Instant;
}
namespace __jni_impl::java::time
{
	class ZoneId;
}
namespace __jni_impl::java::time
{
	class OffsetDateTime;
}
namespace __jni_impl::java::time
{
	class Clock;
}

namespace __jni_impl::java::time
{
	class OffsetTime : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject MIN();
		static QAndroidJniObject MAX();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint get(__jni_impl::__JniBaseClass arg0);
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		jint compareTo(__jni_impl::java::time::OffsetTime arg0);
		jint compareTo(jobject arg0);
		jlong getLong(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject format(__jni_impl::java::time::format::DateTimeFormatter arg0);
		static QAndroidJniObject of(jint arg0, jint arg1, jint arg2, jint arg3, __jni_impl::java::time::ZoneOffset arg4);
		static QAndroidJniObject of(__jni_impl::java::time::LocalTime arg0, __jni_impl::java::time::ZoneOffset arg1);
		static QAndroidJniObject from(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject query(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getOffset();
		jboolean isSupported(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject parse(jstring arg0, __jni_impl::java::time::format::DateTimeFormatter arg1);
		static QAndroidJniObject parse(jstring arg0);
		QAndroidJniObject range(__jni_impl::__JniBaseClass arg0);
		jint getNano();
		jint getHour();
		jint getMinute();
		jint getSecond();
		jlong toEpochSecond(__jni_impl::java::time::LocalDate arg0);
		static QAndroidJniObject ofInstant(__jni_impl::java::time::Instant arg0, __jni_impl::java::time::ZoneId arg1);
		QAndroidJniObject adjustInto(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject plus(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject plus(jlong arg0, __jni_impl::__JniBaseClass arg1);
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
		QAndroidJniObject with(__jni_impl::__JniBaseClass arg0, jlong arg1);
		QAndroidJniObject with(__jni_impl::__JniBaseClass arg0);
		jboolean isAfter(__jni_impl::java::time::OffsetTime arg0);
		jboolean isBefore(__jni_impl::java::time::OffsetTime arg0);
		QAndroidJniObject withHour(jint arg0);
		QAndroidJniObject withMinute(jint arg0);
		QAndroidJniObject withSecond(jint arg0);
		QAndroidJniObject withNano(jint arg0);
		QAndroidJniObject toLocalTime();
		QAndroidJniObject atDate(__jni_impl::java::time::LocalDate arg0);
		static QAndroidJniObject now(__jni_impl::java::time::ZoneId arg0);
		static QAndroidJniObject now(__jni_impl::java::time::Clock arg0);
		static QAndroidJniObject now();
		jboolean isEqual(__jni_impl::java::time::OffsetTime arg0);
		QAndroidJniObject withOffsetSameInstant(__jni_impl::java::time::ZoneOffset arg0);
		QAndroidJniObject withOffsetSameLocal(__jni_impl::java::time::ZoneOffset arg0);
	};
} // namespace __jni_impl::java::time

#include "LocalTime.hpp"
#include "ZoneOffset.hpp"
#include "format/DateTimeFormatter.hpp"
#include "../io/ObjectInputStream.hpp"
#include "temporal/ValueRange.hpp"
#include "LocalDate.hpp"
#include "Instant.hpp"
#include "ZoneId.hpp"
#include "OffsetDateTime.hpp"
#include "Clock.hpp"

namespace __jni_impl::java::time
{
	// Fields
	QAndroidJniObject OffsetTime::MIN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.OffsetTime",
			"MIN",
			"Ljava/time/OffsetTime;");
	}
	QAndroidJniObject OffsetTime::MAX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.OffsetTime",
			"MAX",
			"Ljava/time/OffsetTime;");
	}
	
	// Constructors
	void OffsetTime::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.time.OffsetTime",
			"(V)V");
	}
	
	// Methods
	jint OffsetTime::get(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jint>(
			"get",
			"(Ljava/time/temporal/TemporalField;)I",
			arg0.__jniObject().object());
	}
	jboolean OffsetTime::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject OffsetTime::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint OffsetTime::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jint OffsetTime::compareTo(__jni_impl::java::time::OffsetTime arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/time/OffsetTime;)I",
			arg0.__jniObject().object());
	}
	jint OffsetTime::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0);
	}
	jlong OffsetTime::getLong(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.__jniObject().object());
	}
	QAndroidJniObject OffsetTime::format(__jni_impl::java::time::format::DateTimeFormatter arg0)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/time/format/DateTimeFormatter;)Ljava/lang/String;",
			arg0.__jniObject().object());
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
			arg4.__jniObject().object());
	}
	QAndroidJniObject OffsetTime::of(__jni_impl::java::time::LocalTime arg0, __jni_impl::java::time::ZoneOffset arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.OffsetTime",
			"of",
			"(Ljava/time/LocalTime;Ljava/time/ZoneOffset;)Ljava/time/OffsetTime;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject OffsetTime::from(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.OffsetTime",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/OffsetTime;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject OffsetTime::query(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"query",
			"(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject OffsetTime::getOffset()
	{
		return __thiz.callObjectMethod(
			"getOffset",
			"()Ljava/time/ZoneOffset;");
	}
	jboolean OffsetTime::isSupported(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isSupported",
			"(Ljava/time/temporal/TemporalField;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject OffsetTime::parse(jstring arg0, __jni_impl::java::time::format::DateTimeFormatter arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.OffsetTime",
			"parse",
			"(Ljava/lang/CharSequence;Ljava/time/format/DateTimeFormatter;)Ljava/time/OffsetTime;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject OffsetTime::parse(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.OffsetTime",
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/OffsetTime;",
			arg0);
	}
	QAndroidJniObject OffsetTime::range(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.__jniObject().object());
	}
	jint OffsetTime::getNano()
	{
		return __thiz.callMethod<jint>(
			"getNano",
			"()I");
	}
	jint OffsetTime::getHour()
	{
		return __thiz.callMethod<jint>(
			"getHour",
			"()I");
	}
	jint OffsetTime::getMinute()
	{
		return __thiz.callMethod<jint>(
			"getMinute",
			"()I");
	}
	jint OffsetTime::getSecond()
	{
		return __thiz.callMethod<jint>(
			"getSecond",
			"()I");
	}
	jlong OffsetTime::toEpochSecond(__jni_impl::java::time::LocalDate arg0)
	{
		return __thiz.callMethod<jlong>(
			"toEpochSecond",
			"(Ljava/time/LocalDate;)J",
			arg0.__jniObject().object());
	}
	QAndroidJniObject OffsetTime::ofInstant(__jni_impl::java::time::Instant arg0, __jni_impl::java::time::ZoneId arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.OffsetTime",
			"ofInstant",
			"(Ljava/time/Instant;Ljava/time/ZoneId;)Ljava/time/OffsetTime;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject OffsetTime::adjustInto(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"adjustInto",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject OffsetTime::plus(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"plus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/OffsetTime;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject OffsetTime::plus(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"plus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/OffsetTime;",
			arg0,
			arg1.__jniObject().object());
	}
	jlong OffsetTime::until(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jlong>(
			"until",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject OffsetTime::plusNanos(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusNanos",
			"(J)Ljava/time/OffsetTime;",
			arg0);
	}
	QAndroidJniObject OffsetTime::plusSeconds(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusSeconds",
			"(J)Ljava/time/OffsetTime;",
			arg0);
	}
	QAndroidJniObject OffsetTime::plusHours(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusHours",
			"(J)Ljava/time/OffsetTime;",
			arg0);
	}
	QAndroidJniObject OffsetTime::plusMinutes(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusMinutes",
			"(J)Ljava/time/OffsetTime;",
			arg0);
	}
	QAndroidJniObject OffsetTime::minus(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"minus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/OffsetTime;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject OffsetTime::minus(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"minus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/OffsetTime;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject OffsetTime::minusHours(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusHours",
			"(J)Ljava/time/OffsetTime;",
			arg0);
	}
	QAndroidJniObject OffsetTime::minusMinutes(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusMinutes",
			"(J)Ljava/time/OffsetTime;",
			arg0);
	}
	QAndroidJniObject OffsetTime::minusSeconds(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusSeconds",
			"(J)Ljava/time/OffsetTime;",
			arg0);
	}
	QAndroidJniObject OffsetTime::minusNanos(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusNanos",
			"(J)Ljava/time/OffsetTime;",
			arg0);
	}
	QAndroidJniObject OffsetTime::truncatedTo(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"truncatedTo",
			"(Ljava/time/temporal/TemporalUnit;)Ljava/time/OffsetTime;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject OffsetTime::with(__jni_impl::__JniBaseClass arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalField;J)Ljava/time/OffsetTime;",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject OffsetTime::with(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/OffsetTime;",
			arg0.__jniObject().object());
	}
	jboolean OffsetTime::isAfter(__jni_impl::java::time::OffsetTime arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isAfter",
			"(Ljava/time/OffsetTime;)Z",
			arg0.__jniObject().object());
	}
	jboolean OffsetTime::isBefore(__jni_impl::java::time::OffsetTime arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isBefore",
			"(Ljava/time/OffsetTime;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject OffsetTime::withHour(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withHour",
			"(I)Ljava/time/OffsetTime;",
			arg0);
	}
	QAndroidJniObject OffsetTime::withMinute(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withMinute",
			"(I)Ljava/time/OffsetTime;",
			arg0);
	}
	QAndroidJniObject OffsetTime::withSecond(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withSecond",
			"(I)Ljava/time/OffsetTime;",
			arg0);
	}
	QAndroidJniObject OffsetTime::withNano(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withNano",
			"(I)Ljava/time/OffsetTime;",
			arg0);
	}
	QAndroidJniObject OffsetTime::toLocalTime()
	{
		return __thiz.callObjectMethod(
			"toLocalTime",
			"()Ljava/time/LocalTime;");
	}
	QAndroidJniObject OffsetTime::atDate(__jni_impl::java::time::LocalDate arg0)
	{
		return __thiz.callObjectMethod(
			"atDate",
			"(Ljava/time/LocalDate;)Ljava/time/OffsetDateTime;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject OffsetTime::now(__jni_impl::java::time::ZoneId arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.OffsetTime",
			"now",
			"(Ljava/time/ZoneId;)Ljava/time/OffsetTime;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject OffsetTime::now(__jni_impl::java::time::Clock arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.OffsetTime",
			"now",
			"(Ljava/time/Clock;)Ljava/time/OffsetTime;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject OffsetTime::now()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.OffsetTime",
			"now",
			"()Ljava/time/OffsetTime;");
	}
	jboolean OffsetTime::isEqual(__jni_impl::java::time::OffsetTime arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isEqual",
			"(Ljava/time/OffsetTime;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject OffsetTime::withOffsetSameInstant(__jni_impl::java::time::ZoneOffset arg0)
	{
		return __thiz.callObjectMethod(
			"withOffsetSameInstant",
			"(Ljava/time/ZoneOffset;)Ljava/time/OffsetTime;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject OffsetTime::withOffsetSameLocal(__jni_impl::java::time::ZoneOffset arg0)
	{
		return __thiz.callObjectMethod(
			"withOffsetSameLocal",
			"(Ljava/time/ZoneOffset;)Ljava/time/OffsetTime;",
			arg0.__jniObject().object());
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

