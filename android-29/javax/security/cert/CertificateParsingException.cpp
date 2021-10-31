#include "./CertificateParsingException.hpp"

namespace javax::security::cert
{
	// Fields
	
	CertificateParsingException::CertificateParsingException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CertificateParsingException::CertificateParsingException()
	{
		__thiz = QAndroidJniObject(
			"javax.security.cert.CertificateParsingException",
			"()V"
		);
	}
	CertificateParsingException::CertificateParsingException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.security.cert.CertificateParsingException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace javax::security::cert

