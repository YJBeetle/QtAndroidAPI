#include "./CertificateEncodingException.hpp"

namespace javax::security::cert
{
	// Fields
	
	CertificateEncodingException::CertificateEncodingException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CertificateEncodingException::CertificateEncodingException()
	{
		__thiz = QAndroidJniObject(
			"javax.security.cert.CertificateEncodingException",
			"()V"
		);
	}
	CertificateEncodingException::CertificateEncodingException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.security.cert.CertificateEncodingException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace javax::security::cert

