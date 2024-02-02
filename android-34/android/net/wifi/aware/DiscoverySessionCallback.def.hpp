#pragma once

#include "../../../../JObject.hpp"

class JByteArray;
namespace android::net::wifi::aware
{
	class PeerHandle;
}
namespace android::net::wifi::aware
{
	class PublishDiscoverySession;
}
namespace android::net::wifi::aware
{
	class ServiceDiscoveryInfo;
}
namespace android::net::wifi::aware
{
	class SubscribeDiscoverySession;
}
class JString;

namespace android::net::wifi::aware
{
	class DiscoverySessionCallback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DiscoverySessionCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DiscoverySessionCallback(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		DiscoverySessionCallback();
		
		// Methods
		void onBootstrappingFailed(android::net::wifi::aware::PeerHandle arg0) const;
		void onBootstrappingSucceeded(android::net::wifi::aware::PeerHandle arg0, jint arg1) const;
		void onMessageReceived(android::net::wifi::aware::PeerHandle arg0, JByteArray arg1) const;
		void onMessageSendFailed(jint arg0) const;
		void onMessageSendSucceeded(jint arg0) const;
		void onPairingSetupFailed(android::net::wifi::aware::PeerHandle arg0) const;
		void onPairingSetupRequestReceived(android::net::wifi::aware::PeerHandle arg0, jint arg1) const;
		void onPairingSetupSucceeded(android::net::wifi::aware::PeerHandle arg0, JString arg1) const;
		void onPairingVerificationFailed(android::net::wifi::aware::PeerHandle arg0) const;
		void onPairingVerificationSucceed(android::net::wifi::aware::PeerHandle arg0, JString arg1) const;
		void onPublishStarted(android::net::wifi::aware::PublishDiscoverySession arg0) const;
		void onServiceDiscovered(android::net::wifi::aware::ServiceDiscoveryInfo arg0) const;
		void onServiceDiscovered(android::net::wifi::aware::PeerHandle arg0, JByteArray arg1, JObject arg2) const;
		void onServiceDiscoveredWithinRange(android::net::wifi::aware::ServiceDiscoveryInfo arg0, jint arg1) const;
		void onServiceDiscoveredWithinRange(android::net::wifi::aware::PeerHandle arg0, JByteArray arg1, JObject arg2, jint arg3) const;
		void onServiceLost(android::net::wifi::aware::PeerHandle arg0, jint arg1) const;
		void onSessionConfigFailed() const;
		void onSessionConfigUpdated() const;
		void onSessionTerminated() const;
		void onSubscribeStarted(android::net::wifi::aware::SubscribeDiscoverySession arg0) const;
	};
} // namespace android::net::wifi::aware

