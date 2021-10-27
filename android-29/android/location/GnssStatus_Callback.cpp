#include "./GnssStatus.hpp"
#include "./GnssStatus_Callback.hpp"

namespace android::location
{
	// Fields
	
	GnssStatus_Callback::GnssStatus_Callback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	GnssStatus_Callback::GnssStatus_Callback()
	{
		__thiz = QAndroidJniObject(
			"android.location.GnssStatus$Callback",
			"()V"
		);
	}
	
	// Methods
	void GnssStatus_Callback::onFirstFix(jint arg0)
	{
		__thiz.callMethod<void>(
			"onFirstFix",
			"(I)V",
			arg0
		);
	}
	void GnssStatus_Callback::onSatelliteStatusChanged(android::location::GnssStatus arg0)
	{
		__thiz.callMethod<void>(
			"onSatelliteStatusChanged",
			"(Landroid/location/GnssStatus;)V",
			arg0.__jniObject().object()
		);
	}
	void GnssStatus_Callback::onStarted()
	{
		__thiz.callMethod<void>(
			"onStarted",
			"()V"
		);
	}
	void GnssStatus_Callback::onStopped()
	{
		__thiz.callMethod<void>(
			"onStopped",
			"()V"
		);
	}
} // namespace android::location

