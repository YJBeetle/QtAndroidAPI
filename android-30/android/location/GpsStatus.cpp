#include "./GnssStatus.hpp"
#include "./GpsStatus.hpp"

namespace android::location
{
	// Fields
	jint GpsStatus::GPS_EVENT_FIRST_FIX()
	{
		return getStaticField<jint>(
			"android.location.GpsStatus",
			"GPS_EVENT_FIRST_FIX"
		);
	}
	jint GpsStatus::GPS_EVENT_SATELLITE_STATUS()
	{
		return getStaticField<jint>(
			"android.location.GpsStatus",
			"GPS_EVENT_SATELLITE_STATUS"
		);
	}
	jint GpsStatus::GPS_EVENT_STARTED()
	{
		return getStaticField<jint>(
			"android.location.GpsStatus",
			"GPS_EVENT_STARTED"
		);
	}
	jint GpsStatus::GPS_EVENT_STOPPED()
	{
		return getStaticField<jint>(
			"android.location.GpsStatus",
			"GPS_EVENT_STOPPED"
		);
	}
	
	// Constructors
	
	// Methods
	android::location::GpsStatus GpsStatus::create(android::location::GnssStatus arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.location.GpsStatus",
			"create",
			"(Landroid/location/GnssStatus;I)Landroid/location/GpsStatus;",
			arg0.object(),
			arg1
		);
	}
	jint GpsStatus::getMaxSatellites() const
	{
		return callMethod<jint>(
			"getMaxSatellites",
			"()I"
		);
	}
	JObject GpsStatus::getSatellites() const
	{
		return callObjectMethod(
			"getSatellites",
			"()Ljava/lang/Iterable;"
		);
	}
	jint GpsStatus::getTimeToFirstFix() const
	{
		return callMethod<jint>(
			"getTimeToFirstFix",
			"()I"
		);
	}
} // namespace android::location

