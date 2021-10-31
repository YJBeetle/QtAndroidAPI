#include "./IdentityScope.hpp"
#include "./KeyPair.hpp"
#include "./Signer.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	Signer::Signer(QJniObject obj) : java::security::Identity(obj) {}
	
	// Constructors
	Signer::Signer(jstring arg0)
		: java::security::Identity(
			"java.security.Signer",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	Signer::Signer(jstring arg0, java::security::IdentityScope arg1)
		: java::security::Identity(
			"java.security.Signer",
			"(Ljava/lang/String;Ljava/security/IdentityScope;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	__JniBaseClass Signer::getPrivateKey()
	{
		return callObjectMethod(
			"getPrivateKey",
			"()Ljava/security/PrivateKey;"
		);
	}
	void Signer::setKeyPair(java::security::KeyPair arg0)
	{
		callMethod<void>(
			"setKeyPair",
			"(Ljava/security/KeyPair;)V",
			arg0.object()
		);
	}
	jstring Signer::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security

