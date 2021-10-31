#include "./WifiManager_ScanResultsCallback.hpp"

namespace android::net::wifi
{
	// Fields
	
	// QJniObject forward
	WifiManager_ScanResultsCallback::WifiManager_ScanResultsCallback(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	WifiManager_ScanResultsCallback::WifiManager_ScanResultsCallback()
		: __JniBaseClass(
			"android.net.wifi.WifiManager$ScanResultsCallback",
			"()V"
		) {}
	
	// Methods
	void WifiManager_ScanResultsCallback::onScanResultsAvailable()
	{
		callMethod<void>(
			"onScanResultsAvailable",
			"()V"
		);
	}
} // namespace android::net::wifi

