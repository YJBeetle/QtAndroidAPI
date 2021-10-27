#include "./GnssNavigationMessage.hpp"
#include "./GnssNavigationMessage_Callback.hpp"

namespace android::location
{
	// Fields
	jint GnssNavigationMessage_Callback::STATUS_LOCATION_DISABLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssNavigationMessage$Callback",
			"STATUS_LOCATION_DISABLED"
		);
	}
	jint GnssNavigationMessage_Callback::STATUS_NOT_SUPPORTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssNavigationMessage$Callback",
			"STATUS_NOT_SUPPORTED"
		);
	}
	jint GnssNavigationMessage_Callback::STATUS_READY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssNavigationMessage$Callback",
			"STATUS_READY"
		);
	}
	
	GnssNavigationMessage_Callback::GnssNavigationMessage_Callback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	GnssNavigationMessage_Callback::GnssNavigationMessage_Callback()
	{
		__thiz = QAndroidJniObject(
			"android.location.GnssNavigationMessage$Callback",
			"()V"
		);
	}
	
	// Methods
	void GnssNavigationMessage_Callback::onGnssNavigationMessageReceived(android::location::GnssNavigationMessage arg0)
	{
		__thiz.callMethod<void>(
			"onGnssNavigationMessageReceived",
			"(Landroid/location/GnssNavigationMessage;)V",
			arg0.__jniObject().object()
		);
	}
	void GnssNavigationMessage_Callback::onStatusChanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"onStatusChanged",
			"(I)V",
			arg0
		);
	}
} // namespace android::location

