#pragma once

#ifndef ANDROID_NET_WIFI_AWARE_DISCOVERYSESSION
#define ANDROID_NET_WIFI_AWARE_DISCOVERYSESSION

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::android::net::wifi::aware
{
	class WifiAwareManager;
}
namespace __jni_impl::android::net
{
	class NetworkSpecifier;
}
namespace __jni_impl::android::net::wifi::aware
{
	class PeerHandle;
}

namespace __jni_impl::android::net::wifi::aware
{
	class DiscoverySession : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void close();
		QAndroidJniObject createNetworkSpecifierOpen(__jni_impl::android::net::wifi::aware::PeerHandle arg0);
		QAndroidJniObject createNetworkSpecifierPassphrase(__jni_impl::android::net::wifi::aware::PeerHandle arg0, jstring arg1);
		void sendMessage(__jni_impl::android::net::wifi::aware::PeerHandle arg0, jint arg1, jbyteArray arg2);
	};
} // namespace __jni_impl::android::net::wifi::aware

#include "WifiAwareManager.hpp"
#include "../../NetworkSpecifier.hpp"
#include "PeerHandle.hpp"

namespace __jni_impl::android::net::wifi::aware
{
	// Fields
	
	// Constructors
	void DiscoverySession::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.aware.DiscoverySession",
			"(V)V");
	}
	
	// Methods
	void DiscoverySession::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V");
	}
	QAndroidJniObject DiscoverySession::createNetworkSpecifierOpen(__jni_impl::android::net::wifi::aware::PeerHandle arg0)
	{
		return __thiz.callObjectMethod(
			"createNetworkSpecifierOpen",
			"(Landroid/net/wifi/aware/PeerHandle;)Landroid/net/NetworkSpecifier;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject DiscoverySession::createNetworkSpecifierPassphrase(__jni_impl::android::net::wifi::aware::PeerHandle arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"createNetworkSpecifierPassphrase",
			"(Landroid/net/wifi/aware/PeerHandle;Ljava/lang/String;)Landroid/net/NetworkSpecifier;",
			arg0.__jniObject().object(),
			arg1);
	}
	void DiscoverySession::sendMessage(__jni_impl::android::net::wifi::aware::PeerHandle arg0, jint arg1, jbyteArray arg2)
	{
		__thiz.callMethod<void>(
			"sendMessage",
			"(Landroid/net/wifi/aware/PeerHandle;I[B)V",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
} // namespace __jni_impl::android::net::wifi::aware

namespace android::net::wifi::aware
{
	class DiscoverySession : public __jni_impl::android::net::wifi::aware::DiscoverySession
	{
	public:
		DiscoverySession(QAndroidJniObject obj) { __thiz = obj; }
		DiscoverySession()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi::aware

#endif // ANDROID_NET_WIFI_AWARE_DISCOVERYSESSION

