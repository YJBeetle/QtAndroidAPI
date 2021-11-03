#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
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
	CRLException::CRLException(JString arg0)
		: java::security::GeneralSecurityException(
			"java.security.cert.CRLException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	CRLException::CRLException(JThrowable arg0)
		: java::security::GeneralSecurityException(
			"java.security.cert.CRLException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	CRLException::CRLException(JString arg0, JThrowable arg1)
		: java::security::GeneralSecurityException(
			"java.security.cert.CRLException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::security::cert

