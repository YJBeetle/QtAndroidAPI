#pragma once

#include "./WifiManager_ScanResultsCallback.def.hpp"

namespace android::net::wifi
{
	// Fields
	
	// Constructors
	inline WifiManager_ScanResultsCallback::WifiManager_ScanResultsCallback()
		: JObject(
			"android.net.wifi.WifiManager$ScanResultsCallback",
			"()V"
		) {}
	
	// Methods
	inline void WifiManager_ScanResultsCallback::onScanResultsAvailable() const
	{
		callMethod<void>(
			"onScanResultsAvailable",
			"()V"
		);
	}
} // namespace android::net::wifi

// Base class headers

