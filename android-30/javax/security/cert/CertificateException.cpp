#include "../../../JString.hpp"
#include "./CertificateException.hpp"

namespace javax::security::cert
{
	// Fields
	
	// QJniObject forward
	CertificateException::CertificateException(QJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	CertificateException::CertificateException()
		: java::lang::Exception(
			"javax.security.cert.CertificateException",
			"()V"
		) {}
	CertificateException::CertificateException(JString arg0)
		: java::lang::Exception(
			"javax.security.cert.CertificateException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace javax::security::cert

