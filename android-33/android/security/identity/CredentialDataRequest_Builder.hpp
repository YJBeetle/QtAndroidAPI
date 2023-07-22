#pragma once

#include "../../../JByteArray.hpp"
#include "./CredentialDataRequest.def.hpp"
#include "./CredentialDataRequest_Builder.def.hpp"

namespace android::security::identity
{
	// Fields
	
	// Constructors
	inline CredentialDataRequest_Builder::CredentialDataRequest_Builder()
		: JObject(
			"android.security.identity.CredentialDataRequest$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::security::identity::CredentialDataRequest CredentialDataRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/security/identity/CredentialDataRequest;"
		);
	}
	inline android::security::identity::CredentialDataRequest_Builder CredentialDataRequest_Builder::setAllowUsingExhaustedKeys(jboolean arg0) const
	{
		return callObjectMethod(
			"setAllowUsingExhaustedKeys",
			"(Z)Landroid/security/identity/CredentialDataRequest$Builder;",
			arg0
		);
	}
	inline android::security::identity::CredentialDataRequest_Builder CredentialDataRequest_Builder::setAllowUsingExpiredKeys(jboolean arg0) const
	{
		return callObjectMethod(
			"setAllowUsingExpiredKeys",
			"(Z)Landroid/security/identity/CredentialDataRequest$Builder;",
			arg0
		);
	}
	inline android::security::identity::CredentialDataRequest_Builder CredentialDataRequest_Builder::setDeviceSignedEntriesToRequest(JObject arg0) const
	{
		return callObjectMethod(
			"setDeviceSignedEntriesToRequest",
			"(Ljava/util/Map;)Landroid/security/identity/CredentialDataRequest$Builder;",
			arg0.object()
		);
	}
	inline android::security::identity::CredentialDataRequest_Builder CredentialDataRequest_Builder::setIncrementUseCount(jboolean arg0) const
	{
		return callObjectMethod(
			"setIncrementUseCount",
			"(Z)Landroid/security/identity/CredentialDataRequest$Builder;",
			arg0
		);
	}
	inline android::security::identity::CredentialDataRequest_Builder CredentialDataRequest_Builder::setIssuerSignedEntriesToRequest(JObject arg0) const
	{
		return callObjectMethod(
			"setIssuerSignedEntriesToRequest",
			"(Ljava/util/Map;)Landroid/security/identity/CredentialDataRequest$Builder;",
			arg0.object()
		);
	}
	inline android::security::identity::CredentialDataRequest_Builder CredentialDataRequest_Builder::setReaderSignature(JByteArray arg0) const
	{
		return callObjectMethod(
			"setReaderSignature",
			"([B)Landroid/security/identity/CredentialDataRequest$Builder;",
			arg0.object<jbyteArray>()
		);
	}
	inline android::security::identity::CredentialDataRequest_Builder CredentialDataRequest_Builder::setRequestMessage(JByteArray arg0) const
	{
		return callObjectMethod(
			"setRequestMessage",
			"([B)Landroid/security/identity/CredentialDataRequest$Builder;",
			arg0.object<jbyteArray>()
		);
	}
} // namespace android::security::identity

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::security::identity;
#endif
