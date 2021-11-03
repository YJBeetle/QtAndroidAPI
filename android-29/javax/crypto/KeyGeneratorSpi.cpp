#include "../../java/security/SecureRandom.hpp"
#include "./KeyGeneratorSpi.hpp"

namespace javax::crypto
{
	// Fields
	
	// QJniObject forward
	KeyGeneratorSpi::KeyGeneratorSpi(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	KeyGeneratorSpi::KeyGeneratorSpi()
		: JObject(
			"javax.crypto.KeyGeneratorSpi",
			"()V"
		) {}
	
	// Methods
} // namespace javax::crypto

