#include "../../java/security/SecureRandom.hpp"
#include "./KeyGeneratorSpi.hpp"

namespace javax::crypto
{
	// Fields
	
	// QAndroidJniObject forward
	KeyGeneratorSpi::KeyGeneratorSpi(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	KeyGeneratorSpi::KeyGeneratorSpi()
		: __JniBaseClass(
			"javax.crypto.KeyGeneratorSpi",
			"()V"
		) {}
	
	// Methods
} // namespace javax::crypto

