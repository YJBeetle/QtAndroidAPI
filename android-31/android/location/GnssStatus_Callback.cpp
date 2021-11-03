#include "./GnssStatus.hpp"
#include "./GnssStatus_Callback.hpp"

namespace android::location
{
	// Fields
	
	// QAndroidJniObject forward
	GnssStatus_Callback::GnssStatus_Callback(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	GnssStatus_Callback::GnssStatus_Callback()
		: JObject(
			"android.location.GnssStatus$Callback",
			"()V"
		) {}
	
	// Methods
	void GnssStatus_Callback::onFirstFix(jint arg0)
	{
		callMethod<void>(
			"onFirstFix",
			"(I)V",
			arg0
		);
	}
	void GnssStatus_Callback::onSatelliteStatusChanged(android::location::GnssStatus arg0)
	{
		callMethod<void>(
			"onSatelliteStatusChanged",
			"(Landroid/location/GnssStatus;)V",
			arg0.object()
		);
	}
	void GnssStatus_Callback::onStarted()
	{
		callMethod<void>(
			"onStarted",
			"()V"
		);
	}
	void GnssStatus_Callback::onStopped()
	{
		callMethod<void>(
			"onStopped",
			"()V"
		);
	}
} // namespace android::location

