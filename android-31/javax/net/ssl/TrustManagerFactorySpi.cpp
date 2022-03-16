#include "../../../JArray.hpp"
#include "../../../java/security/KeyStore.hpp"
#include "./TrustManagerFactorySpi.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// Constructors
	TrustManagerFactorySpi::TrustManagerFactorySpi()
		: JObject(
			"javax.net.ssl.TrustManagerFactorySpi",
			"()V"
		) {}
	
	// Methods
} // namespace javax::net::ssl

