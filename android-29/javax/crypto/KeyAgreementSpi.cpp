#include "../../java/security/SecureRandom.hpp"
#include "./KeyAgreementSpi.hpp"

namespace javax::crypto
{
	// Fields
	
	KeyAgreementSpi::KeyAgreementSpi(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	KeyAgreementSpi::KeyAgreementSpi()
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.KeyAgreementSpi",
			"()V"
		);
	}
	
	// Methods
} // namespace javax::crypto

