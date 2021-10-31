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
	
	SSLContext::SSLContext(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject SSLContext::getDefault()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.ssl.SSLContext",
			"getDefault",
			"()Ljavax/net/ssl/SSLContext;"
		);
	}
	QAndroidJniObject SSLContext::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.ssl.SSLContext",
			"getInstance",
			"(Ljava/lang/String;)Ljavax/net/ssl/SSLContext;",
			arg0
		);
	}
	QAndroidJniObject SSLContext::getInstance(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.ssl.SSLContext",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljavax/net/ssl/SSLContext;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject SSLContext::getInstance(jstring arg0, java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.ssl.SSLContext",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljavax/net/ssl/SSLContext;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void SSLContext::setDefault(javax::net::ssl::SSLContext arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"javax.net.ssl.SSLContext",
			"setDefault",
			"(Ljavax/net/ssl/SSLContext;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SSLContext::createSSLEngine()
	{
		return __thiz.callObjectMethod(
			"createSSLEngine",
			"()Ljavax/net/ssl/SSLEngine;"
		);
	}
	QAndroidJniObject SSLContext::createSSLEngine(jstring arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"createSSLEngine",
			"(Ljava/lang/String;I)Ljavax/net/ssl/SSLEngine;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject SSLContext::getClientSessionContext()
	{
		return __thiz.callObjectMethod(
			"getClientSessionContext",
			"()Ljavax/net/ssl/SSLSessionContext;"
		);
	}
	QAndroidJniObject SSLContext::getDefaultSSLParameters()
	{
		return __thiz.callObjectMethod(
			"getDefaultSSLParameters",
			"()Ljavax/net/ssl/SSLParameters;"
		);
	}
	jstring SSLContext::getProtocol()
	{
		return __thiz.callObjectMethod(
			"getProtocol",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject SSLContext::getProvider()
	{
		return __thiz.callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	QAndroidJniObject SSLContext::getServerSessionContext()
	{
		return __thiz.callObjectMethod(
			"getServerSessionContext",
			"()Ljavax/net/ssl/SSLSessionContext;"
		);
	}
	QAndroidJniObject SSLContext::getServerSocketFactory()
	{
		return __thiz.callObjectMethod(
			"getServerSocketFactory",
			"()Ljavax/net/ssl/SSLServerSocketFactory;"
		);
	}
	QAndroidJniObject SSLContext::getSocketFactory()
	{
		return __thiz.callObjectMethod(
			"getSocketFactory",
			"()Ljavax/net/ssl/SSLSocketFactory;"
		);
	}
	QAndroidJniObject SSLContext::getSupportedSSLParameters()
	{
		return __thiz.callObjectMethod(
			"getSupportedSSLParameters",
			"()Ljavax/net/ssl/SSLParameters;"
		);
	}
	void SSLContext::init(jarray arg0, jarray arg1, java::security::SecureRandom arg2)
	{
		__thiz.callMethod<void>(
			"init",
			"([Ljavax/net/ssl/KeyManager;[Ljavax/net/ssl/TrustManager;Ljava/security/SecureRandom;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
} // namespace javax::net::ssl

