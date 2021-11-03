#include "./GnssMeasurementsEvent.hpp"
#include "./GnssMeasurementsEvent_Callback.hpp"

namespace android::location
{
	// Fields
	jint GnssMeasurementsEvent_Callback::STATUS_LOCATION_DISABLED()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurementsEvent$Callback",
			"STATUS_LOCATION_DISABLED"
		);
	}
	jint GnssMeasurementsEvent_Callback::STATUS_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurementsEvent$Callback",
			"STATUS_NOT_ALLOWED"
		);
	}
	jint GnssMeasurementsEvent_Callback::STATUS_NOT_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurementsEvent$Callback",
			"STATUS_NOT_SUPPORTED"
		);
	}
	jint GnssMeasurementsEvent_Callback::STATUS_READY()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurementsEvent$Callback",
			"STATUS_READY"
		);
	}
	
	// QAndroidJniObject forward
	GnssMeasurementsEvent_Callback::GnssMeasurementsEvent_Callback(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	GnssMeasurementsEvent_Callback::GnssMeasurementsEvent_Callback()
		: JObject(
			"android.location.GnssMeasurementsEvent$Callback",
			"()V"
		) {}
	
	// Methods
	void GnssMeasurementsEvent_Callback::onGnssMeasurementsReceived(android::location::GnssMeasurementsEvent arg0) const
	{
		callMethod<void>(
			"onGnssMeasurementsReceived",
			"(Landroid/location/GnssMeasurementsEvent;)V",
			arg0.object()
		);
	}
	void GnssMeasurementsEvent_Callback::onStatusChanged(jint arg0) const
	{
		callMethod<void>(
			"onStatusChanged",
			"(I)V",
			arg0
		);
	}
} // namespace android::location

