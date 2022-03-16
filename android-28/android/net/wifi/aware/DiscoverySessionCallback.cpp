#include "../../../../JByteArray.hpp"
#include "./PeerHandle.hpp"
#include "./PublishDiscoverySession.hpp"
#include "./SubscribeDiscoverySession.hpp"
#include "./DiscoverySessionCallback.hpp"

namespace android::net::wifi::aware
{
	// Fields
	
	// Constructors
	DiscoverySessionCallback::DiscoverySessionCallback()
		: JObject(
			"android.net.wifi.aware.DiscoverySessionCallback",
			"()V"
		) {}
	
	// Methods
	void DiscoverySessionCallback::onMessageReceived(android::net::wifi::aware::PeerHandle arg0, JByteArray arg1) const
	{
		callMethod<void>(
			"onMessageReceived",
			"(Landroid/net/wifi/aware/PeerHandle;[B)V",
			arg0.object(),
			arg1.object<jbyteArray>()
		);
	}
	void DiscoverySessionCallback::onMessageSendFailed(jint arg0) const
	{
		callMethod<void>(
			"onMessageSendFailed",
			"(I)V",
			arg0
		);
	}
	void DiscoverySessionCallback::onMessageSendSucceeded(jint arg0) const
	{
		callMethod<void>(
			"onMessageSendSucceeded",
			"(I)V",
			arg0
		);
	}
	void DiscoverySessionCallback::onPublishStarted(android::net::wifi::aware::PublishDiscoverySession arg0) const
	{
		callMethod<void>(
			"onPublishStarted",
			"(Landroid/net/wifi/aware/PublishDiscoverySession;)V",
			arg0.object()
		);
	}
	void DiscoverySessionCallback::onServiceDiscovered(android::net::wifi::aware::PeerHandle arg0, JByteArray arg1, JObject arg2) const
	{
		callMethod<void>(
			"onServiceDiscovered",
			"(Landroid/net/wifi/aware/PeerHandle;[BLjava/util/List;)V",
			arg0.object(),
			arg1.object<jbyteArray>(),
			arg2.object()
		);
	}
	void DiscoverySessionCallback::onServiceDiscoveredWithinRange(android::net::wifi::aware::PeerHandle arg0, JByteArray arg1, JObject arg2, jint arg3) const
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
	void DiscoverySessionCallback::onSessionConfigFailed() const
	{
		callMethod<void>(
			"onSessionConfigFailed",
			"()V"
		);
	}
	void DiscoverySessionCallback::onSessionConfigUpdated() const
	{
		callMethod<void>(
			"onSessionConfigUpdated",
			"()V"
		);
	}
	void DiscoverySessionCallback::onSessionTerminated() const
	{
		callMethod<void>(
			"onSessionTerminated",
			"()V"
		);
	}
	void DiscoverySessionCallback::onSubscribeStarted(android::net::wifi::aware::SubscribeDiscoverySession arg0) const
	{
		callMethod<void>(
			"onSubscribeStarted",
			"(Landroid/net/wifi/aware/SubscribeDiscoverySession;)V",
			arg0.object()
		);
	}
} // namespace android::net::wifi::aware

