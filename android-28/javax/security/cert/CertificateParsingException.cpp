#include "./CertificateParsingException.hpp"

namespace javax::security::cert
{
	// Fields
	
	// QJniObject forward
	CertificateParsingException::CertificateParsingException(QJniObject obj) : javax::security::cert::CertificateException(obj) {}
	
	// Constructors
	CertificateParsingException::CertificateParsingException()
		: javax::security::cert::CertificateException(
			"javax.security.cert.CertificateParsingException",
			"()V"
		) {}
	CertificateParsingException::CertificateParsingException(jstring arg0)
		: javax::security::cert::CertificateException(
			"javax.security.cert.CertificateParsingException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace javax::security::cert

