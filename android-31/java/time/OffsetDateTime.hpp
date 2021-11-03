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
	class OffsetDateTime : public JObject
	{
	public:
		// Fields
		static java::time::OffsetDateTime MAX();
		static java::time::OffsetDateTime MIN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit OffsetDateTime(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		OffsetDateTime(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::time::OffsetDateTime from(JObject arg0);
		static java::time::OffsetDateTime now();
		static java::time::OffsetDateTime now(java::time::Clock arg0);
		static java::time::OffsetDateTime now(java::time::ZoneId arg0);
		static java::time::OffsetDateTime of(java::time::LocalDateTime arg0, java::time::ZoneOffset arg1);
		static java::time::OffsetDateTime of(java::time::LocalDate arg0, java::time::LocalTime arg1, java::time::ZoneOffset arg2);
		static java::time::OffsetDateTime of(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, java::time::ZoneOffset arg7);
		static java::time::OffsetDateTime ofInstant(java::time::Instant arg0, java::time::ZoneId arg1);
		static java::time::OffsetDateTime parse(JString arg0);
		static java::time::OffsetDateTime parse(JString arg0, java::time::format::DateTimeFormatter arg1);
		static JObject timeLineOrder();
		JObject adjustInto(JObject arg0) const;
		java::time::ZonedDateTime atZoneSameInstant(java::time::ZoneId arg0) const;
		java::time::ZonedDateTime atZoneSimilarLocal(java::time::ZoneId arg0) const;
		jint compareTo(JObject arg0) const;
		jint compareTo(java::time::OffsetDateTime arg0) const;
		jboolean equals(JObject arg0) const;
		JString format(java::time::format::DateTimeFormatter arg0) const;
		jint get(JObject arg0) const;
		jint getDayOfMonth() const;
		java::time::DayOfWeek getDayOfWeek() const;
		jint getDayOfYear() const;
		jint getHour() const;
		jlong getLong(JObject arg0) const;
		jint getMinute() const;
		java::time::Month getMonth() const;
		jint getMonthValue() const;
		jint getNano() const;
		java::time::ZoneOffset getOffset() const;
		jint getSecond() const;
		jint getYear() const;
		jint hashCode() const;
		jboolean isAfter(java::time::OffsetDateTime arg0) const;
		jboolean isBefore(java::time::OffsetDateTime arg0) const;
		jboolean isEqual(java::time::OffsetDateTime arg0) const;
		jboolean isSupported(JObject arg0) const;
		java::time::OffsetDateTime minus(JObject arg0) const;
		java::time::OffsetDateTime minus(jlong arg0, JObject arg1) const;
		java::time::OffsetDateTime minusDays(jlong arg0) const;
		java::time::OffsetDateTime minusHours(jlong arg0) const;
		java::time::OffsetDateTime minusMinutes(jlong arg0) const;
		java::time::OffsetDateTime minusMonths(jlong arg0) const;
		java::time::OffsetDateTime minusNanos(jlong arg0) const;
		java::time::OffsetDateTime minusSeconds(jlong arg0) const;
		java::time::OffsetDateTime minusWeeks(jlong arg0) const;
		java::time::OffsetDateTime minusYears(jlong arg0) const;
		java::time::OffsetDateTime plus(JObject arg0) const;
		java::time::OffsetDateTime plus(jlong arg0, JObject arg1) const;
		java::time::OffsetDateTime plusDays(jlong arg0) const;
		java::time::OffsetDateTime plusHours(jlong arg0) const;
		java::time::OffsetDateTime plusMinutes(jlong arg0) const;
		java::time::OffsetDateTime plusMonths(jlong arg0) const;
		java::time::OffsetDateTime plusNanos(jlong arg0) const;
		java::time::OffsetDateTime plusSeconds(jlong arg0) const;
		java::time::OffsetDateTime plusWeeks(jlong arg0) const;
		java::time::OffsetDateTime plusYears(jlong arg0) const;
		JObject query(JObject arg0) const;
		java::time::temporal::ValueRange range(JObject arg0) const;
		jlong toEpochSecond() const;
		java::time::Instant toInstant() const;
		java::time::LocalDate toLocalDate() const;
		java::time::LocalDateTime toLocalDateTime() const;
		java::time::LocalTime toLocalTime() const;
		java::time::OffsetTime toOffsetTime() const;
		JString toString() const;
		java::time::ZonedDateTime toZonedDateTime() const;
		java::time::OffsetDateTime truncatedTo(JObject arg0) const;
		jlong until(JObject arg0, JObject arg1) const;
		java::time::OffsetDateTime with(JObject arg0) const;
		java::time::OffsetDateTime with(JObject arg0, jlong arg1) const;
		java::time::OffsetDateTime withDayOfMonth(jint arg0) const;
		java::time::OffsetDateTime withDayOfYear(jint arg0) const;
		java::time::OffsetDateTime withHour(jint arg0) const;
		java::time::OffsetDateTime withMinute(jint arg0) const;
		java::time::OffsetDateTime withMonth(jint arg0) const;
		java::time::OffsetDateTime withNano(jint arg0) const;
		java::time::OffsetDateTime withOffsetSameInstant(java::time::ZoneOffset arg0) const;
		java::time::OffsetDateTime withOffsetSameLocal(java::time::ZoneOffset arg0) const;
		java::time::OffsetDateTime withSecond(jint arg0) const;
		java::time::OffsetDateTime withYear(jint arg0) const;
	};
} // namespace java::time

