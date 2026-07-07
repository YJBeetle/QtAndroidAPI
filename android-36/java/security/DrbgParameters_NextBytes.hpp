#pragma once

#include "../../JByteArray.hpp"
#include "./DrbgParameters_NextBytes.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JByteArray DrbgParameters_NextBytes::getAdditionalInput() const
	{
		return callObjectMethod(
			"getAdditionalInput",
			"()[B"
		);
	}
	inline jboolean DrbgParameters_NextBytes::getPredictionResistance() const
	{
		return callMethod<jboolean>(
			"getPredictionResistance",
			"()Z"
		);
	}
	inline jint DrbgParameters_NextBytes::getStrength() const
	{
		return callMethod<jint>(
			"getStrength",
			"()I"
		);
	}
} // namespace java::security

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security;
#endif
