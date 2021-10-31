#include "../../NetworkSpecifier.hpp"
#include "./PeerHandle.hpp"
#include "./WifiAwareManager.hpp"
#include "./DiscoverySession.hpp"

namespace android::net::wifi::aware
{
	// Fields
	
	DiscoverySession::DiscoverySession(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void DiscoverySession::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject DiscoverySession::createNetworkSpecifierOpen(android::net::wifi::aware::PeerHandle arg0)
	{
		return __thiz.callObjectMethod(
			"createNetworkSpecifierOpen",
			"(Landroid/net/wifi/aware/PeerHandle;)Landroid/net/NetworkSpecifier;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DiscoverySession::createNetworkSpecifierPassphrase(android::net::wifi::aware::PeerHandle arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"createNetworkSpecifierPassphrase",
			"(Landroid/net/wifi/aware/PeerHandle;Ljava/lang/String;)Landroid/net/NetworkSpecifier;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DiscoverySession::sendMessage(android::net::wifi::aware::PeerHandle arg0, jint arg1, jbyteArray arg2)
	{
		__thiz.callMethod<void>(
			"sendMessage",
			"(Landroid/net/wifi/aware/PeerHandle;I[B)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
} // namespace android::net::wifi::aware

