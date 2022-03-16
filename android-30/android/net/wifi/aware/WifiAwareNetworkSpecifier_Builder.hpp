#pragma once

#include "../../../../JByteArray.hpp"
#include "./DiscoverySession.def.hpp"
#include "./PeerHandle.def.hpp"
#include "./WifiAwareNetworkSpecifier.def.hpp"
#include "../../../../JString.hpp"
#include "./WifiAwareNetworkSpecifier_Builder.def.hpp"

namespace android::net::wifi::aware
{
	// Fields
	
	// Constructors
	inline WifiAwareNetworkSpecifier_Builder::WifiAwareNetworkSpecifier_Builder(android::net::wifi::aware::DiscoverySession arg0, android::net::wifi::aware::PeerHandle arg1)
		: JObject(
			"android.net.wifi.aware.WifiAwareNetworkSpecifier$Builder",
			"(Landroid/net/wifi/aware/DiscoverySession;Landroid/net/wifi/aware/PeerHandle;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline android::net::wifi::aware::WifiAwareNetworkSpecifier WifiAwareNetworkSpecifier_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/wifi/aware/WifiAwareNetworkSpecifier;"
		);
	}
	inline android::net::wifi::aware::WifiAwareNetworkSpecifier_Builder WifiAwareNetworkSpecifier_Builder::setPmk(JByteArray arg0) const
	{
		return callObjectMethod(
			"setPmk",
			"([B)Landroid/net/wifi/aware/WifiAwareNetworkSpecifier$Builder;",
			arg0.object<jbyteArray>()
		);
	}
	inline android::net::wifi::aware::WifiAwareNetworkSpecifier_Builder WifiAwareNetworkSpecifier_Builder::setPort(jint arg0) const
	{
		return callObjectMethod(
			"setPort",
			"(I)Landroid/net/wifi/aware/WifiAwareNetworkSpecifier$Builder;",
			arg0
		);
	}
	inline android::net::wifi::aware::WifiAwareNetworkSpecifier_Builder WifiAwareNetworkSpecifier_Builder::setPskPassphrase(JString arg0) const
	{
		return callObjectMethod(
			"setPskPassphrase",
			"(Ljava/lang/String;)Landroid/net/wifi/aware/WifiAwareNetworkSpecifier$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::net::wifi::aware::WifiAwareNetworkSpecifier_Builder WifiAwareNetworkSpecifier_Builder::setTransportProtocol(jint arg0) const
	{
		return callObjectMethod(
			"setTransportProtocol",
			"(I)Landroid/net/wifi/aware/WifiAwareNetworkSpecifier$Builder;",
			arg0
		);
	}
} // namespace android::net::wifi::aware

// Base class headers

