#pragma once

#include "../../JObject.hpp"

class JString;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TimeUtils(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TimeUtils(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::util::TimeZone getTimeZone(jint arg0, jboolean arg1, jlong arg2, JString arg3);
		static JString getTimeZoneDatabaseVersion();
		static JObject getTimeZoneIdsForCountryCode(JString arg0);
	};
} // namespace android::util

