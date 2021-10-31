#include "../../../java/security/KeyStore.hpp"
#include "./TrustManagerFactorySpi.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// QJniObject forward
	TrustManagerFactorySpi::TrustManagerFactorySpi(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	TrustManagerFactorySpi::TrustManagerFactorySpi()
		: __JniBaseClass(
			"javax.net.ssl.TrustManagerFactorySpi",
			"()V"
		) {}
	
	// Methods
} // namespace javax::net::ssl

