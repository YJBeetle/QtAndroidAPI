#include "./CertificateExpiredException.hpp"

namespace javax::security::cert
{
	// Fields
	
	CertificateExpiredException::CertificateExpiredException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CertificateExpiredException::CertificateExpiredException()
	{
		__thiz = QAndroidJniObject(
			"javax.security.cert.CertificateExpiredException",
			"()V"
		);
	}
	CertificateExpiredException::CertificateExpiredException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.security.cert.CertificateExpiredException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace javax::security::cert

