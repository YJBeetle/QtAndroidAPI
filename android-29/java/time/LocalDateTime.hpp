#pragma once

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
	class DayOfWeek;
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
	class Month;
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
namespace __jni_impl::java::time
{
	class ZonedDateTime;
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
	class LocalDateTime : public __JniBaseClass
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
		static QAndroidJniObject of(__jni_impl::java::time::LocalDate arg0, __jni_impl::java::time::LocalTime arg1);
		static QAndroidJniObject of(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static QAndroidJniObject of(jint arg0, __jni_impl::java::time::Month arg1, jint arg2, jint arg3, jint arg4);
		static QAndroidJniObject of(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		static QAndroidJniObject of(jint arg0, __jni_impl::java::time::Month arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		static QAndroidJniObject of(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6);
		static QAndroidJniObject of(jint arg0, __jni_impl::java::time::Month arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6);
		static QAndroidJniObject ofEpochSecond(jlong arg0, jint arg1, __jni_impl::java::time::ZoneOffset arg2);
		static QAndroidJniObject ofInstant(__jni_impl::java::time::Instant arg0, __jni_impl::java::time::ZoneId arg1);
		static QAndroidJniObject parse(jstring arg0);
		static QAndroidJniObject parse(const QString &arg0);
		static QAndroidJniObject parse(jstring arg0, __jni_impl::java::time::format::DateTimeFormatter arg1);
		static QAndroidJniObject parse(const QString &arg0, __jni_impl::java::time::format::DateTimeFormatter arg1);
		QAndroidJniObject adjustInto(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject atOffset(__jni_impl::java::time::ZoneOffset arg0);
		QAndroidJniObject atZone(__jni_impl::java::time::ZoneId arg0);
		jint compareTo(jobject arg0);
		jint compareTo(__jni_impl::__JniBaseClass arg0);
		jboolean equals(jobject arg0);
		jstring format(__jni_impl::java::time::format::DateTimeFormatter arg0);
		jint get(__jni_impl::__JniBaseClass arg0);
		jint getDayOfMonth();
		QAndroidJniObject getDayOfWeek();
		jint getDayOfYear();
		jint getHour();
		jlong getLong(__jni_impl::__JniBaseClass arg0);
		jint getMinute();
		QAndroidJniObject getMonth();
		jint getMonthValue();
		jint getNano();
		jint getSecond();
		jint getYear();
		jint hashCode();
		jboolean isAfter(__jni_impl::__JniBaseClass arg0);
		jboolean isBefore(__jni_impl::__JniBaseClass arg0);
		jboolean isEqual(__jni_impl::__JniBaseClass arg0);
		jboolean isSupported(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject minus(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject minus(jlong arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject minusDays(jlong arg0);
		QAndroidJniObject minusHours(jlong arg0);
		QAndroidJniObject minusMinutes(jlong arg0);
		QAndroidJniObject minusMonths(jlong arg0);
		QAndroidJniObject minusNanos(jlong arg0);
		QAndroidJniObject minusSeconds(jlong arg0);
		QAndroidJniObject minusWeeks(jlong arg0);
		QAndroidJniObject minusYears(jlong arg0);
		QAndroidJniObject plus(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject plus(jlong arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject plusDays(jlong arg0);
		QAndroidJniObject plusHours(jlong arg0);
		QAndroidJniObject plusMinutes(jlong arg0);
		QAndroidJniObject plusMonths(jlong arg0);
		QAndroidJniObject plusNanos(jlong arg0);
		QAndroidJniObject plusSeconds(jlong arg0);
		QAndroidJniObject plusWeeks(jlong arg0);
		QAndroidJniObject plusYears(jlong arg0);
		jobject query(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject range(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject toLocalDate();
		QAndroidJniObject toLocalTime();
		jstring toString();
		QAndroidJniObject truncatedTo(__jni_impl::__JniBaseClass arg0);
		jlong until(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject with(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject with(__jni_impl::__JniBaseClass arg0, jlong arg1);
		QAndroidJniObject withDayOfMonth(jint arg0);
		QAndroidJniObject withDayOfYear(jint arg0);
		QAndroidJniObject withHour(jint arg0);
		QAndroidJniObject withMinute(jint arg0);
		QAndroidJniObject withMonth(jint arg0);
		QAndroidJniObject withNano(jint arg0);
		QAndroidJniObject withSecond(jint arg0);
		QAndroidJniObject withYear(jint arg0);
	};
} // namespace __jni_impl::java::time

#include "../io/ObjectInputStream.hpp"
#include "./Clock.hpp"
#include "./DayOfWeek.hpp"
#include "./Instant.hpp"
#include "./LocalDate.hpp"
#include "./LocalTime.hpp"
#include "./Month.hpp"
#include "./OffsetDateTime.hpp"
#include "./ZoneId.hpp"
#include "./ZoneOffset.hpp"
#include "./ZonedDateTime.hpp"
#include "./format/DateTimeFormatter.hpp"
#include "./temporal/ValueRange.hpp"

namespace __jni_impl::java::time
{
	// Fields
	QAndroidJniObject LocalDateTime::MAX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.LocalDateTime",
			"MAX",
			"Ljava/time/LocalDateTime;"
		);
	}
	QAndroidJniObject LocalDateTime::MIN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.LocalDateTime",
			"MIN",
			"Ljava/time/LocalDateTime;"
		);
	}
	
	// Constructors
	void LocalDateTime::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.time.LocalDateTime",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject LocalDateTime::from(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDateTime",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/LocalDateTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LocalDateTime::now()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDateTime",
			"now",
			"()Ljava/time/LocalDateTime;"
		);
	}
	QAndroidJniObject LocalDateTime::now(__jni_impl::java::time::Clock arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDateTime",
			"now",
			"(Ljava/time/Clock;)Ljava/time/LocalDateTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LocalDateTime::now(__jni_impl::java::time::ZoneId arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDateTime",
			"now",
			"(Ljava/time/ZoneId;)Ljava/time/LocalDateTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LocalDateTime::of(__jni_impl::java::time::LocalDate arg0, __jni_impl::java::time::LocalTime arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDateTime",
			"of",
			"(Ljava/time/LocalDate;Ljava/time/LocalTime;)Ljava/time/LocalDateTime;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject LocalDateTime::of(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDateTime",
			"of",
			"(IIIII)Ljava/time/LocalDateTime;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	QAndroidJniObject LocalDateTime::of(jint arg0, __jni_impl::java::time::Month arg1, jint arg2, jint arg3, jint arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDateTime",
			"of",
			"(ILjava/time/Month;III)Ljava/time/LocalDateTime;",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4
		);
	}
	QAndroidJniObject LocalDateTime::of(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDateTime",
			"of",
			"(IIIIII)Ljava/time/LocalDateTime;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	QAndroidJniObject LocalDateTime::of(jint arg0, __jni_impl::java::time::Month arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDateTime",
			"of",
			"(ILjava/time/Month;IIII)Ljava/time/LocalDateTime;",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	QAndroidJniObject LocalDateTime::of(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDateTime",
			"of",
			"(IIIIIII)Ljava/time/LocalDateTime;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	QAndroidJniObject LocalDateTime::of(jint arg0, __jni_impl::java::time::Month arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDateTime",
			"of",
			"(ILjava/time/Month;IIIII)Ljava/time/LocalDateTime;",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	QAndroidJniObject LocalDateTime::ofEpochSecond(jlong arg0, jint arg1, __jni_impl::java::time::ZoneOffset arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDateTime",
			"ofEpochSecond",
			"(JILjava/time/ZoneOffset;)Ljava/time/LocalDateTime;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject LocalDateTime::ofInstant(__jni_impl::java::time::Instant arg0, __jni_impl::java::time::ZoneId arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDateTime",
			"ofInstant",
			"(Ljava/time/Instant;Ljava/time/ZoneId;)Ljava/time/LocalDateTime;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject LocalDateTime::parse(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDateTime",
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	QAndroidJniObject LocalDateTime::parse(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDateTime",
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/LocalDateTime;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject LocalDateTime::parse(jstring arg0, __jni_impl::java::time::format::DateTimeFormatter arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDateTime",
			"parse",
			"(Ljava/lang/CharSequence;Ljava/time/format/DateTimeFormatter;)Ljava/time/LocalDateTime;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject LocalDateTime::parse(const QString &arg0, __jni_impl::java::time::format::DateTimeFormatter arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDateTime",
			"parse",
			"(Ljava/lang/CharSequence;Ljava/time/format/DateTimeFormatter;)Ljava/time/LocalDateTime;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject LocalDateTime::adjustInto(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"adjustInto",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LocalDateTime::atOffset(__jni_impl::java::time::ZoneOffset arg0)
	{
		return __thiz.callObjectMethod(
			"atOffset",
			"(Ljava/time/ZoneOffset;)Ljava/time/OffsetDateTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LocalDateTime::atZone(__jni_impl::java::time::ZoneId arg0)
	{
		return __thiz.callObjectMethod(
			"atZone",
			"(Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;",
			arg0.__jniObject().object()
		);
	}
	jint LocalDateTime::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint LocalDateTime::compareTo(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/time/chrono/ChronoLocalDateTime;)I",
			arg0.__jniObject().object()
		);
	}
	jboolean LocalDateTime::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring LocalDateTime::format(__jni_impl::java::time::format::DateTimeFormatter arg0)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/time/format/DateTimeFormatter;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jint LocalDateTime::get(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jint>(
			"get",
			"(Ljava/time/temporal/TemporalField;)I",
			arg0.__jniObject().object()
		);
	}
	jint LocalDateTime::getDayOfMonth()
	{
		return __thiz.callMethod<jint>(
			"getDayOfMonth",
			"()I"
		);
	}
	QAndroidJniObject LocalDateTime::getDayOfWeek()
	{
		return __thiz.callObjectMethod(
			"getDayOfWeek",
			"()Ljava/time/DayOfWeek;"
		);
	}
	jint LocalDateTime::getDayOfYear()
	{
		return __thiz.callMethod<jint>(
			"getDayOfYear",
			"()I"
		);
	}
	jint LocalDateTime::getHour()
	{
		return __thiz.callMethod<jint>(
			"getHour",
			"()I"
		);
	}
	jlong LocalDateTime::getLong(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.__jniObject().object()
		);
	}
	jint LocalDateTime::getMinute()
	{
		return __thiz.callMethod<jint>(
			"getMinute",
			"()I"
		);
	}
	QAndroidJniObject LocalDateTime::getMonth()
	{
		return __thiz.callObjectMethod(
			"getMonth",
			"()Ljava/time/Month;"
		);
	}
	jint LocalDateTime::getMonthValue()
	{
		return __thiz.callMethod<jint>(
			"getMonthValue",
			"()I"
		);
	}
	jint LocalDateTime::getNano()
	{
		return __thiz.callMethod<jint>(
			"getNano",
			"()I"
		);
	}
	jint LocalDateTime::getSecond()
	{
		return __thiz.callMethod<jint>(
			"getSecond",
			"()I"
		);
	}
	jint LocalDateTime::getYear()
	{
		return __thiz.callMethod<jint>(
			"getYear",
			"()I"
		);
	}
	jint LocalDateTime::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean LocalDateTime::isAfter(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isAfter",
			"(Ljava/time/chrono/ChronoLocalDateTime;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean LocalDateTime::isBefore(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isBefore",
			"(Ljava/time/chrono/ChronoLocalDateTime;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean LocalDateTime::isEqual(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isEqual",
			"(Ljava/time/chrono/ChronoLocalDateTime;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean LocalDateTime::isSupported(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isSupported",
			"(Ljava/time/temporal/TemporalField;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LocalDateTime::minus(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"minus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/LocalDateTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LocalDateTime::minus(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"minus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/LocalDateTime;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject LocalDateTime::minusDays(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusDays",
			"(J)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	QAndroidJniObject LocalDateTime::minusHours(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusHours",
			"(J)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	QAndroidJniObject LocalDateTime::minusMinutes(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusMinutes",
			"(J)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	QAndroidJniObject LocalDateTime::minusMonths(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusMonths",
			"(J)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	QAndroidJniObject LocalDateTime::minusNanos(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusNanos",
			"(J)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	QAndroidJniObject LocalDateTime::minusSeconds(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusSeconds",
			"(J)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	QAndroidJniObject LocalDateTime::minusWeeks(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusWeeks",
			"(J)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	QAndroidJniObject LocalDateTime::minusYears(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusYears",
			"(J)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	QAndroidJniObject LocalDateTime::plus(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"plus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/LocalDateTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LocalDateTime::plus(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"plus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/LocalDateTime;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject LocalDateTime::plusDays(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusDays",
			"(J)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	QAndroidJniObject LocalDateTime::plusHours(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusHours",
			"(J)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	QAndroidJniObject LocalDateTime::plusMinutes(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusMinutes",
			"(J)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	QAndroidJniObject LocalDateTime::plusMonths(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusMonths",
			"(J)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	QAndroidJniObject LocalDateTime::plusNanos(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusNanos",
			"(J)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	QAndroidJniObject LocalDateTime::plusSeconds(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusSeconds",
			"(J)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	QAndroidJniObject LocalDateTime::plusWeeks(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusWeeks",
			"(J)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	QAndroidJniObject LocalDateTime::plusYears(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusYears",
			"(J)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	jobject LocalDateTime::query(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"query",
			"(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;",
			arg0.__jniObject().object()
		).object<jobject>();
	}
	QAndroidJniObject LocalDateTime::range(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LocalDateTime::toLocalDate()
	{
		return __thiz.callObjectMethod(
			"toLocalDate",
			"()Ljava/time/LocalDate;"
		);
	}
	QAndroidJniObject LocalDateTime::toLocalTime()
	{
		return __thiz.callObjectMethod(
			"toLocalTime",
			"()Ljava/time/LocalTime;"
		);
	}
	jstring LocalDateTime::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject LocalDateTime::truncatedTo(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"truncatedTo",
			"(Ljava/time/temporal/TemporalUnit;)Ljava/time/LocalDateTime;",
			arg0.__jniObject().object()
		);
	}
	jlong LocalDateTime::until(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jlong>(
			"until",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject LocalDateTime::with(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/LocalDateTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LocalDateTime::with(__jni_impl::__JniBaseClass arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalField;J)Ljava/time/LocalDateTime;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject LocalDateTime::withDayOfMonth(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withDayOfMonth",
			"(I)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	QAndroidJniObject LocalDateTime::withDayOfYear(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withDayOfYear",
			"(I)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	QAndroidJniObject LocalDateTime::withHour(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withHour",
			"(I)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	QAndroidJniObject LocalDateTime::withMinute(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withMinute",
			"(I)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	QAndroidJniObject LocalDateTime::withMonth(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withMonth",
			"(I)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	QAndroidJniObject LocalDateTime::withNano(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withNano",
			"(I)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	QAndroidJniObject LocalDateTime::withSecond(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withSecond",
			"(I)Ljava/time/LocalDateTime;",
			arg0
		);
	}
	QAndroidJniObject LocalDateTime::withYear(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withYear",
			"(I)Ljava/time/LocalDateTime;",
			arg0
		);
	}
} // namespace __jni_impl::java::time

namespace java::time
{
	class LocalDateTime : public __jni_impl::java::time::LocalDateTime
	{
	public:
		LocalDateTime(QAndroidJniObject obj) { __thiz = obj; }
		LocalDateTime()
		{
			__constructor();
		}
	};
} // namespace java::time

