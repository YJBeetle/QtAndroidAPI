#pragma once

#include "./KeyStoreParameter.def.hpp"

namespace android::security
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean KeyStoreParameter::isEncryptionRequired() const
	{
		return callMethod<jboolean>(
			"isEncryptionRequired",
			"()Z"
		);
	}
} // namespace android::security

// Base class headers

