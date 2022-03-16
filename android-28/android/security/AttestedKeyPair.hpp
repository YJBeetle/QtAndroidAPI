#pragma once

#include "../../JArray.hpp"
#include "../../java/security/KeyPair.def.hpp"
#include "./AttestedKeyPair.def.hpp"

namespace android::security
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject AttestedKeyPair::getAttestationRecord() const
	{
		return callObjectMethod(
			"getAttestationRecord",
			"()Ljava/util/List;"
		);
	}
	inline java::security::KeyPair AttestedKeyPair::getKeyPair() const
	{
		return callObjectMethod(
			"getKeyPair",
			"()Ljava/security/KeyPair;"
		);
	}
} // namespace android::security

// Base class headers

