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
	javax::crypto::KeyGenerator KeyGenerator::getInstance(jstring arg0)
	{
		return callStaticObjectMethod(
			"javax.crypto.KeyGenerator",
			"getInstance",
			"(Ljava/lang/String;)Ljavax/crypto/KeyGenerator;",
			arg0
		);
	}
	javax::crypto::KeyGenerator KeyGenerator::getInstance(jstring arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"javax.crypto.KeyGenerator",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljavax/crypto/KeyGenerator;",
			arg0,
			arg1
		);
	}
	javax::crypto::KeyGenerator KeyGenerator::getInstance(jstring arg0, java::security::Provider arg1)
	{
		return callStaticObjectMethod(
			"javax.crypto.KeyGenerator",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljavax/crypto/KeyGenerator;",
			arg0,
			arg1.object()
		);
	}
	JObject KeyGenerator::generateKey()
	{
		return callObjectMethod(
			"generateKey",
			"()Ljavax/crypto/SecretKey;"
		);
	}
	jstring KeyGenerator::getAlgorithm()
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	java::security::Provider KeyGenerator::getProvider()
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	void KeyGenerator::init(jint arg0)
	{
		callMethod<void>(
			"init",
			"(I)V",
			arg0
		);
	}
	void KeyGenerator::init(java::security::SecureRandom arg0)
	{
		callMethod<void>(
			"init",
			"(Ljava/security/SecureRandom;)V",
			arg0.object()
		);
	}
	void KeyGenerator::init(JObject arg0)
	{
		callMethod<void>(
			"init",
			"(Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0.object()
		);
	}
	void KeyGenerator::init(jint arg0, java::security::SecureRandom arg1)
	{
		callMethod<void>(
			"init",
			"(ILjava/security/SecureRandom;)V",
			arg0,
			arg1.object()
		);
	}
	void KeyGenerator::init(JObject arg0, java::security::SecureRandom arg1)
	{
		callMethod<void>(
			"init",
			"(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace javax::crypto

