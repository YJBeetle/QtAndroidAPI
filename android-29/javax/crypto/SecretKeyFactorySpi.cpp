#include "./SecretKeyFactorySpi.hpp"

namespace javax::crypto
{
	// Fields
	
	SecretKeyFactorySpi::SecretKeyFactorySpi(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SecretKeyFactorySpi::SecretKeyFactorySpi()
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.SecretKeyFactorySpi",
			"()V"
		);
	}
	
	// Methods
} // namespace javax::crypto

