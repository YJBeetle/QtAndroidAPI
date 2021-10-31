#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::util
{
	class TimeZone;
}

namespace android::util
{
	class TimeUtils : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TimeUtils(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TimeUtils(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::util::TimeZone getTimeZone(jint arg0, jboolean arg1, jlong arg2, jstring arg3);
		static jstring getTimeZoneDatabaseVersion();
		static __JniBaseClass getTimeZoneIdsForCountryCode(jstring arg0);
	};
} // namespace android::util

