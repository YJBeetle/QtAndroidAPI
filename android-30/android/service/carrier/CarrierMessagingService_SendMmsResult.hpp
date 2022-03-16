#pragma once

#include "../../../JByteArray.hpp"
#include "./CarrierMessagingService_SendMmsResult.def.hpp"

namespace android::service::carrier
{
	// Fields
	
	// Constructors
	inline CarrierMessagingService_SendMmsResult::CarrierMessagingService_SendMmsResult(jint arg0, JByteArray arg1)
		: JObject(
			"android.service.carrier.CarrierMessagingService$SendMmsResult",
			"(I[B)V",
			arg0,
			arg1.object<jbyteArray>()
		) {}
	
	// Methods
	inline JByteArray CarrierMessagingService_SendMmsResult::getSendConfPdu() const
	{
		return callObjectMethod(
			"getSendConfPdu",
			"()[B"
		);
	}
	inline jint CarrierMessagingService_SendMmsResult::getSendStatus() const
	{
		return callMethod<jint>(
			"getSendStatus",
			"()I"
		);
	}
} // namespace android::service::carrier

// Base class headers

