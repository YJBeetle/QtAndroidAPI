#pragma once

#include "../../../JObject.hpp"


namespace android::service::carrier
{
	class CarrierMessagingService_SendMultipartSmsResult : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CarrierMessagingService_SendMultipartSmsResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CarrierMessagingService_SendMultipartSmsResult(QJniObject obj);
		
		// Constructors
		CarrierMessagingService_SendMultipartSmsResult(jint arg0, jintArray arg1);
		
		// Methods
		jintArray getMessageRefs();
		jint getSendStatus();
	};
} // namespace android::service::carrier

