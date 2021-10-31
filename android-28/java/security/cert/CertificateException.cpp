#include "./CertificateException.hpp"

namespace java::security::cert
{
	// Fields
	
	// QJniObject forward
	CertificateException::CertificateException(QJniObject obj) : java::security::GeneralSecurityException(obj) {}
	
	// Constructors
	CertificateException::CertificateException()
		: java::security::GeneralSecurityException(
			"java.security.cert.CertificateException",
			"()V"
		) {}
	CertificateException::CertificateException(jstring arg0)
		: java::security::GeneralSecurityException(
			"java.security.cert.CertificateException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	CertificateException::CertificateException(jthrowable arg0)
		: java::security::GeneralSecurityException(
			"java.security.cert.CertificateException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	CertificateException::CertificateException(jstring arg0, jthrowable arg1)
		: java::security::GeneralSecurityException(
			"java.security.cert.CertificateException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::security::cert

