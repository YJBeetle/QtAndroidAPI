#include "./SecretKeyFactorySpi.hpp"

namespace javax::crypto
{
	// Fields
	
	// QJniObject forward
	SecretKeyFactorySpi::SecretKeyFactorySpi(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SecretKeyFactorySpi::SecretKeyFactorySpi()
		: __JniBaseClass(
			"javax.crypto.SecretKeyFactorySpi",
			"()V"
		) {}
	
	// Methods
} // namespace javax::crypto

