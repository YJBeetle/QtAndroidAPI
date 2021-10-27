#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::time
{
	class Clock;
}
namespace java::time
{
	class DayOfWeek;
}
namespace java::time
{
	class Instant;
}
namespace java::time
{
	class LocalDateTime;
}
namespace java::time
{
	class LocalTime;
}
namespace java::time
{
	class Month;
}
namespace java::time
{
	class OffsetDateTime;
}
namespace java::time
{
	class OffsetTime;
}
namespace java::time
{
	class Period;
}
namespace java::time
{
	class ZoneId;
}
namespace java::time
{
	class ZoneOffset;
}
namespace java::time
{
	class ZonedDateTime;
}
namespace java::time::chrono
{
	class IsoChronology;
}
namespace java::time::chrono
{
	class IsoEra;
}
namespace java::time::format
{
	class DateTimeFormatter;
}
namespace java::time::temporal
{
	class ValueRange;
}

namespace java::time
{
	class LocalDate : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject EPOCH();
		static QAndroidJniObject MAX();
		static QAndroidJniObject MIN();
		
		LocalDate(QAndroidJniObject obj);
		// Constructors
		LocalDate() = default;
		
		// Methods
		static QAndroidJniObject from(__JniBaseClass arg0);
		static QAndroidJniObject now();
		static QAndroidJniObject now(java::time::Clock arg0);
		static QAndroidJniObject now(java::time::ZoneId arg0);
		static QAndroidJniObject of(jint arg0, jint arg1, jint arg2);
		static QAndroidJniObject of(jint arg0, java::time::Month arg1, jint arg2);
		static QAndroidJniObject ofEpochDay(jlong arg0);
		static QAndroidJniObject ofInstant(java::time::Instant arg0, java::time::ZoneId arg1);
		static QAndroidJniObject ofYearDay(jint arg0, jint arg1);
		static QAndroidJniObject parse(jstring arg0);
		static QAndroidJniObject parse(const QString &arg0);
		static QAndroidJniObject parse(jstring arg0, java::time::format::DateTimeFormatter arg1);
		static QAndroidJniObject parse(const QString &arg0, java::time::format::DateTimeFormatter arg1);
		QAndroidJniObject adjustInto(__JniBaseClass arg0);
		QAndroidJniObject atStartOfDay();
		QAndroidJniObject atStartOfDay(java::time::ZoneId arg0);
		QAndroidJniObject atTime(java::time::LocalTime arg0);
		QAndroidJniObject atTime(jint arg0, jint arg1);
		QAndroidJniObject atTime(jint arg0, jint arg1, jint arg2);
		QAndroidJniObject atTime(jint arg0, jint arg1, jint arg2, jint arg3);
		QAndroidJniObject atTime(java::time::OffsetTime arg0);
		jint compareTo(jobject arg0);
		jint compareTo(__JniBaseClass arg0);
		QAndroidJniObject datesUntil(java::time::LocalDate arg0);
		QAndroidJniObject datesUntil(java::time::LocalDate arg0, java::time::Period arg1);
		jboolean equals(jobject arg0);
		jstring format(java::time::format::DateTimeFormatter arg0);
		jint get(__JniBaseClass arg0);
		QAndroidJniObject getChronology();
		jint getDayOfMonth();
		QAndroidJniObject getDayOfWeek();
		jint getDayOfYear();
		QAndroidJniObject getEra();
		jlong getLong(__JniBaseClass arg0);
		QAndroidJniObject getMonth();
		jint getMonthValue();
		jint getYear();
		jint hashCode();
		jboolean isAfter(__JniBaseClass arg0);
		jboolean isBefore(__JniBaseClass arg0);
		jboolean isEqual(__JniBaseClass arg0);
		jboolean isLeapYear();
		jboolean isSupported(__JniBaseClass arg0);
		jint lengthOfMonth();
		jint lengthOfYear();
		QAndroidJniObject minus(__JniBaseClass arg0);
		QAndroidJniObject minus(jlong arg0, __JniBaseClass arg1);
		QAndroidJniObject minusDays(jlong arg0);
		QAndroidJniObject minusMonths(jlong arg0);
		QAndroidJniObject minusWeeks(jlong arg0);
		QAndroidJniObject minusYears(jlong arg0);
		QAndroidJniObject plus(__JniBaseClass arg0);
		QAndroidJniObject plus(jlong arg0, __JniBaseClass arg1);
		QAndroidJniObject plusDays(jlong arg0);
		QAndroidJniObject plusMonths(jlong arg0);
		QAndroidJniObject plusWeeks(jlong arg0);
		QAndroidJniObject plusYears(jlong arg0);
		jobject query(__JniBaseClass arg0);
		QAndroidJniObject range(__JniBaseClass arg0);
		jlong toEpochDay();
		jlong toEpochSecond(java::time::LocalTime arg0, java::time::ZoneOffset arg1);
		jstring toString();
		QAndroidJniObject until(__JniBaseClass arg0);
		jlong until(__JniBaseClass arg0, __JniBaseClass arg1);
		QAndroidJniObject with(__JniBaseClass arg0);
		QAndroidJniObject with(__JniBaseClass arg0, jlong arg1);
		QAndroidJniObject withDayOfMonth(jint arg0);
		QAndroidJniObject withDayOfYear(jint arg0);
		QAndroidJniObject withMonth(jint arg0);
		QAndroidJniObject withYear(jint arg0);
	};
} // namespace java::time

