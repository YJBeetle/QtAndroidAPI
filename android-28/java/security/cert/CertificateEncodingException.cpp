#include "./CertificateEncodingException.hpp"

namespace java::security::cert
{
	// Fields
	
	// QJniObject forward
	CertificateEncodingException::CertificateEncodingException(QJniObject obj) : java::security::cert::CertificateException(obj) {}
	
	// Constructors
	CertificateEncodingException::CertificateEncodingException()
		: java::security::cert::CertificateException(
			"java.security.cert.CertificateEncodingException",
			"()V"
		) {}
	CertificateEncodingException::CertificateEncodingException(jstring arg0)
		: java::security::cert::CertificateException(
			"java.security.cert.CertificateEncodingException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	CertificateEncodingException::CertificateEncodingException(jthrowable arg0)
		: java::security::cert::CertificateException(
			"java.security.cert.CertificateEncodingException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	CertificateEncodingException::CertificateEncodingException(jstring arg0, jthrowable arg1)
		: java::security::cert::CertificateException(
			"java.security.cert.CertificateEncodingException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::security::cert

