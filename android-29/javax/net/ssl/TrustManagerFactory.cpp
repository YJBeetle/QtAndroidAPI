#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "../../../java/security/KeyStore.hpp"
#include "../../../java/security/Provider.hpp"
#include "./TrustManagerFactorySpi.hpp"
#include "./TrustManagerFactory.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// QAndroidJniObject forward
	TrustManagerFactory::TrustManagerFactory(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString TrustManagerFactory::getDefaultAlgorithm()
	{
		return callStaticObjectMethod(
			"javax.net.ssl.TrustManagerFactory",
			"getDefaultAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	javax::net::ssl::TrustManagerFactory TrustManagerFactory::getInstance(JString arg0)
	{
		return callStaticObjectMethod(
			"javax.net.ssl.TrustManagerFactory",
			"getInstance",
			"(Ljava/lang/String;)Ljavax/net/ssl/TrustManagerFactory;",
			arg0.object<jstring>()
		);
	}
	javax::net::ssl::TrustManagerFactory TrustManagerFactory::getInstance(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"javax.net.ssl.TrustManagerFactory",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljavax/net/ssl/TrustManagerFactory;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	javax::net::ssl::TrustManagerFactory TrustManagerFactory::getInstance(JString arg0, java::security::Provider arg1)
	{
		return callStaticObjectMethod(
			"javax.net.ssl.TrustManagerFactory",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljavax/net/ssl/TrustManagerFactory;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	JString TrustManagerFactory::getAlgorithm()
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	java::security::Provider TrustManagerFactory::getProvider()
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	JArray TrustManagerFactory::getTrustManagers()
	{
		return callObjectMethod(
			"getTrustManagers",
			"()[Ljavax/net/ssl/TrustManager;"
		);
	}
	void TrustManagerFactory::init(java::security::KeyStore arg0)
	{
		callMethod<void>(
			"init",
			"(Ljava/security/KeyStore;)V",
			arg0.object()
		);
	}
	void TrustManagerFactory::init(JObject arg0)
	{
		callMethod<void>(
			"init",
			"(Ljavax/net/ssl/ManagerFactoryParameters;)V",
			arg0.object()
		);
	}
} // namespace javax::net::ssl

