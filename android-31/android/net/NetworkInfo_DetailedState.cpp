#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./NetworkInfo_DetailedState.hpp"

namespace android::net
{
	// Fields
	android::net::NetworkInfo_DetailedState NetworkInfo_DetailedState::AUTHENTICATING()
	{
		return getStaticObjectField(
			"android.net.NetworkInfo$DetailedState",
			"AUTHENTICATING",
			"Landroid/net/NetworkInfo$DetailedState;"
		);
	}
	android::net::NetworkInfo_DetailedState NetworkInfo_DetailedState::BLOCKED()
	{
		return getStaticObjectField(
			"android.net.NetworkInfo$DetailedState",
			"BLOCKED",
			"Landroid/net/NetworkInfo$DetailedState;"
		);
	}
	android::net::NetworkInfo_DetailedState NetworkInfo_DetailedState::CAPTIVE_PORTAL_CHECK()
	{
		return getStaticObjectField(
			"android.net.NetworkInfo$DetailedState",
			"CAPTIVE_PORTAL_CHECK",
			"Landroid/net/NetworkInfo$DetailedState;"
		);
	}
	android::net::NetworkInfo_DetailedState NetworkInfo_DetailedState::CONNECTED()
	{
		return getStaticObjectField(
			"android.net.NetworkInfo$DetailedState",
			"CONNECTED",
			"Landroid/net/NetworkInfo$DetailedState;"
		);
	}
	android::net::NetworkInfo_DetailedState NetworkInfo_DetailedState::CONNECTING()
	{
		return getStaticObjectField(
			"android.net.NetworkInfo$DetailedState",
			"CONNECTING",
			"Landroid/net/NetworkInfo$DetailedState;"
		);
	}
	android::net::NetworkInfo_DetailedState NetworkInfo_DetailedState::DISCONNECTED()
	{
		return getStaticObjectField(
			"android.net.NetworkInfo$DetailedState",
			"DISCONNECTED",
			"Landroid/net/NetworkInfo$DetailedState;"
		);
	}
	android::net::NetworkInfo_DetailedState NetworkInfo_DetailedState::DISCONNECTING()
	{
		return getStaticObjectField(
			"android.net.NetworkInfo$DetailedState",
			"DISCONNECTING",
			"Landroid/net/NetworkInfo$DetailedState;"
		);
	}
	android::net::NetworkInfo_DetailedState NetworkInfo_DetailedState::FAILED()
	{
		return getStaticObjectField(
			"android.net.NetworkInfo$DetailedState",
			"FAILED",
			"Landroid/net/NetworkInfo$DetailedState;"
		);
	}
	android::net::NetworkInfo_DetailedState NetworkInfo_DetailedState::IDLE()
	{
		return getStaticObjectField(
			"android.net.NetworkInfo$DetailedState",
			"IDLE",
			"Landroid/net/NetworkInfo$DetailedState;"
		);
	}
	android::net::NetworkInfo_DetailedState NetworkInfo_DetailedState::OBTAINING_IPADDR()
	{
		return getStaticObjectField(
			"android.net.NetworkInfo$DetailedState",
			"OBTAINING_IPADDR",
			"Landroid/net/NetworkInfo$DetailedState;"
		);
	}
	android::net::NetworkInfo_DetailedState NetworkInfo_DetailedState::SCANNING()
	{
		return getStaticObjectField(
			"android.net.NetworkInfo$DetailedState",
			"SCANNING",
			"Landroid/net/NetworkInfo$DetailedState;"
		);
	}
	android::net::NetworkInfo_DetailedState NetworkInfo_DetailedState::SUSPENDED()
	{
		return getStaticObjectField(
			"android.net.NetworkInfo$DetailedState",
			"SUSPENDED",
			"Landroid/net/NetworkInfo$DetailedState;"
		);
	}
	android::net::NetworkInfo_DetailedState NetworkInfo_DetailedState::VERIFYING_POOR_LINK()
	{
		return getStaticObjectField(
			"android.net.NetworkInfo$DetailedState",
			"VERIFYING_POOR_LINK",
			"Landroid/net/NetworkInfo$DetailedState;"
		);
	}
	
	// QAndroidJniObject forward
	NetworkInfo_DetailedState::NetworkInfo_DetailedState(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::net::NetworkInfo_DetailedState NetworkInfo_DetailedState::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.net.NetworkInfo$DetailedState",
			"valueOf",
			"(Ljava/lang/String;)Landroid/net/NetworkInfo$DetailedState;",
			arg0.object<jstring>()
		);
	}
	JArray NetworkInfo_DetailedState::values()
	{
		return callStaticObjectMethod(
			"android.net.NetworkInfo$DetailedState",
			"values",
			"()[Landroid/net/NetworkInfo$DetailedState;"
		);
	}
} // namespace android::net

