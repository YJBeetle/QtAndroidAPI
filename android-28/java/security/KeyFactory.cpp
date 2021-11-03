#include "./KeyFactorySpi.hpp"
#include "./Provider.hpp"
#include "./KeyFactory.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	KeyFactory::KeyFactory(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::security::KeyFactory KeyFactory::getInstance(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.security.KeyFactory",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/KeyFactory;",
			arg0
		);
	}
	java::security::KeyFactory KeyFactory::getInstance(jstring arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"java.security.KeyFactory",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/KeyFactory;",
			arg0,
			arg1
		);
	}
	java::security::KeyFactory KeyFactory::getInstance(jstring arg0, java::security::Provider arg1)
	{
		return callStaticObjectMethod(
			"java.security.KeyFactory",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/KeyFactory;",
			arg0,
			arg1.object()
		);
	}
	JObject KeyFactory::generatePrivate(JObject arg0)
	{
		return callObjectMethod(
			"generatePrivate",
			"(Ljava/security/spec/KeySpec;)Ljava/security/PrivateKey;",
			arg0.object()
		);
	}
	JObject KeyFactory::generatePublic(JObject arg0)
	{
		return callObjectMethod(
			"generatePublic",
			"(Ljava/security/spec/KeySpec;)Ljava/security/PublicKey;",
			arg0.object()
		);
	}
	jstring KeyFactory::getAlgorithm()
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	JObject KeyFactory::getKeySpec(JObject arg0, jclass arg1)
	{
		return callObjectMethod(
			"getKeySpec",
			"(Ljava/security/Key;Ljava/lang/Class;)Ljava/security/spec/KeySpec;",
			arg0.object(),
			arg1
		);
	}
	java::security::Provider KeyFactory::getProvider()
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	JObject KeyFactory::translateKey(JObject arg0)
	{
		return callObjectMethod(
			"translateKey",
			"(Ljava/security/Key;)Ljava/security/Key;",
			arg0.object()
		);
	}
} // namespace java::security

