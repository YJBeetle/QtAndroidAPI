#include "../../JClass.hpp"
#include "./SecretKeyFactorySpi.hpp"

namespace javax::crypto
{
	// Fields
	
	// QJniObject forward
	SecretKeyFactorySpi::SecretKeyFactorySpi(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	SecretKeyFactorySpi::SecretKeyFactorySpi()
		: JObject(
			"javax.crypto.SecretKeyFactorySpi",
			"()V"
		) {}
	
	// Methods
} // namespace javax::crypto

