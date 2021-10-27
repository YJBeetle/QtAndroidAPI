#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::telecom
{
	class CallScreeningService_CallResponse : public __JniBaseClass
	{
	public:
		// Fields
		
		CallScreeningService_CallResponse(QAndroidJniObject obj);
		// Constructors
		CallScreeningService_CallResponse() = default;
		
		// Methods
		jboolean getDisallowCall();
		jboolean getRejectCall();
		jboolean getSilenceCall();
		jboolean getSkipCallLog();
		jboolean getSkipNotification();
	};
} // namespace android::telecom

