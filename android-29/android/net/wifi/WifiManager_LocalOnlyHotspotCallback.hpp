#pragma once

#ifndef ANDROID_NET_WIFI_WIFIMANAGER_LOCALONLYHOTSPOTCALLBACK
#define ANDROID_NET_WIFI_WIFIMANAGER_LOCALONLYHOTSPOTCALLBACK

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::net::wifi
{
	class WifiManager_LocalOnlyHotspotReservation;
}

namespace __jni_impl::android::net::wifi
{
	class WifiManager_LocalOnlyHotspotCallback : public __JniBaseClass
	{
	public:
		// Fields
		static jint ERROR_GENERIC();
		static jint ERROR_INCOMPATIBLE_MODE();
		static jint ERROR_NO_CHANNEL();
		static jint ERROR_TETHERING_DISALLOWED();
		
		// Constructors
		void __constructor();
		
		// Methods
		void onStopped();
		void onStarted(__jni_impl::android::net::wifi::WifiManager_LocalOnlyHotspotReservation arg0);
		void onFailed(jint arg0);
	};
} // namespace __jni_impl::android::net::wifi

#include "WifiManager_LocalOnlyHotspotReservation.hpp"

namespace __jni_impl::android::net::wifi
{
	// Fields
	jint WifiManager_LocalOnlyHotspotCallback::ERROR_GENERIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiManager$LocalOnlyHotspotCallback",
			"ERROR_GENERIC");
	}
	jint WifiManager_LocalOnlyHotspotCallback::ERROR_INCOMPATIBLE_MODE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiManager$LocalOnlyHotspotCallback",
			"ERROR_INCOMPATIBLE_MODE");
	}
	jint WifiManager_LocalOnlyHotspotCallback::ERROR_NO_CHANNEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiManager$LocalOnlyHotspotCallback",
			"ERROR_NO_CHANNEL");
	}
	jint WifiManager_LocalOnlyHotspotCallback::ERROR_TETHERING_DISALLOWED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiManager$LocalOnlyHotspotCallback",
			"ERROR_TETHERING_DISALLOWED");
	}
	
	// Constructors
	void WifiManager_LocalOnlyHotspotCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.WifiManager$LocalOnlyHotspotCallback",
			"()V");
	}
	
	// Methods
	void WifiManager_LocalOnlyHotspotCallback::onStopped()
	{
		__thiz.callMethod<void>(
			"onStopped",
			"()V");
	}
	void WifiManager_LocalOnlyHotspotCallback::onStarted(__jni_impl::android::net::wifi::WifiManager_LocalOnlyHotspotReservation arg0)
	{
		__thiz.callMethod<void>(
			"onStarted",
			"(Landroid/net/wifi/WifiManager$LocalOnlyHotspotReservation;)V",
			arg0.__jniObject().object());
	}
	void WifiManager_LocalOnlyHotspotCallback::onFailed(jint arg0)
	{
		__thiz.callMethod<void>(
			"onFailed",
			"(I)V",
			arg0);
	}
} // namespace __jni_impl::android::net::wifi

namespace android::net::wifi
{
	class WifiManager_LocalOnlyHotspotCallback : public __jni_impl::android::net::wifi::WifiManager_LocalOnlyHotspotCallback
	{
	public:
		WifiManager_LocalOnlyHotspotCallback(QAndroidJniObject obj) { __thiz = obj; }
		WifiManager_LocalOnlyHotspotCallback()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi

#endif // ANDROID_NET_WIFI_WIFIMANAGER_LOCALONLYHOTSPOTCALLBACK

