#pragma once

#include "../../JArray.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./GnssAntennaInfo_SphericalCorrections.def.hpp"

namespace android::location
{
	// Fields
	inline JObject GnssAntennaInfo_SphericalCorrections::CREATOR()
	{
		return getStaticObjectField(
			"android.location.GnssAntennaInfo$SphericalCorrections",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline GnssAntennaInfo_SphericalCorrections::GnssAntennaInfo_SphericalCorrections(JArray arg0, JArray arg1)
		: JObject(
			"android.location.GnssAntennaInfo$SphericalCorrections",
			"([[D[[D)V",
			arg0.object<jarray>(),
			arg1.object<jarray>()
		) {}
	
	// Methods
	inline jint GnssAntennaInfo_SphericalCorrections::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean GnssAntennaInfo_SphericalCorrections::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JArray GnssAntennaInfo_SphericalCorrections::getCorrectionUncertaintiesArray() const
	{
		return callObjectMethod(
			"getCorrectionUncertaintiesArray",
			"()[[D"
		);
	}
	inline JArray GnssAntennaInfo_SphericalCorrections::getCorrectionsArray() const
	{
		return callObjectMethod(
			"getCorrectionsArray",
			"()[[D"
		);
	}
	inline jdouble GnssAntennaInfo_SphericalCorrections::getDeltaPhi() const
	{
		return callMethod<jdouble>(
			"getDeltaPhi",
			"()D"
		);
	}
	inline jdouble GnssAntennaInfo_SphericalCorrections::getDeltaTheta() const
	{
		return callMethod<jdouble>(
			"getDeltaTheta",
			"()D"
		);
	}
	inline jint GnssAntennaInfo_SphericalCorrections::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString GnssAntennaInfo_SphericalCorrections::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void GnssAntennaInfo_SphericalCorrections::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
