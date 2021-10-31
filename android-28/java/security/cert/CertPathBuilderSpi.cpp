#include "./CertPathBuilderSpi.hpp"

namespace java::security::cert
{
	// Fields
	
	// QJniObject forward
	CertPathBuilderSpi::CertPathBuilderSpi(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	CertPathBuilderSpi::CertPathBuilderSpi()
		: __JniBaseClass(
			"java.security.cert.CertPathBuilderSpi",
			"()V"
		) {}
	
	// Methods
	__JniBaseClass CertPathBuilderSpi::engineBuild(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"engineBuild",
			"(Ljava/security/cert/CertPathParameters;)Ljava/security/cert/CertPathBuilderResult;",
			arg0.object()
		);
	}
	__JniBaseClass CertPathBuilderSpi::engineGetRevocationChecker()
	{
		return callObjectMethod(
			"engineGetRevocationChecker",
			"()Ljava/security/cert/CertPathChecker;"
		);
	}
} // namespace java::security::cert

