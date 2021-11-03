#include "./GnssAntennaInfo.hpp"
#include "./GnssAntennaInfo_PhaseCenterOffset.hpp"
#include "./GnssAntennaInfo_SphericalCorrections.hpp"
#include "./GnssAntennaInfo_Builder.hpp"

namespace android::location
{
	// Fields
	
	// QAndroidJniObject forward
	GnssAntennaInfo_Builder::GnssAntennaInfo_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	GnssAntennaInfo_Builder::GnssAntennaInfo_Builder()
		: JObject(
			"android.location.GnssAntennaInfo$Builder",
			"()V"
		) {}
	GnssAntennaInfo_Builder::GnssAntennaInfo_Builder(android::location::GnssAntennaInfo arg0)
		: JObject(
			"android.location.GnssAntennaInfo$Builder",
			"(Landroid/location/GnssAntennaInfo;)V",
			arg0.object()
		) {}
	GnssAntennaInfo_Builder::GnssAntennaInfo_Builder(jdouble arg0, android::location::GnssAntennaInfo_PhaseCenterOffset arg1)
		: JObject(
			"android.location.GnssAntennaInfo$Builder",
			"(DLandroid/location/GnssAntennaInfo$PhaseCenterOffset;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	android::location::GnssAntennaInfo GnssAntennaInfo_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/location/GnssAntennaInfo;"
		);
	}
	android::location::GnssAntennaInfo_Builder GnssAntennaInfo_Builder::setCarrierFrequencyMHz(jdouble arg0) const
	{
		return callObjectMethod(
			"setCarrierFrequencyMHz",
			"(D)Landroid/location/GnssAntennaInfo$Builder;",
			arg0
		);
	}
	android::location::GnssAntennaInfo_Builder GnssAntennaInfo_Builder::setPhaseCenterOffset(android::location::GnssAntennaInfo_PhaseCenterOffset arg0) const
	{
		return callObjectMethod(
			"setPhaseCenterOffset",
			"(Landroid/location/GnssAntennaInfo$PhaseCenterOffset;)Landroid/location/GnssAntennaInfo$Builder;",
			arg0.object()
		);
	}
	android::location::GnssAntennaInfo_Builder GnssAntennaInfo_Builder::setPhaseCenterVariationCorrections(android::location::GnssAntennaInfo_SphericalCorrections arg0) const
	{
		return callObjectMethod(
			"setPhaseCenterVariationCorrections",
			"(Landroid/location/GnssAntennaInfo$SphericalCorrections;)Landroid/location/GnssAntennaInfo$Builder;",
			arg0.object()
		);
	}
	android::location::GnssAntennaInfo_Builder GnssAntennaInfo_Builder::setSignalGainCorrections(android::location::GnssAntennaInfo_SphericalCorrections arg0) const
	{
		return callObjectMethod(
			"setSignalGainCorrections",
			"(Landroid/location/GnssAntennaInfo$SphericalCorrections;)Landroid/location/GnssAntennaInfo$Builder;",
			arg0.object()
		);
	}
} // namespace android::location

