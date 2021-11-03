#include "../../JString.hpp"
#include "./InvalidParameterException.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	InvalidParameterException::InvalidParameterException(QAndroidJniObject obj) : java::lang::IllegalArgumentException(obj) {}
	
	// Constructors
	InvalidParameterException::InvalidParameterException()
		: java::lang::IllegalArgumentException(
			"java.security.InvalidParameterException",
			"()V"
		) {}
	InvalidParameterException::InvalidParameterException(JString arg0)
		: java::lang::IllegalArgumentException(
			"java.security.InvalidParameterException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::security

