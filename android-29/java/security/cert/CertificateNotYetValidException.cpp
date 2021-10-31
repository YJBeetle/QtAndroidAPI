#include "./CertificateNotYetValidException.hpp"

namespace java::security::cert
{
	// Fields
	
	CertificateNotYetValidException::CertificateNotYetValidException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CertificateNotYetValidException::CertificateNotYetValidException()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateNotYetValidException",
			"()V"
		);
	}
	CertificateNotYetValidException::CertificateNotYetValidException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateNotYetValidException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace java::security::cert

