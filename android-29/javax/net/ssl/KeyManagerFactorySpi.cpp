#include "../../../java/security/KeyStore.hpp"
#include "./KeyManagerFactorySpi.hpp"

namespace javax::net::ssl
{
	// Fields
	
	KeyManagerFactorySpi::KeyManagerFactorySpi(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	KeyManagerFactorySpi::KeyManagerFactorySpi()
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.KeyManagerFactorySpi",
			"()V"
		);
	}
	
	// Methods
} // namespace javax::net::ssl

