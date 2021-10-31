#include "./CertPathTrustManagerParameters.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// QAndroidJniObject forward
	CertPathTrustManagerParameters::CertPathTrustManagerParameters(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	CertPathTrustManagerParameters::CertPathTrustManagerParameters(__JniBaseClass arg0)
		: __JniBaseClass(
			"javax.net.ssl.CertPathTrustManagerParameters",
			"(Ljava/security/cert/CertPathParameters;)V",
			arg0.object()
		) {}
	
	// Methods
	QAndroidJniObject CertPathTrustManagerParameters::getParameters()
	{
		return callObjectMethod(
			"getParameters",
			"()Ljava/security/cert/CertPathParameters;"
		);
	}
} // namespace javax::net::ssl

