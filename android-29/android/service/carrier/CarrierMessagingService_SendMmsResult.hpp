#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::service::carrier
{
	class CarrierMessagingService_SendMmsResult : public __JniBaseClass
	{
	public:
		// Fields
		
		CarrierMessagingService_SendMmsResult(QAndroidJniObject obj);
		// Constructors
		CarrierMessagingService_SendMmsResult(jint &arg0, jbyteArray &arg1);
		CarrierMessagingService_SendMmsResult() = default;
		
		// Methods
		jbyteArray getSendConfPdu();
		jint getSendStatus();
	};
} // namespace android::service::carrier

