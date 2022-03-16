#pragma once

#include "./PackageHealthStats.def.hpp"

namespace android::os::health
{
	// Fields
	inline jint PackageHealthStats::MEASUREMENTS_WAKEUP_ALARMS_COUNT()
	{
		return getStaticField<jint>(
			"android.os.health.PackageHealthStats",
			"MEASUREMENTS_WAKEUP_ALARMS_COUNT"
		);
	}
	inline jint PackageHealthStats::STATS_SERVICES()
	{
		return getStaticField<jint>(
			"android.os.health.PackageHealthStats",
			"STATS_SERVICES"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::os::health

// Base class headers

