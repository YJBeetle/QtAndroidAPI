#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::telephony::mbms
{
	class MbmsErrors : public __JniBaseClass
	{
	public:
		// Fields
		static jint ERROR_MIDDLEWARE_LOST();
		static jint ERROR_MIDDLEWARE_NOT_BOUND();
		static jint ERROR_NO_UNIQUE_MIDDLEWARE();
		static jint SUCCESS();
		static jint UNKNOWN();
		
		MbmsErrors(QAndroidJniObject obj);
		// Constructors
		MbmsErrors() = default;
		
		// Methods
	};
} // namespace android::telephony::mbms

