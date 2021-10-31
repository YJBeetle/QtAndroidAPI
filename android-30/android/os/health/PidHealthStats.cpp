#include "./PidHealthStats.hpp"

namespace android::os::health
{
	// Fields
	jint PidHealthStats::MEASUREMENT_WAKE_NESTING_COUNT()
	{
		return getStaticField<jint>(
			"android.os.health.PidHealthStats",
			"MEASUREMENT_WAKE_NESTING_COUNT"
		);
	}
	jint PidHealthStats::MEASUREMENT_WAKE_START_MS()
	{
		return getStaticField<jint>(
			"android.os.health.PidHealthStats",
			"MEASUREMENT_WAKE_START_MS"
		);
	}
	jint PidHealthStats::MEASUREMENT_WAKE_SUM_MS()
	{
		return getStaticField<jint>(
			"android.os.health.PidHealthStats",
			"MEASUREMENT_WAKE_SUM_MS"
		);
	}
	
	// QJniObject forward
	PidHealthStats::PidHealthStats(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::os::health

