#include "../../../JString.hpp"
#include "./CertificateEncodingException.hpp"

namespace javax::security::cert
{
	// Fields
	
	// QAndroidJniObject forward
	CertificateEncodingException::CertificateEncodingException(QAndroidJniObject obj) : javax::security::cert::CertificateException(obj) {}
	
	// Constructors
	CertificateEncodingException::CertificateEncodingException()
		: javax::security::cert::CertificateException(
			"javax.security.cert.CertificateEncodingException",
			"()V"
		) {}
	CertificateEncodingException::CertificateEncodingException(JString arg0)
		: javax::security::cert::CertificateException(
			"javax.security.cert.CertificateEncodingException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace javax::security::cert

