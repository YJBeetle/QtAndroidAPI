#pragma once

#ifndef ANDROID_NET_WIFI_AWARE_DISCOVERYSESSION
#define ANDROID_NET_WIFI_AWARE_DISCOVERYSESSION

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::android::net::wifi::aware
{
	class WifiAwareManager;
}
namespace __jni_impl::android::net::wifi::aware
{
	class PeerHandle;
}
namespace __jni_impl::android::net
{
	class NetworkSpecifier;
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
		void sendMessage(__jni_impl::android::net::wifi::aware::PeerHandle arg0, jint arg1, jbyteArray arg2);
		QAndroidJniObject createNetworkSpecifierOpen(__jni_impl::android::net::wifi::aware::PeerHandle arg0);
		QAndroidJniObject createNetworkSpecifierPassphrase(__jni_impl::android::net::wifi::aware::PeerHandle arg0, jstring arg1);
		QAndroidJniObject createNetworkSpecifierPassphrase(__jni_impl::android::net::wifi::aware::PeerHandle arg0, const QString &arg1);
	};
} // namespace __jni_impl::android::net::wifi::aware

#include "WifiAwareManager.hpp"
#include "PeerHandle.hpp"
#include "../../NetworkSpecifier.hpp"

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
			"()V"
		);
	}
	void DiscoverySession::sendMessage(__jni_impl::android::net::wifi::aware::PeerHandle arg0, jint arg1, jbyteArray arg2)
	{
		__thiz.callMethod<void>(
			"sendMessage",
			"(Landroid/net/wifi/aware/PeerHandle;I[B)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject DiscoverySession::createNetworkSpecifierOpen(__jni_impl::android::net::wifi::aware::PeerHandle arg0)
	{
		return __thiz.callObjectMethod(
			"createNetworkSpecifierOpen",
			"(Landroid/net/wifi/aware/PeerHandle;)Landroid/net/NetworkSpecifier;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DiscoverySession::createNetworkSpecifierPassphrase(__jni_impl::android::net::wifi::aware::PeerHandle arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"createNetworkSpecifierPassphrase",
			"(Landroid/net/wifi/aware/PeerHandle;Ljava/lang/String;)Landroid/net/NetworkSpecifier;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject DiscoverySession::createNetworkSpecifierPassphrase(__jni_impl::android::net::wifi::aware::PeerHandle arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"createNetworkSpecifierPassphrase",
			"(Landroid/net/wifi/aware/PeerHandle;Ljava/lang/String;)Landroid/net/NetworkSpecifier;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
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

