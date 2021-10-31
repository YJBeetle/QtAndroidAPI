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
	
	// QAndroidJniObject forward
	GpsStatus::GpsStatus(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
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
	jint GpsStatus::getMaxSatellites()
	{
		return callMethod<jint>(
			"getMaxSatellites",
			"()I"
		);
	}
	__JniBaseClass GpsStatus::getSatellites()
	{
		return callObjectMethod(
			"getSatellites",
			"()Ljava/lang/Iterable;"
		);
	}
	jint GpsStatus::getTimeToFirstFix()
	{
		return callMethod<jint>(
			"getTimeToFirstFix",
			"()I"
		);
	}
} // namespace android::location
