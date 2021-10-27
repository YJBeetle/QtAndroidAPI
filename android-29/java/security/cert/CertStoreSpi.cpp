#include "./CertStoreSpi.hpp"

namespace java::security::cert
{
	// Fields
	
	CertStoreSpi::CertStoreSpi(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CertStoreSpi::CertStoreSpi(__JniBaseClass &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertStoreSpi",
			"(Ljava/security/cert/CertStoreParameters;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject CertStoreSpi::engineGetCRLs(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"engineGetCRLs",
			"(Ljava/security/cert/CRLSelector;)Ljava/util/Collection;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CertStoreSpi::engineGetCertificates(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"engineGetCertificates",
			"(Ljava/security/cert/CertSelector;)Ljava/util/Collection;",
			arg0.__jniObject().object()
		);
	}
} // namespace java::security::cert

