#pragma once

#include "../../JObject.hpp"

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
	class GnssAntennaInfo_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GnssAntennaInfo_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GnssAntennaInfo_Builder(QAndroidJniObject obj);
		
		// Constructors
		GnssAntennaInfo_Builder();
		GnssAntennaInfo_Builder(android::location::GnssAntennaInfo arg0);
		GnssAntennaInfo_Builder(jdouble arg0, android::location::GnssAntennaInfo_PhaseCenterOffset arg1);
		
		// Methods
		android::location::GnssAntennaInfo build() const;
		android::location::GnssAntennaInfo_Builder setCarrierFrequencyMHz(jdouble arg0) const;
		android::location::GnssAntennaInfo_Builder setPhaseCenterOffset(android::location::GnssAntennaInfo_PhaseCenterOffset arg0) const;
		android::location::GnssAntennaInfo_Builder setPhaseCenterVariationCorrections(android::location::GnssAntennaInfo_SphericalCorrections arg0) const;
		android::location::GnssAntennaInfo_Builder setSignalGainCorrections(android::location::GnssAntennaInfo_SphericalCorrections arg0) const;
	};
} // namespace android::location

