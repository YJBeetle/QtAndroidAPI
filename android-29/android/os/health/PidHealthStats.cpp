#include "./PidHealthStats.hpp"

namespace android::os::health
{
	// Fields
	jint PidHealthStats::MEASUREMENT_WAKE_NESTING_COUNT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.PidHealthStats",
			"MEASUREMENT_WAKE_NESTING_COUNT"
		);
	}
	jint PidHealthStats::MEASUREMENT_WAKE_START_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.PidHealthStats",
			"MEASUREMENT_WAKE_START_MS"
		);
	}
	jint PidHealthStats::MEASUREMENT_WAKE_SUM_MS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.health.PidHealthStats",
			"MEASUREMENT_WAKE_SUM_MS"
		);
	}
	
	PidHealthStats::PidHealthStats(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace android::os::health

