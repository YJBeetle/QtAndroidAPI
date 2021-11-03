#include "../../../java/security/KeyStore.hpp"
#include "./KeyManagerFactorySpi.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// QJniObject forward
	KeyManagerFactorySpi::KeyManagerFactorySpi(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	KeyManagerFactorySpi::KeyManagerFactorySpi()
		: JObject(
			"javax.net.ssl.KeyManagerFactorySpi",
			"()V"
		) {}
	
	// Methods
} // namespace javax::net::ssl

