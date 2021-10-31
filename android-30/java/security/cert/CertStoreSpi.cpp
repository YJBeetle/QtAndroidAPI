#include "./CertStoreSpi.hpp"

namespace java::security::cert
{
	// Fields
	
	// QAndroidJniObject forward
	CertStoreSpi::CertStoreSpi(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	CertStoreSpi::CertStoreSpi(__JniBaseClass arg0)
		: __JniBaseClass(
			"java.security.cert.CertStoreSpi",
			"(Ljava/security/cert/CertStoreParameters;)V",
			arg0.object()
		) {}
	
	// Methods
	__JniBaseClass CertStoreSpi::engineGetCRLs(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"engineGetCRLs",
			"(Ljava/security/cert/CRLSelector;)Ljava/util/Collection;",
			arg0.object()
		);
	}
	__JniBaseClass CertStoreSpi::engineGetCertificates(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"engineGetCertificates",
			"(Ljava/security/cert/CertSelector;)Ljava/util/Collection;",
			arg0.object()
		);
	}
} // namespace java::security::cert

