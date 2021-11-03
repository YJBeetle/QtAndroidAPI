#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./CertPathBuilderException.hpp"

namespace java::security::cert
{
	// Fields
	
	// QJniObject forward
	CertPathBuilderException::CertPathBuilderException(QJniObject obj) : java::security::GeneralSecurityException(obj) {}
	
	// Constructors
	CertPathBuilderException::CertPathBuilderException()
		: java::security::GeneralSecurityException(
			"java.security.cert.CertPathBuilderException",
			"()V"
		) {}
	CertPathBuilderException::CertPathBuilderException(JString arg0)
		: java::security::GeneralSecurityException(
			"java.security.cert.CertPathBuilderException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	CertPathBuilderException::CertPathBuilderException(JThrowable arg0)
		: java::security::GeneralSecurityException(
			"java.security.cert.CertPathBuilderException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	CertPathBuilderException::CertPathBuilderException(JString arg0, JThrowable arg1)
		: java::security::GeneralSecurityException(
			"java.security.cert.CertPathBuilderException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::security::cert

