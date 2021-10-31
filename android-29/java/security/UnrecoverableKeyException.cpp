#include "./UnrecoverableKeyException.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	UnrecoverableKeyException::UnrecoverableKeyException(QAndroidJniObject obj) : java::security::UnrecoverableEntryException(obj) {}
	
	// Constructors
	UnrecoverableKeyException::UnrecoverableKeyException()
		: java::security::UnrecoverableEntryException(
			"java.security.UnrecoverableKeyException",
			"()V"
		) {}
	UnrecoverableKeyException::UnrecoverableKeyException(jstring arg0)
		: java::security::UnrecoverableEntryException(
			"java.security.UnrecoverableKeyException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::security

