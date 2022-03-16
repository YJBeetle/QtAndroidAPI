#include "../../../JString.hpp"
#include "./CertificateExpiredException.hpp"

namespace javax::security::cert
{
	// Fields
	
	// Constructors
	CertificateExpiredException::CertificateExpiredException()
		: javax::security::cert::CertificateException(
			"javax.security.cert.CertificateExpiredException",
			"()V"
		) {}
	CertificateExpiredException::CertificateExpiredException(JString arg0)
		: javax::security::cert::CertificateException(
			"javax.security.cert.CertificateExpiredException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace javax::security::cert

