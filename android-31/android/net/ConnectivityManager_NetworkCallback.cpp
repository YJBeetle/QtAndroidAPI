#include "./LinkProperties.hpp"
#include "./Network.hpp"
#include "./NetworkCapabilities.hpp"
#include "./ConnectivityManager_NetworkCallback.hpp"

namespace android::net
{
	// Fields
	jint ConnectivityManager_NetworkCallback::FLAG_INCLUDE_LOCATION_INFO()
	{
		return getStaticField<jint>(
			"android.net.ConnectivityManager$NetworkCallback",
			"FLAG_INCLUDE_LOCATION_INFO"
		);
	}
	
	// QJniObject forward
	ConnectivityManager_NetworkCallback::ConnectivityManager_NetworkCallback(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ConnectivityManager_NetworkCallback::ConnectivityManager_NetworkCallback()
		: JObject(
			"android.net.ConnectivityManager$NetworkCallback",
			"()V"
		) {}
	ConnectivityManager_NetworkCallback::ConnectivityManager_NetworkCallback(jint arg0)
		: JObject(
			"android.net.ConnectivityManager$NetworkCallback",
			"(I)V",
			arg0
		) {}
	
	// Methods
	void ConnectivityManager_NetworkCallback::onAvailable(android::net::Network arg0)
	{
		callMethod<void>(
			"onAvailable",
			"(Landroid/net/Network;)V",
			arg0.object()
		);
	}
	void ConnectivityManager_NetworkCallback::onBlockedStatusChanged(android::net::Network arg0, jboolean arg1)
	{
		callMethod<void>(
			"onBlockedStatusChanged",
			"(Landroid/net/Network;Z)V",
			arg0.object(),
			arg1
		);
	}
	void ConnectivityManager_NetworkCallback::onCapabilitiesChanged(android::net::Network arg0, android::net::NetworkCapabilities arg1)
	{
		callMethod<void>(
			"onCapabilitiesChanged",
			"(Landroid/net/Network;Landroid/net/NetworkCapabilities;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ConnectivityManager_NetworkCallback::onLinkPropertiesChanged(android::net::Network arg0, android::net::LinkProperties arg1)
	{
		callMethod<void>(
			"onLinkPropertiesChanged",
			"(Landroid/net/Network;Landroid/net/LinkProperties;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ConnectivityManager_NetworkCallback::onLosing(android::net::Network arg0, jint arg1)
	{
		callMethod<void>(
			"onLosing",
			"(Landroid/net/Network;I)V",
			arg0.object(),
			arg1
		);
	}
	void ConnectivityManager_NetworkCallback::onLost(android::net::Network arg0)
	{
		callMethod<void>(
			"onLost",
			"(Landroid/net/Network;)V",
			arg0.object()
		);
	}
	void ConnectivityManager_NetworkCallback::onUnavailable()
	{
		callMethod<void>(
			"onUnavailable",
			"()V"
		);
	}
} // namespace android::net

