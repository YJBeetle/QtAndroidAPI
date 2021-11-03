#include "../../../javax/net/ssl/SSLEngine.hpp"
#include "./SSLEngines.hpp"

namespace android::net::ssl
{
	// Fields
	
	// QAndroidJniObject forward
	SSLEngines::SSLEngines(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jbyteArray SSLEngines::exportKeyingMaterial(javax::net::ssl::SSLEngine arg0, jstring arg1, jbyteArray arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"android.net.ssl.SSLEngines",
			"exportKeyingMaterial",
			"(Ljavax/net/ssl/SSLEngine;Ljava/lang/String;[BI)[B",
			arg0.object(),
			arg1,
			arg2,
			arg3
		).object<jbyteArray>();
	}
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

