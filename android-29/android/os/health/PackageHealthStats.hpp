#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::os::health
{
	class PackageHealthStats : public __JniBaseClass
	{
	public:
		// Fields
		static jint MEASUREMENTS_WAKEUP_ALARMS_COUNT();
		static jint STATS_SERVICES();
		
		PackageHealthStats(QAndroidJniObject obj);
		// Constructors
		PackageHealthStats() = default;
		
		// Methods
	};
} // namespace android::os::health

