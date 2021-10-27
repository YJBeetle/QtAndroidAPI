#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::location
{
	class GpsStatus : public __JniBaseClass
	{
	public:
		// Fields
		static jint GPS_EVENT_FIRST_FIX();
		static jint GPS_EVENT_SATELLITE_STATUS();
		static jint GPS_EVENT_STARTED();
		static jint GPS_EVENT_STOPPED();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint getMaxSatellites();
		QAndroidJniObject getSatellites();
		jint getTimeToFirstFix();
	};
} // namespace __jni_impl::android::location


namespace __jni_impl::android::location
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
	
	// Constructors
	void GpsStatus::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.location.GpsStatus",
			"(V)V");
	}
	
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
} // namespace __jni_impl::android::location

namespace android::location
{
	class GpsStatus : public __jni_impl::android::location::GpsStatus
	{
	public:
		GpsStatus(QAndroidJniObject obj) { __thiz = obj; }
		GpsStatus()
		{
			__constructor();
		}
	};
} // namespace android::location

