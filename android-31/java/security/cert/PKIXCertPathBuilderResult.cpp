#include "../../../JString.hpp"
#include "./CertPath.hpp"
#include "./TrustAnchor.hpp"
#include "./PKIXCertPathBuilderResult.hpp"

namespace java::security::cert
{
	// Fields
	
	// QAndroidJniObject forward
	PKIXCertPathBuilderResult::PKIXCertPathBuilderResult(QAndroidJniObject obj) : java::security::cert::PKIXCertPathValidatorResult(obj) {}
	
	// Constructors
	PKIXCertPathBuilderResult::PKIXCertPathBuilderResult(java::security::cert::CertPath arg0, java::security::cert::TrustAnchor arg1, JObject arg2, JObject arg3)
		: java::security::cert::PKIXCertPathValidatorResult(
			"java.security.cert.PKIXCertPathBuilderResult",
			"(Ljava/security/cert/CertPath;Ljava/security/cert/TrustAnchor;Ljava/security/cert/PolicyNode;Ljava/security/PublicKey;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	java::security::cert::CertPath PKIXCertPathBuilderResult::getCertPath() const
	{
		return callObjectMethod(
			"getCertPath",
			"()Ljava/security/cert/CertPath;"
		);
	}
	JString PKIXCertPathBuilderResult::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security::cert

