#include "../../JByteArray.hpp"
#include "../../JString.hpp"
#include "../../java/security/SecureRandom.hpp"
#include "./KeyAgreementSpi.hpp"

namespace javax::crypto
{
	// Fields
	
	// Constructors
	KeyAgreementSpi::KeyAgreementSpi()
		: JObject(
			"javax.crypto.KeyAgreementSpi",
			"()V"
		) {}
	
	// Methods
} // namespace javax::crypto

