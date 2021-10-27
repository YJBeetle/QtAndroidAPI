#include "./ServiceHealthStats.hpp"

namespace android::os::health
{
	// Fields
	jint ServiceHealthStats::MEASUREMENT_LAUNCH_COUNT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.ServiceHealthStats",
			"MEASUREMENT_LAUNCH_COUNT"
		);
	}
	jint ServiceHealthStats::MEASUREMENT_START_SERVICE_COUNT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.ServiceHealthStats",
			"MEASUREMENT_START_SERVICE_COUNT"
		);
	}
	
	ServiceHealthStats::ServiceHealthStats(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace android::os::health

