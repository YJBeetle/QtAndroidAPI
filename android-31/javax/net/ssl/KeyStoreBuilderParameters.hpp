#pragma once

#include "../../../java/security/KeyStore_Builder.def.hpp"
#include "./KeyStoreBuilderParameters.def.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// Constructors
	inline KeyStoreBuilderParameters::KeyStoreBuilderParameters(java::security::KeyStore_Builder arg0)
		: JObject(
			"javax.net.ssl.KeyStoreBuilderParameters",
			"(Ljava/security/KeyStore$Builder;)V",
			arg0.object()
		) {}
	inline KeyStoreBuilderParameters::KeyStoreBuilderParameters(JObject arg0)
		: JObject(
			"javax.net.ssl.KeyStoreBuilderParameters",
			"(Ljava/util/List;)V",
			arg0.object()
		) {}
	
	// Methods
	inline JObject KeyStoreBuilderParameters::getParameters() const
	{
		return callObjectMethod(
			"getParameters",
			"()Ljava/util/List;"
		);
	}
} // namespace javax::net::ssl

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::net::ssl;
#endif
