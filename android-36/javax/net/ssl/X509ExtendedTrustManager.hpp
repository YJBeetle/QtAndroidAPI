#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "../../../java/net/Socket.def.hpp"
#include "./SSLEngine.def.hpp"
#include "./X509ExtendedTrustManager.def.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// Constructors
	inline X509ExtendedTrustManager::X509ExtendedTrustManager()
		: JObject(
			"javax.net.ssl.X509ExtendedTrustManager",
			"()V"
		) {}
	
	// Methods
	inline void X509ExtendedTrustManager::checkClientTrusted(JArray arg0, JString arg1, java::net::Socket arg2) const
	{
		callMethod<void>(
			"checkClientTrusted",
			"([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljava/net/Socket;)V",
			arg0.object<jarray>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline void X509ExtendedTrustManager::checkClientTrusted(JArray arg0, JString arg1, javax::net::ssl::SSLEngine arg2) const
	{
		callMethod<void>(
			"checkClientTrusted",
			"([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljavax/net/ssl/SSLEngine;)V",
			arg0.object<jarray>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline void X509ExtendedTrustManager::checkServerTrusted(JArray arg0, JString arg1, java::net::Socket arg2) const
	{
		callMethod<void>(
			"checkServerTrusted",
			"([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljava/net/Socket;)V",
			arg0.object<jarray>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline void X509ExtendedTrustManager::checkServerTrusted(JArray arg0, JString arg1, javax::net::ssl::SSLEngine arg2) const
	{
		callMethod<void>(
			"checkServerTrusted",
			"([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljavax/net/ssl/SSLEngine;)V",
			arg0.object<jarray>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
} // namespace javax::net::ssl

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::net::ssl;
#endif
