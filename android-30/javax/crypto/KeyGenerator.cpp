#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../java/security/Provider.hpp"
#include "../../java/security/SecureRandom.hpp"
#include "./KeyGeneratorSpi.hpp"
#include "./KeyGenerator.hpp"

namespace javax::crypto
{
	// Fields
	
	// QJniObject forward
	KeyGenerator::KeyGenerator(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	javax::crypto::KeyGenerator KeyGenerator::getInstance(JString arg0)
	{
		return callStaticObjectMethod(
			"javax.crypto.KeyGenerator",
			"getInstance",
			"(Ljava/lang/String;)Ljavax/crypto/KeyGenerator;",
			arg0.object<jstring>()
		);
	}
	javax::crypto::KeyGenerator KeyGenerator::getInstance(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"javax.crypto.KeyGenerator",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljavax/crypto/KeyGenerator;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	javax::crypto::KeyGenerator KeyGenerator::getInstance(JString arg0, java::security::Provider arg1)
	{
		return callStaticObjectMethod(
			"javax.crypto.KeyGenerator",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljavax/crypto/KeyGenerator;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	JObject KeyGenerator::generateKey() const
	{
		return callObjectMethod(
			"generateKey",
			"()Ljavax/crypto/SecretKey;"
		);
	}
	JString KeyGenerator::getAlgorithm() const
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	java::security::Provider KeyGenerator::getProvider() const
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	void KeyGenerator::init(jint arg0) const
	{
		callMethod<void>(
			"init",
			"(I)V",
			arg0
		);
	}
	void KeyGenerator::init(java::security::SecureRandom arg0) const
	{
		callMethod<void>(
			"init",
			"(Ljava/security/SecureRandom;)V",
			arg0.object()
		);
	}
	void KeyGenerator::init(JObject arg0) const
	{
		callMethod<void>(
			"init",
			"(Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0.object()
		);
	}
	void KeyGenerator::init(jint arg0, java::security::SecureRandom arg1) const
	{
		callMethod<void>(
			"init",
			"(ILjava/security/SecureRandom;)V",
			arg0,
			arg1.object()
		);
	}
	void KeyGenerator::init(JObject arg0, java::security::SecureRandom arg1) const
	{
		callMethod<void>(
			"init",
			"(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace javax::crypto

