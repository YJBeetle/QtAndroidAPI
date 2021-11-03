#include "../../../java/security/KeyStore.hpp"
#include "./TrustManagerFactorySpi.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// QAndroidJniObject forward
	TrustManagerFactorySpi::TrustManagerFactorySpi(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	TrustManagerFactorySpi::TrustManagerFactorySpi()
		: JObject(
			"javax.net.ssl.TrustManagerFactorySpi",
			"()V"
		) {}
	
	// Methods
} // namespace javax::net::ssl

