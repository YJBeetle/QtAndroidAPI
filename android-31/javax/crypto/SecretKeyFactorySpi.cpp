#include "./SecretKeyFactorySpi.hpp"

namespace javax::crypto
{
	// Fields
	
	// QAndroidJniObject forward
	SecretKeyFactorySpi::SecretKeyFactorySpi(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SecretKeyFactorySpi::SecretKeyFactorySpi()
		: __JniBaseClass(
			"javax.crypto.SecretKeyFactorySpi",
			"()V"
		) {}
	
	// Methods
} // namespace javax::crypto

