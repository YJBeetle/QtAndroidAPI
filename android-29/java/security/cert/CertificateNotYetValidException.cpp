#include "./CertificateNotYetValidException.hpp"

namespace java::security::cert
{
	// Fields
	
	// QAndroidJniObject forward
	CertificateNotYetValidException::CertificateNotYetValidException(QAndroidJniObject obj) : java::security::cert::CertificateException(obj) {}
	
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

