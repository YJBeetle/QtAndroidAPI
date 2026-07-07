#pragma once

#include "../../../JArray.hpp"
#include "../../../java/security/KeyStore.def.hpp"
#include "./TrustManagerFactorySpi.def.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// Constructors
	inline TrustManagerFactorySpi::TrustManagerFactorySpi()
		: JObject(
			"javax.net.ssl.TrustManagerFactorySpi",
			"()V"
		) {}
	
	// Methods
} // namespace javax::net::ssl

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::net::ssl;
#endif
