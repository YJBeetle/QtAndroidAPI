#include "./CertificateException.hpp"

namespace javax::security::cert
{
	// Fields
	
	CertificateException::CertificateException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CertificateException::CertificateException()
	{
		__thiz = QAndroidJniObject(
			"javax.security.cert.CertificateException",
			"()V"
		);
	}
	CertificateException::CertificateException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.security.cert.CertificateException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace javax::security::cert

