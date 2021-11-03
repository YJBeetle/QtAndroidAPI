#pragma once

#include "../../JObject.hpp"

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
		TimeUtils(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::util::TimeZone getTimeZone(jint arg0, jboolean arg1, jlong arg2, jstring arg3);
		static jstring getTimeZoneDatabaseVersion();
		static JObject getTimeZoneIdsForCountryCode(jstring arg0);
	};
} // namespace android::util

