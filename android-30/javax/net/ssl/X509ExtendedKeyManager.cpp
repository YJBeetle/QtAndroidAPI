#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./SSLEngine.hpp"
#include "./X509ExtendedKeyManager.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// QJniObject forward
	X509ExtendedKeyManager::X509ExtendedKeyManager(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString X509ExtendedKeyManager::chooseEngineClientAlias(JArray arg0, JArray arg1, javax::net::ssl::SSLEngine arg2)
	{
		return callObjectMethod(
			"chooseEngineClientAlias",
			"([Ljava/lang/String;[Ljava/security/Principal;Ljavax/net/ssl/SSLEngine;)Ljava/lang/String;",
			arg0.object<jarray>(),
			arg1.object<jarray>(),
			arg2.object()
		);
	}
	JString X509ExtendedKeyManager::chooseEngineServerAlias(JString arg0, JArray arg1, javax::net::ssl::SSLEngine arg2)
	{
		return callObjectMethod(
			"chooseEngineServerAlias",
			"(Ljava/lang/String;[Ljava/security/Principal;Ljavax/net/ssl/SSLEngine;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jarray>(),
			arg2.object()
		);
	}
} // namespace javax::net::ssl

