#include "../os/Parcel.hpp"
#include "./GnssStatus.hpp"

namespace android::location
{
	// Fields
	jint GnssStatus::CONSTELLATION_BEIDOU()
	{
		return getStaticField<jint>(
			"android.location.GnssStatus",
			"CONSTELLATION_BEIDOU"
		);
	}
	jint GnssStatus::CONSTELLATION_GALILEO()
	{
		return getStaticField<jint>(
			"android.location.GnssStatus",
			"CONSTELLATION_GALILEO"
		);
	}
	jint GnssStatus::CONSTELLATION_GLONASS()
	{
		return getStaticField<jint>(
			"android.location.GnssStatus",
			"CONSTELLATION_GLONASS"
		);
	}
	jint GnssStatus::CONSTELLATION_GPS()
	{
		return getStaticField<jint>(
			"android.location.GnssStatus",
			"CONSTELLATION_GPS"
		);
	}
	jint GnssStatus::CONSTELLATION_IRNSS()
	{
		return getStaticField<jint>(
			"android.location.GnssStatus",
			"CONSTELLATION_IRNSS"
		);
	}
	jint GnssStatus::CONSTELLATION_QZSS()
	{
		return getStaticField<jint>(
			"android.location.GnssStatus",
			"CONSTELLATION_QZSS"
		);
	}
	jint GnssStatus::CONSTELLATION_SBAS()
	{
		return getStaticField<jint>(
			"android.location.GnssStatus",
			"CONSTELLATION_SBAS"
		);
	}
	jint GnssStatus::CONSTELLATION_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.location.GnssStatus",
			"CONSTELLATION_UNKNOWN"
		);
	}
	__JniBaseClass GnssStatus::CREATOR()
	{
		return getStaticObjectField(
			"android.location.GnssStatus",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	GnssStatus::GnssStatus(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint GnssStatus::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean GnssStatus::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jfloat GnssStatus::getAzimuthDegrees(jint arg0)
	{
		return callMethod<jfloat>(
			"getAzimuthDegrees",
			"(I)F",
			arg0
		);
	}
	jfloat GnssStatus::getBasebandCn0DbHz(jint arg0)
	{
		return callMethod<jfloat>(
			"getBasebandCn0DbHz",
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
	jboolean GnssStatus::hasBasebandCn0DbHz(jint arg0)
	{
		return callMethod<jboolean>(
			"hasBasebandCn0DbHz",
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
	jint GnssStatus::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
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
	void GnssStatus::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::location

