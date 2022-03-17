#pragma once

#include "../../../JIntArray.hpp"
#include "./CarrierMessagingService_SendMultipartSmsResult.def.hpp"

namespace android::service::carrier
{
	// Fields
	
	// Constructors
	inline CarrierMessagingService_SendMultipartSmsResult::CarrierMessagingService_SendMultipartSmsResult(jint arg0, JIntArray arg1)
		: JObject(
			"android.service.carrier.CarrierMessagingService$SendMultipartSmsResult",
			"(I[I)V",
			arg0,
			arg1.object<jintArray>()
		) {}
	
	// Methods
	inline JIntArray CarrierMessagingService_SendMultipartSmsResult::getMessageRefs() const
	{
		return callObjectMethod(
			"getMessageRefs",
			"()[I"
		);
	}
	inline jint CarrierMessagingService_SendMultipartSmsResult::getSendStatus() const
	{
		return callMethod<jint>(
			"getSendStatus",
			"()I"
		);
	}
} // namespace android::service::carrier

// Base class headers

