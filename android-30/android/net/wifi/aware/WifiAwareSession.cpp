#include "../../../../JByteArray.hpp"
#include "../../NetworkSpecifier.hpp"
#include "./DiscoverySessionCallback.hpp"
#include "./PublishConfig.hpp"
#include "./SubscribeConfig.hpp"
#include "../../../os/Handler.hpp"
#include "../../../../JString.hpp"
#include "./WifiAwareSession.hpp"

namespace android::net::wifi::aware
{
	// Fields
	
	// QJniObject forward
	WifiAwareSession::WifiAwareSession(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void WifiAwareSession::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	android::net::NetworkSpecifier WifiAwareSession::createNetworkSpecifierOpen(jint arg0, JByteArray arg1)
	{
		return callObjectMethod(
			"createNetworkSpecifierOpen",
			"(I[B)Landroid/net/NetworkSpecifier;",
			arg0,
			arg1.object<jbyteArray>()
		);
	}
	android::net::NetworkSpecifier WifiAwareSession::createNetworkSpecifierPassphrase(jint arg0, JByteArray arg1, JString arg2)
	{
		return callObjectMethod(
			"createNetworkSpecifierPassphrase",
			"(I[BLjava/lang/String;)Landroid/net/NetworkSpecifier;",
			arg0,
			arg1.object<jbyteArray>(),
			arg2.object<jstring>()
		);
	}
	void WifiAwareSession::publish(android::net::wifi::aware::PublishConfig arg0, android::net::wifi::aware::DiscoverySessionCallback arg1, android::os::Handler arg2)
	{
		callMethod<void>(
			"publish",
			"(Landroid/net/wifi/aware/PublishConfig;Landroid/net/wifi/aware/DiscoverySessionCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void WifiAwareSession::subscribe(android::net::wifi::aware::SubscribeConfig arg0, android::net::wifi::aware::DiscoverySessionCallback arg1, android::os::Handler arg2)
	{
		callMethod<void>(
			"subscribe",
			"(Landroid/net/wifi/aware/SubscribeConfig;Landroid/net/wifi/aware/DiscoverySessionCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::net::wifi::aware

