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
	
	GpsStatus::GpsStatus(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint GpsStatus::getMaxSatellites()
	{
		return __thiz.callMethod<jint>(
			"getMaxSatellites",
			"()I"
		);
	}
	QAndroidJniObject GpsStatus::getSatellites()
	{
		return __thiz.callObjectMethod(
			"getSatellites",
			"()Ljava/lang/Iterable;"
		);
	}
	jint GpsStatus::getTimeToFirstFix()
	{
		return __thiz.callMethod<jint>(
			"getTimeToFirstFix",
			"()I"
		);
	}
} // namespace android::location

