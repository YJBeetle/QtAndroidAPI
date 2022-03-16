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
	class OffsetTime : public JObject
	{
	public:
		// Fields
		static java::time::OffsetTime MAX();
		static java::time::OffsetTime MIN();
		
		// QJniObject forward
		template<typename ...Ts> explicit OffsetTime(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		OffsetTime(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static java::time::OffsetTime from(JObject arg0);
		static java::time::OffsetTime now();
		static java::time::OffsetTime now(java::time::Clock arg0);
		static java::time::OffsetTime now(java::time::ZoneId arg0);
		static java::time::OffsetTime of(java::time::LocalTime arg0, java::time::ZoneOffset arg1);
		static java::time::OffsetTime of(jint arg0, jint arg1, jint arg2, jint arg3, java::time::ZoneOffset arg4);
		static java::time::OffsetTime ofInstant(java::time::Instant arg0, java::time::ZoneId arg1);
		static java::time::OffsetTime parse(JString arg0);
		static java::time::OffsetTime parse(JString arg0, java::time::format::DateTimeFormatter arg1);
		JObject adjustInto(JObject arg0) const;
		java::time::OffsetDateTime atDate(java::time::LocalDate arg0) const;
		jint compareTo(JObject arg0) const;
		jint compareTo(java::time::OffsetTime arg0) const;
		jboolean equals(JObject arg0) const;
		JString format(java::time::format::DateTimeFormatter arg0) const;
		jint get(JObject arg0) const;
		jint getHour() const;
		jlong getLong(JObject arg0) const;
		jint getMinute() const;
		jint getNano() const;
		java::time::ZoneOffset getOffset() const;
		jint getSecond() const;
		jint hashCode() const;
		jboolean isAfter(java::time::OffsetTime arg0) const;
		jboolean isBefore(java::time::OffsetTime arg0) const;
		jboolean isEqual(java::time::OffsetTime arg0) const;
		jboolean isSupported(JObject arg0) const;
		java::time::OffsetTime minus(JObject arg0) const;
		java::time::OffsetTime minus(jlong arg0, JObject arg1) const;
		java::time::OffsetTime minusHours(jlong arg0) const;
		java::time::OffsetTime minusMinutes(jlong arg0) const;
		java::time::OffsetTime minusNanos(jlong arg0) const;
		java::time::OffsetTime minusSeconds(jlong arg0) const;
		java::time::OffsetTime plus(JObject arg0) const;
		java::time::OffsetTime plus(jlong arg0, JObject arg1) const;
		java::time::OffsetTime plusHours(jlong arg0) const;
		java::time::OffsetTime plusMinutes(jlong arg0) const;
		java::time::OffsetTime plusNanos(jlong arg0) const;
		java::time::OffsetTime plusSeconds(jlong arg0) const;
		JObject query(JObject arg0) const;
		java::time::temporal::ValueRange range(JObject arg0) const;
		jlong toEpochSecond(java::time::LocalDate arg0) const;
		java::time::LocalTime toLocalTime() const;
		JString toString() const;
		java::time::OffsetTime truncatedTo(JObject arg0) const;
		jlong until(JObject arg0, JObject arg1) const;
		java::time::OffsetTime with(JObject arg0) const;
		java::time::OffsetTime with(JObject arg0, jlong arg1) const;
		java::time::OffsetTime withHour(jint arg0) const;
		java::time::OffsetTime withMinute(jint arg0) const;
		java::time::OffsetTime withNano(jint arg0) const;
		java::time::OffsetTime withOffsetSameInstant(java::time::ZoneOffset arg0) const;
		java::time::OffsetTime withOffsetSameLocal(java::time::ZoneOffset arg0) const;
		java::time::OffsetTime withSecond(jint arg0) const;
	};
} // namespace java::time

