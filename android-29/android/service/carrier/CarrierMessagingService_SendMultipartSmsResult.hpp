#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::service::carrier
{
	class CarrierMessagingService_SendMultipartSmsResult : public __JniBaseClass
	{
	public:
		// Fields
		
		CarrierMessagingService_SendMultipartSmsResult(QAndroidJniObject obj);
		// Constructors
		CarrierMessagingService_SendMultipartSmsResult(jint &arg0, jintArray &arg1);
		CarrierMessagingService_SendMultipartSmsResult() = default;
		
		// Methods
		jintArray getMessageRefs();
		jint getSendStatus();
	};
} // namespace android::service::carrier

