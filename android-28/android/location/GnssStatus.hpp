#pragma once

#include "../../JFloatArray.hpp"
#include "../../JIntArray.hpp"
#include "./GnssStatus.def.hpp"

namespace android::location
{
	// Fields
	inline jint GnssStatus::CONSTELLATION_BEIDOU()
	{
		return getStaticField<jint>(
			"android.location.GnssStatus",
			"CONSTELLATION_BEIDOU"
		);
	}
	inline jint GnssStatus::CONSTELLATION_GALILEO()
	{
		return getStaticField<jint>(
			"android.location.GnssStatus",
			"CONSTELLATION_GALILEO"
		);
	}
	inline jint GnssStatus::CONSTELLATION_GLONASS()
	{
		return getStaticField<jint>(
			"android.location.GnssStatus",
			"CONSTELLATION_GLONASS"
		);
	}
	inline jint GnssStatus::CONSTELLATION_GPS()
	{
		return getStaticField<jint>(
			"android.location.GnssStatus",
			"CONSTELLATION_GPS"
		);
	}
	inline jint GnssStatus::CONSTELLATION_QZSS()
	{
		return getStaticField<jint>(
			"android.location.GnssStatus",
			"CONSTELLATION_QZSS"
		);
	}
	inline jint GnssStatus::CONSTELLATION_SBAS()
	{
		return getStaticField<jint>(
			"android.location.GnssStatus",
			"CONSTELLATION_SBAS"
		);
	}
	inline jint GnssStatus::CONSTELLATION_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.location.GnssStatus",
			"CONSTELLATION_UNKNOWN"
		);
	}
	
	// Constructors
	
	// Methods
	inline jfloat GnssStatus::getAzimuthDegrees(jint arg0) const
	{
		return callMethod<jfloat>(
			"getAzimuthDegrees",
			"(I)F",
			arg0
		);
	}
	inline jfloat GnssStatus::getCarrierFrequencyHz(jint arg0) const
	{
		return callMethod<jfloat>(
			"getCarrierFrequencyHz",
			"(I)F",
			arg0
		);
	}
	inline jfloat GnssStatus::getCn0DbHz(jint arg0) const
	{
		return callMethod<jfloat>(
			"getCn0DbHz",
			"(I)F",
			arg0
		);
	}
	inline jint GnssStatus::getConstellationType(jint arg0) const
	{
		return callMethod<jint>(
			"getConstellationType",
			"(I)I",
			arg0
		);
	}
	inline jfloat GnssStatus::getElevationDegrees(jint arg0) const
	{
		return callMethod<jfloat>(
			"getElevationDegrees",
			"(I)F",
			arg0
		);
	}
	inline jint GnssStatus::getSatelliteCount() const
	{
		return callMethod<jint>(
			"getSatelliteCount",
			"()I"
		);
	}
	inline jint GnssStatus::getSvid(jint arg0) const
	{
		return callMethod<jint>(
			"getSvid",
			"(I)I",
			arg0
		);
	}
	inline jboolean GnssStatus::hasAlmanacData(jint arg0) const
	{
		return callMethod<jboolean>(
			"hasAlmanacData",
			"(I)Z",
			arg0
		);
	}
	inline jboolean GnssStatus::hasCarrierFrequencyHz(jint arg0) const
	{
		return callMethod<jboolean>(
			"hasCarrierFrequencyHz",
			"(I)Z",
			arg0
		);
	}
	inline jboolean GnssStatus::hasEphemerisData(jint arg0) const
	{
		return callMethod<jboolean>(
			"hasEphemerisData",
			"(I)Z",
			arg0
		);
	}
	inline jboolean GnssStatus::usedInFix(jint arg0) const
	{
		return callMethod<jboolean>(
			"usedInFix",
			"(I)Z",
			arg0
		);
	}
} // namespace android::location

// Base class headers

