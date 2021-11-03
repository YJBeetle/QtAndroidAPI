#pragma once

#include "../../JObject.hpp"

class JObject;
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
	class ZoneId;
}

namespace java::time
{
	class Clock : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Clock(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Clock(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::time::Clock fixed(java::time::Instant arg0, java::time::ZoneId arg1);
		static java::time::Clock offset(java::time::Clock arg0, java::time::Duration arg1);
		static java::time::Clock system(java::time::ZoneId arg0);
		static java::time::Clock systemDefaultZone();
		static java::time::Clock systemUTC();
		static java::time::Clock tick(java::time::Clock arg0, java::time::Duration arg1);
		static java::time::Clock tickMillis(java::time::ZoneId arg0);
		static java::time::Clock tickMinutes(java::time::ZoneId arg0);
		static java::time::Clock tickSeconds(java::time::ZoneId arg0);
		jboolean equals(JObject arg0) const;
		java::time::ZoneId getZone() const;
		jint hashCode() const;
		java::time::Instant instant() const;
		jlong millis() const;
		java::time::Clock withZone(java::time::ZoneId arg0) const;
	};
} // namespace java::time

