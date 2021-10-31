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
	class OffsetTime;
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
	class OffsetDateTime : public __JniBaseClass
	{
	public:
		// Fields
		static java::time::OffsetDateTime MAX();
		static java::time::OffsetDateTime MIN();
		
		// QJniObject forward
		template<typename ...Ts> explicit OffsetDateTime(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		OffsetDateTime(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::time::OffsetDateTime from(__JniBaseClass arg0);
		static java::time::OffsetDateTime now();
		static java::time::OffsetDateTime now(java::time::Clock arg0);
		static java::time::OffsetDateTime now(java::time::ZoneId arg0);
		static java::time::OffsetDateTime of(java::time::LocalDateTime arg0, java::time::ZoneOffset arg1);
		static java::time::OffsetDateTime of(java::time::LocalDate arg0, java::time::LocalTime arg1, java::time::ZoneOffset arg2);
		static java::time::OffsetDateTime of(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, java::time::ZoneOffset arg7);
		static java::time::OffsetDateTime ofInstant(java::time::Instant arg0, java::time::ZoneId arg1);
		static java::time::OffsetDateTime parse(jstring arg0);
		static java::time::OffsetDateTime parse(jstring arg0, java::time::format::DateTimeFormatter arg1);
		static __JniBaseClass timeLineOrder();
		__JniBaseClass adjustInto(__JniBaseClass arg0);
		java::time::ZonedDateTime atZoneSameInstant(java::time::ZoneId arg0);
		java::time::ZonedDateTime atZoneSimilarLocal(java::time::ZoneId arg0);
		jint compareTo(jobject arg0);
		jint compareTo(java::time::OffsetDateTime arg0);
		jboolean equals(jobject arg0);
		jstring format(java::time::format::DateTimeFormatter arg0);
		jint get(__JniBaseClass arg0);
		jint getDayOfMonth();
		java::time::DayOfWeek getDayOfWeek();
		jint getDayOfYear();
		jint getHour();
		jlong getLong(__JniBaseClass arg0);
		jint getMinute();
		java::time::Month getMonth();
		jint getMonthValue();
		jint getNano();
		java::time::ZoneOffset getOffset();
		jint getSecond();
		jint getYear();
		jint hashCode();
		jboolean isAfter(java::time::OffsetDateTime arg0);
		jboolean isBefore(java::time::OffsetDateTime arg0);
		jboolean isEqual(java::time::OffsetDateTime arg0);
		jboolean isSupported(__JniBaseClass arg0);
		java::time::OffsetDateTime minus(__JniBaseClass arg0);
		java::time::OffsetDateTime minus(jlong arg0, __JniBaseClass arg1);
		java::time::OffsetDateTime minusDays(jlong arg0);
		java::time::OffsetDateTime minusHours(jlong arg0);
		java::time::OffsetDateTime minusMinutes(jlong arg0);
		java::time::OffsetDateTime minusMonths(jlong arg0);
		java::time::OffsetDateTime minusNanos(jlong arg0);
		java::time::OffsetDateTime minusSeconds(jlong arg0);
		java::time::OffsetDateTime minusWeeks(jlong arg0);
		java::time::OffsetDateTime minusYears(jlong arg0);
		java::time::OffsetDateTime plus(__JniBaseClass arg0);
		java::time::OffsetDateTime plus(jlong arg0, __JniBaseClass arg1);
		java::time::OffsetDateTime plusDays(jlong arg0);
		java::time::OffsetDateTime plusHours(jlong arg0);
		java::time::OffsetDateTime plusMinutes(jlong arg0);
		java::time::OffsetDateTime plusMonths(jlong arg0);
		java::time::OffsetDateTime plusNanos(jlong arg0);
		java::time::OffsetDateTime plusSeconds(jlong arg0);
		java::time::OffsetDateTime plusWeeks(jlong arg0);
		java::time::OffsetDateTime plusYears(jlong arg0);
		jobject query(__JniBaseClass arg0);
		java::time::temporal::ValueRange range(__JniBaseClass arg0);
		jlong toEpochSecond();
		java::time::Instant toInstant();
		java::time::LocalDate toLocalDate();
		java::time::LocalDateTime toLocalDateTime();
		java::time::LocalTime toLocalTime();
		java::time::OffsetTime toOffsetTime();
		jstring toString();
		java::time::ZonedDateTime toZonedDateTime();
		java::time::OffsetDateTime truncatedTo(__JniBaseClass arg0);
		jlong until(__JniBaseClass arg0, __JniBaseClass arg1);
		java::time::OffsetDateTime with(__JniBaseClass arg0);
		java::time::OffsetDateTime with(__JniBaseClass arg0, jlong arg1);
		java::time::OffsetDateTime withDayOfMonth(jint arg0);
		java::time::OffsetDateTime withDayOfYear(jint arg0);
		java::time::OffsetDateTime withHour(jint arg0);
		java::time::OffsetDateTime withMinute(jint arg0);
		java::time::OffsetDateTime withMonth(jint arg0);
		java::time::OffsetDateTime withNano(jint arg0);
		java::time::OffsetDateTime withOffsetSameInstant(java::time::ZoneOffset arg0);
		java::time::OffsetDateTime withOffsetSameLocal(java::time::ZoneOffset arg0);
		java::time::OffsetDateTime withSecond(jint arg0);
		java::time::OffsetDateTime withYear(jint arg0);
	};
} // namespace java::time

