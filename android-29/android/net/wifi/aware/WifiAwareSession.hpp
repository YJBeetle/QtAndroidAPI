#pragma once

#ifndef ANDROID_NET_WIFI_AWARE_WIFIAWARESESSION
#define ANDROID_NET_WIFI_AWARE_WIFIAWARESESSION

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::android::net::wifi::aware
{
	class WifiAwareManager;
}
namespace __jni_impl::android::os
{
	class Binder;
}
namespace __jni_impl::android::net::wifi::aware
{
	class PublishConfig;
}
namespace __jni_impl::android::net::wifi::aware
{
	class DiscoverySessionCallback;
}
namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::net
{
	class NetworkSpecifier;
}
namespace __jni_impl::android::net::wifi::aware
{
	class SubscribeConfig;
}

namespace __jni_impl::android::net::wifi::aware
{
	class WifiAwareSession : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void close();
		void publish(__jni_impl::android::net::wifi::aware::PublishConfig arg0, __jni_impl::android::net::wifi::aware::DiscoverySessionCallback arg1, __jni_impl::android::os::Handler arg2);
		QAndroidJniObject createNetworkSpecifierOpen(jint arg0, jbyteArray arg1);
		QAndroidJniObject createNetworkSpecifierPassphrase(jint arg0, jbyteArray arg1, jstring arg2);
		void subscribe(__jni_impl::android::net::wifi::aware::SubscribeConfig arg0, __jni_impl::android::net::wifi::aware::DiscoverySessionCallback arg1, __jni_impl::android::os::Handler arg2);
	};
} // namespace __jni_impl::android::net::wifi::aware

#include "WifiAwareManager.hpp"
#include "../../../os/Binder.hpp"
#include "PublishConfig.hpp"
#include "DiscoverySessionCallback.hpp"
#include "../../../os/Handler.hpp"
#include "../../NetworkSpecifier.hpp"
#include "SubscribeConfig.hpp"

namespace __jni_impl::android::net::wifi::aware
{
	// Fields
	
	// Constructors
	void WifiAwareSession::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.aware.WifiAwareSession",
			"(V)V");
	}
	
	// Methods
	void WifiAwareSession::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void WifiAwareSession::publish(__jni_impl::android::net::wifi::aware::PublishConfig arg0, __jni_impl::android::net::wifi::aware::DiscoverySessionCallback arg1, __jni_impl::android::os::Handler arg2)
	{
		__thiz.callMethod<void>(
			"publish",
			"(Landroid/net/wifi/aware/PublishConfig;Landroid/net/wifi/aware/DiscoverySessionCallback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject WifiAwareSession::createNetworkSpecifierOpen(jint arg0, jbyteArray arg1)
	{
		return __thiz.callObjectMethod(
			"createNetworkSpecifierOpen",
			"(I[B)Landroid/net/NetworkSpecifier;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject WifiAwareSession::createNetworkSpecifierPassphrase(jint arg0, jbyteArray arg1, jstring arg2)
	{
		return __thiz.callObjectMethod(
			"createNetworkSpecifierPassphrase",
			"(I[BLjava/lang/String;)Landroid/net/NetworkSpecifier;",
			arg0,
			arg1,
			arg2
		);
	}
	void WifiAwareSession::subscribe(__jni_impl::android::net::wifi::aware::SubscribeConfig arg0, __jni_impl::android::net::wifi::aware::DiscoverySessionCallback arg1, __jni_impl::android::os::Handler arg2)
	{
		__thiz.callMethod<void>(
			"subscribe",
			"(Landroid/net/wifi/aware/SubscribeConfig;Landroid/net/wifi/aware/DiscoverySessionCallback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::net::wifi::aware

namespace android::net::wifi::aware
{
	class WifiAwareSession : public __jni_impl::android::net::wifi::aware::WifiAwareSession
	{
	public:
		WifiAwareSession(QAndroidJniObject obj) { __thiz = obj; }
		WifiAwareSession()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi::aware

#endif // ANDROID_NET_WIFI_AWARE_WIFIAWARESESSION

