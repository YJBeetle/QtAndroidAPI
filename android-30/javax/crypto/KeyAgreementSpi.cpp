#include "../../java/security/SecureRandom.hpp"
#include "./KeyAgreementSpi.hpp"

namespace javax::crypto
{
	// Fields
	
	// QJniObject forward
	KeyAgreementSpi::KeyAgreementSpi(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	KeyAgreementSpi::KeyAgreementSpi()
		: JObject(
			"javax.crypto.KeyAgreementSpi",
			"()V"
		) {}
	
	// Methods
} // namespace javax::crypto

