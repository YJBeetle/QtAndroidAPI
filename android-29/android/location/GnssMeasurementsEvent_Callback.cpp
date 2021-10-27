#include "./GnssMeasurementsEvent.hpp"
#include "./GnssMeasurementsEvent_Callback.hpp"

namespace android::location
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
	
	GnssMeasurementsEvent_Callback::GnssMeasurementsEvent_Callback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	GnssMeasurementsEvent_Callback::GnssMeasurementsEvent_Callback()
	{
		__thiz = QAndroidJniObject(
			"android.location.GnssMeasurementsEvent$Callback",
			"()V"
		);
	}
	
	// Methods
	void GnssMeasurementsEvent_Callback::onGnssMeasurementsReceived(android::location::GnssMeasurementsEvent arg0)
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
} // namespace android::location

