#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::telephony::mbms
{
	class MbmsErrors_StreamingErrors : public __JniBaseClass
	{
	public:
		// Fields
		static jint ERROR_CONCURRENT_SERVICE_LIMIT_REACHED();
		static jint ERROR_DUPLICATE_START_STREAM();
		static jint ERROR_UNABLE_TO_START_SERVICE();
		
		MbmsErrors_StreamingErrors(QAndroidJniObject obj);
		// Constructors
		MbmsErrors_StreamingErrors() = default;
		
		// Methods
	};
} // namespace android::telephony::mbms

