#pragma once

#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "../../../java/security/Provider.def.hpp"
#include "../../../java/security/SecureRandom.def.hpp"
#include "./SSLContextSpi.def.hpp"
#include "./SSLEngine.def.hpp"
#include "./SSLParameters.def.hpp"
#include "./SSLServerSocketFactory.def.hpp"
#include "./SSLSocketFactory.def.hpp"
#include "./SSLContext.def.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// Constructors
	
	// Methods
	inline javax::net::ssl::SSLContext SSLContext::getDefault()
	{
		return callStaticObjectMethod(
			"javax.net.ssl.SSLContext",
			"getDefault",
			"()Ljavax/net/ssl/SSLContext;"
		);
	}
	inline javax::net::ssl::SSLContext SSLContext::getInstance(JString arg0)
	{
		return callStaticObjectMethod(
			"javax.net.ssl.SSLContext",
			"getInstance",
			"(Ljava/lang/String;)Ljavax/net/ssl/SSLContext;",
			arg0.object<jstring>()
		);
	}
	inline javax::net::ssl::SSLContext SSLContext::getInstance(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"javax.net.ssl.SSLContext",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljavax/net/ssl/SSLContext;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline javax::net::ssl::SSLContext SSLContext::getInstance(JString arg0, java::security::Provider arg1)
	{
		return callStaticObjectMethod(
			"javax.net.ssl.SSLContext",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljavax/net/ssl/SSLContext;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void SSLContext::setDefault(javax::net::ssl::SSLContext arg0)
	{
		callStaticMethod<void>(
			"javax.net.ssl.SSLContext",
			"setDefault",
			"(Ljavax/net/ssl/SSLContext;)V",
			arg0.object()
		);
	}
	inline javax::net::ssl::SSLEngine SSLContext::createSSLEngine() const
	{
		return callObjectMethod(
			"createSSLEngine",
			"()Ljavax/net/ssl/SSLEngine;"
		);
	}
	inline javax::net::ssl::SSLEngine SSLContext::createSSLEngine(JString arg0, jint arg1) const
	{
		return callObjectMethod(
			"createSSLEngine",
			"(Ljava/lang/String;I)Ljavax/net/ssl/SSLEngine;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline JObject SSLContext::getClientSessionContext() const
	{
		return callObjectMethod(
			"getClientSessionContext",
			"()Ljavax/net/ssl/SSLSessionContext;"
		);
	}
	inline javax::net::ssl::SSLParameters SSLContext::getDefaultSSLParameters() const
	{
		return callObjectMethod(
			"getDefaultSSLParameters",
			"()Ljavax/net/ssl/SSLParameters;"
		);
	}
	inline JString SSLContext::getProtocol() const
	{
		return callObjectMethod(
			"getProtocol",
			"()Ljava/lang/String;"
		);
	}
	inline java::security::Provider SSLContext::getProvider() const
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	inline JObject SSLContext::getServerSessionContext() const
	{
		return callObjectMethod(
			"getServerSessionContext",
			"()Ljavax/net/ssl/SSLSessionContext;"
		);
	}
	inline javax::net::ssl::SSLServerSocketFactory SSLContext::getServerSocketFactory() const
	{
		return callObjectMethod(
			"getServerSocketFactory",
			"()Ljavax/net/ssl/SSLServerSocketFactory;"
		);
	}
	inline javax::net::ssl::SSLSocketFactory SSLContext::getSocketFactory() const
	{
		return callObjectMethod(
			"getSocketFactory",
			"()Ljavax/net/ssl/SSLSocketFactory;"
		);
	}
	inline javax::net::ssl::SSLParameters SSLContext::getSupportedSSLParameters() const
	{
		return callObjectMethod(
			"getSupportedSSLParameters",
			"()Ljavax/net/ssl/SSLParameters;"
		);
	}
	inline void SSLContext::init(JArray arg0, JArray arg1, java::security::SecureRandom arg2) const
	{
		callMethod<void>(
			"init",
			"([Ljavax/net/ssl/KeyManager;[Ljavax/net/ssl/TrustManager;Ljava/security/SecureRandom;)V",
			arg0.object<jarray>(),
			arg1.object<jarray>(),
			arg2.object()
		);
	}
} // namespace javax::net::ssl

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::net::ssl;
#endif
