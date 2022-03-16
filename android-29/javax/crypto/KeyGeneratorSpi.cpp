#include "../../java/security/SecureRandom.hpp"
#include "./KeyGeneratorSpi.hpp"

namespace javax::crypto
{
	// Fields
	
	// Constructors
	KeyGeneratorSpi::KeyGeneratorSpi()
		: JObject(
			"javax.crypto.KeyGeneratorSpi",
			"()V"
		) {}
	
	// Methods
} // namespace javax::crypto

