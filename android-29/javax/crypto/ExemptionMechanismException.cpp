#include "./ExemptionMechanismException.hpp"

namespace javax::crypto
{
	// Fields
	
	// QAndroidJniObject forward
	ExemptionMechanismException::ExemptionMechanismException(QAndroidJniObject obj) : java::security::GeneralSecurityException(obj) {}
	
	// Constructors
	ExemptionMechanismException::ExemptionMechanismException()
		: java::security::GeneralSecurityException(
			"javax.crypto.ExemptionMechanismException",
			"()V"
		) {}
	ExemptionMechanismException::ExemptionMechanismException(jstring arg0)
		: java::security::GeneralSecurityException(
			"javax.crypto.ExemptionMechanismException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace javax::crypto

