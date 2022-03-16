#include "../../../JString.hpp"
#include "./WifiManager_WpsCallback.hpp"

namespace android::net::wifi
{
	// Fields
	
	// Constructors
	WifiManager_WpsCallback::WifiManager_WpsCallback()
		: JObject(
			"android.net.wifi.WifiManager$WpsCallback",
			"()V"
		) {}
	
	// Methods
	void WifiManager_WpsCallback::onFailed(jint arg0) const
	{
		callMethod<void>(
			"onFailed",
			"(I)V",
			arg0
		);
	}
	void WifiManager_WpsCallback::onStarted(JString arg0) const
	{
		callMethod<void>(
			"onStarted",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void WifiManager_WpsCallback::onSucceeded() const
	{
		callMethod<void>(
			"onSucceeded",
			"()V"
		);
	}
} // namespace android::net::wifi

