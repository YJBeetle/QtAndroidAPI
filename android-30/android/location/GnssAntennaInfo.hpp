#pragma once

#include "./GnssAntennaInfo_PhaseCenterOffset.def.hpp"
#include "./GnssAntennaInfo_SphericalCorrections.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./GnssAntennaInfo.def.hpp"

namespace android::location
{
	// Fields
	inline JObject GnssAntennaInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.location.GnssAntennaInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint GnssAntennaInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jdouble GnssAntennaInfo::getCarrierFrequencyMHz() const
	{
		return callMethod<jdouble>(
			"getCarrierFrequencyMHz",
			"()D"
		);
	}
	inline android::location::GnssAntennaInfo_PhaseCenterOffset GnssAntennaInfo::getPhaseCenterOffset() const
	{
		return callObjectMethod(
			"getPhaseCenterOffset",
			"()Landroid/location/GnssAntennaInfo$PhaseCenterOffset;"
		);
	}
	inline android::location::GnssAntennaInfo_SphericalCorrections GnssAntennaInfo::getPhaseCenterVariationCorrections() const
	{
		return callObjectMethod(
			"getPhaseCenterVariationCorrections",
			"()Landroid/location/GnssAntennaInfo$SphericalCorrections;"
		);
	}
	inline android::location::GnssAntennaInfo_SphericalCorrections GnssAntennaInfo::getSignalGainCorrections() const
	{
		return callObjectMethod(
			"getSignalGainCorrections",
			"()Landroid/location/GnssAntennaInfo$SphericalCorrections;"
		);
	}
	inline JString GnssAntennaInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void GnssAntennaInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

