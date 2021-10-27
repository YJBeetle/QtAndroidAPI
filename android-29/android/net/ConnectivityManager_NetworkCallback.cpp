#include "./LinkProperties.hpp"
#include "./Network.hpp"
#include "./NetworkCapabilities.hpp"
#include "./ConnectivityManager_NetworkCallback.hpp"

namespace android::net
{
	// Fields
	
	ConnectivityManager_NetworkCallback::ConnectivityManager_NetworkCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ConnectivityManager_NetworkCallback::ConnectivityManager_NetworkCallback()
	{
		__thiz = QAndroidJniObject(
			"android.net.ConnectivityManager$NetworkCallback",
			"()V"
		);
	}
	
	// Methods
	void ConnectivityManager_NetworkCallback::onAvailable(android::net::Network arg0)
	{
		__thiz.callMethod<void>(
			"onAvailable",
			"(Landroid/net/Network;)V",
			arg0.__jniObject().object()
		);
	}
	void ConnectivityManager_NetworkCallback::onBlockedStatusChanged(android::net::Network arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"onBlockedStatusChanged",
			"(Landroid/net/Network;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ConnectivityManager_NetworkCallback::onCapabilitiesChanged(android::net::Network arg0, android::net::NetworkCapabilities arg1)
	{
		__thiz.callMethod<void>(
			"onCapabilitiesChanged",
			"(Landroid/net/Network;Landroid/net/NetworkCapabilities;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ConnectivityManager_NetworkCallback::onLinkPropertiesChanged(android::net::Network arg0, android::net::LinkProperties arg1)
	{
		__thiz.callMethod<void>(
			"onLinkPropertiesChanged",
			"(Landroid/net/Network;Landroid/net/LinkProperties;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ConnectivityManager_NetworkCallback::onLosing(android::net::Network arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onLosing",
			"(Landroid/net/Network;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ConnectivityManager_NetworkCallback::onLost(android::net::Network arg0)
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
} // namespace android::net

