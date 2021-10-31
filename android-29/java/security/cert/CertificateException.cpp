#include "./CertificateException.hpp"

namespace java::security::cert
{
	// Fields
	
	CertificateException::CertificateException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CertificateException::CertificateException()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateException",
			"()V"
		);
	}
	CertificateException::CertificateException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	CertificateException::CertificateException(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	CertificateException::CertificateException(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace java::security::cert

