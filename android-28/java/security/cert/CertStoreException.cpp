#include "./CertStoreException.hpp"

namespace java::security::cert
{
	// Fields
	
	// QJniObject forward
	CertStoreException::CertStoreException(QJniObject obj) : java::security::GeneralSecurityException(obj) {}
	
	// Constructors
	CertStoreException::CertStoreException()
		: java::security::GeneralSecurityException(
			"java.security.cert.CertStoreException",
			"()V"
		) {}
	CertStoreException::CertStoreException(jstring arg0)
		: java::security::GeneralSecurityException(
			"java.security.cert.CertStoreException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	CertStoreException::CertStoreException(jthrowable arg0)
		: java::security::GeneralSecurityException(
			"java.security.cert.CertStoreException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	CertStoreException::CertStoreException(jstring arg0, jthrowable arg1)
		: java::security::GeneralSecurityException(
			"java.security.cert.CertStoreException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::security::cert

