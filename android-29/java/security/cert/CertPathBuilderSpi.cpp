#include "./CertPathBuilderSpi.hpp"

namespace java::security::cert
{
	// Fields
	
	CertPathBuilderSpi::CertPathBuilderSpi(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CertPathBuilderSpi::CertPathBuilderSpi()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertPathBuilderSpi",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject CertPathBuilderSpi::engineBuild(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"engineBuild",
			"(Ljava/security/cert/CertPathParameters;)Ljava/security/cert/CertPathBuilderResult;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CertPathBuilderSpi::engineGetRevocationChecker()
	{
		return __thiz.callObjectMethod(
			"engineGetRevocationChecker",
			"()Ljava/security/cert/CertPathChecker;"
		);
	}
} // namespace java::security::cert

