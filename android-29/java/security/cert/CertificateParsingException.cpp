#include "./CertificateParsingException.hpp"

namespace java::security::cert
{
	// Fields
	
	// QJniObject forward
	CertificateParsingException::CertificateParsingException(QJniObject obj) : java::security::cert::CertificateException(obj) {}
	
	// Constructors
	CertificateParsingException::CertificateParsingException()
		: java::security::cert::CertificateException(
			"java.security.cert.CertificateParsingException",
			"()V"
		) {}
	CertificateParsingException::CertificateParsingException(jstring arg0)
		: java::security::cert::CertificateException(
			"java.security.cert.CertificateParsingException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	CertificateParsingException::CertificateParsingException(jthrowable arg0)
		: java::security::cert::CertificateException(
			"java.security.cert.CertificateParsingException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	CertificateParsingException::CertificateParsingException(jstring arg0, jthrowable arg1)
		: java::security::cert::CertificateException(
			"java.security.cert.CertificateParsingException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::security::cert

