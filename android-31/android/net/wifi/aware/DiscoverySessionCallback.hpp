#pragma once

#include "../../../../JByteArray.hpp"
#include "./PeerHandle.def.hpp"
#include "./PublishDiscoverySession.def.hpp"
#include "./SubscribeDiscoverySession.def.hpp"
#include "./DiscoverySessionCallback.def.hpp"

namespace android::net::wifi::aware
{
	// Fields
	
	// Constructors
	inline DiscoverySessionCallback::DiscoverySessionCallback()
		: JObject(
			"android.net.wifi.aware.DiscoverySessionCallback",
			"()V"
		) {}
	
	// Methods
	inline void DiscoverySessionCallback::onMessageReceived(android::net::wifi::aware::PeerHandle arg0, JByteArray arg1) const
	{
		callMethod<void>(
			"onMessageReceived",
			"(Landroid/net/wifi/aware/PeerHandle;[B)V",
			arg0.object(),
			arg1.object<jbyteArray>()
		);
	}
	inline void DiscoverySessionCallback::onMessageSendFailed(jint arg0) const
	{
		callMethod<void>(
			"onMessageSendFailed",
			"(I)V",
			arg0
		);
	}
	inline void DiscoverySessionCallback::onMessageSendSucceeded(jint arg0) const
	{
		callMethod<void>(
			"onMessageSendSucceeded",
			"(I)V",
			arg0
		);
	}
	inline void DiscoverySessionCallback::onPublishStarted(android::net::wifi::aware::PublishDiscoverySession arg0) const
	{
		callMethod<void>(
			"onPublishStarted",
			"(Landroid/net/wifi/aware/PublishDiscoverySession;)V",
			arg0.object()
		);
	}
	inline void DiscoverySessionCallback::onServiceDiscovered(android::net::wifi::aware::PeerHandle arg0, JByteArray arg1, JObject arg2) const
	{
		callMethod<void>(
			"onServiceDiscovered",
			"(Landroid/net/wifi/aware/PeerHandle;[BLjava/util/List;)V",
			arg0.object(),
			arg1.object<jbyteArray>(),
			arg2.object()
		);
	}
	inline void DiscoverySessionCallback::onServiceDiscoveredWithinRange(android::net::wifi::aware::PeerHandle arg0, JByteArray arg1, JObject arg2, jint arg3) const
	{
		callMethod<void>(
			"onServiceDiscoveredWithinRange",
			"(Landroid/net/wifi/aware/PeerHandle;[BLjava/util/List;I)V",
			arg0.object(),
			arg1.object<jbyteArray>(),
			arg2.object(),
			arg3
		);
	}
	inline void DiscoverySessionCallback::onServiceLost(android::net::wifi::aware::PeerHandle arg0, jint arg1) const
	{
		callMethod<void>(
			"onServiceLost",
			"(Landroid/net/wifi/aware/PeerHandle;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void DiscoverySessionCallback::onSessionConfigFailed() const
	{
		callMethod<void>(
			"onSessionConfigFailed",
			"()V"
		);
	}
	inline void DiscoverySessionCallback::onSessionConfigUpdated() const
	{
		callMethod<void>(
			"onSessionConfigUpdated",
			"()V"
		);
	}
	inline void DiscoverySessionCallback::onSessionTerminated() const
	{
		callMethod<void>(
			"onSessionTerminated",
			"()V"
		);
	}
	inline void DiscoverySessionCallback::onSubscribeStarted(android::net::wifi::aware::SubscribeDiscoverySession arg0) const
	{
		callMethod<void>(
			"onSubscribeStarted",
			"(Landroid/net/wifi/aware/SubscribeDiscoverySession;)V",
			arg0.object()
		);
	}
} // namespace android::net::wifi::aware

// Base class headers

