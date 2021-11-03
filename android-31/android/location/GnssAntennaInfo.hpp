#pragma once

#include "../../JObject.hpp"

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
class JObject;
class JString;

namespace android::location
{
	class GnssAntennaInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit GnssAntennaInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GnssAntennaInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		jdouble getCarrierFrequencyMHz();
		android::location::GnssAntennaInfo_PhaseCenterOffset getPhaseCenterOffset();
		android::location::GnssAntennaInfo_SphericalCorrections getPhaseCenterVariationCorrections();
		android::location::GnssAntennaInfo_SphericalCorrections getSignalGainCorrections();
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::location

