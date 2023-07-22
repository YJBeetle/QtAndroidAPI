#pragma once

#include "../../../JObject.hpp"

namespace android::net::wifi
{
	class WifiManager_ScanResultsCallback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiManager_ScanResultsCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiManager_ScanResultsCallback(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		WifiManager_ScanResultsCallback();
		
		// Methods
		void onScanResultsAvailable() const;
	};
} // namespace android::net::wifi

