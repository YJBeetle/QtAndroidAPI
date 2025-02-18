#pragma once

#include "./EapInfo.def.hpp"

namespace android::net::eap
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jint EapInfo::getEapMethodType() const
	{
		return callMethod<jint>(
			"getEapMethodType",
			"()I"
		);
	}
} // namespace android::net::eap

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::eap;
#endif
