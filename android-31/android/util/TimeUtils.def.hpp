#pragma once

#include "../../JObject.hpp"

class JString;
namespace java::time
{
	class LocalTime;
}
namespace java::util
{
	class TimeZone;
}

namespace android::util
{
	class TimeUtils : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TimeUtils(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TimeUtils(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static java::util::TimeZone getTimeZone(jint arg0, jboolean arg1, jlong arg2, JString arg3);
		static JString getTimeZoneDatabaseVersion();
		static JObject getTimeZoneIdsForCountryCode(JString arg0);
		static jboolean isTimeBetween(java::time::LocalTime arg0, java::time::LocalTime arg1, java::time::LocalTime arg2);
	};
} // namespace android::util

