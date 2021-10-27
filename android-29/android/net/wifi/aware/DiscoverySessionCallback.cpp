#include "./PeerHandle.hpp"
#include "./PublishDiscoverySession.hpp"
#include "./SubscribeDiscoverySession.hpp"
#include "./DiscoverySessionCallback.hpp"

namespace android::net::wifi::aware
{
	// Fields
	
	DiscoverySessionCallback::DiscoverySessionCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DiscoverySessionCallback::DiscoverySessionCallback()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.aware.DiscoverySessionCallback",
			"()V"
		);
	}
	
	// Methods
	void DiscoverySessionCallback::onMessageReceived(android::net::wifi::aware::PeerHandle arg0, jbyteArray arg1)
	{
		__thiz.callMethod<void>(
			"onMessageReceived",
			"(Landroid/net/wifi/aware/PeerHandle;[B)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DiscoverySessionCallback::onMessageSendFailed(jint arg0)
	{
		__thiz.callMethod<void>(
			"onMessageSendFailed",
			"(I)V",
			arg0
		);
	}
	void DiscoverySessionCallback::onMessageSendSucceeded(jint arg0)
	{
		__thiz.callMethod<void>(
			"onMessageSendSucceeded",
			"(I)V",
			arg0
		);
	}
	void DiscoverySessionCallback::onPublishStarted(android::net::wifi::aware::PublishDiscoverySession arg0)
	{
		__thiz.callMethod<void>(
			"onPublishStarted",
			"(Landroid/net/wifi/aware/PublishDiscoverySession;)V",
			arg0.__jniObject().object()
		);
	}
	void DiscoverySessionCallback::onServiceDiscovered(android::net::wifi::aware::PeerHandle arg0, jbyteArray arg1, __JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"onServiceDiscovered",
			"(Landroid/net/wifi/aware/PeerHandle;[BLjava/util/List;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void DiscoverySessionCallback::onServiceDiscoveredWithinRange(android::net::wifi::aware::PeerHandle arg0, jbyteArray arg1, __JniBaseClass arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"onServiceDiscoveredWithinRange",
			"(Landroid/net/wifi/aware/PeerHandle;[BLjava/util/List;I)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	void DiscoverySessionCallback::onSessionConfigFailed()
	{
		__thiz.callMethod<void>(
			"onSessionConfigFailed",
			"()V"
		);
	}
	void DiscoverySessionCallback::onSessionConfigUpdated()
	{
		__thiz.callMethod<void>(
			"onSessionConfigUpdated",
			"()V"
		);
	}
	void DiscoverySessionCallback::onSessionTerminated()
	{
		__thiz.callMethod<void>(
			"onSessionTerminated",
			"()V"
		);
	}
	void DiscoverySessionCallback::onSubscribeStarted(android::net::wifi::aware::SubscribeDiscoverySession arg0)
	{
		__thiz.callMethod<void>(
			"onSubscribeStarted",
			"(Landroid/net/wifi/aware/SubscribeDiscoverySession;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::net::wifi::aware

