#include "../../JArray.hpp"
#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "./GnssAntennaInfo_SphericalCorrections.hpp"

namespace android::location
{
	// Fields
	JObject GnssAntennaInfo_SphericalCorrections::CREATOR()
	{
		return getStaticObjectField(
			"android.location.GnssAntennaInfo$SphericalCorrections",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	GnssAntennaInfo_SphericalCorrections::GnssAntennaInfo_SphericalCorrections(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	GnssAntennaInfo_SphericalCorrections::GnssAntennaInfo_SphericalCorrections(JArray arg0, JArray arg1)
		: JObject(
			"android.location.GnssAntennaInfo$SphericalCorrections",
			"([[D[[D)V",
			arg0.object<jarray>(),
			arg1.object<jarray>()
		) {}
	
	// Methods
	jint GnssAntennaInfo_SphericalCorrections::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JArray GnssAntennaInfo_SphericalCorrections::getCorrectionUncertaintiesArray()
	{
		return callObjectMethod(
			"getCorrectionUncertaintiesArray",
			"()[[D"
		);
	}
	JArray GnssAntennaInfo_SphericalCorrections::getCorrectionsArray()
	{
		return callObjectMethod(
			"getCorrectionsArray",
			"()[[D"
		);
	}
	jdouble GnssAntennaInfo_SphericalCorrections::getDeltaPhi()
	{
		return callMethod<jdouble>(
			"getDeltaPhi",
			"()D"
		);
	}
	jdouble GnssAntennaInfo_SphericalCorrections::getDeltaTheta()
	{
		return callMethod<jdouble>(
			"getDeltaTheta",
			"()D"
		);
	}
	JString GnssAntennaInfo_SphericalCorrections::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void GnssAntennaInfo_SphericalCorrections::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::location

