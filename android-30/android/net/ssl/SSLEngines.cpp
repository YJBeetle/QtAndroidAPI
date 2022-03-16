#include "../../../javax/net/ssl/SSLEngine.hpp"
#include "./SSLEngines.hpp"

namespace android::net::ssl
{
	// Fields
	
	// Constructors
	
	// Methods
	jboolean SSLEngines::isSupportedEngine(javax::net::ssl::SSLEngine arg0)
	{
		return callStaticMethod<jboolean>(
			"android.net.ssl.SSLEngines",
			"isSupportedEngine",
			"(Ljavax/net/ssl/SSLEngine;)Z",
			arg0.object()
		);
	}
	void SSLEngines::setUseSessionTickets(javax::net::ssl::SSLEngine arg0, jboolean arg1)
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

