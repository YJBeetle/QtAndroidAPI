#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::location
{
	class GnssAntennaInfo_PhaseCenterOffset;
}
namespace android::location
{
	class GnssAntennaInfo_SphericalCorrections;
}
namespace android::os
{
	class Parcel;
}

namespace android::location
{
	class GnssAntennaInfo : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GnssAntennaInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		GnssAntennaInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jdouble getCarrierFrequencyMHz();
		android::location::GnssAntennaInfo_PhaseCenterOffset getPhaseCenterOffset();
		android::location::GnssAntennaInfo_SphericalCorrections getPhaseCenterVariationCorrections();
		android::location::GnssAntennaInfo_SphericalCorrections getSignalGainCorrections();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::location

