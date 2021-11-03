#include "./PackageHealthStats.hpp"

namespace android::os::health
{
	// Fields
	jint PackageHealthStats::MEASUREMENTS_WAKEUP_ALARMS_COUNT()
	{
		return getStaticField<jint>(
			"android.os.health.PackageHealthStats",
			"MEASUREMENTS_WAKEUP_ALARMS_COUNT"
		);
	}
	jint PackageHealthStats::STATS_SERVICES()
	{
		return getStaticField<jint>(
			"android.os.health.PackageHealthStats",
			"STATS_SERVICES"
		);
	}
	
	// QJniObject forward
	PackageHealthStats::PackageHealthStats(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::os::health

