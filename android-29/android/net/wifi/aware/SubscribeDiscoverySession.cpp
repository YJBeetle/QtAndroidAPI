#include "./SubscribeConfig.hpp"
#include "./WifiAwareManager.hpp"
#include "./SubscribeDiscoverySession.hpp"

namespace android::net::wifi::aware
{
	// Fields
	
	SubscribeDiscoverySession::SubscribeDiscoverySession(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void SubscribeDiscoverySession::updateSubscribe(android::net::wifi::aware::SubscribeConfig arg0)
	{
		__thiz.callMethod<void>(
			"updateSubscribe",
			"(Landroid/net/wifi/aware/SubscribeConfig;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::net::wifi::aware

