#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "../../../java/security/KeyStore.def.hpp"
#include "../../../java/security/Provider.def.hpp"
#include "./TrustManagerFactorySpi.def.hpp"
#include "./TrustManagerFactory.def.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JString TrustManagerFactory::getDefaultAlgorithm()
	{
		return callStaticObjectMethod(
			"javax.net.ssl.TrustManagerFactory",
			"getDefaultAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	inline javax::net::ssl::TrustManagerFactory TrustManagerFactory::getInstance(JString arg0)
	{
		return callStaticObjectMethod(
			"javax.net.ssl.TrustManagerFactory",
			"getInstance",
			"(Ljava/lang/String;)Ljavax/net/ssl/TrustManagerFactory;",
			arg0.object<jstring>()
		);
	}
	inline javax::net::ssl::TrustManagerFactory TrustManagerFactory::getInstance(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"javax.net.ssl.TrustManagerFactory",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljavax/net/ssl/TrustManagerFactory;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline javax::net::ssl::TrustManagerFactory TrustManagerFactory::getInstance(JString arg0, java::security::Provider arg1)
	{
		return callStaticObjectMethod(
			"javax.net.ssl.TrustManagerFactory",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljavax/net/ssl/TrustManagerFactory;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JString TrustManagerFactory::getAlgorithm() const
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	inline java::security::Provider TrustManagerFactory::getProvider() const
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	inline JArray TrustManagerFactory::getTrustManagers() const
	{
		return callObjectMethod(
			"getTrustManagers",
			"()[Ljavax/net/ssl/TrustManager;"
		);
	}
	inline void TrustManagerFactory::init(java::security::KeyStore arg0) const
	{
		callMethod<void>(
			"init",
			"(Ljava/security/KeyStore;)V",
			arg0.object()
		);
	}
	inline void TrustManagerFactory::init(JObject arg0) const
	{
		callMethod<void>(
			"init",
			"(Ljavax/net/ssl/ManagerFactoryParameters;)V",
			arg0.object()
		);
	}
} // namespace javax::net::ssl

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::net::ssl;
#endif
