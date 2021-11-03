#include "../../JByteArray.hpp"
#include "../../JString.hpp"
#include "../../java/security/SecureRandom.hpp"
#include "./KeyAgreementSpi.hpp"

namespace javax::crypto
{
	// Fields
	
	// QAndroidJniObject forward
	KeyAgreementSpi::KeyAgreementSpi(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	KeyAgreementSpi::KeyAgreementSpi()
		: JObject(
			"javax.crypto.KeyAgreementSpi",
			"()V"
		) {}
	
	// Methods
} // namespace javax::crypto

