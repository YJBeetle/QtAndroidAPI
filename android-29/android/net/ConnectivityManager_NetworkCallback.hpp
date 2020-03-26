#pragma once

#ifndef ANDROID_NET_CONNECTIVITYMANAGER_NETWORKCALLBACK
#define ANDROID_NET_CONNECTIVITYMANAGER_NETWORKCALLBACK

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Network;
}
namespace __jni_impl::android::net
{
	class NetworkCapabilities;
}
namespace __jni_impl::android::net
{
	class LinkProperties;
}

namespace __jni_impl::android::net
{
	class ConnectivityManager_NetworkCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onAvailable(__jni_impl::android::net::Network arg0);
		void onLosing(__jni_impl::android::net::Network arg0, jint arg1);
		void onLost(__jni_impl::android::net::Network arg0);
		void onUnavailable();
		void onCapabilitiesChanged(__jni_impl::android::net::Network arg0, __jni_impl::android::net::NetworkCapabilities arg1);
		void onLinkPropertiesChanged(__jni_impl::android::net::Network arg0, __jni_impl::android::net::LinkProperties arg1);
		void onBlockedStatusChanged(__jni_impl::android::net::Network arg0, jboolean arg1);
	};
} // namespace __jni_impl::android::net

#include "Network.hpp"
#include "NetworkCapabilities.hpp"
#include "LinkProperties.hpp"

namespace __jni_impl::android::net
{
	// Fields
	
	// Constructors
	void ConnectivityManager_NetworkCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.ConnectivityManager$NetworkCallback",
			"()V");
	}
	
	// Methods
	void ConnectivityManager_NetworkCallback::onAvailable(__jni_impl::android::net::Network arg0)
	{
		__thiz.callMethod<void>(
			"onAvailable",
			"(Landroid/net/Network;)V",
			arg0.__jniObject().object()
		);
	}
	void ConnectivityManager_NetworkCallback::onLosing(__jni_impl::android::net::Network arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onLosing",
			"(Landroid/net/Network;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ConnectivityManager_NetworkCallback::onLost(__jni_impl::android::net::Network arg0)
	{
		__thiz.callMethod<void>(
			"onLost",
			"(Landroid/net/Network;)V",
			arg0.__jniObject().object()
		);
	}
	void ConnectivityManager_NetworkCallback::onUnavailable()
	{
		__thiz.callMethod<void>(
			"onUnavailable",
			"()V"
		);
	}
	void ConnectivityManager_NetworkCallback::onCapabilitiesChanged(__jni_impl::android::net::Network arg0, __jni_impl::android::net::NetworkCapabilities arg1)
	{
		__thiz.callMethod<void>(
			"onCapabilitiesChanged",
			"(Landroid/net/Network;Landroid/net/NetworkCapabilities;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ConnectivityManager_NetworkCallback::onLinkPropertiesChanged(__jni_impl::android::net::Network arg0, __jni_impl::android::net::LinkProperties arg1)
	{
		__thiz.callMethod<void>(
			"onLinkPropertiesChanged",
			"(Landroid/net/Network;Landroid/net/LinkProperties;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ConnectivityManager_NetworkCallback::onBlockedStatusChanged(__jni_impl::android::net::Network arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"onBlockedStatusChanged",
			"(Landroid/net/Network;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::net

namespace android::net
{
	class ConnectivityManager_NetworkCallback : public __jni_impl::android::net::ConnectivityManager_NetworkCallback
	{
	public:
		ConnectivityManager_NetworkCallback(QAndroidJniObject obj) { __thiz = obj; }
		ConnectivityManager_NetworkCallback()
		{
			__constructor();
		}
	};
} // namespace android::net

#endif // ANDROID_NET_CONNECTIVITYMANAGER_NETWORKCALLBACK

