#include "./CertPathBuilderException.hpp"

namespace java::security::cert
{
	// Fields
	
	// QAndroidJniObject forward
	CertPathBuilderException::CertPathBuilderException(QAndroidJniObject obj) : java::security::GeneralSecurityException(obj) {}
	
	// Constructors
	CertPathBuilderException::CertPathBuilderException()
		: java::security::GeneralSecurityException(
			"java.security.cert.CertPathBuilderException",
			"()V"
		) {}
	CertPathBuilderException::CertPathBuilderException(jstring arg0)
		: java::security::GeneralSecurityException(
			"java.security.cert.CertPathBuilderException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	CertPathBuilderException::CertPathBuilderException(jthrowable arg0)
		: java::security::GeneralSecurityException(
			"java.security.cert.CertPathBuilderException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	CertPathBuilderException::CertPathBuilderException(jstring arg0, jthrowable arg1)
		: java::security::GeneralSecurityException(
			"java.security.cert.CertPathBuilderException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::security::cert

