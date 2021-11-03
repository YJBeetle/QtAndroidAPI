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
namespace java::time::temporal
{
	class ValueRange;
}

namespace java::time
{
	class Instant : public JObject
	{
	public:
		// Fields
		static java::time::Instant EPOCH();
		static java::time::Instant MAX();
		static java::time::Instant MIN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Instant(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Instant(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::time::Instant from(JObject arg0);
		static java::time::Instant now();
		static java::time::Instant now(java::time::Clock arg0);
		static java::time::Instant ofEpochMilli(jlong arg0);
		static java::time::Instant ofEpochSecond(jlong arg0);
		static java::time::Instant ofEpochSecond(jlong arg0, jlong arg1);
		static java::time::Instant parse(JString arg0);
		JObject adjustInto(JObject arg0) const;
		java::time::OffsetDateTime atOffset(java::time::ZoneOffset arg0) const;
		java::time::ZonedDateTime atZone(java::time::ZoneId arg0) const;
		jint compareTo(JObject arg0) const;
		jint compareTo(java::time::Instant arg0) const;
		jboolean equals(JObject arg0) const;
		jint get(JObject arg0) const;
		jlong getEpochSecond() const;
		jlong getLong(JObject arg0) const;
		jint getNano() const;
		jint hashCode() const;
		jboolean isAfter(java::time::Instant arg0) const;
		jboolean isBefore(java::time::Instant arg0) const;
		jboolean isSupported(JObject arg0) const;
		java::time::Instant minus(JObject arg0) const;
		java::time::Instant minus(jlong arg0, JObject arg1) const;
		java::time::Instant minusMillis(jlong arg0) const;
		java::time::Instant minusNanos(jlong arg0) const;
		java::time::Instant minusSeconds(jlong arg0) const;
		java::time::Instant plus(JObject arg0) const;
		java::time::Instant plus(jlong arg0, JObject arg1) const;
		java::time::Instant plusMillis(jlong arg0) const;
		java::time::Instant plusNanos(jlong arg0) const;
		java::time::Instant plusSeconds(jlong arg0) const;
		JObject query(JObject arg0) const;
		java::time::temporal::ValueRange range(JObject arg0) const;
		jlong toEpochMilli() const;
		JString toString() const;
		java::time::Instant truncatedTo(JObject arg0) const;
		jlong until(JObject arg0, JObject arg1) const;
		java::time::Instant with(JObject arg0) const;
		java::time::Instant with(JObject arg0, jlong arg1) const;
	};
} // namespace java::time

