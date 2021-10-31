#include "./InvalidParameterSpecException.hpp"

namespace java::security::spec
{
	// Fields
	
	// QAndroidJniObject forward
	InvalidParameterSpecException::InvalidParameterSpecException(QAndroidJniObject obj) : java::security::GeneralSecurityException(obj) {}
	
	// Constructors
	InvalidParameterSpecException::InvalidParameterSpecException()
		: java::security::GeneralSecurityException(
			"java.security.spec.InvalidParameterSpecException",
			"()V"
		) {}
	InvalidParameterSpecException::InvalidParameterSpecException(jstring arg0)
		: java::security::GeneralSecurityException(
			"java.security.spec.InvalidParameterSpecException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::security::spec

