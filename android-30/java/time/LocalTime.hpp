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
		LocalTime(QJniObject obj);
		
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
		JObject adjustInto(JObject arg0);
		java::time::LocalDateTime atDate(java::time::LocalDate arg0);
		java::time::OffsetTime atOffset(java::time::ZoneOffset arg0);
		jint compareTo(JObject arg0);
		jint compareTo(java::time::LocalTime arg0);
		jboolean equals(JObject arg0);
		JString format(java::time::format::DateTimeFormatter arg0);
		jint get(JObject arg0);
		jint getHour();
		jlong getLong(JObject arg0);
		jint getMinute();
		jint getNano();
		jint getSecond();
		jint hashCode();
		jboolean isAfter(java::time::LocalTime arg0);
		jboolean isBefore(java::time::LocalTime arg0);
		jboolean isSupported(JObject arg0);
		java::time::LocalTime minus(JObject arg0);
		java::time::LocalTime minus(jlong arg0, JObject arg1);
		java::time::LocalTime minusHours(jlong arg0);
		java::time::LocalTime minusMinutes(jlong arg0);
		java::time::LocalTime minusNanos(jlong arg0);
		java::time::LocalTime minusSeconds(jlong arg0);
		java::time::LocalTime plus(JObject arg0);
		java::time::LocalTime plus(jlong arg0, JObject arg1);
		java::time::LocalTime plusHours(jlong arg0);
		java::time::LocalTime plusMinutes(jlong arg0);
		java::time::LocalTime plusNanos(jlong arg0);
		java::time::LocalTime plusSeconds(jlong arg0);
		JObject query(JObject arg0);
		java::time::temporal::ValueRange range(JObject arg0);
		jlong toEpochSecond(java::time::LocalDate arg0, java::time::ZoneOffset arg1);
		jlong toNanoOfDay();
		jint toSecondOfDay();
		JString toString();
		java::time::LocalTime truncatedTo(JObject arg0);
		jlong until(JObject arg0, JObject arg1);
		java::time::LocalTime with(JObject arg0);
		java::time::LocalTime with(JObject arg0, jlong arg1);
		java::time::LocalTime withHour(jint arg0);
		java::time::LocalTime withMinute(jint arg0);
		java::time::LocalTime withNano(jint arg0);
		java::time::LocalTime withSecond(jint arg0);
	};
} // namespace java::time

