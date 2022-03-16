#pragma once

#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "../../../java/security/SecureRandom.def.hpp"
#include "./SSLEngine.def.hpp"
#include "./SSLParameters.def.hpp"
#include "./SSLServerSocketFactory.def.hpp"
#include "./SSLSocket.def.hpp"
#include "./SSLSocketFactory.def.hpp"
#include "./SSLContextSpi.def.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// Constructors
	inline SSLContextSpi::SSLContextSpi()
		: JObject(
			"javax.net.ssl.SSLContextSpi",
			"()V"
		) {}
	
	// Methods
} // namespace javax::net::ssl

// Base class headers

