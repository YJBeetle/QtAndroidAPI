#include "./CertificateExpiredException.hpp"

namespace java::security::cert
{
	// Fields
	
	// QJniObject forward
	CertificateExpiredException::CertificateExpiredException(QJniObject obj) : java::security::cert::CertificateException(obj) {}
	
	// Constructors
	CertificateExpiredException::CertificateExpiredException()
		: java::security::cert::CertificateException(
			"java.security.cert.CertificateExpiredException",
			"()V"
		) {}
	CertificateExpiredException::CertificateExpiredException(jstring arg0)
		: java::security::cert::CertificateException(
			"java.security.cert.CertificateExpiredException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::security::cert

