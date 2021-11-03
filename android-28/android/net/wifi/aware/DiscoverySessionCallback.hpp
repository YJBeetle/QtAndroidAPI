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
	class SubscribeDiscoverySession;
}

namespace android::net::wifi::aware
{
	class DiscoverySessionCallback : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DiscoverySessionCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DiscoverySessionCallback(QAndroidJniObject obj);
		
		// Constructors
		DiscoverySessionCallback();
		
		// Methods
		void onMessageReceived(android::net::wifi::aware::PeerHandle arg0, JByteArray arg1) const;
		void onMessageSendFailed(jint arg0) const;
		void onMessageSendSucceeded(jint arg0) const;
		void onPublishStarted(android::net::wifi::aware::PublishDiscoverySession arg0) const;
		void onServiceDiscovered(android::net::wifi::aware::PeerHandle arg0, JByteArray arg1, JObject arg2) const;
		void onServiceDiscoveredWithinRange(android::net::wifi::aware::PeerHandle arg0, JByteArray arg1, JObject arg2, jint arg3) const;
		void onSessionConfigFailed() const;
		void onSessionConfigUpdated() const;
		void onSessionTerminated() const;
		void onSubscribeStarted(android::net::wifi::aware::SubscribeDiscoverySession arg0) const;
	};
} // namespace android::net::wifi::aware

