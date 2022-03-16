#pragma once

#include "./CarrierMessagingService_SendSmsResult.def.hpp"

namespace android::service::carrier
{
	// Fields
	
	// Constructors
	inline CarrierMessagingService_SendSmsResult::CarrierMessagingService_SendSmsResult(jint arg0, jint arg1)
		: JObject(
			"android.service.carrier.CarrierMessagingService$SendSmsResult",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline jint CarrierMessagingService_SendSmsResult::getMessageRef() const
	{
		return callMethod<jint>(
			"getMessageRef",
			"()I"
		);
	}
	inline jint CarrierMessagingService_SendSmsResult::getSendStatus() const
	{
		return callMethod<jint>(
			"getSendStatus",
			"()I"
		);
	}
} // namespace android::service::carrier

// Base class headers

