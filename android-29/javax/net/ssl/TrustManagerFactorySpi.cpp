#include "../../../java/security/KeyStore.hpp"
#include "./TrustManagerFactorySpi.hpp"

namespace javax::net::ssl
{
	// Fields
	
	TrustManagerFactorySpi::TrustManagerFactorySpi(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TrustManagerFactorySpi::TrustManagerFactorySpi()
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.TrustManagerFactorySpi",
			"()V"
		);
	}
	
	// Methods
} // namespace javax::net::ssl

