#include "../../../java/security/KeyStore.hpp"
#include "./TrustManagerFactorySpi.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// QAndroidJniObject forward
	TrustManagerFactorySpi::TrustManagerFactorySpi(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	TrustManagerFactorySpi::TrustManagerFactorySpi()
		: __JniBaseClass(
			"javax.net.ssl.TrustManagerFactorySpi",
			"()V"
		) {}
	
	// Methods
} // namespace javax::net::ssl

