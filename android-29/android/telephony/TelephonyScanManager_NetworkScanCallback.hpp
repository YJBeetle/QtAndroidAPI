#pragma once

#include "../../JObject.hpp"


namespace android::telephony
{
	class TelephonyScanManager_NetworkScanCallback : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TelephonyScanManager_NetworkScanCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TelephonyScanManager_NetworkScanCallback(QAndroidJniObject obj);
		
		// Constructors
		TelephonyScanManager_NetworkScanCallback();
		
		// Methods
		void onComplete();
		void onError(jint arg0);
		void onResults(JObject arg0);
	};
} // namespace android::telephony

