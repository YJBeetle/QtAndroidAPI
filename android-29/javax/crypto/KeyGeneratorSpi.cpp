#include "../../java/security/SecureRandom.hpp"
#include "./KeyGeneratorSpi.hpp"

namespace javax::crypto
{
	// Fields
	
	KeyGeneratorSpi::KeyGeneratorSpi(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	KeyGeneratorSpi::KeyGeneratorSpi()
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.KeyGeneratorSpi",
			"()V"
		);
	}
	
	// Methods
} // namespace javax::crypto

