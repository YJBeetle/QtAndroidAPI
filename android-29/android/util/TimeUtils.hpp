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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TimeUtils(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TimeUtils(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject getTimeZone(jint arg0, jboolean arg1, jlong arg2, jstring arg3);
		static jstring getTimeZoneDatabaseVersion();
		static QAndroidJniObject getTimeZoneIdsForCountryCode(jstring arg0);
	};
} // namespace android::util

