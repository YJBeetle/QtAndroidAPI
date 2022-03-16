#pragma once

#include "./CallScreeningService_CallResponse.def.hpp"

namespace android::telecom
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean CallScreeningService_CallResponse::getDisallowCall() const
	{
		return callMethod<jboolean>(
			"getDisallowCall",
			"()Z"
		);
	}
	inline jboolean CallScreeningService_CallResponse::getRejectCall() const
	{
		return callMethod<jboolean>(
			"getRejectCall",
			"()Z"
		);
	}
	inline jboolean CallScreeningService_CallResponse::getSilenceCall() const
	{
		return callMethod<jboolean>(
			"getSilenceCall",
			"()Z"
		);
	}
	inline jboolean CallScreeningService_CallResponse::getSkipCallLog() const
	{
		return callMethod<jboolean>(
			"getSkipCallLog",
			"()Z"
		);
	}
	inline jboolean CallScreeningService_CallResponse::getSkipNotification() const
	{
		return callMethod<jboolean>(
			"getSkipNotification",
			"()Z"
		);
	}
} // namespace android::telecom

// Base class headers

