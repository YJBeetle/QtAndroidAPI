#include "./CertificateExpiredException.hpp"

namespace javax::security::cert
{
	// Fields
	
	// QAndroidJniObject forward
	CertificateExpiredException::CertificateExpiredException(QAndroidJniObject obj) : javax::security::cert::CertificateException(obj) {}
	
	// Constructors
	CertificateExpiredException::CertificateExpiredException()
		: javax::security::cert::CertificateException(
			"javax.security.cert.CertificateExpiredException",
			"()V"
		) {}
	CertificateExpiredException::CertificateExpiredException(jstring arg0)
		: javax::security::cert::CertificateException(
			"javax.security.cert.CertificateExpiredException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace javax::security::cert

