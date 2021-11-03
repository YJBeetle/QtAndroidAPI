#include "../../../JString.hpp"
#include "./InvalidParameterSpecException.hpp"

namespace java::security::spec
{
	// Fields
	
	// QJniObject forward
	InvalidParameterSpecException::InvalidParameterSpecException(QJniObject obj) : java::security::GeneralSecurityException(obj) {}
	
	// Constructors
	InvalidParameterSpecException::InvalidParameterSpecException()
		: java::security::GeneralSecurityException(
			"java.security.spec.InvalidParameterSpecException",
			"()V"
		) {}
	InvalidParameterSpecException::InvalidParameterSpecException(JString arg0)
		: java::security::GeneralSecurityException(
			"java.security.spec.InvalidParameterSpecException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::security::spec

