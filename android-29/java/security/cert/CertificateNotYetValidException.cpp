#include "./CertificateNotYetValidException.hpp"

namespace java::security::cert
{
	// Fields
	
	// QJniObject forward
	CertificateNotYetValidException::CertificateNotYetValidException(QJniObject obj) : java::security::cert::CertificateException(obj) {}
	
	// Constructors
	CertificateNotYetValidException::CertificateNotYetValidException()
		: java::security::cert::CertificateException(
			"java.security.cert.CertificateNotYetValidException",
			"()V"
		) {}
	CertificateNotYetValidException::CertificateNotYetValidException(jstring arg0)
		: java::security::cert::CertificateException(
			"java.security.cert.CertificateNotYetValidException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::security::cert

