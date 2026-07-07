#pragma once

#include "../../JByteArray.hpp"
#include "./DrbgParameters_Reseed.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JByteArray DrbgParameters_Reseed::getAdditionalInput() const
	{
		return callObjectMethod(
			"getAdditionalInput",
			"()[B"
		);
	}
	inline jboolean DrbgParameters_Reseed::getPredictionResistance() const
	{
		return callMethod<jboolean>(
			"getPredictionResistance",
			"()Z"
		);
	}
} // namespace java::security

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security;
#endif
