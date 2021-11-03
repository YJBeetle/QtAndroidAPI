#pragma once

#include "../../../JObject.hpp"

class JLongArray;
class JArray;
class JArray;
class JArray;
class JArray;
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
	class ZoneOffsetTransition;
}

namespace java::time::zone
{
	class ZoneRules : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ZoneRules(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ZoneRules(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::time::zone::ZoneRules of(java::time::ZoneOffset arg0);
		static java::time::zone::ZoneRules of(java::time::ZoneOffset arg0, java::time::ZoneOffset arg1, JObject arg2, JObject arg3, JObject arg4);
		jboolean equals(JObject arg0) const;
		java::time::Duration getDaylightSavings(java::time::Instant arg0) const;
		java::time::ZoneOffset getOffset(java::time::Instant arg0) const;
		java::time::ZoneOffset getOffset(java::time::LocalDateTime arg0) const;
		java::time::ZoneOffset getStandardOffset(java::time::Instant arg0) const;
		java::time::zone::ZoneOffsetTransition getTransition(java::time::LocalDateTime arg0) const;
		JObject getTransitionRules() const;
		JObject getTransitions() const;
		JObject getValidOffsets(java::time::LocalDateTime arg0) const;
		jint hashCode() const;
		jboolean isDaylightSavings(java::time::Instant arg0) const;
		jboolean isFixedOffset() const;
		jboolean isValidOffset(java::time::LocalDateTime arg0, java::time::ZoneOffset arg1) const;
		java::time::zone::ZoneOffsetTransition nextTransition(java::time::Instant arg0) const;
		java::time::zone::ZoneOffsetTransition previousTransition(java::time::Instant arg0) const;
		JString toString() const;
	};
} // namespace java::time::zone

