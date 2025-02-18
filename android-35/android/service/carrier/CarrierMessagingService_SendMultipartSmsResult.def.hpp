#pragma once

#include "../../../JObject.hpp"

class JIntArray;

namespace android::service::carrier
{
	class CarrierMessagingService_SendMultipartSmsResult : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CarrierMessagingService_SendMultipartSmsResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CarrierMessagingService_SendMultipartSmsResult(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		CarrierMessagingService_SendMultipartSmsResult(jint arg0, JIntArray arg1);
		
		// Methods
		JIntArray getMessageRefs() const;
		jint getSendStatus() const;
	};
} // namespace android::service::carrier

