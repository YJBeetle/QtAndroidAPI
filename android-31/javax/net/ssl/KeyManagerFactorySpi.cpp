#include "../../../java/security/KeyStore.hpp"
#include "./KeyManagerFactorySpi.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// QAndroidJniObject forward
	KeyManagerFactorySpi::KeyManagerFactorySpi(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	KeyManagerFactorySpi::KeyManagerFactorySpi()
		: __JniBaseClass(
			"javax.net.ssl.KeyManagerFactorySpi",
			"()V"
		) {}
	
	// Methods
} // namespace javax::net::ssl

