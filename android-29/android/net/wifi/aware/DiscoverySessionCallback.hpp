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
		
		// QJniObject forward
		template<typename ...Ts> explicit DiscoverySessionCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DiscoverySessionCallback(QJniObject obj);
		
		// Constructors
		DiscoverySessionCallback();
		
		// Methods
		void onMessageReceived(android::net::wifi::aware::PeerHandle arg0, JByteArray arg1);
		void onMessageSendFailed(jint arg0);
		void onMessageSendSucceeded(jint arg0);
		void onPublishStarted(android::net::wifi::aware::PublishDiscoverySession arg0);
		void onServiceDiscovered(android::net::wifi::aware::PeerHandle arg0, JByteArray arg1, JObject arg2);
		void onServiceDiscoveredWithinRange(android::net::wifi::aware::PeerHandle arg0, JByteArray arg1, JObject arg2, jint arg3);
		void onSessionConfigFailed();
		void onSessionConfigUpdated();
		void onSessionTerminated();
		void onSubscribeStarted(android::net::wifi::aware::SubscribeDiscoverySession arg0);
	};
} // namespace android::net::wifi::aware

