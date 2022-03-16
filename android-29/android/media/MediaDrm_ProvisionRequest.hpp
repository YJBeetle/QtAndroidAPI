#pragma once

#include "../../JByteArray.hpp"
#include "../../JString.hpp"
#include "./MediaDrm_ProvisionRequest.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JByteArray MediaDrm_ProvisionRequest::getData() const
	{
		return callObjectMethod(
			"getData",
			"()[B"
		);
	}
	inline JString MediaDrm_ProvisionRequest::getDefaultUrl() const
	{
		return callObjectMethod(
			"getDefaultUrl",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media

// Base class headers

