#include "./InvalidParameterException.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	InvalidParameterException::InvalidParameterException(QJniObject obj) : java::lang::IllegalArgumentException(obj) {}
	
	// Constructors
	InvalidParameterException::InvalidParameterException()
		: java::lang::IllegalArgumentException(
			"java.security.InvalidParameterException",
			"()V"
		) {}
	InvalidParameterException::InvalidParameterException(jstring arg0)
		: java::lang::IllegalArgumentException(
			"java.security.InvalidParameterException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::security

