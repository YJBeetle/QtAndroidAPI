#include "./CertPathTrustManagerParameters.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// QJniObject forward
	CertPathTrustManagerParameters::CertPathTrustManagerParameters(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	CertPathTrustManagerParameters::CertPathTrustManagerParameters(JObject arg0)
		: JObject(
			"javax.net.ssl.CertPathTrustManagerParameters",
			"(Ljava/security/cert/CertPathParameters;)V",
			arg0.object()
		) {}
	
	// Methods
	JObject CertPathTrustManagerParameters::getParameters()
	{
		return callObjectMethod(
			"getParameters",
			"()Ljava/security/cert/CertPathParameters;"
		);
	}
} // namespace javax::net::ssl

