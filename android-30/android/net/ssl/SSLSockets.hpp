#pragma once

#include "../../../javax/net/ssl/SSLSocket.def.hpp"
#include "./SSLSockets.def.hpp"

namespace android::net::ssl
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean SSLSockets::isSupportedSocket(javax::net::ssl::SSLSocket arg0)
	{
		return callStaticMethod<jboolean>(
			"android.net.ssl.SSLSockets",
			"isSupportedSocket",
			"(Ljavax/net/ssl/SSLSocket;)Z",
			arg0.object()
		);
	}
	inline void SSLSockets::setUseSessionTickets(javax::net::ssl::SSLSocket arg0, jboolean arg1)
	{
		callStaticMethod<void>(
			"android.net.ssl.SSLSockets",
			"setUseSessionTickets",
			"(Ljavax/net/ssl/SSLSocket;Z)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::ssl

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::ssl;
#endif
