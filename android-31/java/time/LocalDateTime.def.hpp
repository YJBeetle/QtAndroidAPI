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
	class LocalDateTime : public JObject
	{
	public:
		// Fields
		static java::time::LocalDateTime MAX();
		static java::time::LocalDateTime MIN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LocalDateTime(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LocalDateTime(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static java::time::LocalDateTime from(JObject arg0);
		static java::time::LocalDateTime now();
		static java::time::LocalDateTime now(java::time::Clock arg0);
		static java::time::LocalDateTime now(java::time::ZoneId arg0);
		static java::time::LocalDateTime of(java::time::LocalDate arg0, java::time::LocalTime arg1);
		static java::time::LocalDateTime of(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static java::time::LocalDateTime of(jint arg0, java::time::Month arg1, jint arg2, jint arg3, jint arg4);
		static java::time::LocalDateTime of(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		static java::time::LocalDateTime of(jint arg0, java::time::Month arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		static java::time::LocalDateTime of(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6);
		static java::time::LocalDateTime of(jint arg0, java::time::Month arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6);
		static java::time::LocalDateTime ofEpochSecond(jlong arg0, jint arg1, java::time::ZoneOffset arg2);
		static java::time::LocalDateTime ofInstant(java::time::Instant arg0, java::time::ZoneId arg1);
		static java::time::LocalDateTime parse(JString arg0);
		static java::time::LocalDateTime parse(JString arg0, java::time::format::DateTimeFormatter arg1);
		JObject adjustInto(JObject arg0) const;
		java::time::OffsetDateTime atOffset(java::time::ZoneOffset arg0) const;
		java::time::ZonedDateTime atZone(java::time::ZoneId arg0) const;
		jint compareTo(JObject arg0) const;
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
		jint getSecond() const;
		jint getYear() const;
		jint hashCode() const;
		jboolean isAfter(JObject arg0) const;
		jboolean isBefore(JObject arg0) const;
		jboolean isEqual(JObject arg0) const;
		jboolean isSupported(JObject arg0) const;
		java::time::LocalDateTime minus(JObject arg0) const;
		java::time::LocalDateTime minus(jlong arg0, JObject arg1) const;
		java::time::LocalDateTime minusDays(jlong arg0) const;
		java::time::LocalDateTime minusHours(jlong arg0) const;
		java::time::LocalDateTime minusMinutes(jlong arg0) const;
		java::time::LocalDateTime minusMonths(jlong arg0) const;
		java::time::LocalDateTime minusNanos(jlong arg0) const;
		java::time::LocalDateTime minusSeconds(jlong arg0) const;
		java::time::LocalDateTime minusWeeks(jlong arg0) const;
		java::time::LocalDateTime minusYears(jlong arg0) const;
		java::time::LocalDateTime plus(JObject arg0) const;
		java::time::LocalDateTime plus(jlong arg0, JObject arg1) const;
		java::time::LocalDateTime plusDays(jlong arg0) const;
		java::time::LocalDateTime plusHours(jlong arg0) const;
		java::time::LocalDateTime plusMinutes(jlong arg0) const;
		java::time::LocalDateTime plusMonths(jlong arg0) const;
		java::time::LocalDateTime plusNanos(jlong arg0) const;
		java::time::LocalDateTime plusSeconds(jlong arg0) const;
		java::time::LocalDateTime plusWeeks(jlong arg0) const;
		java::time::LocalDateTime plusYears(jlong arg0) const;
		JObject query(JObject arg0) const;
		java::time::temporal::ValueRange range(JObject arg0) const;
		java::time::LocalDate toLocalDate() const;
		java::time::LocalTime toLocalTime() const;
		JString toString() const;
		java::time::LocalDateTime truncatedTo(JObject arg0) const;
		jlong until(JObject arg0, JObject arg1) const;
		java::time::LocalDateTime with(JObject arg0) const;
		java::time::LocalDateTime with(JObject arg0, jlong arg1) const;
		java::time::LocalDateTime withDayOfMonth(jint arg0) const;
		java::time::LocalDateTime withDayOfYear(jint arg0) const;
		java::time::LocalDateTime withHour(jint arg0) const;
		java::time::LocalDateTime withMinute(jint arg0) const;
		java::time::LocalDateTime withMonth(jint arg0) const;
		java::time::LocalDateTime withNano(jint arg0) const;
		java::time::LocalDateTime withSecond(jint arg0) const;
		java::time::LocalDateTime withYear(jint arg0) const;
	};
} // namespace java::time

