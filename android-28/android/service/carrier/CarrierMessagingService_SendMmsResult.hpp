#pragma once

#include "../../../JObject.hpp"


namespace android::service::carrier
{
	class CarrierMessagingService_SendMmsResult : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CarrierMessagingService_SendMmsResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CarrierMessagingService_SendMmsResult(QAndroidJniObject obj);
		
		// Constructors
		CarrierMessagingService_SendMmsResult(jint arg0, jbyteArray arg1);
		
		// Methods
		jbyteArray getSendConfPdu();
		jint getSendStatus();
	};
} // namespace android::service::carrier

