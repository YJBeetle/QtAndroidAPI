#pragma once

#include "../../../JByteArray.hpp"
#include "./CredentialDataRequest.def.hpp"
#include "./CredentialDataResult.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/security/KeyPair.def.hpp"
#include "./PresentationSession.def.hpp"

namespace android::security::identity
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::security::identity::CredentialDataResult PresentationSession::getCredentialData(JString arg0, android::security::identity::CredentialDataRequest arg1) const
	{
		return callObjectMethod(
			"getCredentialData",
			"(Ljava/lang/String;Landroid/security/identity/CredentialDataRequest;)Landroid/security/identity/CredentialDataResult;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline java::security::KeyPair PresentationSession::getEphemeralKeyPair() const
	{
		return callObjectMethod(
			"getEphemeralKeyPair",
			"()Ljava/security/KeyPair;"
		);
	}
	inline void PresentationSession::setReaderEphemeralPublicKey(JObject arg0) const
	{
		callMethod<void>(
			"setReaderEphemeralPublicKey",
			"(Ljava/security/PublicKey;)V",
			arg0.object()
		);
	}
	inline void PresentationSession::setSessionTranscript(JByteArray arg0) const
	{
		callMethod<void>(
			"setSessionTranscript",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
} // namespace android::security::identity

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::security::identity;
#endif
