#include "./UnrecoverableEntryException.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	UnrecoverableEntryException::UnrecoverableEntryException(QAndroidJniObject obj) : java::security::GeneralSecurityException(obj) {}
	
	// Constructors
	UnrecoverableEntryException::UnrecoverableEntryException()
		: java::security::GeneralSecurityException(
			"java.security.UnrecoverableEntryException",
			"()V"
		) {}
	UnrecoverableEntryException::UnrecoverableEntryException(jstring arg0)
		: java::security::GeneralSecurityException(
			"java.security.UnrecoverableEntryException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::security

