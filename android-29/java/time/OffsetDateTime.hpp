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
	class LocalDateTime;
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
	class OffsetTime;
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
	class OffsetDateTime : public __JniBaseClass
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
		static QAndroidJniObject of(__jni_impl::java::time::LocalDateTime arg0, __jni_impl::java::time::ZoneOffset arg1);
		static QAndroidJniObject of(__jni_impl::java::time::LocalDate arg0, __jni_impl::java::time::LocalTime arg1, __jni_impl::java::time::ZoneOffset arg2);
		static QAndroidJniObject of(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, __jni_impl::java::time::ZoneOffset arg7);
		static QAndroidJniObject ofInstant(__jni_impl::java::time::Instant arg0, __jni_impl::java::time::ZoneId arg1);
		static QAndroidJniObject parse(jstring arg0);
		static QAndroidJniObject parse(const QString &arg0);
		static QAndroidJniObject parse(jstring arg0, __jni_impl::java::time::format::DateTimeFormatter arg1);
		static QAndroidJniObject parse(const QString &arg0, __jni_impl::java::time::format::DateTimeFormatter arg1);
		static QAndroidJniObject timeLineOrder();
		QAndroidJniObject adjustInto(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject atZoneSameInstant(__jni_impl::java::time::ZoneId arg0);
		QAndroidJniObject atZoneSimilarLocal(__jni_impl::java::time::ZoneId arg0);
		jint compareTo(jobject arg0);
		jint compareTo(__jni_impl::java::time::OffsetDateTime arg0);
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
		QAndroidJniObject getOffset();
		jint getSecond();
		jint getYear();
		jint hashCode();
		jboolean isAfter(__jni_impl::java::time::OffsetDateTime arg0);
		jboolean isBefore(__jni_impl::java::time::OffsetDateTime arg0);
		jboolean isEqual(__jni_impl::java::time::OffsetDateTime arg0);
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
		jlong toEpochSecond();
		QAndroidJniObject toInstant();
		QAndroidJniObject toLocalDate();
		QAndroidJniObject toLocalDateTime();
		QAndroidJniObject toLocalTime();
		QAndroidJniObject toOffsetTime();
		jstring toString();
		QAndroidJniObject toZonedDateTime();
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
		QAndroidJniObject withOffsetSameInstant(__jni_impl::java::time::ZoneOffset arg0);
		QAndroidJniObject withOffsetSameLocal(__jni_impl::java::time::ZoneOffset arg0);
		QAndroidJniObject withSecond(jint arg0);
		QAndroidJniObject withYear(jint arg0);
	};
} // namespace __jni_impl::java::time

#include "../io/ObjectInputStream.hpp"
#include "./Clock.hpp"
#include "./DayOfWeek.hpp"
#include "./Instant.hpp"
#include "./LocalDate.hpp"
#include "./LocalDateTime.hpp"
#include "./LocalTime.hpp"
#include "./Month.hpp"
#include "./OffsetTime.hpp"
#include "./ZoneId.hpp"
#include "./ZoneOffset.hpp"
#include "./ZonedDateTime.hpp"
#include "./format/DateTimeFormatter.hpp"
#include "./temporal/ValueRange.hpp"

namespace __jni_impl::java::time
{
	// Fields
	QAndroidJniObject OffsetDateTime::MAX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.OffsetDateTime",
			"MAX",
			"Ljava/time/OffsetDateTime;"
		);
	}
	QAndroidJniObject OffsetDateTime::MIN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.OffsetDateTime",
			"MIN",
			"Ljava/time/OffsetDateTime;"
		);
	}
	
	// Constructors
	void OffsetDateTime::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.time.OffsetDateTime",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject OffsetDateTime::from(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.OffsetDateTime",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/OffsetDateTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject OffsetDateTime::now()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.OffsetDateTime",
			"now",
			"()Ljava/time/OffsetDateTime;"
		);
	}
	QAndroidJniObject OffsetDateTime::now(__jni_impl::java::time::Clock arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.OffsetDateTime",
			"now",
			"(Ljava/time/Clock;)Ljava/time/OffsetDateTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject OffsetDateTime::now(__jni_impl::java::time::ZoneId arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.OffsetDateTime",
			"now",
			"(Ljava/time/ZoneId;)Ljava/time/OffsetDateTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject OffsetDateTime::of(__jni_impl::java::time::LocalDateTime arg0, __jni_impl::java::time::ZoneOffset arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.OffsetDateTime",
			"of",
			"(Ljava/time/LocalDateTime;Ljava/time/ZoneOffset;)Ljava/time/OffsetDateTime;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject OffsetDateTime::of(__jni_impl::java::time::LocalDate arg0, __jni_impl::java::time::LocalTime arg1, __jni_impl::java::time::ZoneOffset arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.OffsetDateTime",
			"of",
			"(Ljava/time/LocalDate;Ljava/time/LocalTime;Ljava/time/ZoneOffset;)Ljava/time/OffsetDateTime;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject OffsetDateTime::of(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, __jni_impl::java::time::ZoneOffset arg7)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.OffsetDateTime",
			"of",
			"(IIIIIIILjava/time/ZoneOffset;)Ljava/time/OffsetDateTime;",
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
	QAndroidJniObject OffsetDateTime::ofInstant(__jni_impl::java::time::Instant arg0, __jni_impl::java::time::ZoneId arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.OffsetDateTime",
			"ofInstant",
			"(Ljava/time/Instant;Ljava/time/ZoneId;)Ljava/time/OffsetDateTime;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject OffsetDateTime::parse(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.OffsetDateTime",
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetDateTime::parse(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.OffsetDateTime",
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/OffsetDateTime;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject OffsetDateTime::parse(jstring arg0, __jni_impl::java::time::format::DateTimeFormatter arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.OffsetDateTime",
			"parse",
			"(Ljava/lang/CharSequence;Ljava/time/format/DateTimeFormatter;)Ljava/time/OffsetDateTime;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject OffsetDateTime::parse(const QString &arg0, __jni_impl::java::time::format::DateTimeFormatter arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.OffsetDateTime",
			"parse",
			"(Ljava/lang/CharSequence;Ljava/time/format/DateTimeFormatter;)Ljava/time/OffsetDateTime;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject OffsetDateTime::timeLineOrder()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.OffsetDateTime",
			"timeLineOrder",
			"()Ljava/util/Comparator;"
		);
	}
	QAndroidJniObject OffsetDateTime::adjustInto(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"adjustInto",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject OffsetDateTime::atZoneSameInstant(__jni_impl::java::time::ZoneId arg0)
	{
		return __thiz.callObjectMethod(
			"atZoneSameInstant",
			"(Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject OffsetDateTime::atZoneSimilarLocal(__jni_impl::java::time::ZoneId arg0)
	{
		return __thiz.callObjectMethod(
			"atZoneSimilarLocal",
			"(Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;",
			arg0.__jniObject().object()
		);
	}
	jint OffsetDateTime::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint OffsetDateTime::compareTo(__jni_impl::java::time::OffsetDateTime arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/time/OffsetDateTime;)I",
			arg0.__jniObject().object()
		);
	}
	jboolean OffsetDateTime::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring OffsetDateTime::format(__jni_impl::java::time::format::DateTimeFormatter arg0)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/time/format/DateTimeFormatter;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jint OffsetDateTime::get(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jint>(
			"get",
			"(Ljava/time/temporal/TemporalField;)I",
			arg0.__jniObject().object()
		);
	}
	jint OffsetDateTime::getDayOfMonth()
	{
		return __thiz.callMethod<jint>(
			"getDayOfMonth",
			"()I"
		);
	}
	QAndroidJniObject OffsetDateTime::getDayOfWeek()
	{
		return __thiz.callObjectMethod(
			"getDayOfWeek",
			"()Ljava/time/DayOfWeek;"
		);
	}
	jint OffsetDateTime::getDayOfYear()
	{
		return __thiz.callMethod<jint>(
			"getDayOfYear",
			"()I"
		);
	}
	jint OffsetDateTime::getHour()
	{
		return __thiz.callMethod<jint>(
			"getHour",
			"()I"
		);
	}
	jlong OffsetDateTime::getLong(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.__jniObject().object()
		);
	}
	jint OffsetDateTime::getMinute()
	{
		return __thiz.callMethod<jint>(
			"getMinute",
			"()I"
		);
	}
	QAndroidJniObject OffsetDateTime::getMonth()
	{
		return __thiz.callObjectMethod(
			"getMonth",
			"()Ljava/time/Month;"
		);
	}
	jint OffsetDateTime::getMonthValue()
	{
		return __thiz.callMethod<jint>(
			"getMonthValue",
			"()I"
		);
	}
	jint OffsetDateTime::getNano()
	{
		return __thiz.callMethod<jint>(
			"getNano",
			"()I"
		);
	}
	QAndroidJniObject OffsetDateTime::getOffset()
	{
		return __thiz.callObjectMethod(
			"getOffset",
			"()Ljava/time/ZoneOffset;"
		);
	}
	jint OffsetDateTime::getSecond()
	{
		return __thiz.callMethod<jint>(
			"getSecond",
			"()I"
		);
	}
	jint OffsetDateTime::getYear()
	{
		return __thiz.callMethod<jint>(
			"getYear",
			"()I"
		);
	}
	jint OffsetDateTime::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean OffsetDateTime::isAfter(__jni_impl::java::time::OffsetDateTime arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isAfter",
			"(Ljava/time/OffsetDateTime;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean OffsetDateTime::isBefore(__jni_impl::java::time::OffsetDateTime arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isBefore",
			"(Ljava/time/OffsetDateTime;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean OffsetDateTime::isEqual(__jni_impl::java::time::OffsetDateTime arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isEqual",
			"(Ljava/time/OffsetDateTime;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean OffsetDateTime::isSupported(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isSupported",
			"(Ljava/time/temporal/TemporalField;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject OffsetDateTime::minus(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"minus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/OffsetDateTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject OffsetDateTime::minus(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"minus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/OffsetDateTime;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject OffsetDateTime::minusDays(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusDays",
			"(J)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetDateTime::minusHours(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusHours",
			"(J)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetDateTime::minusMinutes(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusMinutes",
			"(J)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetDateTime::minusMonths(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusMonths",
			"(J)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetDateTime::minusNanos(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusNanos",
			"(J)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetDateTime::minusSeconds(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusSeconds",
			"(J)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetDateTime::minusWeeks(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusWeeks",
			"(J)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetDateTime::minusYears(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusYears",
			"(J)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetDateTime::plus(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"plus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/OffsetDateTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject OffsetDateTime::plus(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"plus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/OffsetDateTime;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject OffsetDateTime::plusDays(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusDays",
			"(J)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetDateTime::plusHours(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusHours",
			"(J)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetDateTime::plusMinutes(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusMinutes",
			"(J)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetDateTime::plusMonths(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusMonths",
			"(J)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetDateTime::plusNanos(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusNanos",
			"(J)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetDateTime::plusSeconds(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusSeconds",
			"(J)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetDateTime::plusWeeks(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusWeeks",
			"(J)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetDateTime::plusYears(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusYears",
			"(J)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	jobject OffsetDateTime::query(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"query",
			"(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;",
			arg0.__jniObject().object()
		).object<jobject>();
	}
	QAndroidJniObject OffsetDateTime::range(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.__jniObject().object()
		);
	}
	jlong OffsetDateTime::toEpochSecond()
	{
		return __thiz.callMethod<jlong>(
			"toEpochSecond",
			"()J"
		);
	}
	QAndroidJniObject OffsetDateTime::toInstant()
	{
		return __thiz.callObjectMethod(
			"toInstant",
			"()Ljava/time/Instant;"
		);
	}
	QAndroidJniObject OffsetDateTime::toLocalDate()
	{
		return __thiz.callObjectMethod(
			"toLocalDate",
			"()Ljava/time/LocalDate;"
		);
	}
	QAndroidJniObject OffsetDateTime::toLocalDateTime()
	{
		return __thiz.callObjectMethod(
			"toLocalDateTime",
			"()Ljava/time/LocalDateTime;"
		);
	}
	QAndroidJniObject OffsetDateTime::toLocalTime()
	{
		return __thiz.callObjectMethod(
			"toLocalTime",
			"()Ljava/time/LocalTime;"
		);
	}
	QAndroidJniObject OffsetDateTime::toOffsetTime()
	{
		return __thiz.callObjectMethod(
			"toOffsetTime",
			"()Ljava/time/OffsetTime;"
		);
	}
	jstring OffsetDateTime::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject OffsetDateTime::toZonedDateTime()
	{
		return __thiz.callObjectMethod(
			"toZonedDateTime",
			"()Ljava/time/ZonedDateTime;"
		);
	}
	QAndroidJniObject OffsetDateTime::truncatedTo(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"truncatedTo",
			"(Ljava/time/temporal/TemporalUnit;)Ljava/time/OffsetDateTime;",
			arg0.__jniObject().object()
		);
	}
	jlong OffsetDateTime::until(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jlong>(
			"until",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject OffsetDateTime::with(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/OffsetDateTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject OffsetDateTime::with(__jni_impl::__JniBaseClass arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalField;J)Ljava/time/OffsetDateTime;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject OffsetDateTime::withDayOfMonth(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withDayOfMonth",
			"(I)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetDateTime::withDayOfYear(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withDayOfYear",
			"(I)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetDateTime::withHour(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withHour",
			"(I)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetDateTime::withMinute(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withMinute",
			"(I)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetDateTime::withMonth(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withMonth",
			"(I)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetDateTime::withNano(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withNano",
			"(I)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetDateTime::withOffsetSameInstant(__jni_impl::java::time::ZoneOffset arg0)
	{
		return __thiz.callObjectMethod(
			"withOffsetSameInstant",
			"(Ljava/time/ZoneOffset;)Ljava/time/OffsetDateTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject OffsetDateTime::withOffsetSameLocal(__jni_impl::java::time::ZoneOffset arg0)
	{
		return __thiz.callObjectMethod(
			"withOffsetSameLocal",
			"(Ljava/time/ZoneOffset;)Ljava/time/OffsetDateTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject OffsetDateTime::withSecond(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withSecond",
			"(I)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
	QAndroidJniObject OffsetDateTime::withYear(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withYear",
			"(I)Ljava/time/OffsetDateTime;",
			arg0
		);
	}
} // namespace __jni_impl::java::time

namespace java::time
{
	class OffsetDateTime : public __jni_impl::java::time::OffsetDateTime
	{
	public:
		OffsetDateTime(QAndroidJniObject obj) { __thiz = obj; }
		OffsetDateTime()
		{
			__constructor();
		}
	};
} // namespace java::time

