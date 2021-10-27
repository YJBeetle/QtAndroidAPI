#pragma once

#include "../../../../__JniBaseClass.hpp"

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
	class DiscoverySessionCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		DiscoverySessionCallback(QAndroidJniObject obj);
		// Constructors
		DiscoverySessionCallback();
		
		// Methods
		void onMessageReceived(android::net::wifi::aware::PeerHandle arg0, jbyteArray arg1);
		void onMessageSendFailed(jint arg0);
		void onMessageSendSucceeded(jint arg0);
		void onPublishStarted(android::net::wifi::aware::PublishDiscoverySession arg0);
		void onServiceDiscovered(android::net::wifi::aware::PeerHandle arg0, jbyteArray arg1, __JniBaseClass arg2);
		void onServiceDiscoveredWithinRange(android::net::wifi::aware::PeerHandle arg0, jbyteArray arg1, __JniBaseClass arg2, jint arg3);
		void onSessionConfigFailed();
		void onSessionConfigUpdated();
		void onSessionTerminated();
		void onSubscribeStarted(android::net::wifi::aware::SubscribeDiscoverySession arg0);
	};
} // namespace android::net::wifi::aware

