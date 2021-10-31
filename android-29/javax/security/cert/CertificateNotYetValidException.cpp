#include "./CertificateNotYetValidException.hpp"

namespace javax::security::cert
{
	// Fields
	
	CertificateNotYetValidException::CertificateNotYetValidException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CertificateNotYetValidException::CertificateNotYetValidException()
	{
		__thiz = QAndroidJniObject(
			"javax.security.cert.CertificateNotYetValidException",
			"()V"
		);
	}
	CertificateNotYetValidException::CertificateNotYetValidException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.security.cert.CertificateNotYetValidException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace javax::security::cert

