#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::telephony
{
	class TelephonyScanManager_NetworkScanCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		TelephonyScanManager_NetworkScanCallback(QAndroidJniObject obj);
		// Constructors
		TelephonyScanManager_NetworkScanCallback();
		
		// Methods
		void onComplete();
		void onError(jint arg0);
		void onResults(__JniBaseClass arg0);
	};
} // namespace android::telephony

