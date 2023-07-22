#pragma once

#include "./GpsSatellite.def.hpp"

namespace android::location
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jfloat GpsSatellite::getAzimuth() const
	{
		return callMethod<jfloat>(
			"getAzimuth",
			"()F"
		);
	}
	inline jfloat GpsSatellite::getElevation() const
	{
		return callMethod<jfloat>(
			"getElevation",
			"()F"
		);
	}
	inline jint GpsSatellite::getPrn() const
	{
		return callMethod<jint>(
			"getPrn",
			"()I"
		);
	}
	inline jfloat GpsSatellite::getSnr() const
	{
		return callMethod<jfloat>(
			"getSnr",
			"()F"
		);
	}
	inline jboolean GpsSatellite::hasAlmanac() const
	{
		return callMethod<jboolean>(
			"hasAlmanac",
			"()Z"
		);
	}
	inline jboolean GpsSatellite::hasEphemeris() const
	{
		return callMethod<jboolean>(
			"hasEphemeris",
			"()Z"
		);
	}
	inline jboolean GpsSatellite::usedInFix() const
	{
		return callMethod<jboolean>(
			"usedInFix",
			"()Z"
		);
	}
} // namespace android::location

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::location;
#endif
