#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./CertStoreException.hpp"

namespace java::security::cert
{
	// Fields
	
	// Constructors
	CertStoreException::CertStoreException()
		: java::security::GeneralSecurityException(
			"java.security.cert.CertStoreException",
			"()V"
		) {}
	CertStoreException::CertStoreException(JString arg0)
		: java::security::GeneralSecurityException(
			"java.security.cert.CertStoreException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	CertStoreException::CertStoreException(JThrowable arg0)
		: java::security::GeneralSecurityException(
			"java.security.cert.CertStoreException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	CertStoreException::CertStoreException(JString arg0, JThrowable arg1)
		: java::security::GeneralSecurityException(
			"java.security.cert.CertStoreException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::security::cert

