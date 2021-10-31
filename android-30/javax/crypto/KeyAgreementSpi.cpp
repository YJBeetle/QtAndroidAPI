#include "../../java/security/SecureRandom.hpp"
#include "./KeyAgreementSpi.hpp"

namespace javax::crypto
{
	// Fields
	
	// QJniObject forward
	KeyAgreementSpi::KeyAgreementSpi(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	KeyAgreementSpi::KeyAgreementSpi()
		: __JniBaseClass(
			"javax.crypto.KeyAgreementSpi",
			"()V"
		) {}
	
	// Methods
} // namespace javax::crypto

