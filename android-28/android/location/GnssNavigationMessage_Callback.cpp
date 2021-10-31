#include "./GnssNavigationMessage.hpp"
#include "./GnssNavigationMessage_Callback.hpp"

namespace android::location
{
	// Fields
	jint GnssNavigationMessage_Callback::STATUS_LOCATION_DISABLED()
	{
		return getStaticField<jint>(
			"android.location.GnssNavigationMessage$Callback",
			"STATUS_LOCATION_DISABLED"
		);
	}
	jint GnssNavigationMessage_Callback::STATUS_NOT_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.location.GnssNavigationMessage$Callback",
			"STATUS_NOT_SUPPORTED"
		);
	}
	jint GnssNavigationMessage_Callback::STATUS_READY()
	{
		return getStaticField<jint>(
			"android.location.GnssNavigationMessage$Callback",
			"STATUS_READY"
		);
	}
	
	// QAndroidJniObject forward
	GnssNavigationMessage_Callback::GnssNavigationMessage_Callback(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	GnssNavigationMessage_Callback::GnssNavigationMessage_Callback()
		: __JniBaseClass(
			"android.location.GnssNavigationMessage$Callback",
			"()V"
		) {}
	
	// Methods
	void GnssNavigationMessage_Callback::onGnssNavigationMessageReceived(android::location::GnssNavigationMessage arg0)
	{
		callMethod<void>(
			"onGnssNavigationMessageReceived",
			"(Landroid/location/GnssNavigationMessage;)V",
			arg0.object()
		);
	}
	void GnssNavigationMessage_Callback::onStatusChanged(jint arg0)
	{
		callMethod<void>(
			"onStatusChanged",
			"(I)V",
			arg0
		);
	}
} // namespace android::location

