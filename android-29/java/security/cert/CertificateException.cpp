#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./CertificateException.hpp"

namespace java::security::cert
{
	// Fields
	
	// QAndroidJniObject forward
	CertificateException::CertificateException(QAndroidJniObject obj) : java::security::GeneralSecurityException(obj) {}
	
	// Constructors
	CertificateException::CertificateException()
		: java::security::GeneralSecurityException(
			"java.security.cert.CertificateException",
			"()V"
		) {}
	CertificateException::CertificateException(JString arg0)
		: java::security::GeneralSecurityException(
			"java.security.cert.CertificateException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	CertificateException::CertificateException(JThrowable arg0)
		: java::security::GeneralSecurityException(
			"java.security.cert.CertificateException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	CertificateException::CertificateException(JString arg0, JThrowable arg1)
		: java::security::GeneralSecurityException(
			"java.security.cert.CertificateException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::security::cert

