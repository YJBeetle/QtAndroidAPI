#include "./GnssStatus.hpp"

namespace android::location
{
	// Fields
	jint GnssStatus::CONSTELLATION_BEIDOU()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssStatus",
			"CONSTELLATION_BEIDOU"
		);
	}
	jint GnssStatus::CONSTELLATION_GALILEO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssStatus",
			"CONSTELLATION_GALILEO"
		);
	}
	jint GnssStatus::CONSTELLATION_GLONASS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssStatus",
			"CONSTELLATION_GLONASS"
		);
	}
	jint GnssStatus::CONSTELLATION_GPS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssStatus",
			"CONSTELLATION_GPS"
		);
	}
	jint GnssStatus::CONSTELLATION_IRNSS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssStatus",
			"CONSTELLATION_IRNSS"
		);
	}
	jint GnssStatus::CONSTELLATION_QZSS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssStatus",
			"CONSTELLATION_QZSS"
		);
	}
	jint GnssStatus::CONSTELLATION_SBAS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssStatus",
			"CONSTELLATION_SBAS"
		);
	}
	jint GnssStatus::CONSTELLATION_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssStatus",
			"CONSTELLATION_UNKNOWN"
		);
	}
	
	// QAndroidJniObject forward
	GnssStatus::GnssStatus(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jfloat GnssStatus::getAzimuthDegrees(jint arg0)
	{
		return callMethod<jfloat>(
			"getAzimuthDegrees",
			"(I)F",
			arg0
		);
	}
	jfloat GnssStatus::getCarrierFrequencyHz(jint arg0)
	{
		return callMethod<jfloat>(
			"getCarrierFrequencyHz",
			"(I)F",
			arg0
		);
	}
	jfloat GnssStatus::getCn0DbHz(jint arg0)
	{
		return callMethod<jfloat>(
			"getCn0DbHz",
			"(I)F",
			arg0
		);
	}
	jint GnssStatus::getConstellationType(jint arg0)
	{
		return callMethod<jint>(
			"getConstellationType",
			"(I)I",
			arg0
		);
	}
	jfloat GnssStatus::getElevationDegrees(jint arg0)
	{
		return callMethod<jfloat>(
			"getElevationDegrees",
			"(I)F",
			arg0
		);
	}
	jint GnssStatus::getSatelliteCount()
	{
		return callMethod<jint>(
			"getSatelliteCount",
			"()I"
		);
	}
	jint GnssStatus::getSvid(jint arg0)
	{
		return callMethod<jint>(
			"getSvid",
			"(I)I",
			arg0
		);
	}
	jboolean GnssStatus::hasAlmanacData(jint arg0)
	{
		return callMethod<jboolean>(
			"hasAlmanacData",
			"(I)Z",
			arg0
		);
	}
	jboolean GnssStatus::hasCarrierFrequencyHz(jint arg0)
	{
		return callMethod<jboolean>(
			"hasCarrierFrequencyHz",
			"(I)Z",
			arg0
		);
	}
	jboolean GnssStatus::hasEphemerisData(jint arg0)
	{
		return callMethod<jboolean>(
			"hasEphemerisData",
			"(I)Z",
			arg0
		);
	}
	jboolean GnssStatus::usedInFix(jint arg0)
	{
		return callMethod<jboolean>(
			"usedInFix",
			"(I)Z",
			arg0
		);
	}
} // namespace android::location
