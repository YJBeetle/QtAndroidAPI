#include "./CRLException.hpp"

namespace java::security::cert
{
	// Fields
	
	// QJniObject forward
	CRLException::CRLException(QJniObject obj) : java::security::GeneralSecurityException(obj) {}
	
	// Constructors
	CRLException::CRLException()
		: java::security::GeneralSecurityException(
			"java.security.cert.CRLException",
			"()V"
		) {}
	CRLException::CRLException(jstring arg0)
		: java::security::GeneralSecurityException(
			"java.security.cert.CRLException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	CRLException::CRLException(jthrowable arg0)
		: java::security::GeneralSecurityException(
			"java.security.cert.CRLException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	CRLException::CRLException(jstring arg0, jthrowable arg1)
		: java::security::GeneralSecurityException(
			"java.security.cert.CRLException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::security::cert

