#pragma once

#include "../../JObject.hpp"

class JArray;
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
	class LocalTime : public JObject
	{
	public:
		// Fields
		static java::time::LocalTime MAX();
		static java::time::LocalTime MIDNIGHT();
		static java::time::LocalTime MIN();
		static java::time::LocalTime NOON();
		
		// QJniObject forward
		template<typename ...Ts> explicit LocalTime(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LocalTime(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static java::time::LocalTime from(JObject arg0);
		static java::time::LocalTime now();
		static java::time::LocalTime now(java::time::Clock arg0);
		static java::time::LocalTime now(java::time::ZoneId arg0);
		static java::time::LocalTime of(jint arg0, jint arg1);
		static java::time::LocalTime of(jint arg0, jint arg1, jint arg2);
		static java::time::LocalTime of(jint arg0, jint arg1, jint arg2, jint arg3);
		static java::time::LocalTime ofInstant(java::time::Instant arg0, java::time::ZoneId arg1);
		static java::time::LocalTime ofNanoOfDay(jlong arg0);
		static java::time::LocalTime ofSecondOfDay(jlong arg0);
		static java::time::LocalTime parse(JString arg0);
		static java::time::LocalTime parse(JString arg0, java::time::format::DateTimeFormatter arg1);
		JObject adjustInto(JObject arg0) const;
		java::time::LocalDateTime atDate(java::time::LocalDate arg0) const;
		java::time::OffsetTime atOffset(java::time::ZoneOffset arg0) const;
		jint compareTo(JObject arg0) const;
		jint compareTo(java::time::LocalTime arg0) const;
		jboolean equals(JObject arg0) const;
		JString format(java::time::format::DateTimeFormatter arg0) const;
		jint get(JObject arg0) const;
		jint getHour() const;
		jlong getLong(JObject arg0) const;
		jint getMinute() const;
		jint getNano() const;
		jint getSecond() const;
		jint hashCode() const;
		jboolean isAfter(java::time::LocalTime arg0) const;
		jboolean isBefore(java::time::LocalTime arg0) const;
		jboolean isSupported(JObject arg0) const;
		java::time::LocalTime minus(JObject arg0) const;
		java::time::LocalTime minus(jlong arg0, JObject arg1) const;
		java::time::LocalTime minusHours(jlong arg0) const;
		java::time::LocalTime minusMinutes(jlong arg0) const;
		java::time::LocalTime minusNanos(jlong arg0) const;
		java::time::LocalTime minusSeconds(jlong arg0) const;
		java::time::LocalTime plus(JObject arg0) const;
		java::time::LocalTime plus(jlong arg0, JObject arg1) const;
		java::time::LocalTime plusHours(jlong arg0) const;
		java::time::LocalTime plusMinutes(jlong arg0) const;
		java::time::LocalTime plusNanos(jlong arg0) const;
		java::time::LocalTime plusSeconds(jlong arg0) const;
		JObject query(JObject arg0) const;
		java::time::temporal::ValueRange range(JObject arg0) const;
		jlong toEpochSecond(java::time::LocalDate arg0, java::time::ZoneOffset arg1) const;
		jlong toNanoOfDay() const;
		jint toSecondOfDay() const;
		JString toString() const;
		java::time::LocalTime truncatedTo(JObject arg0) const;
		jlong until(JObject arg0, JObject arg1) const;
		java::time::LocalTime with(JObject arg0) const;
		java::time::LocalTime with(JObject arg0, jlong arg1) const;
		java::time::LocalTime withHour(jint arg0) const;
		java::time::LocalTime withMinute(jint arg0) const;
		java::time::LocalTime withNano(jint arg0) const;
		java::time::LocalTime withSecond(jint arg0) const;
	};
} // namespace java::time

