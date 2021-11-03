#pragma once

#include "../../JObject.hpp"

namespace java::io
{
	class ObjectInputStream;
}
class JString;
class JObject;
class JString;
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
	class ZonedDateTime : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ZonedDateTime(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ZonedDateTime(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::time::ZonedDateTime from(JObject arg0);
		static java::time::ZonedDateTime now();
		static java::time::ZonedDateTime now(java::time::Clock arg0);
		static java::time::ZonedDateTime now(java::time::ZoneId arg0);
		static java::time::ZonedDateTime of(java::time::LocalDateTime arg0, java::time::ZoneId arg1);
		static java::time::ZonedDateTime of(java::time::LocalDate arg0, java::time::LocalTime arg1, java::time::ZoneId arg2);
		static java::time::ZonedDateTime of(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, java::time::ZoneId arg7);
		static java::time::ZonedDateTime ofInstant(java::time::Instant arg0, java::time::ZoneId arg1);
		static java::time::ZonedDateTime ofInstant(java::time::LocalDateTime arg0, java::time::ZoneOffset arg1, java::time::ZoneId arg2);
		static java::time::ZonedDateTime ofLocal(java::time::LocalDateTime arg0, java::time::ZoneId arg1, java::time::ZoneOffset arg2);
		static java::time::ZonedDateTime ofStrict(java::time::LocalDateTime arg0, java::time::ZoneOffset arg1, java::time::ZoneId arg2);
		static java::time::ZonedDateTime parse(JString arg0);
		static java::time::ZonedDateTime parse(JString arg0, java::time::format::DateTimeFormatter arg1);
		jboolean equals(JObject arg0);
		JString format(java::time::format::DateTimeFormatter arg0);
		jint get(JObject arg0);
		jint getDayOfMonth();
		java::time::DayOfWeek getDayOfWeek();
		jint getDayOfYear();
		jint getHour();
		jlong getLong(JObject arg0);
		jint getMinute();
		java::time::Month getMonth();
		jint getMonthValue();
		jint getNano();
		java::time::ZoneOffset getOffset();
		jint getSecond();
		jint getYear();
		java::time::ZoneId getZone();
		jint hashCode();
		jboolean isSupported(JObject arg0);
		java::time::ZonedDateTime minus(JObject arg0);
		java::time::ZonedDateTime minus(jlong arg0, JObject arg1);
		java::time::ZonedDateTime minusDays(jlong arg0);
		java::time::ZonedDateTime minusHours(jlong arg0);
		java::time::ZonedDateTime minusMinutes(jlong arg0);
		java::time::ZonedDateTime minusMonths(jlong arg0);
		java::time::ZonedDateTime minusNanos(jlong arg0);
		java::time::ZonedDateTime minusSeconds(jlong arg0);
		java::time::ZonedDateTime minusWeeks(jlong arg0);
		java::time::ZonedDateTime minusYears(jlong arg0);
		java::time::ZonedDateTime plus(JObject arg0);
		java::time::ZonedDateTime plus(jlong arg0, JObject arg1);
		java::time::ZonedDateTime plusDays(jlong arg0);
		java::time::ZonedDateTime plusHours(jlong arg0);
		java::time::ZonedDateTime plusMinutes(jlong arg0);
		java::time::ZonedDateTime plusMonths(jlong arg0);
		java::time::ZonedDateTime plusNanos(jlong arg0);
		java::time::ZonedDateTime plusSeconds(jlong arg0);
		java::time::ZonedDateTime plusWeeks(jlong arg0);
		java::time::ZonedDateTime plusYears(jlong arg0);
		JObject query(JObject arg0);
		java::time::temporal::ValueRange range(JObject arg0);
		java::time::LocalDate toLocalDate();
		java::time::LocalDateTime toLocalDateTime();
		java::time::LocalTime toLocalTime();
		java::time::OffsetDateTime toOffsetDateTime();
		JString toString();
		java::time::ZonedDateTime truncatedTo(JObject arg0);
		jlong until(JObject arg0, JObject arg1);
		java::time::ZonedDateTime with(JObject arg0);
		java::time::ZonedDateTime with(JObject arg0, jlong arg1);
		java::time::ZonedDateTime withDayOfMonth(jint arg0);
		java::time::ZonedDateTime withDayOfYear(jint arg0);
		java::time::ZonedDateTime withEarlierOffsetAtOverlap();
		java::time::ZonedDateTime withFixedOffsetZone();
		java::time::ZonedDateTime withHour(jint arg0);
		java::time::ZonedDateTime withLaterOffsetAtOverlap();
		java::time::ZonedDateTime withMinute(jint arg0);
		java::time::ZonedDateTime withMonth(jint arg0);
		java::time::ZonedDateTime withNano(jint arg0);
		java::time::ZonedDateTime withSecond(jint arg0);
		java::time::ZonedDateTime withYear(jint arg0);
		java::time::ZonedDateTime withZoneSameInstant(java::time::ZoneId arg0);
		java::time::ZonedDateTime withZoneSameLocal(java::time::ZoneId arg0);
	};
} // namespace java::time

