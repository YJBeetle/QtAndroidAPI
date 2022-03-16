#pragma once

#include "./GpsStatus.def.hpp"

namespace android::location
{
	// Fields
	inline jint GpsStatus::GPS_EVENT_FIRST_FIX()
	{
		return getStaticField<jint>(
			"android.location.GpsStatus",
			"GPS_EVENT_FIRST_FIX"
		);
	}
	inline jint GpsStatus::GPS_EVENT_SATELLITE_STATUS()
	{
		return getStaticField<jint>(
			"android.location.GpsStatus",
			"GPS_EVENT_SATELLITE_STATUS"
		);
	}
	inline jint GpsStatus::GPS_EVENT_STARTED()
	{
		return getStaticField<jint>(
			"android.location.GpsStatus",
			"GPS_EVENT_STARTED"
		);
	}
	inline jint GpsStatus::GPS_EVENT_STOPPED()
	{
		return getStaticField<jint>(
			"android.location.GpsStatus",
			"GPS_EVENT_STOPPED"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint GpsStatus::getMaxSatellites() const
	{
		return callMethod<jint>(
			"getMaxSatellites",
			"()I"
		);
	}
	inline JObject GpsStatus::getSatellites() const
	{
		return callObjectMethod(
			"getSatellites",
			"()Ljava/lang/Iterable;"
		);
	}
	inline jint GpsStatus::getTimeToFirstFix() const
	{
		return callMethod<jint>(
			"getTimeToFirstFix",
			"()I"
		);
	}
} // namespace android::location

// Base class headers

