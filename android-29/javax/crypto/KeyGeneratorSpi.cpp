#include "../../java/security/SecureRandom.hpp"
#include "./KeyGeneratorSpi.hpp"

namespace javax::crypto
{
	// Fields
	
	// QAndroidJniObject forward
	KeyGeneratorSpi::KeyGeneratorSpi(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	KeyGeneratorSpi::KeyGeneratorSpi()
		: JObject(
			"javax.crypto.KeyGeneratorSpi",
			"()V"
		) {}
	
	// Methods
} // namespace javax::crypto

