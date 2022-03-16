#include "../../../JString.hpp"
#include "./CertificateNotYetValidException.hpp"

namespace javax::security::cert
{
	// Fields
	
	// Constructors
	CertificateNotYetValidException::CertificateNotYetValidException()
		: javax::security::cert::CertificateException(
			"javax.security.cert.CertificateNotYetValidException",
			"()V"
		) {}
	CertificateNotYetValidException::CertificateNotYetValidException(JString arg0)
		: javax::security::cert::CertificateException(
			"javax.security.cert.CertificateNotYetValidException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace javax::security::cert

