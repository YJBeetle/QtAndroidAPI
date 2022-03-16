#pragma once

#include "../../../JObject.hpp"

class JByteArray;

namespace android::service::carrier
{
	class CarrierMessagingService_SendMmsResult : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CarrierMessagingService_SendMmsResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CarrierMessagingService_SendMmsResult(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		CarrierMessagingService_SendMmsResult(jint arg0, JByteArray arg1);
		
		// Methods
		JByteArray getSendConfPdu() const;
		jint getSendStatus() const;
	};
} // namespace android::service::carrier

