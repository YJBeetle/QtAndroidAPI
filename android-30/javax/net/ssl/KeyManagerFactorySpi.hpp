#pragma once

#include "../../../JCharArray.hpp"
#include "../../../JArray.hpp"
#include "../../../java/security/KeyStore.def.hpp"
#include "./KeyManagerFactorySpi.def.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// Constructors
	inline KeyManagerFactorySpi::KeyManagerFactorySpi()
		: JObject(
			"javax.net.ssl.KeyManagerFactorySpi",
			"()V"
		) {}
	
	// Methods
} // namespace javax::net::ssl

// Base class headers

