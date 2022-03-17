#pragma once

#include "./GnssCapabilities.def.hpp"

namespace android::location
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean GnssCapabilities::hasGnssAntennaInfo() const
	{
		return callMethod<jboolean>(
			"hasGnssAntennaInfo",
			"()Z"
		);
	}
} // namespace android::location

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::location;
#endif
