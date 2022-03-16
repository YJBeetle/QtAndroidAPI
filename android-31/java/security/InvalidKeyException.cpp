#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./InvalidKeyException.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	InvalidKeyException::InvalidKeyException()
		: java::security::KeyException(
			"java.security.InvalidKeyException",
			"()V"
		) {}
	InvalidKeyException::InvalidKeyException(JString arg0)
		: java::security::KeyException(
			"java.security.InvalidKeyException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	InvalidKeyException::InvalidKeyException(JThrowable arg0)
		: java::security::KeyException(
			"java.security.InvalidKeyException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	InvalidKeyException::InvalidKeyException(JString arg0, JThrowable arg1)
		: java::security::KeyException(
			"java.security.InvalidKeyException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::security

