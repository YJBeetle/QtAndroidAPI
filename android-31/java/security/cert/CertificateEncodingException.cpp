#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./CertificateEncodingException.hpp"

namespace java::security::cert
{
	// Fields
	
	// QAndroidJniObject forward
	CertificateEncodingException::CertificateEncodingException(QAndroidJniObject obj) : java::security::cert::CertificateException(obj) {}
	
	// Constructors
	CertificateEncodingException::CertificateEncodingException()
		: java::security::cert::CertificateException(
			"java.security.cert.CertificateEncodingException",
			"()V"
		) {}
	CertificateEncodingException::CertificateEncodingException(JString arg0)
		: java::security::cert::CertificateException(
			"java.security.cert.CertificateEncodingException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	CertificateEncodingException::CertificateEncodingException(JThrowable arg0)
		: java::security::cert::CertificateException(
			"java.security.cert.CertificateEncodingException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	CertificateEncodingException::CertificateEncodingException(JString arg0, JThrowable arg1)
		: java::security::cert::CertificateException(
			"java.security.cert.CertificateEncodingException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::security::cert

