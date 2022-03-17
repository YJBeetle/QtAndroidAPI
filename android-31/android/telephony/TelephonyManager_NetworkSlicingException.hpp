#pragma once

#include "../../JString.hpp"
#include "./TelephonyManager_NetworkSlicingException.def.hpp"

namespace android::telephony
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JString TelephonyManager_NetworkSlicingException::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::telephony

// Base class headers
#include "../../java/lang/Exception.hpp"

