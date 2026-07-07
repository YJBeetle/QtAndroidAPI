#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
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
	inline jint GnssStatus::CONSTELLATION_IRNSS()
	{
		return getStaticField<jint>(
			"android.location.GnssStatus",
			"CONSTELLATION_IRNSS"
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
	inline JObject GnssStatus::CREATOR()
	{
		return getStaticObjectField(
			"android.location.GnssStatus",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint GnssStatus::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean GnssStatus::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jfloat GnssStatus::getAzimuthDegrees(jint arg0) const
	{
		return callMethod<jfloat>(
			"getAzimuthDegrees",
			"(I)F",
			arg0
		);
	}
	inline jfloat GnssStatus::getBasebandCn0DbHz(jint arg0) const
	{
		return callMethod<jfloat>(
			"getBasebandCn0DbHz",
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
	inline jboolean GnssStatus::hasBasebandCn0DbHz(jint arg0) const
	{
		return callMethod<jboolean>(
			"hasBasebandCn0DbHz",
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
	inline jint GnssStatus::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
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
	inline void GnssStatus::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::location

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::location;
#endif
