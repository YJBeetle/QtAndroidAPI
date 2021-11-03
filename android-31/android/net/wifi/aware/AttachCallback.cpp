#include "./WifiAwareSession.hpp"
#include "./AttachCallback.hpp"

namespace android::net::wifi::aware
{
	// Fields
	
	// QJniObject forward
	AttachCallback::AttachCallback(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	AttachCallback::AttachCallback()
		: JObject(
			"android.net.wifi.aware.AttachCallback",
			"()V"
		) {}
	
	// Methods
	void AttachCallback::onAttachFailed()
	{
		callMethod<void>(
			"onAttachFailed",
			"()V"
		);
	}
	void AttachCallback::onAttached(android::net::wifi::aware::WifiAwareSession arg0)
	{
		callMethod<void>(
			"onAttached",
			"(Landroid/net/wifi/aware/WifiAwareSession;)V",
			arg0.object()
		);
	}
} // namespace android::net::wifi::aware

