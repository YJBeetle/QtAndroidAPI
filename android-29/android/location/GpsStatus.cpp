#include "./GpsStatus.hpp"

namespace android::location
{
	// Fields
	jint GpsStatus::GPS_EVENT_FIRST_FIX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GpsStatus",
			"GPS_EVENT_FIRST_FIX"
		);
	}
	jint GpsStatus::GPS_EVENT_SATELLITE_STATUS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GpsStatus",
			"GPS_EVENT_SATELLITE_STATUS"
		);
	}
	jint GpsStatus::GPS_EVENT_STARTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GpsStatus",
			"GPS_EVENT_STARTED"
		);
	}
	jint GpsStatus::GPS_EVENT_STOPPED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GpsStatus",
			"GPS_EVENT_STOPPED"
		);
	}
	
	// QAndroidJniObject forward
	GpsStatus::GpsStatus(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint GpsStatus::getMaxSatellites()
	{
		return callMethod<jint>(
			"getMaxSatellites",
			"()I"
		);
	}
	QAndroidJniObject GpsStatus::getSatellites()
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

