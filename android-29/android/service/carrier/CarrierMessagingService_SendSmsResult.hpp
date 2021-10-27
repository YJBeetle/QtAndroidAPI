#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::service::carrier
{
	class CarrierMessagingService_SendSmsResult : public __JniBaseClass
	{
	public:
		// Fields
		
		CarrierMessagingService_SendSmsResult(QAndroidJniObject obj);
		// Constructors
		CarrierMessagingService_SendSmsResult(jint &arg0, jint &arg1);
		CarrierMessagingService_SendSmsResult() = default;
		
		// Methods
		jint getMessageRef();
		jint getSendStatus();
	};
} // namespace android::service::carrier

