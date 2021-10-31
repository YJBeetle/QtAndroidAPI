#include "./ServiceHealthStats.hpp"

namespace android::os::health
{
	// Fields
	jint ServiceHealthStats::MEASUREMENT_LAUNCH_COUNT()
	{
		return getStaticField<jint>(
			"android.os.health.ServiceHealthStats",
			"MEASUREMENT_LAUNCH_COUNT"
		);
	}
	jint ServiceHealthStats::MEASUREMENT_START_SERVICE_COUNT()
	{
		return getStaticField<jint>(
			"android.os.health.ServiceHealthStats",
			"MEASUREMENT_START_SERVICE_COUNT"
		);
	}
	
	// QAndroidJniObject forward
	ServiceHealthStats::ServiceHealthStats(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::os::health

