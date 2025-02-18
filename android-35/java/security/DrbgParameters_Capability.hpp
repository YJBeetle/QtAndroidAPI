#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./DrbgParameters_Capability.def.hpp"

namespace java::security
{
	// Fields
	inline java::security::DrbgParameters_Capability DrbgParameters_Capability::NONE()
	{
		return getStaticObjectField(
			"java.security.DrbgParameters$Capability",
			"NONE",
			"Ljava/security/DrbgParameters$Capability;"
		);
	}
	inline java::security::DrbgParameters_Capability DrbgParameters_Capability::PR_AND_RESEED()
	{
		return getStaticObjectField(
			"java.security.DrbgParameters$Capability",
			"PR_AND_RESEED",
			"Ljava/security/DrbgParameters$Capability;"
		);
	}
	inline java::security::DrbgParameters_Capability DrbgParameters_Capability::RESEED_ONLY()
	{
		return getStaticObjectField(
			"java.security.DrbgParameters$Capability",
			"RESEED_ONLY",
			"Ljava/security/DrbgParameters$Capability;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::security::DrbgParameters_Capability DrbgParameters_Capability::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.security.DrbgParameters$Capability",
			"valueOf",
			"(Ljava/lang/String;)Ljava/security/DrbgParameters$Capability;",
			arg0.object<jstring>()
		);
	}
	inline JArray DrbgParameters_Capability::values()
	{
		return callStaticObjectMethod(
			"java.security.DrbgParameters$Capability",
			"values",
			"()[Ljava/security/DrbgParameters$Capability;"
		);
	}
	inline jboolean DrbgParameters_Capability::supportsPredictionResistance() const
	{
		return callMethod<jboolean>(
			"supportsPredictionResistance",
			"()Z"
		);
	}
	inline jboolean DrbgParameters_Capability::supportsReseeding() const
	{
		return callMethod<jboolean>(
			"supportsReseeding",
			"()Z"
		);
	}
	inline JString DrbgParameters_Capability::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security

// Base class headers
#include "../lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security;
#endif
