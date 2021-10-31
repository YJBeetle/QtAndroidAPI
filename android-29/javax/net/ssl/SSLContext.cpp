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
	SSLContext::SSLContext(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
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
	javax::net::ssl::SSLContext SSLContext::getInstance(jstring arg0)
	{
		return callStaticObjectMethod(
			"javax.net.ssl.SSLContext",
			"getInstance",
			"(Ljava/lang/String;)Ljavax/net/ssl/SSLContext;",
			arg0
		);
	}
	javax::net::ssl::SSLContext SSLContext::getInstance(jstring arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"javax.net.ssl.SSLContext",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljavax/net/ssl/SSLContext;",
			arg0,
			arg1
		);
	}
	javax::net::ssl::SSLContext SSLContext::getInstance(jstring arg0, java::security::Provider arg1)
	{
		return callStaticObjectMethod(
			"javax.net.ssl.SSLContext",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljavax/net/ssl/SSLContext;",
			arg0,
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
	javax::net::ssl::SSLEngine SSLContext::createSSLEngine()
	{
		return callObjectMethod(
			"createSSLEngine",
			"()Ljavax/net/ssl/SSLEngine;"
		);
	}
	javax::net::ssl::SSLEngine SSLContext::createSSLEngine(jstring arg0, jint arg1)
	{
		return callObjectMethod(
			"createSSLEngine",
			"(Ljava/lang/String;I)Ljavax/net/ssl/SSLEngine;",
			arg0,
			arg1
		);
	}
	__JniBaseClass SSLContext::getClientSessionContext()
	{
		return callObjectMethod(
			"getClientSessionContext",
			"()Ljavax/net/ssl/SSLSessionContext;"
		);
	}
	javax::net::ssl::SSLParameters SSLContext::getDefaultSSLParameters()
	{
		return callObjectMethod(
			"getDefaultSSLParameters",
			"()Ljavax/net/ssl/SSLParameters;"
		);
	}
	jstring SSLContext::getProtocol()
	{
		return callObjectMethod(
			"getProtocol",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	java::security::Provider SSLContext::getProvider()
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	__JniBaseClass SSLContext::getServerSessionContext()
	{
		return callObjectMethod(
			"getServerSessionContext",
			"()Ljavax/net/ssl/SSLSessionContext;"
		);
	}
	javax::net::ssl::SSLServerSocketFactory SSLContext::getServerSocketFactory()
	{
		return callObjectMethod(
			"getServerSocketFactory",
			"()Ljavax/net/ssl/SSLServerSocketFactory;"
		);
	}
	javax::net::ssl::SSLSocketFactory SSLContext::getSocketFactory()
	{
		return callObjectMethod(
			"getSocketFactory",
			"()Ljavax/net/ssl/SSLSocketFactory;"
		);
	}
	javax::net::ssl::SSLParameters SSLContext::getSupportedSSLParameters()
	{
		return callObjectMethod(
			"getSupportedSSLParameters",
			"()Ljavax/net/ssl/SSLParameters;"
		);
	}
	void SSLContext::init(jarray arg0, jarray arg1, java::security::SecureRandom arg2)
	{
		callMethod<void>(
			"init",
			"([Ljavax/net/ssl/KeyManager;[Ljavax/net/ssl/TrustManager;Ljava/security/SecureRandom;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
} // namespace javax::net::ssl

