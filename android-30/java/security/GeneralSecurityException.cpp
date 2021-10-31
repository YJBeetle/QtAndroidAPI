#include "./GeneralSecurityException.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	GeneralSecurityException::GeneralSecurityException(QAndroidJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	GeneralSecurityException::GeneralSecurityException()
		: java::lang::Exception(
			"java.security.GeneralSecurityException",
			"()V"
		) {}
	GeneralSecurityException::GeneralSecurityException(jstring arg0)
		: java::lang::Exception(
			"java.security.GeneralSecurityException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	GeneralSecurityException::GeneralSecurityException(jthrowable arg0)
		: java::lang::Exception(
			"java.security.GeneralSecurityException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	GeneralSecurityException::GeneralSecurityException(jstring arg0, jthrowable arg1)
		: java::lang::Exception(
			"java.security.GeneralSecurityException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::security

