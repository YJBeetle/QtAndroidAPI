#include "./SSLEngine.hpp"
#include "./X509ExtendedKeyManager.hpp"

namespace javax::net::ssl
{
	// Fields
	
	X509ExtendedKeyManager::X509ExtendedKeyManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jstring X509ExtendedKeyManager::chooseEngineClientAlias(jarray arg0, jarray arg1, javax::net::ssl::SSLEngine arg2)
	{
		return __thiz.callObjectMethod(
			"chooseEngineClientAlias",
			"([Ljava/lang/String;[Ljava/security/Principal;Ljavax/net/ssl/SSLEngine;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		).object<jstring>();
	}
	jstring X509ExtendedKeyManager::chooseEngineServerAlias(jstring arg0, jarray arg1, javax::net::ssl::SSLEngine arg2)
	{
		return __thiz.callObjectMethod(
			"chooseEngineServerAlias",
			"(Ljava/lang/String;[Ljava/security/Principal;Ljavax/net/ssl/SSLEngine;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		).object<jstring>();
	}
} // namespace javax::net::ssl

