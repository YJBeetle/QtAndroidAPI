#pragma once

#include "../../__JniBaseClass.hpp"

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
	class TimeUtils : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TimeUtils(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TimeUtils(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::util::TimeZone getTimeZone(jint arg0, jboolean arg1, jlong arg2, jstring arg3);
		static jstring getTimeZoneDatabaseVersion();
		static __JniBaseClass getTimeZoneIdsForCountryCode(jstring arg0);
		static jboolean isTimeBetween(java::time::LocalTime arg0, java::time::LocalTime arg1, java::time::LocalTime arg2);
	};
} // namespace android::util

