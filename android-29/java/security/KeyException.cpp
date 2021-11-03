#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./KeyException.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	KeyException::KeyException(QJniObject obj) : java::security::GeneralSecurityException(obj) {}
	
	// Constructors
	KeyException::KeyException()
		: java::security::GeneralSecurityException(
			"java.security.KeyException",
			"()V"
		) {}
	KeyException::KeyException(JString arg0)
		: java::security::GeneralSecurityException(
			"java.security.KeyException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	KeyException::KeyException(JThrowable arg0)
		: java::security::GeneralSecurityException(
			"java.security.KeyException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	KeyException::KeyException(JString arg0, JThrowable arg1)
		: java::security::GeneralSecurityException(
			"java.security.KeyException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::security

