#include "../../../JCharArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "../../../java/security/KeyStore.hpp"
#include "../../../java/security/Provider.hpp"
#include "./KeyManagerFactorySpi.hpp"
#include "./KeyManagerFactory.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// Constructors
	
	// Methods
	JString KeyManagerFactory::getDefaultAlgorithm()
	{
		return callStaticObjectMethod(
			"javax.net.ssl.KeyManagerFactory",
			"getDefaultAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	javax::net::ssl::KeyManagerFactory KeyManagerFactory::getInstance(JString arg0)
	{
		return callStaticObjectMethod(
			"javax.net.ssl.KeyManagerFactory",
			"getInstance",
			"(Ljava/lang/String;)Ljavax/net/ssl/KeyManagerFactory;",
			arg0.object<jstring>()
		);
	}
	javax::net::ssl::KeyManagerFactory KeyManagerFactory::getInstance(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"javax.net.ssl.KeyManagerFactory",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljavax/net/ssl/KeyManagerFactory;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	javax::net::ssl::KeyManagerFactory KeyManagerFactory::getInstance(JString arg0, java::security::Provider arg1)
	{
		return callStaticObjectMethod(
			"javax.net.ssl.KeyManagerFactory",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljavax/net/ssl/KeyManagerFactory;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	JString KeyManagerFactory::getAlgorithm() const
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	JArray KeyManagerFactory::getKeyManagers() const
	{
		return callObjectMethod(
			"getKeyManagers",
			"()[Ljavax/net/ssl/KeyManager;"
		);
	}
	java::security::Provider KeyManagerFactory::getProvider() const
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	void KeyManagerFactory::init(JObject arg0) const
	{
		callMethod<void>(
			"init",
			"(Ljavax/net/ssl/ManagerFactoryParameters;)V",
			arg0.object()
		);
	}
	void KeyManagerFactory::init(java::security::KeyStore arg0, JCharArray arg1) const
	{
		callMethod<void>(
			"init",
			"(Ljava/security/KeyStore;[C)V",
			arg0.object(),
			arg1.object<jcharArray>()
		);
	}
} // namespace javax::net::ssl

