#pragma once

#include "../../../JByteArray.hpp"
#include "./PersonalizationData.def.hpp"
#include "./WritableIdentityCredential.def.hpp"

namespace android::security::identity
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject WritableIdentityCredential::getCredentialKeyCertificateChain(JByteArray arg0) const
	{
		return callObjectMethod(
			"getCredentialKeyCertificateChain",
			"([B)Ljava/util/Collection;",
			arg0.object<jbyteArray>()
		);
	}
	inline JByteArray WritableIdentityCredential::personalize(android::security::identity::PersonalizationData arg0) const
	{
		return callObjectMethod(
			"personalize",
			"(Landroid/security/identity/PersonalizationData;)[B",
			arg0.object()
		);
	}
} // namespace android::security::identity

// Base class headers

