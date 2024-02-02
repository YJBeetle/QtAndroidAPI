#pragma once

#include "../../../java/time/Instant.def.hpp"
#include "./AuthenticationKeyMetadata.def.hpp"

namespace android::security::identity
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::time::Instant AuthenticationKeyMetadata::getExpirationDate() const
	{
		return callObjectMethod(
			"getExpirationDate",
			"()Ljava/time/Instant;"
		);
	}
	inline jint AuthenticationKeyMetadata::getUsageCount() const
	{
		return callMethod<jint>(
			"getUsageCount",
			"()I"
		);
	}
} // namespace android::security::identity

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::security::identity;
#endif
