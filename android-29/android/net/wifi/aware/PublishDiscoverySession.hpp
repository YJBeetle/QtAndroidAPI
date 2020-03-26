#pragma once

#ifndef ANDROID_NET_WIFI_AWARE_PUBLISHDISCOVERYSESSION
#define ANDROID_NET_WIFI_AWARE_PUBLISHDISCOVERYSESSION

#include "../../../../__JniBaseClass.hpp"
#include "DiscoverySession.hpp"

namespace __jni_impl::android::net::wifi::aware
{
	class WifiAwareManager;
}
namespace __jni_impl::android::net::wifi::aware
{
	class PublishConfig;
}

namespace __jni_impl::android::net::wifi::aware
{
	class PublishDiscoverySession : public __jni_impl::android::net::wifi::aware::DiscoverySession
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void updatePublish(__jni_impl::android::net::wifi::aware::PublishConfig arg0);
	};
} // namespace __jni_impl::android::net::wifi::aware

#include "WifiAwareManager.hpp"
#include "PublishConfig.hpp"

namespace __jni_impl::android::net::wifi::aware
{
	// Fields
	
	// Constructors
	void PublishDiscoverySession::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.aware.PublishDiscoverySession",
			"(V)V");
	}
	
	// Methods
	void PublishDiscoverySession::updatePublish(__jni_impl::android::net::wifi::aware::PublishConfig arg0)
	{
		__thiz.callMethod<void>(
			"updatePublish",
			"(Landroid/net/wifi/aware/PublishConfig;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::net::wifi::aware

namespace android::net::wifi::aware
{
	class PublishDiscoverySession : public __jni_impl::android::net::wifi::aware::PublishDiscoverySession
	{
	public:
		PublishDiscoverySession(QAndroidJniObject obj) { __thiz = obj; }
		PublishDiscoverySession()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi::aware

#endif // ANDROID_NET_WIFI_AWARE_PUBLISHDISCOVERYSESSION

