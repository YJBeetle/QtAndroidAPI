#include "./CertificateParsingException.hpp"

namespace java::security::cert
{
	// Fields
	
	CertificateParsingException::CertificateParsingException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CertificateParsingException::CertificateParsingException()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateParsingException",
			"()V"
		);
	}
	CertificateParsingException::CertificateParsingException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateParsingException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	CertificateParsingException::CertificateParsingException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateParsingException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	CertificateParsingException::CertificateParsingException(jthrowable &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateParsingException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	CertificateParsingException::CertificateParsingException(jstring &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateParsingException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	CertificateParsingException::CertificateParsingException(const QString &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateParsingException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace java::security::cert

