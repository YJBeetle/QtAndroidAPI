#pragma once

#include "../../java/security/KeyPair.def.hpp"
#include "./AttestedKeyPair.def.hpp"

namespace android::security
{
	// Fields
	
	// Constructors
	inline AttestedKeyPair::AttestedKeyPair(java::security::KeyPair arg0, JObject arg1)
		: JObject(
			"android.security.AttestedKeyPair",
			"(Ljava/security/KeyPair;Ljava/util/List;)V",
			arg0.object(),
			arg1.object()
		) {}
	
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

