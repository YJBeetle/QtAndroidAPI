#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::telephony
{
	class TelephonyScanManager : public __JniBaseClass
	{
	public:
		// Fields
		
		TelephonyScanManager(QAndroidJniObject obj);
		// Constructors
		TelephonyScanManager();
		
		// Methods
	};
} // namespace android::telephony

