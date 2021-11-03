#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;

namespace android::location
{
	class GnssStatus : public JObject
	{
	public:
		// Fields
		static jint CONSTELLATION_BEIDOU();
		static jint CONSTELLATION_GALILEO();
		static jint CONSTELLATION_GLONASS();
		static jint CONSTELLATION_GPS();
		static jint CONSTELLATION_IRNSS();
		static jint CONSTELLATION_QZSS();
		static jint CONSTELLATION_SBAS();
		static jint CONSTELLATION_UNKNOWN();
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GnssStatus(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GnssStatus(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		jfloat getAzimuthDegrees(jint arg0);
		jfloat getBasebandCn0DbHz(jint arg0);
		jfloat getCarrierFrequencyHz(jint arg0);
		jfloat getCn0DbHz(jint arg0);
		jint getConstellationType(jint arg0);
		jfloat getElevationDegrees(jint arg0);
		jint getSatelliteCount();
		jint getSvid(jint arg0);
		jboolean hasAlmanacData(jint arg0);
		jboolean hasBasebandCn0DbHz(jint arg0);
		jboolean hasCarrierFrequencyHz(jint arg0);
		jboolean hasEphemerisData(jint arg0);
		jint hashCode();
		jboolean usedInFix(jint arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::location

