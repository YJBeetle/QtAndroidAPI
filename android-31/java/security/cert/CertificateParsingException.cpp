#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
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
	CertificateParsingException::CertificateParsingException(JString arg0)
		: java::security::cert::CertificateException(
			"java.security.cert.CertificateParsingException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	CertificateParsingException::CertificateParsingException(JThrowable arg0)
		: java::security::cert::CertificateException(
			"java.security.cert.CertificateParsingException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	CertificateParsingException::CertificateParsingException(JString arg0, JThrowable arg1)
		: java::security::cert::CertificateException(
			"java.security.cert.CertificateParsingException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::security::cert

