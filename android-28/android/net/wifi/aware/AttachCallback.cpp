#include "./WifiAwareSession.hpp"
#include "./AttachCallback.hpp"

namespace android::net::wifi::aware
{
	// Fields
	
	// Constructors
	AttachCallback::AttachCallback()
		: JObject(
			"android.net.wifi.aware.AttachCallback",
			"()V"
		) {}
	
	// Methods
	void AttachCallback::onAttachFailed() const
	{
		callMethod<void>(
			"onAttachFailed",
			"()V"
		);
	}
	void AttachCallback::onAttached(android::net::wifi::aware::WifiAwareSession arg0) const
	{
		callMethod<void>(
			"onAttached",
			"(Landroid/net/wifi/aware/WifiAwareSession;)V",
			arg0.object()
		);
	}
} // namespace android::net::wifi::aware

