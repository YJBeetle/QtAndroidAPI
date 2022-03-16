#include "./WifiManager_ScanResultsCallback.hpp"

namespace android::net::wifi
{
	// Fields
	
	// Constructors
	WifiManager_ScanResultsCallback::WifiManager_ScanResultsCallback()
		: JObject(
			"android.net.wifi.WifiManager$ScanResultsCallback",
			"()V"
		) {}
	
	// Methods
	void WifiManager_ScanResultsCallback::onScanResultsAvailable() const
	{
		callMethod<void>(
			"onScanResultsAvailable",
			"()V"
		);
	}
} // namespace android::net::wifi

