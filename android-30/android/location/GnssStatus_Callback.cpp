#include "./GnssStatus.hpp"
#include "./GnssStatus_Callback.hpp"

namespace android::location
{
	// Fields
	
	// Constructors
	GnssStatus_Callback::GnssStatus_Callback()
		: JObject(
			"android.location.GnssStatus$Callback",
			"()V"
		) {}
	
	// Methods
	void GnssStatus_Callback::onFirstFix(jint arg0) const
	{
		callMethod<void>(
			"onFirstFix",
			"(I)V",
			arg0
		);
	}
	void GnssStatus_Callback::onSatelliteStatusChanged(android::location::GnssStatus arg0) const
	{
		callMethod<void>(
			"onSatelliteStatusChanged",
			"(Landroid/location/GnssStatus;)V",
			arg0.object()
		);
	}
	void GnssStatus_Callback::onStarted() const
	{
		callMethod<void>(
			"onStarted",
			"()V"
		);
	}
	void GnssStatus_Callback::onStopped() const
	{
		callMethod<void>(
			"onStopped",
			"()V"
		);
	}
} // namespace android::location

