#include "./UnrecoverableKeyException.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	UnrecoverableKeyException::UnrecoverableKeyException(QJniObject obj) : java::security::UnrecoverableEntryException(obj) {}
	
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

