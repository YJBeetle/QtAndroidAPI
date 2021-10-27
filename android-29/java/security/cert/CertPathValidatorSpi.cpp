#include "./CertPath.hpp"
#include "./CertPathValidatorSpi.hpp"

namespace java::security::cert
{
	// Fields
	
	CertPathValidatorSpi::CertPathValidatorSpi(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CertPathValidatorSpi::CertPathValidatorSpi()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertPathValidatorSpi",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject CertPathValidatorSpi::engineGetRevocationChecker()
	{
		return __thiz.callObjectMethod(
			"engineGetRevocationChecker",
			"()Ljava/security/cert/CertPathChecker;"
		);
	}
	QAndroidJniObject CertPathValidatorSpi::engineValidate(java::security::cert::CertPath arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"engineValidate",
			"(Ljava/security/cert/CertPath;Ljava/security/cert/CertPathParameters;)Ljava/security/cert/CertPathValidatorResult;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace java::security::cert

