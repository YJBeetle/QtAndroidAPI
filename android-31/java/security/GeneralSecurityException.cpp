#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./GeneralSecurityException.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	GeneralSecurityException::GeneralSecurityException(QJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	GeneralSecurityException::GeneralSecurityException()
		: java::lang::Exception(
			"java.security.GeneralSecurityException",
			"()V"
		) {}
	GeneralSecurityException::GeneralSecurityException(JString arg0)
		: java::lang::Exception(
			"java.security.GeneralSecurityException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	GeneralSecurityException::GeneralSecurityException(JThrowable arg0)
		: java::lang::Exception(
			"java.security.GeneralSecurityException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	GeneralSecurityException::GeneralSecurityException(JString arg0, JThrowable arg1)
		: java::lang::Exception(
			"java.security.GeneralSecurityException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::security

