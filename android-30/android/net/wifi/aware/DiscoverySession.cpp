#include "../../../../JByteArray.hpp"
#include "../../NetworkSpecifier.hpp"
#include "./PeerHandle.hpp"
#include "../../../../JString.hpp"
#include "./DiscoverySession.hpp"

namespace android::net::wifi::aware
{
	// Fields
	
	// QAndroidJniObject forward
	DiscoverySession::DiscoverySession(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void DiscoverySession::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	android::net::NetworkSpecifier DiscoverySession::createNetworkSpecifierOpen(android::net::wifi::aware::PeerHandle arg0)
	{
		return callObjectMethod(
			"createNetworkSpecifierOpen",
			"(Landroid/net/wifi/aware/PeerHandle;)Landroid/net/NetworkSpecifier;",
			arg0.object()
		);
	}
	android::net::NetworkSpecifier DiscoverySession::createNetworkSpecifierPassphrase(android::net::wifi::aware::PeerHandle arg0, JString arg1)
	{
		return callObjectMethod(
			"createNetworkSpecifierPassphrase",
			"(Landroid/net/wifi/aware/PeerHandle;Ljava/lang/String;)Landroid/net/NetworkSpecifier;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	void DiscoverySession::sendMessage(android::net::wifi::aware::PeerHandle arg0, jint arg1, JByteArray arg2)
	{
		callMethod<void>(
			"sendMessage",
			"(Landroid/net/wifi/aware/PeerHandle;I[B)V",
			arg0.object(),
			arg1,
			arg2.object<jbyteArray>()
		);
	}
} // namespace android::net::wifi::aware

