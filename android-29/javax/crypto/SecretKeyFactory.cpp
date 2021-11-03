#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../java/security/Provider.hpp"
#include "./SecretKeyFactorySpi.hpp"
#include "./SecretKeyFactory.hpp"

namespace javax::crypto
{
	// Fields
	
	// QJniObject forward
	SecretKeyFactory::SecretKeyFactory(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	javax::crypto::SecretKeyFactory SecretKeyFactory::getInstance(JString arg0)
	{
		return callStaticObjectMethod(
			"javax.crypto.SecretKeyFactory",
			"getInstance",
			"(Ljava/lang/String;)Ljavax/crypto/SecretKeyFactory;",
			arg0.object<jstring>()
		);
	}
	javax::crypto::SecretKeyFactory SecretKeyFactory::getInstance(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"javax.crypto.SecretKeyFactory",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljavax/crypto/SecretKeyFactory;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	javax::crypto::SecretKeyFactory SecretKeyFactory::getInstance(JString arg0, java::security::Provider arg1)
	{
		return callStaticObjectMethod(
			"javax.crypto.SecretKeyFactory",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljavax/crypto/SecretKeyFactory;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	JObject SecretKeyFactory::generateSecret(JObject arg0)
	{
		return callObjectMethod(
			"generateSecret",
			"(Ljava/security/spec/KeySpec;)Ljavax/crypto/SecretKey;",
			arg0.object()
		);
	}
	JString SecretKeyFactory::getAlgorithm()
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	JObject SecretKeyFactory::getKeySpec(JObject arg0, JClass arg1)
	{
		return callObjectMethod(
			"getKeySpec",
			"(Ljavax/crypto/SecretKey;Ljava/lang/Class;)Ljava/security/spec/KeySpec;",
			arg0.object(),
			arg1.object<jclass>()
		);
	}
	java::security::Provider SecretKeyFactory::getProvider()
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	JObject SecretKeyFactory::translateKey(JObject arg0)
	{
		return callObjectMethod(
			"translateKey",
			"(Ljavax/crypto/SecretKey;)Ljavax/crypto/SecretKey;",
			arg0.object()
		);
	}
} // namespace javax::crypto

