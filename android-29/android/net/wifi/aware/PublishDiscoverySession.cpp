#include "./PublishConfig.hpp"
#include "./WifiAwareManager.hpp"
#include "./PublishDiscoverySession.hpp"

namespace android::net::wifi::aware
{
	// Fields
	
	PublishDiscoverySession::PublishDiscoverySession(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void PublishDiscoverySession::updatePublish(android::net::wifi::aware::PublishConfig arg0)
	{
		__thiz.callMethod<void>(
			"updatePublish",
			"(Landroid/net/wifi/aware/PublishConfig;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::net::wifi::aware

