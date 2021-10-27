#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::telephony
{
	class TelephonyManager_CellInfoCallback : public __JniBaseClass
	{
	public:
		// Fields
		static jint ERROR_MODEM_ERROR();
		static jint ERROR_TIMEOUT();
		
		TelephonyManager_CellInfoCallback(QAndroidJniObject obj);
		// Constructors
		TelephonyManager_CellInfoCallback();
		
		// Methods
		void onCellInfo(__JniBaseClass arg0);
		void onError(jint arg0, jthrowable arg1);
	};
} // namespace android::telephony

