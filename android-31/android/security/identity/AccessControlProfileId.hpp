#pragma once

#include "./AccessControlProfileId.def.hpp"

namespace android::security::identity
{
	// Fields
	
	// Constructors
	inline AccessControlProfileId::AccessControlProfileId(jint arg0)
		: JObject(
			"android.security.identity.AccessControlProfileId",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline jint AccessControlProfileId::getId() const
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
} // namespace android::security::identity

// Base class headers

