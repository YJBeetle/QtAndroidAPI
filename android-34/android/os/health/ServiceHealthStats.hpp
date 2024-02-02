#pragma once

#include "./ServiceHealthStats.def.hpp"

namespace android::os::health
{
	// Fields
	inline jint ServiceHealthStats::MEASUREMENT_LAUNCH_COUNT()
	{
		return getStaticField<jint>(
			"android.os.health.ServiceHealthStats",
			"MEASUREMENT_LAUNCH_COUNT"
		);
	}
	inline jint ServiceHealthStats::MEASUREMENT_START_SERVICE_COUNT()
	{
		return getStaticField<jint>(
			"android.os.health.ServiceHealthStats",
			"MEASUREMENT_START_SERVICE_COUNT"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::os::health

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os::health;
#endif
