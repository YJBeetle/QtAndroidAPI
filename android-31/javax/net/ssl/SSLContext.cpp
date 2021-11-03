#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "../../../java/security/Provider.hpp"
#include "../../../java/security/SecureRandom.hpp"
#include "./SSLContextSpi.hpp"
#include "./SSLEngine.hpp"
#include "./SSLParameters.hpp"
#include "./SSLServerSocketFactory.hpp"
#include "./SSLSocketFactory.hpp"
#include "./SSLContext.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// QAndroidJniObject forward
	SSLContext::SSLContext(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	javax::net::ssl::SSLContext SSLContext::getDefault()
	{
		return callStaticObjectMethod(
			"javax.net.ssl.SSLContext",
			"getDefault",
			"()Ljavax/net/ssl/SSLContext;"
		);
	}
	javax::net::ssl::SSLContext SSLContext::getInstance(JString arg0)
	{
		return callStaticObjectMethod(
			"javax.net.ssl.SSLContext",
			"getInstance",
			"(Ljava/lang/String;)Ljavax/net/ssl/SSLContext;",
			arg0.object<jstring>()
		);
	}
	javax::net::ssl::SSLContext SSLContext::getInstance(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"javax.net.ssl.SSLContext",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljavax/net/ssl/SSLContext;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	javax::net::ssl::SSLContext SSLContext::getInstance(JString arg0, java::security::Provider arg1)
	{
		return callStaticObjectMethod(
			"javax.net.ssl.SSLContext",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljavax/net/ssl/SSLContext;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void SSLContext::setDefault(javax::net::ssl::SSLContext arg0)
	{
		callStaticMethod<void>(
			"javax.net.ssl.SSLContext",
			"setDefault",
			"(Ljavax/net/ssl/SSLContext;)V",
			arg0.object()
		);
	}
	javax::net::ssl::SSLEngine SSLContext::createSSLEngine() const
	{
		return callObjectMethod(
			"createSSLEngine",
			"()Ljavax/net/ssl/SSLEngine;"
		);
	}
	javax::net::ssl::SSLEngine SSLContext::createSSLEngine(JString arg0, jint arg1) const
	{
		return callObjectMethod(
			"createSSLEngine",
			"(Ljava/lang/String;I)Ljavax/net/ssl/SSLEngine;",
			arg0.object<jstring>(),
			arg1
		);
	}
	JObject SSLContext::getClientSessionContext() const
	{
		return callObjectMethod(
			"getClientSessionContext",
			"()Ljavax/net/ssl/SSLSessionContext;"
		);
	}
	javax::net::ssl::SSLParameters SSLContext::getDefaultSSLParameters() const
	{
		return callObjectMethod(
			"getDefaultSSLParameters",
			"()Ljavax/net/ssl/SSLParameters;"
		);
	}
	JString SSLContext::getProtocol() const
	{
		return callObjectMethod(
			"getProtocol",
			"()Ljava/lang/String;"
		);
	}
	java::security::Provider SSLContext::getProvider() const
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	JObject SSLContext::getServerSessionContext() const
	{
		return callObjectMethod(
			"getServerSessionContext",
			"()Ljavax/net/ssl/SSLSessionContext;"
		);
	}
	javax::net::ssl::SSLServerSocketFactory SSLContext::getServerSocketFactory() const
	{
		return callObjectMethod(
			"getServerSocketFactory",
			"()Ljavax/net/ssl/SSLServerSocketFactory;"
		);
	}
	javax::net::ssl::SSLSocketFactory SSLContext::getSocketFactory() const
	{
		return callObjectMethod(
			"getSocketFactory",
			"()Ljavax/net/ssl/SSLSocketFactory;"
		);
	}
	javax::net::ssl::SSLParameters SSLContext::getSupportedSSLParameters() const
	{
		return callObjectMethod(
			"getSupportedSSLParameters",
			"()Ljavax/net/ssl/SSLParameters;"
		);
	}
	void SSLContext::init(JArray arg0, JArray arg1, java::security::SecureRandom arg2) const
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

