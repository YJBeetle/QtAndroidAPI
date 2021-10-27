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
	class LocalDate;
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
	class ZoneId;
}
namespace java::time
{
	class ZoneOffset;
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
	class ZonedDateTime : public __JniBaseClass
	{
	public:
		// Fields
		
		ZonedDateTime(QAndroidJniObject obj);
		// Constructors
		ZonedDateTime() = default;
		
		// Methods
		static QAndroidJniObject from(__JniBaseClass arg0);
		static QAndroidJniObject now();
		static QAndroidJniObject now(java::time::Clock arg0);
		static QAndroidJniObject now(java::time::ZoneId arg0);
		static QAndroidJniObject of(java::time::LocalDateTime arg0, java::time::ZoneId arg1);
		static QAndroidJniObject of(java::time::LocalDate arg0, java::time::LocalTime arg1, java::time::ZoneId arg2);
		static QAndroidJniObject of(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, java::time::ZoneId arg7);
		static QAndroidJniObject ofInstant(java::time::Instant arg0, java::time::ZoneId arg1);
		static QAndroidJniObject ofInstant(java::time::LocalDateTime arg0, java::time::ZoneOffset arg1, java::time::ZoneId arg2);
		static QAndroidJniObject ofLocal(java::time::LocalDateTime arg0, java::time::ZoneId arg1, java::time::ZoneOffset arg2);
		static QAndroidJniObject ofStrict(java::time::LocalDateTime arg0, java::time::ZoneOffset arg1, java::time::ZoneId arg2);
		static QAndroidJniObject parse(jstring arg0);
		static QAndroidJniObject parse(const QString &arg0);
		static QAndroidJniObject parse(jstring arg0, java::time::format::DateTimeFormatter arg1);
		static QAndroidJniObject parse(const QString &arg0, java::time::format::DateTimeFormatter arg1);
		jboolean equals(jobject arg0);
		jstring format(java::time::format::DateTimeFormatter arg0);
		jint get(__JniBaseClass arg0);
		jint getDayOfMonth();
		QAndroidJniObject getDayOfWeek();
		jint getDayOfYear();
		jint getHour();
		jlong getLong(__JniBaseClass arg0);
		jint getMinute();
		QAndroidJniObject getMonth();
		jint getMonthValue();
		jint getNano();
		QAndroidJniObject getOffset();
		jint getSecond();
		jint getYear();
		QAndroidJniObject getZone();
		jint hashCode();
		jboolean isSupported(__JniBaseClass arg0);
		QAndroidJniObject minus(__JniBaseClass arg0);
		QAndroidJniObject minus(jlong arg0, __JniBaseClass arg1);
		QAndroidJniObject minusDays(jlong arg0);
		QAndroidJniObject minusHours(jlong arg0);
		QAndroidJniObject minusMinutes(jlong arg0);
		QAndroidJniObject minusMonths(jlong arg0);
		QAndroidJniObject minusNanos(jlong arg0);
		QAndroidJniObject minusSeconds(jlong arg0);
		QAndroidJniObject minusWeeks(jlong arg0);
		QAndroidJniObject minusYears(jlong arg0);
		QAndroidJniObject plus(__JniBaseClass arg0);
		QAndroidJniObject plus(jlong arg0, __JniBaseClass arg1);
		QAndroidJniObject plusDays(jlong arg0);
		QAndroidJniObject plusHours(jlong arg0);
		QAndroidJniObject plusMinutes(jlong arg0);
		QAndroidJniObject plusMonths(jlong arg0);
		QAndroidJniObject plusNanos(jlong arg0);
		QAndroidJniObject plusSeconds(jlong arg0);
		QAndroidJniObject plusWeeks(jlong arg0);
		QAndroidJniObject plusYears(jlong arg0);
		jobject query(__JniBaseClass arg0);
		QAndroidJniObject range(__JniBaseClass arg0);
		QAndroidJniObject toLocalDate();
		QAndroidJniObject toLocalDateTime();
		QAndroidJniObject toLocalTime();
		QAndroidJniObject toOffsetDateTime();
		jstring toString();
		QAndroidJniObject truncatedTo(__JniBaseClass arg0);
		jlong until(__JniBaseClass arg0, __JniBaseClass arg1);
		QAndroidJniObject with(__JniBaseClass arg0);
		QAndroidJniObject with(__JniBaseClass arg0, jlong arg1);
		QAndroidJniObject withDayOfMonth(jint arg0);
		QAndroidJniObject withDayOfYear(jint arg0);
		QAndroidJniObject withEarlierOffsetAtOverlap();
		QAndroidJniObject withFixedOffsetZone();
		QAndroidJniObject withHour(jint arg0);
		QAndroidJniObject withLaterOffsetAtOverlap();
		QAndroidJniObject withMinute(jint arg0);
		QAndroidJniObject withMonth(jint arg0);
		QAndroidJniObject withNano(jint arg0);
		QAndroidJniObject withSecond(jint arg0);
		QAndroidJniObject withYear(jint arg0);
		QAndroidJniObject withZoneSameInstant(java::time::ZoneId arg0);
		QAndroidJniObject withZoneSameLocal(java::time::ZoneId arg0);
	};
} // namespace java::time

