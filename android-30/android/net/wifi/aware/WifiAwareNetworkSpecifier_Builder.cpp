#include "./DiscoverySession.hpp"
#include "./PeerHandle.hpp"
#include "./WifiAwareNetworkSpecifier.hpp"
#include "./WifiAwareNetworkSpecifier_Builder.hpp"

namespace android::net::wifi::aware
{
	// Fields
	
	// QJniObject forward
	WifiAwareNetworkSpecifier_Builder::WifiAwareNetworkSpecifier_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	WifiAwareNetworkSpecifier_Builder::WifiAwareNetworkSpecifier_Builder(android::net::wifi::aware::DiscoverySession arg0, android::net::wifi::aware::PeerHandle arg1)
		: JObject(
			"android.net.wifi.aware.WifiAwareNetworkSpecifier$Builder",
			"(Landroid/net/wifi/aware/DiscoverySession;Landroid/net/wifi/aware/PeerHandle;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	android::net::wifi::aware::WifiAwareNetworkSpecifier WifiAwareNetworkSpecifier_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/wifi/aware/WifiAwareNetworkSpecifier;"
		);
	}
	android::net::wifi::aware::WifiAwareNetworkSpecifier_Builder WifiAwareNetworkSpecifier_Builder::setPmk(jbyteArray arg0)
	{
		return callObjectMethod(
			"setPmk",
			"([B)Landroid/net/wifi/aware/WifiAwareNetworkSpecifier$Builder;",
			arg0
		);
	}
	android::net::wifi::aware::WifiAwareNetworkSpecifier_Builder WifiAwareNetworkSpecifier_Builder::setPort(jint arg0)
	{
		return callObjectMethod(
			"setPort",
			"(I)Landroid/net/wifi/aware/WifiAwareNetworkSpecifier$Builder;",
			arg0
		);
	}
	android::net::wifi::aware::WifiAwareNetworkSpecifier_Builder WifiAwareNetworkSpecifier_Builder::setPskPassphrase(jstring arg0)
	{
		return callObjectMethod(
			"setPskPassphrase",
			"(Ljava/lang/String;)Landroid/net/wifi/aware/WifiAwareNetworkSpecifier$Builder;",
			arg0
		);
	}
	android::net::wifi::aware::WifiAwareNetworkSpecifier_Builder WifiAwareNetworkSpecifier_Builder::setTransportProtocol(jint arg0)
	{
		return callObjectMethod(
			"setTransportProtocol",
			"(I)Landroid/net/wifi/aware/WifiAwareNetworkSpecifier$Builder;",
			arg0
		);
	}
} // namespace android::net::wifi::aware

