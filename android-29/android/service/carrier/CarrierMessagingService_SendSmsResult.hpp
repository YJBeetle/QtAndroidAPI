#pragma once

#include "../../../JObject.hpp"

namespace android::service::carrier
{
	class CarrierMessagingService_SendSmsResult : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CarrierMessagingService_SendSmsResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CarrierMessagingService_SendSmsResult(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		CarrierMessagingService_SendSmsResult(jint arg0, jint arg1);
		
		// Methods
		jint getMessageRef() const;
		jint getSendStatus() const;
	};
} // namespace android::service::carrier

