#pragma once

#include "../../../javax/net/ssl/SSLEngine.def.hpp"
#include "./SSLEngines.def.hpp"

namespace android::net::ssl
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean SSLEngines::isSupportedEngine(javax::net::ssl::SSLEngine arg0)
	{
		return callStaticMethod<jboolean>(
			"android.net.ssl.SSLEngines",
			"isSupportedEngine",
			"(Ljavax/net/ssl/SSLEngine;)Z",
			arg0.object()
		);
	}
	inline void SSLEngines::setUseSessionTickets(javax::net::ssl::SSLEngine arg0, jboolean arg1)
	{
		callStaticMethod<void>(
			"android.net.ssl.SSLEngines",
			"setUseSessionTickets",
			"(Ljavax/net/ssl/SSLEngine;Z)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::ssl

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::ssl;
#endif
