#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "../../../java/security/SecureRandom.hpp"
#include "./SSLEngine.hpp"
#include "./SSLParameters.hpp"
#include "./SSLServerSocketFactory.hpp"
#include "./SSLSocket.hpp"
#include "./SSLSocketFactory.hpp"
#include "./SSLContextSpi.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// Constructors
	SSLContextSpi::SSLContextSpi()
		: JObject(
			"javax.net.ssl.SSLContextSpi",
			"()V"
		) {}
	
	// Methods
} // namespace javax::net::ssl

