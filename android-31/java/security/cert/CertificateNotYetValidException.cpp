#include "../../../JString.hpp"
#include "./CertificateNotYetValidException.hpp"

namespace java::security::cert
{
	// Fields
	
	// Constructors
	CertificateNotYetValidException::CertificateNotYetValidException()
		: java::security::cert::CertificateException(
			"java.security.cert.CertificateNotYetValidException",
			"()V"
		) {}
	CertificateNotYetValidException::CertificateNotYetValidException(JString arg0)
		: java::security::cert::CertificateException(
			"java.security.cert.CertificateNotYetValidException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::security::cert

