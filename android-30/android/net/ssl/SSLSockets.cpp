#include "../../../javax/net/ssl/SSLSocket.hpp"
#include "./SSLSockets.hpp"

namespace android::net::ssl
{
	// Fields
	
	// Constructors
	
	// Methods
	jboolean SSLSockets::isSupportedSocket(javax::net::ssl::SSLSocket arg0)
	{
		return callStaticMethod<jboolean>(
			"android.net.ssl.SSLSockets",
			"isSupportedSocket",
			"(Ljavax/net/ssl/SSLSocket;)Z",
			arg0.object()
		);
	}
	void SSLSockets::setUseSessionTickets(javax::net::ssl::SSLSocket arg0, jboolean arg1)
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

