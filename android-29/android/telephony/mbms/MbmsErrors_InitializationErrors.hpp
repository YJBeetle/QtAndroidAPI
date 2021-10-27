#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::telephony::mbms
{
	class MbmsErrors_InitializationErrors : public __JniBaseClass
	{
	public:
		// Fields
		static jint ERROR_APP_PERMISSIONS_NOT_GRANTED();
		static jint ERROR_DUPLICATE_INITIALIZE();
		static jint ERROR_UNABLE_TO_INITIALIZE();
		
		MbmsErrors_InitializationErrors(QAndroidJniObject obj);
		// Constructors
		MbmsErrors_InitializationErrors() = default;
		
		// Methods
	};
} // namespace android::telephony::mbms

