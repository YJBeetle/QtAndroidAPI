#include "./CertificateNotYetValidException.hpp"

namespace javax::security::cert
{
	// Fields
	
	// QJniObject forward
	CertificateNotYetValidException::CertificateNotYetValidException(QJniObject obj) : javax::security::cert::CertificateException(obj) {}
	
	// Constructors
	CertificateNotYetValidException::CertificateNotYetValidException()
		: javax::security::cert::CertificateException(
			"javax.security.cert.CertificateNotYetValidException",
			"()V"
		) {}
	CertificateNotYetValidException::CertificateNotYetValidException(jstring arg0)
		: javax::security::cert::CertificateException(
			"javax.security.cert.CertificateNotYetValidException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace javax::security::cert

