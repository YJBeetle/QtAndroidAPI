#pragma once

#include "../../JByteArray.hpp"
#include "../../JString.hpp"
#include "./ProcessedData.def.hpp"

namespace android::drm
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JString ProcessedData::getAccountId() const
	{
		return callObjectMethod(
			"getAccountId",
			"()Ljava/lang/String;"
		);
	}
	inline JByteArray ProcessedData::getData() const
	{
		return callObjectMethod(
			"getData",
			"()[B"
		);
	}
	inline JString ProcessedData::getSubscriptionId() const
	{
		return callObjectMethod(
			"getSubscriptionId",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::drm

// Base class headers

