#include "../../../JCharArray.hpp"
#include "../../../JArray.hpp"
#include "../../../java/security/KeyStore.hpp"
#include "./KeyManagerFactorySpi.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// QAndroidJniObject forward
	KeyManagerFactorySpi::KeyManagerFactorySpi(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	KeyManagerFactorySpi::KeyManagerFactorySpi()
		: JObject(
			"javax.net.ssl.KeyManagerFactorySpi",
			"()V"
		) {}
	
	// Methods
} // namespace javax::net::ssl

