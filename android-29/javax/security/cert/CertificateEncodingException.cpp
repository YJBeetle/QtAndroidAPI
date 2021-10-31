#include "./CertificateEncodingException.hpp"

namespace javax::security::cert
{
	// Fields
	
	// QJniObject forward
	CertificateEncodingException::CertificateEncodingException(QJniObject obj) : javax::security::cert::CertificateException(obj) {}
	
	// Constructors
	CertificateEncodingException::CertificateEncodingException()
		: javax::security::cert::CertificateException(
			"javax.security.cert.CertificateEncodingException",
			"()V"
		) {}
	CertificateEncodingException::CertificateEncodingException(jstring arg0)
		: javax::security::cert::CertificateException(
			"javax.security.cert.CertificateEncodingException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace javax::security::cert

