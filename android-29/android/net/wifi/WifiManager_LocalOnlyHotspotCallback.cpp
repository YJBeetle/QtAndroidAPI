#include "./WifiManager_LocalOnlyHotspotReservation.hpp"
#include "./WifiManager_LocalOnlyHotspotCallback.hpp"

namespace android::net::wifi
{
	// Fields
	jint WifiManager_LocalOnlyHotspotCallback::ERROR_GENERIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiManager$LocalOnlyHotspotCallback",
			"ERROR_GENERIC"
		);
	}
	jint WifiManager_LocalOnlyHotspotCallback::ERROR_INCOMPATIBLE_MODE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiManager$LocalOnlyHotspotCallback",
			"ERROR_INCOMPATIBLE_MODE"
		);
	}
	jint WifiManager_LocalOnlyHotspotCallback::ERROR_NO_CHANNEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiManager$LocalOnlyHotspotCallback",
			"ERROR_NO_CHANNEL"
		);
	}
	jint WifiManager_LocalOnlyHotspotCallback::ERROR_TETHERING_DISALLOWED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiManager$LocalOnlyHotspotCallback",
			"ERROR_TETHERING_DISALLOWED"
		);
	}
	
	WifiManager_LocalOnlyHotspotCallback::WifiManager_LocalOnlyHotspotCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	WifiManager_LocalOnlyHotspotCallback::WifiManager_LocalOnlyHotspotCallback()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.WifiManager$LocalOnlyHotspotCallback",
			"()V"
		);
	}
	
	// Methods
	void WifiManager_LocalOnlyHotspotCallback::onFailed(jint arg0)
	{
		__thiz.callMethod<void>(
			"onFailed",
			"(I)V",
			arg0
		);
	}
	void WifiManager_LocalOnlyHotspotCallback::onStarted(android::net::wifi::WifiManager_LocalOnlyHotspotReservation arg0)
	{
		__thiz.callMethod<void>(
			"onStarted",
			"(Landroid/net/wifi/WifiManager$LocalOnlyHotspotReservation;)V",
			arg0.__jniObject().object()
		);
	}
	void WifiManager_LocalOnlyHotspotCallback::onStopped()
	{
		__thiz.callMethod<void>(
			"onStopped",
			"()V"
		);
	}
} // namespace android::net::wifi

