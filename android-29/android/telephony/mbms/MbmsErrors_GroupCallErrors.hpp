#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::telephony::mbms
{
	class MbmsErrors_GroupCallErrors : public __JniBaseClass
	{
	public:
		// Fields
		static jint ERROR_DUPLICATE_START_GROUP_CALL();
		static jint ERROR_UNABLE_TO_START_SERVICE();
		
		MbmsErrors_GroupCallErrors(QAndroidJniObject obj);
		// Constructors
		MbmsErrors_GroupCallErrors() = default;
		
		// Methods
	};
} // namespace android::telephony::mbms

