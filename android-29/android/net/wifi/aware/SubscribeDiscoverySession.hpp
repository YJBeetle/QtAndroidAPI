#pragma once

#ifndef ANDROID_NET_WIFI_AWARE_SUBSCRIBEDISCOVERYSESSION
#define ANDROID_NET_WIFI_AWARE_SUBSCRIBEDISCOVERYSESSION

#include "DiscoverySession.hpp"

namespace __jni_impl::android::net::wifi::aware
{
	class WifiAwareManager;
}
namespace __jni_impl::android::net::wifi::aware
{
	class SubscribeConfig;
}

namespace __jni_impl::android::net::wifi::aware
{
	class SubscribeDiscoverySession : public __jni_impl::android::net::wifi::aware::DiscoverySession
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void updateSubscribe(__jni_impl::android::net::wifi::aware::SubscribeConfig arg0);
	};
} // namespace __jni_impl::android::net::wifi::aware

#include "WifiAwareManager.hpp"
#include "SubscribeConfig.hpp"

namespace __jni_impl::android::net::wifi::aware
{
	// Fields
	
	// Constructors
	void SubscribeDiscoverySession::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.aware.SubscribeDiscoverySession",
			"(V)V");
	}
	
	// Methods
	void SubscribeDiscoverySession::updateSubscribe(__jni_impl::android::net::wifi::aware::SubscribeConfig arg0)
	{
		__thiz.callMethod<void>(
			"updateSubscribe",
			"(Landroid/net/wifi/aware/SubscribeConfig;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::net::wifi::aware

namespace android::net::wifi::aware
{
	class SubscribeDiscoverySession : public __jni_impl::android::net::wifi::aware::SubscribeDiscoverySession
	{
	public:
		SubscribeDiscoverySession(QAndroidJniObject obj) { __thiz = obj; }
		SubscribeDiscoverySession()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi::aware

#endif // ANDROID_NET_WIFI_AWARE_SUBSCRIBEDISCOVERYSESSION

