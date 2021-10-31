#include "./CertPath.hpp"
#include "./CertPathValidatorSpi.hpp"

namespace java::security::cert
{
	// Fields
	
	// QAndroidJniObject forward
	CertPathValidatorSpi::CertPathValidatorSpi(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	CertPathValidatorSpi::CertPathValidatorSpi()
		: __JniBaseClass(
			"java.security.cert.CertPathValidatorSpi",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject CertPathValidatorSpi::engineGetRevocationChecker()
	{
		return callObjectMethod(
			"engineGetRevocationChecker",
			"()Ljava/security/cert/CertPathChecker;"
		);
	}
	QAndroidJniObject CertPathValidatorSpi::engineValidate(java::security::cert::CertPath arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"engineValidate",
			"(Ljava/security/cert/CertPath;Ljava/security/cert/CertPathParameters;)Ljava/security/cert/CertPathValidatorResult;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace java::security::cert

