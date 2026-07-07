#pragma once

#include "../../../JByteArray.hpp"
#include "./EapAkaInfo.def.hpp"

namespace android::net::eap
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JByteArray EapAkaInfo::getReauthId() const
	{
		return callObjectMethod(
			"getReauthId",
			"()[B"
		);
	}
} // namespace android::net::eap

// Base class headers
#include "./EapInfo.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::eap;
#endif
