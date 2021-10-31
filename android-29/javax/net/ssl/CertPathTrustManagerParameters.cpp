#include "./CertPathTrustManagerParameters.hpp"

namespace javax::net::ssl
{
	// Fields
	
	CertPathTrustManagerParameters::CertPathTrustManagerParameters(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CertPathTrustManagerParameters::CertPathTrustManagerParameters(__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.CertPathTrustManagerParameters",
			"(Ljava/security/cert/CertPathParameters;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject CertPathTrustManagerParameters::getParameters()
	{
		return __thiz.callObjectMethod(
			"getParameters",
			"()Ljava/security/cert/CertPathParameters;"
		);
	}
} // namespace javax::net::ssl

