#include "./CertPath.hpp"
#include "./CertPathValidatorSpi.hpp"

namespace java::security::cert
{
	// Fields
	
	// QJniObject forward
	CertPathValidatorSpi::CertPathValidatorSpi(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	CertPathValidatorSpi::CertPathValidatorSpi()
		: JObject(
			"java.security.cert.CertPathValidatorSpi",
			"()V"
		) {}
	
	// Methods
	JObject CertPathValidatorSpi::engineGetRevocationChecker() const
	{
		return callObjectMethod(
			"engineGetRevocationChecker",
			"()Ljava/security/cert/CertPathChecker;"
		);
	}
	JObject CertPathValidatorSpi::engineValidate(java::security::cert::CertPath arg0, JObject arg1) const
	{
		return callObjectMethod(
			"engineValidate",
			"(Ljava/security/cert/CertPath;Ljava/security/cert/CertPathParameters;)Ljava/security/cert/CertPathValidatorResult;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace java::security::cert

