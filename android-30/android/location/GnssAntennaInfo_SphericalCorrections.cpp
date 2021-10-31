#include "../os/Parcel.hpp"
#include "./GnssAntennaInfo_SphericalCorrections.hpp"

namespace android::location
{
	// Fields
	__JniBaseClass GnssAntennaInfo_SphericalCorrections::CREATOR()
	{
		return getStaticObjectField(
			"android.location.GnssAntennaInfo$SphericalCorrections",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	GnssAntennaInfo_SphericalCorrections::GnssAntennaInfo_SphericalCorrections(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	GnssAntennaInfo_SphericalCorrections::GnssAntennaInfo_SphericalCorrections(jarray arg0, jarray arg1)
		: __JniBaseClass(
			"android.location.GnssAntennaInfo$SphericalCorrections",
			"([[D[[D)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jint GnssAntennaInfo_SphericalCorrections::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jarray GnssAntennaInfo_SphericalCorrections::getCorrectionUncertaintiesArray()
	{
		return callObjectMethod(
			"getCorrectionUncertaintiesArray",
			"()[[D"
		).object<jarray>();
	}
	jarray GnssAntennaInfo_SphericalCorrections::getCorrectionsArray()
	{
		return callObjectMethod(
			"getCorrectionsArray",
			"()[[D"
		).object<jarray>();
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
	jstring GnssAntennaInfo_SphericalCorrections::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

