#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::location
{
	class GnssStatus : public __JniBaseClass
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
		
		GnssStatus(QAndroidJniObject obj);
		// Constructors
		GnssStatus() = default;
		
		// Methods
		jfloat getAzimuthDegrees(jint arg0);
		jfloat getCarrierFrequencyHz(jint arg0);
		jfloat getCn0DbHz(jint arg0);
		jint getConstellationType(jint arg0);
		jfloat getElevationDegrees(jint arg0);
		jint getSatelliteCount();
		jint getSvid(jint arg0);
		jboolean hasAlmanacData(jint arg0);
		jboolean hasCarrierFrequencyHz(jint arg0);
		jboolean hasEphemerisData(jint arg0);
		jboolean usedInFix(jint arg0);
	};
} // namespace android::location

