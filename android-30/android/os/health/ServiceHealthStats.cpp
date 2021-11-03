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
	
	// QJniObject forward
	ServiceHealthStats::ServiceHealthStats(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::os::health

