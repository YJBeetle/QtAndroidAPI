#include "../../JString.hpp"
#include "./KeyPair.hpp"
#include "./Provider.hpp"
#include "./SecureRandom.hpp"
#include "./KeyPairGenerator.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	KeyPairGenerator::KeyPairGenerator(QAndroidJniObject obj) : java::security::KeyPairGeneratorSpi(obj) {}
	
	// Constructors
	
	// Methods
	java::security::KeyPairGenerator KeyPairGenerator::getInstance(JString arg0)
	{
		return callStaticObjectMethod(
			"java.security.KeyPairGenerator",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/KeyPairGenerator;",
			arg0.object<jstring>()
		);
	}
	java::security::KeyPairGenerator KeyPairGenerator::getInstance(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"java.security.KeyPairGenerator",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/KeyPairGenerator;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	java::security::KeyPairGenerator KeyPairGenerator::getInstance(JString arg0, java::security::Provider arg1)
	{
		return callStaticObjectMethod(
			"java.security.KeyPairGenerator",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/KeyPairGenerator;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	java::security::KeyPair KeyPairGenerator::genKeyPair()
	{
		return callObjectMethod(
			"genKeyPair",
			"()Ljava/security/KeyPair;"
		);
	}
	java::security::KeyPair KeyPairGenerator::generateKeyPair()
	{
		return callObjectMethod(
			"generateKeyPair",
			"()Ljava/security/KeyPair;"
		);
	}
	JString KeyPairGenerator::getAlgorithm()
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	java::security::Provider KeyPairGenerator::getProvider()
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	void KeyPairGenerator::initialize(jint arg0)
	{
		callMethod<void>(
			"initialize",
			"(I)V",
			arg0
		);
	}
	void KeyPairGenerator::initialize(JObject arg0)
	{
		callMethod<void>(
			"initialize",
			"(Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0.object()
		);
	}
	void KeyPairGenerator::initialize(jint arg0, java::security::SecureRandom arg1)
	{
		callMethod<void>(
			"initialize",
			"(ILjava/security/SecureRandom;)V",
			arg0,
			arg1.object()
		);
	}
	void KeyPairGenerator::initialize(JObject arg0, java::security::SecureRandom arg1)
	{
		callMethod<void>(
			"initialize",
			"(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace java::security

