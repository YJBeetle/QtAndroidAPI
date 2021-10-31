#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::telephony
{
	class TelephonyScanManager_NetworkScanCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TelephonyScanManager_NetworkScanCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TelephonyScanManager_NetworkScanCallback(QAndroidJniObject obj);
		
		// Constructors
		TelephonyScanManager_NetworkScanCallback();
		
		// Methods
		void onComplete();
		void onError(jint arg0);
		void onResults(__JniBaseClass arg0);
	};
} // namespace android::telephony

