#pragma once

#include "../../../JObject.hpp"

namespace java::io
{
	class ObjectInputStream;
}
class JObject;
class JString;
namespace java::time
{
	class Duration;
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
	class ZoneOffset;
}

namespace java::time::zone
{
	class ZoneOffsetTransition : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ZoneOffsetTransition(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ZoneOffsetTransition(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static java::time::zone::ZoneOffsetTransition of(java::time::LocalDateTime arg0, java::time::ZoneOffset arg1, java::time::ZoneOffset arg2);
		jint compareTo(JObject arg0) const;
		jint compareTo(java::time::zone::ZoneOffsetTransition arg0) const;
		jboolean equals(JObject arg0) const;
		java::time::LocalDateTime getDateTimeAfter() const;
		java::time::LocalDateTime getDateTimeBefore() const;
		java::time::Duration getDuration() const;
		java::time::Instant getInstant() const;
		java::time::ZoneOffset getOffsetAfter() const;
		java::time::ZoneOffset getOffsetBefore() const;
		jint hashCode() const;
		jboolean isGap() const;
		jboolean isOverlap() const;
		jboolean isValidOffset(java::time::ZoneOffset arg0) const;
		jlong toEpochSecond() const;
		JString toString() const;
	};
} // namespace java::time::zone

