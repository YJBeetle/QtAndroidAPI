#include "../../java/security/AlgorithmParameters.hpp"
#include "./ExemptionMechanismSpi.hpp"

namespace javax::crypto
{
	// Fields
	
	ExemptionMechanismSpi::ExemptionMechanismSpi(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ExemptionMechanismSpi::ExemptionMechanismSpi()
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.ExemptionMechanismSpi",
			"()V"
		);
	}
	
	// Methods
} // namespace javax::crypto

