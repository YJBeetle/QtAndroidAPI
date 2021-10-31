#include "./WifiManager_ScanResultsCallback.hpp"

namespace android::net::wifi
{
	// Fields
	
	// QAndroidJniObject forward
	WifiManager_ScanResultsCallback::WifiManager_ScanResultsCallback(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
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

