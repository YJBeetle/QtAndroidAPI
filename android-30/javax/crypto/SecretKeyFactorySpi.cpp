#include "./SecretKeyFactorySpi.hpp"

namespace javax::crypto
{
	// Fields
	
	// QAndroidJniObject forward
	SecretKeyFactorySpi::SecretKeyFactorySpi(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	SecretKeyFactorySpi::SecretKeyFactorySpi()
		: JObject(
			"javax.crypto.SecretKeyFactorySpi",
			"()V"
		) {}
	
	// Methods
} // namespace javax::crypto

