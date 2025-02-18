#pragma once

#include "../../JByteArray.hpp"
#include "../../JString.hpp"
#include "./DrbgParameters_Capability.def.hpp"
#include "./DrbgParameters_Instantiation.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::security::DrbgParameters_Capability DrbgParameters_Instantiation::getCapability() const
	{
		return callObjectMethod(
			"getCapability",
			"()Ljava/security/DrbgParameters$Capability;"
		);
	}
	inline JByteArray DrbgParameters_Instantiation::getPersonalizationString() const
	{
		return callObjectMethod(
			"getPersonalizationString",
			"()[B"
		);
	}
	inline jint DrbgParameters_Instantiation::getStrength() const
	{
		return callMethod<jint>(
			"getStrength",
			"()I"
		);
	}
	inline JString DrbgParameters_Instantiation::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security;
#endif
