#include "../../JByteArray.hpp"
#include "../../java/security/AlgorithmParameters.hpp"
#include "./ExemptionMechanismSpi.hpp"

namespace javax::crypto
{
	// Fields
	
	// QJniObject forward
	ExemptionMechanismSpi::ExemptionMechanismSpi(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ExemptionMechanismSpi::ExemptionMechanismSpi()
		: JObject(
			"javax.crypto.ExemptionMechanismSpi",
			"()V"
		) {}
	
	// Methods
} // namespace javax::crypto

