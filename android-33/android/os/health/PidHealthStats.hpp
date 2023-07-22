#pragma once

#include "./PidHealthStats.def.hpp"

namespace android::os::health
{
	// Fields
	inline jint PidHealthStats::MEASUREMENT_WAKE_NESTING_COUNT()
	{
		return getStaticField<jint>(
			"android.os.health.PidHealthStats",
			"MEASUREMENT_WAKE_NESTING_COUNT"
		);
	}
	inline jint PidHealthStats::MEASUREMENT_WAKE_START_MS()
	{
		return getStaticField<jint>(
			"android.os.health.PidHealthStats",
			"MEASUREMENT_WAKE_START_MS"
		);
	}
	inline jint PidHealthStats::MEASUREMENT_WAKE_SUM_MS()
	{
		return getStaticField<jint>(
			"android.os.health.PidHealthStats",
			"MEASUREMENT_WAKE_SUM_MS"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::os::health

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os::health;
#endif
