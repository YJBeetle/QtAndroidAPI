#pragma once

#ifndef JAVA_TIME_ZONEDDATETIME
#define JAVA_TIME_ZONEDDATETIME

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::time
{
	class LocalDateTime;
}
namespace __jni_impl::java::time
{
	class ZoneOffset;
}
namespace __jni_impl::java::time
{
	class ZoneId;
}
namespace __jni_impl::java::time::format
{
	class DateTimeFormatter;
}
namespace __jni_impl::java::time
{
	class LocalDate;
}
namespace __jni_impl::java::time
{
	class LocalTime;
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
	class Instant;
}
namespace __jni_impl::java::time
{
	class Month;
}
namespace __jni_impl::java::time
{
	class Clock;
}
namespace __jni_impl::java::time
{
	class DayOfWeek;
}
namespace __jni_impl::java::time
{
	class OffsetDateTime;
}

namespace __jni_impl::java::time
{
	class ZonedDateTime : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jint get(__jni_impl::__JniBaseClass arg0);
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jlong getLong(__jni_impl::__JniBaseClass arg0);
		jstring format(__jni_impl::java::time::format::DateTimeFormatter arg0);
		static QAndroidJniObject of(__jni_impl::java::time::LocalDate arg0, __jni_impl::java::time::LocalTime arg1, __jni_impl::java::time::ZoneId arg2);
		static QAndroidJniObject of(__jni_impl::java::time::LocalDateTime arg0, __jni_impl::java::time::ZoneId arg1);
		static QAndroidJniObject of(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, __jni_impl::java::time::ZoneId arg7);
		static QAndroidJniObject from(__jni_impl::__JniBaseClass arg0);
		jobject query(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getOffset();
		jboolean isSupported(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject parse(jstring arg0, __jni_impl::java::time::format::DateTimeFormatter arg1);
		static QAndroidJniObject parse(jstring arg0);
		QAndroidJniObject range(__jni_impl::__JniBaseClass arg0);
		jint getNano();
		jint getYear();
		jint getMonthValue();
		jint getDayOfMonth();
		jint getHour();
		jint getMinute();
		jint getSecond();
		static QAndroidJniObject ofInstant(__jni_impl::java::time::Instant arg0, __jni_impl::java::time::ZoneId arg1);
		static QAndroidJniObject ofInstant(__jni_impl::java::time::LocalDateTime arg0, __jni_impl::java::time::ZoneOffset arg1, __jni_impl::java::time::ZoneId arg2);
		QAndroidJniObject getZone();
		QAndroidJniObject plus(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject plus(jlong arg0, __jni_impl::__JniBaseClass arg1);
		jlong until(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject plusNanos(jlong arg0);
		QAndroidJniObject plusSeconds(jlong arg0);
		QAndroidJniObject plusDays(jlong arg0);
		QAndroidJniObject plusHours(jlong arg0);
		QAndroidJniObject plusMinutes(jlong arg0);
		QAndroidJniObject minus(jlong arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject minus(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject minusDays(jlong arg0);
		QAndroidJniObject minusHours(jlong arg0);
		QAndroidJniObject minusMinutes(jlong arg0);
		QAndroidJniObject minusSeconds(jlong arg0);
		QAndroidJniObject minusNanos(jlong arg0);
		QAndroidJniObject truncatedTo(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject with(__jni_impl::__JniBaseClass arg0, jlong arg1);
		QAndroidJniObject with(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject plusYears(jlong arg0);
		QAndroidJniObject minusMonths(jlong arg0);
		QAndroidJniObject getMonth();
		QAndroidJniObject toLocalDateTime();
		QAndroidJniObject withYear(jint arg0);
		QAndroidJniObject withMonth(jint arg0);
		QAndroidJniObject withDayOfMonth(jint arg0);
		QAndroidJniObject withHour(jint arg0);
		QAndroidJniObject withMinute(jint arg0);
		QAndroidJniObject withSecond(jint arg0);
		QAndroidJniObject withNano(jint arg0);
		QAndroidJniObject toLocalDate();
		QAndroidJniObject toLocalTime();
		QAndroidJniObject minusWeeks(jlong arg0);
		static QAndroidJniObject now(__jni_impl::java::time::Clock arg0);
		static QAndroidJniObject now(__jni_impl::java::time::ZoneId arg0);
		static QAndroidJniObject now();
		QAndroidJniObject getDayOfWeek();
		jint getDayOfYear();
		QAndroidJniObject withDayOfYear(jint arg0);
		QAndroidJniObject minusYears(jlong arg0);
		QAndroidJniObject plusMonths(jlong arg0);
		QAndroidJniObject plusWeeks(jlong arg0);
		static QAndroidJniObject ofLocal(__jni_impl::java::time::LocalDateTime arg0, __jni_impl::java::time::ZoneId arg1, __jni_impl::java::time::ZoneOffset arg2);
		QAndroidJniObject withZoneSameInstant(__jni_impl::java::time::ZoneId arg0);
		QAndroidJniObject toOffsetDateTime();
		QAndroidJniObject withZoneSameLocal(__jni_impl::java::time::ZoneId arg0);
		QAndroidJniObject withLaterOffsetAtOverlap();
		QAndroidJniObject withEarlierOffsetAtOverlap();
		static QAndroidJniObject ofStrict(__jni_impl::java::time::LocalDateTime arg0, __jni_impl::java::time::ZoneOffset arg1, __jni_impl::java::time::ZoneId arg2);
		QAndroidJniObject withFixedOffsetZone();
	};
} // namespace __jni_impl::java::time

#include "LocalDateTime.hpp"
#include "ZoneOffset.hpp"
#include "ZoneId.hpp"
#include "format/DateTimeFormatter.hpp"
#include "LocalDate.hpp"
#include "LocalTime.hpp"
#include "../io/ObjectInputStream.hpp"
#include "temporal/ValueRange.hpp"
#include "Instant.hpp"
#include "Month.hpp"
#include "Clock.hpp"
#include "DayOfWeek.hpp"
#include "OffsetDateTime.hpp"

namespace __jni_impl::java::time
{
	// Fields
	
	// Constructors
	void ZonedDateTime::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.time.ZonedDateTime",
			"(V)V");
	}
	
	// Methods
	jint ZonedDateTime::get(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jint>(
			"get",
			"(Ljava/time/temporal/TemporalField;)I",
			arg0.__jniObject().object()
		);
	}
	jboolean ZonedDateTime::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring ZonedDateTime::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint ZonedDateTime::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jlong ZonedDateTime::getLong(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.__jniObject().object()
		);
	}
	jstring ZonedDateTime::format(__jni_impl::java::time::format::DateTimeFormatter arg0)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/time/format/DateTimeFormatter;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject ZonedDateTime::of(__jni_impl::java::time::LocalDate arg0, __jni_impl::java::time::LocalTime arg1, __jni_impl::java::time::ZoneId arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.ZonedDateTime",
			"of",
			"(Ljava/time/LocalDate;Ljava/time/LocalTime;Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ZonedDateTime::of(__jni_impl::java::time::LocalDateTime arg0, __jni_impl::java::time::ZoneId arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.ZonedDateTime",
			"of",
			"(Ljava/time/LocalDateTime;Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ZonedDateTime::of(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, __jni_impl::java::time::ZoneId arg7)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.ZonedDateTime",
			"of",
			"(IIIIIIILjava/time/ZoneId;)Ljava/time/ZonedDateTime;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7.__jniObject().object()
		);
	}
	QAndroidJniObject ZonedDateTime::from(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.ZonedDateTime",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/ZonedDateTime;",
			arg0.__jniObject().object()
		);
	}
	jobject ZonedDateTime::query(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"query",
			"(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;",
			arg0.__jniObject().object()
		).object<jobject>();
	}
	QAndroidJniObject ZonedDateTime::getOffset()
	{
		return __thiz.callObjectMethod(
			"getOffset",
			"()Ljava/time/ZoneOffset;"
		);
	}
	jboolean ZonedDateTime::isSupported(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isSupported",
			"(Ljava/time/temporal/TemporalField;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ZonedDateTime::parse(jstring arg0, __jni_impl::java::time::format::DateTimeFormatter arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.ZonedDateTime",
			"parse",
			"(Ljava/lang/CharSequence;Ljava/time/format/DateTimeFormatter;)Ljava/time/ZonedDateTime;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ZonedDateTime::parse(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.ZonedDateTime",
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	QAndroidJniObject ZonedDateTime::range(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.__jniObject().object()
		);
	}
	jint ZonedDateTime::getNano()
	{
		return __thiz.callMethod<jint>(
			"getNano",
			"()I"
		);
	}
	jint ZonedDateTime::getYear()
	{
		return __thiz.callMethod<jint>(
			"getYear",
			"()I"
		);
	}
	jint ZonedDateTime::getMonthValue()
	{
		return __thiz.callMethod<jint>(
			"getMonthValue",
			"()I"
		);
	}
	jint ZonedDateTime::getDayOfMonth()
	{
		return __thiz.callMethod<jint>(
			"getDayOfMonth",
			"()I"
		);
	}
	jint ZonedDateTime::getHour()
	{
		return __thiz.callMethod<jint>(
			"getHour",
			"()I"
		);
	}
	jint ZonedDateTime::getMinute()
	{
		return __thiz.callMethod<jint>(
			"getMinute",
			"()I"
		);
	}
	jint ZonedDateTime::getSecond()
	{
		return __thiz.callMethod<jint>(
			"getSecond",
			"()I"
		);
	}
	QAndroidJniObject ZonedDateTime::ofInstant(__jni_impl::java::time::Instant arg0, __jni_impl::java::time::ZoneId arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.ZonedDateTime",
			"ofInstant",
			"(Ljava/time/Instant;Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ZonedDateTime::ofInstant(__jni_impl::java::time::LocalDateTime arg0, __jni_impl::java::time::ZoneOffset arg1, __jni_impl::java::time::ZoneId arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.ZonedDateTime",
			"ofInstant",
			"(Ljava/time/LocalDateTime;Ljava/time/ZoneOffset;Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ZonedDateTime::getZone()
	{
		return __thiz.callObjectMethod(
			"getZone",
			"()Ljava/time/ZoneId;"
		);
	}
	QAndroidJniObject ZonedDateTime::plus(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"plus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/ZonedDateTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ZonedDateTime::plus(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"plus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/ZonedDateTime;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jlong ZonedDateTime::until(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jlong>(
			"until",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ZonedDateTime::plusNanos(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusNanos",
			"(J)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	QAndroidJniObject ZonedDateTime::plusSeconds(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusSeconds",
			"(J)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	QAndroidJniObject ZonedDateTime::plusDays(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusDays",
			"(J)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	QAndroidJniObject ZonedDateTime::plusHours(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusHours",
			"(J)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	QAndroidJniObject ZonedDateTime::plusMinutes(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusMinutes",
			"(J)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	QAndroidJniObject ZonedDateTime::minus(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"minus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/ZonedDateTime;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ZonedDateTime::minus(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"minus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/ZonedDateTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ZonedDateTime::minusDays(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusDays",
			"(J)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	QAndroidJniObject ZonedDateTime::minusHours(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusHours",
			"(J)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	QAndroidJniObject ZonedDateTime::minusMinutes(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusMinutes",
			"(J)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	QAndroidJniObject ZonedDateTime::minusSeconds(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusSeconds",
			"(J)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	QAndroidJniObject ZonedDateTime::minusNanos(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusNanos",
			"(J)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	QAndroidJniObject ZonedDateTime::truncatedTo(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"truncatedTo",
			"(Ljava/time/temporal/TemporalUnit;)Ljava/time/ZonedDateTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ZonedDateTime::with(__jni_impl::__JniBaseClass arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalField;J)Ljava/time/ZonedDateTime;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject ZonedDateTime::with(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/ZonedDateTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ZonedDateTime::plusYears(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusYears",
			"(J)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	QAndroidJniObject ZonedDateTime::minusMonths(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusMonths",
			"(J)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	QAndroidJniObject ZonedDateTime::getMonth()
	{
		return __thiz.callObjectMethod(
			"getMonth",
			"()Ljava/time/Month;"
		);
	}
	QAndroidJniObject ZonedDateTime::toLocalDateTime()
	{
		return __thiz.callObjectMethod(
			"toLocalDateTime",
			"()Ljava/time/LocalDateTime;"
		);
	}
	QAndroidJniObject ZonedDateTime::withYear(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withYear",
			"(I)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	QAndroidJniObject ZonedDateTime::withMonth(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withMonth",
			"(I)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	QAndroidJniObject ZonedDateTime::withDayOfMonth(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withDayOfMonth",
			"(I)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	QAndroidJniObject ZonedDateTime::withHour(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withHour",
			"(I)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	QAndroidJniObject ZonedDateTime::withMinute(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withMinute",
			"(I)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	QAndroidJniObject ZonedDateTime::withSecond(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withSecond",
			"(I)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	QAndroidJniObject ZonedDateTime::withNano(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withNano",
			"(I)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	QAndroidJniObject ZonedDateTime::toLocalDate()
	{
		return __thiz.callObjectMethod(
			"toLocalDate",
			"()Ljava/time/LocalDate;"
		);
	}
	QAndroidJniObject ZonedDateTime::toLocalTime()
	{
		return __thiz.callObjectMethod(
			"toLocalTime",
			"()Ljava/time/LocalTime;"
		);
	}
	QAndroidJniObject ZonedDateTime::minusWeeks(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusWeeks",
			"(J)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	QAndroidJniObject ZonedDateTime::now(__jni_impl::java::time::Clock arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.ZonedDateTime",
			"now",
			"(Ljava/time/Clock;)Ljava/time/ZonedDateTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ZonedDateTime::now(__jni_impl::java::time::ZoneId arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.ZonedDateTime",
			"now",
			"(Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ZonedDateTime::now()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.ZonedDateTime",
			"now",
			"()Ljava/time/ZonedDateTime;"
		);
	}
	QAndroidJniObject ZonedDateTime::getDayOfWeek()
	{
		return __thiz.callObjectMethod(
			"getDayOfWeek",
			"()Ljava/time/DayOfWeek;"
		);
	}
	jint ZonedDateTime::getDayOfYear()
	{
		return __thiz.callMethod<jint>(
			"getDayOfYear",
			"()I"
		);
	}
	QAndroidJniObject ZonedDateTime::withDayOfYear(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withDayOfYear",
			"(I)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	QAndroidJniObject ZonedDateTime::minusYears(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusYears",
			"(J)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	QAndroidJniObject ZonedDateTime::plusMonths(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusMonths",
			"(J)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	QAndroidJniObject ZonedDateTime::plusWeeks(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusWeeks",
			"(J)Ljava/time/ZonedDateTime;",
			arg0
		);
	}
	QAndroidJniObject ZonedDateTime::ofLocal(__jni_impl::java::time::LocalDateTime arg0, __jni_impl::java::time::ZoneId arg1, __jni_impl::java::time::ZoneOffset arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.ZonedDateTime",
			"ofLocal",
			"(Ljava/time/LocalDateTime;Ljava/time/ZoneId;Ljava/time/ZoneOffset;)Ljava/time/ZonedDateTime;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ZonedDateTime::withZoneSameInstant(__jni_impl::java::time::ZoneId arg0)
	{
		return __thiz.callObjectMethod(
			"withZoneSameInstant",
			"(Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ZonedDateTime::toOffsetDateTime()
	{
		return __thiz.callObjectMethod(
			"toOffsetDateTime",
			"()Ljava/time/OffsetDateTime;"
		);
	}
	QAndroidJniObject ZonedDateTime::withZoneSameLocal(__jni_impl::java::time::ZoneId arg0)
	{
		return __thiz.callObjectMethod(
			"withZoneSameLocal",
			"(Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ZonedDateTime::withLaterOffsetAtOverlap()
	{
		return __thiz.callObjectMethod(
			"withLaterOffsetAtOverlap",
			"()Ljava/time/ZonedDateTime;"
		);
	}
	QAndroidJniObject ZonedDateTime::withEarlierOffsetAtOverlap()
	{
		return __thiz.callObjectMethod(
			"withEarlierOffsetAtOverlap",
			"()Ljava/time/ZonedDateTime;"
		);
	}
	QAndroidJniObject ZonedDateTime::ofStrict(__jni_impl::java::time::LocalDateTime arg0, __jni_impl::java::time::ZoneOffset arg1, __jni_impl::java::time::ZoneId arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.ZonedDateTime",
			"ofStrict",
			"(Ljava/time/LocalDateTime;Ljava/time/ZoneOffset;Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ZonedDateTime::withFixedOffsetZone()
	{
		return __thiz.callObjectMethod(
			"withFixedOffsetZone",
			"()Ljava/time/ZonedDateTime;"
		);
	}
} // namespace __jni_impl::java::time

namespace java::time
{
	class ZonedDateTime : public __jni_impl::java::time::ZonedDateTime
	{
	public:
		ZonedDateTime(QAndroidJniObject obj) { __thiz = obj; }
		ZonedDateTime()
		{
			__constructor();
		}
	};
} // namespace java::time

#endif // JAVA_TIME_ZONEDDATETIME

