#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::net::wifi
{
	class WifiManager_ScanResultsCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiManager_ScanResultsCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WifiManager_ScanResultsCallback(QJniObject obj);
		
		// Constructors
		WifiManager_ScanResultsCallback();
		
		// Methods
		void onScanResultsAvailable();
	};
} // namespace android::net::wifi

