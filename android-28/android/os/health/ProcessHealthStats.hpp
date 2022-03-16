#pragma once

#include "./ProcessHealthStats.def.hpp"

namespace android::os::health
{
	// Fields
	inline jint ProcessHealthStats::MEASUREMENT_ANR_COUNT()
	{
		return getStaticField<jint>(
			"android.os.health.ProcessHealthStats",
			"MEASUREMENT_ANR_COUNT"
		);
	}
	inline jint ProcessHealthStats::MEASUREMENT_CRASHES_COUNT()
	{
		return getStaticField<jint>(
			"android.os.health.ProcessHealthStats",
			"MEASUREMENT_CRASHES_COUNT"
		);
	}
	inline jint ProcessHealthStats::MEASUREMENT_FOREGROUND_MS()
	{
		return getStaticField<jint>(
			"android.os.health.ProcessHealthStats",
			"MEASUREMENT_FOREGROUND_MS"
		);
	}
	inline jint ProcessHealthStats::MEASUREMENT_STARTS_COUNT()
	{
		return getStaticField<jint>(
			"android.os.health.ProcessHealthStats",
			"MEASUREMENT_STARTS_COUNT"
		);
	}
	inline jint ProcessHealthStats::MEASUREMENT_SYSTEM_TIME_MS()
	{
		return getStaticField<jint>(
			"android.os.health.ProcessHealthStats",
			"MEASUREMENT_SYSTEM_TIME_MS"
		);
	}
	inline jint ProcessHealthStats::MEASUREMENT_USER_TIME_MS()
	{
		return getStaticField<jint>(
			"android.os.health.ProcessHealthStats",
			"MEASUREMENT_USER_TIME_MS"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::os::health

// Base class headers

