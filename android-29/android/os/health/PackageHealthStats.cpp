#include "./PackageHealthStats.hpp"

namespace android::os::health
{
	// Fields
	jint PackageHealthStats::MEASUREMENTS_WAKEUP_ALARMS_COUNT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.PackageHealthStats",
			"MEASUREMENTS_WAKEUP_ALARMS_COUNT"
		);
	}
	jint PackageHealthStats::STATS_SERVICES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.PackageHealthStats",
			"STATS_SERVICES"
		);
	}
	
	PackageHealthStats::PackageHealthStats(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace android::os::health

