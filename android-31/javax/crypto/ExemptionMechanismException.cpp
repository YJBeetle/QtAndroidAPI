#include "../../JString.hpp"
#include "./ExemptionMechanismException.hpp"

namespace javax::crypto
{
	// Fields
	
	// QJniObject forward
	ExemptionMechanismException::ExemptionMechanismException(QJniObject obj) : java::security::GeneralSecurityException(obj) {}
	
	// Constructors
	ExemptionMechanismException::ExemptionMechanismException()
		: java::security::GeneralSecurityException(
			"javax.crypto.ExemptionMechanismException",
			"()V"
		) {}
	ExemptionMechanismException::ExemptionMechanismException(JString arg0)
		: java::security::GeneralSecurityException(
			"javax.crypto.ExemptionMechanismException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace javax::crypto

