#include "./CertificateEncodingException.hpp"

namespace java::security::cert
{
	// Fields
	
	CertificateEncodingException::CertificateEncodingException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CertificateEncodingException::CertificateEncodingException()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateEncodingException",
			"()V"
		);
	}
	CertificateEncodingException::CertificateEncodingException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateEncodingException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	CertificateEncodingException::CertificateEncodingException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateEncodingException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	CertificateEncodingException::CertificateEncodingException(jthrowable &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateEncodingException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	CertificateEncodingException::CertificateEncodingException(jstring &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateEncodingException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	CertificateEncodingException::CertificateEncodingException(const QString &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateEncodingException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace java::security::cert

