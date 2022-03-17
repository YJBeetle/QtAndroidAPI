#pragma once

#include "../../JString.hpp"
#include "./IdentityScope.def.hpp"
#include "./KeyPair.def.hpp"
#include "./Signer.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline Signer::Signer(JString arg0)
		: java::security::Identity(
			"java.security.Signer",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline Signer::Signer(JString arg0, java::security::IdentityScope arg1)
		: java::security::Identity(
			"java.security.Signer",
			"(Ljava/lang/String;Ljava/security/IdentityScope;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
	inline JObject Signer::getPrivateKey() const
	{
		return callObjectMethod(
			"getPrivateKey",
			"()Ljava/security/PrivateKey;"
		);
	}
	inline void Signer::setKeyPair(java::security::KeyPair arg0) const
	{
		callMethod<void>(
			"setKeyPair",
			"(Ljava/security/KeyPair;)V",
			arg0.object()
		);
	}
	inline JString Signer::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security

// Base class headers
#include "./Identity.hpp"

