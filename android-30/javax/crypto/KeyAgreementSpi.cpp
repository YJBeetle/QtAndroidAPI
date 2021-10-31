#include "../../java/security/SecureRandom.hpp"
#include "./KeyAgreementSpi.hpp"

namespace javax::crypto
{
	// Fields
	
	// QAndroidJniObject forward
	KeyAgreementSpi::KeyAgreementSpi(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	KeyAgreementSpi::KeyAgreementSpi()
		: __JniBaseClass(
			"javax.crypto.KeyAgreementSpi",
			"()V"
		) {}
	
	// Methods
} // namespace javax::crypto

