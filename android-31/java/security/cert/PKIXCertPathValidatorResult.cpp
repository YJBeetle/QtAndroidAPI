#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./TrustAnchor.hpp"
#include "./PKIXCertPathValidatorResult.hpp"

namespace java::security::cert
{
	// Fields
	
	// Constructors
	PKIXCertPathValidatorResult::PKIXCertPathValidatorResult(java::security::cert::TrustAnchor arg0, JObject arg1, JObject arg2)
		: JObject(
			"java.security.cert.PKIXCertPathValidatorResult",
			"(Ljava/security/cert/TrustAnchor;Ljava/security/cert/PolicyNode;Ljava/security/PublicKey;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	JObject PKIXCertPathValidatorResult::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	JObject PKIXCertPathValidatorResult::getPolicyTree() const
	{
		return callObjectMethod(
			"getPolicyTree",
			"()Ljava/security/cert/PolicyNode;"
		);
	}
	JObject PKIXCertPathValidatorResult::getPublicKey() const
	{
		return callObjectMethod(
			"getPublicKey",
			"()Ljava/security/PublicKey;"
		);
	}
	java::security::cert::TrustAnchor PKIXCertPathValidatorResult::getTrustAnchor() const
	{
		return callObjectMethod(
			"getTrustAnchor",
			"()Ljava/security/cert/TrustAnchor;"
		);
	}
	JString PKIXCertPathValidatorResult::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security::cert

