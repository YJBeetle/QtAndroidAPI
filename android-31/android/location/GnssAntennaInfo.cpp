#include "./GnssAntennaInfo_PhaseCenterOffset.hpp"
#include "./GnssAntennaInfo_SphericalCorrections.hpp"
#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./GnssAntennaInfo.hpp"

namespace android::location
{
	// Fields
	JObject GnssAntennaInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.location.GnssAntennaInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	GnssAntennaInfo::GnssAntennaInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint GnssAntennaInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean GnssAntennaInfo::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jdouble GnssAntennaInfo::getCarrierFrequencyMHz()
	{
		return callMethod<jdouble>(
			"getCarrierFrequencyMHz",
			"()D"
		);
	}
	android::location::GnssAntennaInfo_PhaseCenterOffset GnssAntennaInfo::getPhaseCenterOffset()
	{
		return callObjectMethod(
			"getPhaseCenterOffset",
			"()Landroid/location/GnssAntennaInfo$PhaseCenterOffset;"
		);
	}
	android::location::GnssAntennaInfo_SphericalCorrections GnssAntennaInfo::getPhaseCenterVariationCorrections()
	{
		return callObjectMethod(
			"getPhaseCenterVariationCorrections",
			"()Landroid/location/GnssAntennaInfo$SphericalCorrections;"
		);
	}
	android::location::GnssAntennaInfo_SphericalCorrections GnssAntennaInfo::getSignalGainCorrections()
	{
		return callObjectMethod(
			"getSignalGainCorrections",
			"()Landroid/location/GnssAntennaInfo$SphericalCorrections;"
		);
	}
	jint GnssAntennaInfo::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString GnssAntennaInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void GnssAntennaInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::location

