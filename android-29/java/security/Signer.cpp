#include "../../JString.hpp"
#include "./IdentityScope.hpp"
#include "./KeyPair.hpp"
#include "./Signer.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	Signer::Signer(JString arg0)
		: java::security::Identity(
			"java.security.Signer",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	Signer::Signer(JString arg0, java::security::IdentityScope arg1)
		: java::security::Identity(
			"java.security.Signer",
			"(Ljava/lang/String;Ljava/security/IdentityScope;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
	JObject Signer::getPrivateKey() const
	{
		return callObjectMethod(
			"getPrivateKey",
			"()Ljava/security/PrivateKey;"
		);
	}
	void Signer::setKeyPair(java::security::KeyPair arg0) const
	{
		callMethod<void>(
			"setKeyPair",
			"(Ljava/security/KeyPair;)V",
			arg0.object()
		);
	}
	JString Signer::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security

