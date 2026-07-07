#pragma once

#include "../../../../JByteArray.hpp"
#include "../../NetworkSpecifier.def.hpp"
#include "./PeerHandle.def.hpp"
#include "../../../../JString.hpp"
#include "./DiscoverySession.def.hpp"

namespace android::net::wifi::aware
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void DiscoverySession::acceptPairingRequest(jint arg0, android::net::wifi::aware::PeerHandle arg1, JString arg2, jint arg3, JString arg4) const
	{
		callMethod<void>(
			"acceptPairingRequest",
			"(ILandroid/net/wifi/aware/PeerHandle;Ljava/lang/String;ILjava/lang/String;)V",
			arg0,
			arg1.object(),
			arg2.object<jstring>(),
			arg3,
			arg4.object<jstring>()
		);
	}
	inline void DiscoverySession::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline android::net::NetworkSpecifier DiscoverySession::createNetworkSpecifierOpen(android::net::wifi::aware::PeerHandle arg0) const
	{
		return callObjectMethod(
			"createNetworkSpecifierOpen",
			"(Landroid/net/wifi/aware/PeerHandle;)Landroid/net/NetworkSpecifier;",
			arg0.object()
		);
	}
	inline android::net::NetworkSpecifier DiscoverySession::createNetworkSpecifierPassphrase(android::net::wifi::aware::PeerHandle arg0, JString arg1) const
	{
		return callObjectMethod(
			"createNetworkSpecifierPassphrase",
			"(Landroid/net/wifi/aware/PeerHandle;Ljava/lang/String;)Landroid/net/NetworkSpecifier;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline void DiscoverySession::initiateBootstrappingRequest(android::net::wifi::aware::PeerHandle arg0, jint arg1) const
	{
		callMethod<void>(
			"initiateBootstrappingRequest",
			"(Landroid/net/wifi/aware/PeerHandle;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void DiscoverySession::initiatePairingRequest(android::net::wifi::aware::PeerHandle arg0, JString arg1, jint arg2, JString arg3) const
	{
		callMethod<void>(
			"initiatePairingRequest",
			"(Landroid/net/wifi/aware/PeerHandle;Ljava/lang/String;ILjava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2,
			arg3.object<jstring>()
		);
	}
	inline void DiscoverySession::rejectPairingRequest(jint arg0, android::net::wifi::aware::PeerHandle arg1) const
	{
		callMethod<void>(
			"rejectPairingRequest",
			"(ILandroid/net/wifi/aware/PeerHandle;)V",
			arg0,
			arg1.object()
		);
	}
	inline void DiscoverySession::sendMessage(android::net::wifi::aware::PeerHandle arg0, jint arg1, JByteArray arg2) const
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

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi::aware;
#endif
