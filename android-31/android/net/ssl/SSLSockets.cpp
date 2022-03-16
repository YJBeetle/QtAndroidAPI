#include "../../../JByteArray.hpp"
#include "../../../JString.hpp"
#include "../../../javax/net/ssl/SSLSocket.hpp"
#include "./SSLSockets.hpp"

namespace android::net::ssl
{
	// Fields
	
	// Constructors
	
	// Methods
	JByteArray SSLSockets::exportKeyingMaterial(javax::net::ssl::SSLSocket arg0, JString arg1, JByteArray arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"android.net.ssl.SSLSockets",
			"exportKeyingMaterial",
			"(Ljavax/net/ssl/SSLSocket;Ljava/lang/String;[BI)[B",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jbyteArray>(),
			arg3
		);
	}
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

