#pragma once

#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./SSLEngine.def.hpp"
#include "./X509ExtendedKeyManager.def.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JString X509ExtendedKeyManager::chooseEngineClientAlias(JArray arg0, JArray arg1, javax::net::ssl::SSLEngine arg2) const
	{
		return callObjectMethod(
			"chooseEngineClientAlias",
			"([Ljava/lang/String;[Ljava/security/Principal;Ljavax/net/ssl/SSLEngine;)Ljava/lang/String;",
			arg0.object<jarray>(),
			arg1.object<jarray>(),
			arg2.object()
		);
	}
	inline JString X509ExtendedKeyManager::chooseEngineServerAlias(JString arg0, JArray arg1, javax::net::ssl::SSLEngine arg2) const
	{
		return callObjectMethod(
			"chooseEngineServerAlias",
			"(Ljava/lang/String;[Ljava/security/Principal;Ljavax/net/ssl/SSLEngine;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jarray>(),
			arg2.object()
		);
	}
} // namespace javax::net::ssl

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::net::ssl;
#endif
