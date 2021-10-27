#include "../../../javax/net/ssl/SSLEngine.hpp"
#include "./SSLEngines.hpp"

namespace android::net::ssl
{
	// Fields
	
	SSLEngines::SSLEngines(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean SSLEngines::isSupportedEngine(javax::net::ssl::SSLEngine arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.net.ssl.SSLEngines",
			"isSupportedEngine",
			"(Ljavax/net/ssl/SSLEngine;)Z",
			arg0.__jniObject().object()
		);
	}
	void SSLEngines::setUseSessionTickets(javax::net::ssl::SSLEngine arg0, jboolean arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.net.ssl.SSLEngines",
			"setUseSessionTickets",
			"(Ljavax/net/ssl/SSLEngine;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::net::ssl

