#pragma once

#ifndef ANDROID_LOCATION_GNSSMEASUREMENTSEVENT_CALLBACK
#define ANDROID_LOCATION_GNSSMEASUREMENTSEVENT_CALLBACK

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::location
{
	class GnssMeasurementsEvent;
}

namespace __jni_impl::android::location
{
	class GnssMeasurementsEvent_Callback : public __JniBaseClass
	{
	public:
		// Fields
		static jint STATUS_LOCATION_DISABLED();
		static jint STATUS_NOT_ALLOWED();
		static jint STATUS_NOT_SUPPORTED();
		static jint STATUS_READY();
		
		// Constructors
		void __constructor();
		
		// Methods
		void onGnssMeasurementsReceived(__jni_impl::android::location::GnssMeasurementsEvent arg0);
		void onStatusChanged(jint arg0);
	};
} // namespace __jni_impl::android::location

#include "GnssMeasurementsEvent.hpp"

namespace __jni_impl::android::location
{
	// Fields
	jint GnssMeasurementsEvent_Callback::STATUS_LOCATION_DISABLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssMeasurementsEvent$Callback",
			"STATUS_LOCATION_DISABLED"
		);
	}
	jint GnssMeasurementsEvent_Callback::STATUS_NOT_ALLOWED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssMeasurementsEvent$Callback",
			"STATUS_NOT_ALLOWED"
		);
	}
	jint GnssMeasurementsEvent_Callback::STATUS_NOT_SUPPORTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssMeasurementsEvent$Callback",
			"STATUS_NOT_SUPPORTED"
		);
	}
	jint GnssMeasurementsEvent_Callback::STATUS_READY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssMeasurementsEvent$Callback",
			"STATUS_READY"
		);
	}
	
	// Constructors
	void GnssMeasurementsEvent_Callback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.location.GnssMeasurementsEvent$Callback",
			"()V"
		);
	}
	
	// Methods
	void GnssMeasurementsEvent_Callback::onGnssMeasurementsReceived(__jni_impl::android::location::GnssMeasurementsEvent arg0)
	{
		__thiz.callMethod<void>(
			"onGnssMeasurementsReceived",
			"(Landroid/location/GnssMeasurementsEvent;)V",
			arg0.__jniObject().object()
		);
	}
	void GnssMeasurementsEvent_Callback::onStatusChanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"onStatusChanged",
			"(I)V",
			arg0
		);
	}
} // namespace __jni_impl::android::location

namespace android::location
{
	class GnssMeasurementsEvent_Callback : public __jni_impl::android::location::GnssMeasurementsEvent_Callback
	{
	public:
		GnssMeasurementsEvent_Callback(QAndroidJniObject obj) { __thiz = obj; }
		GnssMeasurementsEvent_Callback()
		{
			__constructor();
		}
	};
} // namespace android::location

#endif // ANDROID_LOCATION_GNSSMEASUREMENTSEVENT_CALLBACK

