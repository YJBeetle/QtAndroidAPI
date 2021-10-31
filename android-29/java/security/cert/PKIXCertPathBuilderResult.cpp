#include "./CertPath.hpp"
#include "./TrustAnchor.hpp"
#include "./PKIXCertPathBuilderResult.hpp"

namespace java::security::cert
{
	// Fields
	
	// QAndroidJniObject forward
	PKIXCertPathBuilderResult::PKIXCertPathBuilderResult(QAndroidJniObject obj) : java::security::cert::PKIXCertPathValidatorResult(obj) {}
	
	// Constructors
	PKIXCertPathBuilderResult::PKIXCertPathBuilderResult(java::security::cert::CertPath arg0, java::security::cert::TrustAnchor arg1, __JniBaseClass arg2, __JniBaseClass arg3)
		: java::security::cert::PKIXCertPathValidatorResult(
			"java.security.cert.PKIXCertPathBuilderResult",
			"(Ljava/security/cert/CertPath;Ljava/security/cert/TrustAnchor;Ljava/security/cert/PolicyNode;Ljava/security/PublicKey;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	QAndroidJniObject PKIXCertPathBuilderResult::getCertPath()
	{
		return callObjectMethod(
			"getCertPath",
			"()Ljava/security/cert/CertPath;"
		);
	}
	jstring PKIXCertPathBuilderResult::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security::cert

