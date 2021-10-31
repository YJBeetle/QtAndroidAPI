#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::location
{
	class GnssAntennaInfo;
}
namespace android::location
{
	class GnssAntennaInfo_PhaseCenterOffset;
}
namespace android::location
{
	class GnssAntennaInfo_SphericalCorrections;
}

namespace android::location
{
	class GnssAntennaInfo_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GnssAntennaInfo_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		GnssAntennaInfo_Builder(QAndroidJniObject obj);
		
		// Constructors
		GnssAntennaInfo_Builder();
		GnssAntennaInfo_Builder(android::location::GnssAntennaInfo arg0);
		GnssAntennaInfo_Builder(jdouble arg0, android::location::GnssAntennaInfo_PhaseCenterOffset arg1);
		
		// Methods
		android::location::GnssAntennaInfo build();
		android::location::GnssAntennaInfo_Builder setCarrierFrequencyMHz(jdouble arg0);
		android::location::GnssAntennaInfo_Builder setPhaseCenterOffset(android::location::GnssAntennaInfo_PhaseCenterOffset arg0);
		android::location::GnssAntennaInfo_Builder setPhaseCenterVariationCorrections(android::location::GnssAntennaInfo_SphericalCorrections arg0);
		android::location::GnssAntennaInfo_Builder setSignalGainCorrections(android::location::GnssAntennaInfo_SphericalCorrections arg0);
	};
} // namespace android::location

