#include "./CertPathBuilderException.hpp"

namespace java::security::cert
{
	// Fields
	
	CertPathBuilderException::CertPathBuilderException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CertPathBuilderException::CertPathBuilderException()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertPathBuilderException",
			"()V"
		);
	}
	CertPathBuilderException::CertPathBuilderException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertPathBuilderException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	CertPathBuilderException::CertPathBuilderException(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertPathBuilderException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	CertPathBuilderException::CertPathBuilderException(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertPathBuilderException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace java::security::cert

