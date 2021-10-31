#include "../../java/security/AlgorithmParameters.hpp"
#include "./ExemptionMechanismSpi.hpp"

namespace javax::crypto
{
	// Fields
	
	// QAndroidJniObject forward
	ExemptionMechanismSpi::ExemptionMechanismSpi(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ExemptionMechanismSpi::ExemptionMechanismSpi()
		: __JniBaseClass(
			"javax.crypto.ExemptionMechanismSpi",
			"()V"
		) {}
	
	// Methods
} // namespace javax::crypto

