#include "./InvalidKeyException.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	InvalidKeyException::InvalidKeyException(QJniObject obj) : java::security::KeyException(obj) {}
	
	// Constructors
	InvalidKeyException::InvalidKeyException()
		: java::security::KeyException(
			"java.security.InvalidKeyException",
			"()V"
		) {}
	InvalidKeyException::InvalidKeyException(jstring arg0)
		: java::security::KeyException(
			"java.security.InvalidKeyException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	InvalidKeyException::InvalidKeyException(jthrowable arg0)
		: java::security::KeyException(
			"java.security.InvalidKeyException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	InvalidKeyException::InvalidKeyException(jstring arg0, jthrowable arg1)
		: java::security::KeyException(
			"java.security.InvalidKeyException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::security

