#pragma once

#include "../../../JByteArray.hpp"
#include "../../../JString.hpp"
#include "../../../javax/net/ssl/SSLEngine.def.hpp"
#include "./SSLEngines.def.hpp"

namespace android::net::ssl
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JByteArray SSLEngines::exportKeyingMaterial(javax::net::ssl::SSLEngine arg0, JString arg1, JByteArray arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"android.net.ssl.SSLEngines",
			"exportKeyingMaterial",
			"(Ljavax/net/ssl/SSLEngine;Ljava/lang/String;[BI)[B",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jbyteArray>(),
			arg3
		);
	}
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
