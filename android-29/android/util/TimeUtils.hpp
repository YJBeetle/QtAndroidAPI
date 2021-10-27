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
		
		TimeUtils(QAndroidJniObject obj);
		// Constructors
		TimeUtils() = default;
		
		// Methods
		static QAndroidJniObject getTimeZone(jint arg0, jboolean arg1, jlong arg2, jstring arg3);
		static QAndroidJniObject getTimeZone(jint arg0, jboolean arg1, jlong arg2, const QString &arg3);
		static jstring getTimeZoneDatabaseVersion();
		static QAndroidJniObject getTimeZoneIdsForCountryCode(jstring arg0);
		static QAndroidJniObject getTimeZoneIdsForCountryCode(const QString &arg0);
	};
} // namespace android::util

